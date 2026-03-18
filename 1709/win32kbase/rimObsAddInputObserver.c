/*
 * XREFs of rimObsAddInputObserver @ 0x1C0113DE8
 * Callers:
 *     NtRIMAddInputObserver @ 0x1C00FFC10 (NtRIMAddInputObserver.c)
 *     RIMAddInputObserver @ 0x1C0100890 (RIMAddInputObserver.c)
 * Callees:
 *     rimConvertUserToKernelEventHandle @ 0x1C000A104 (rimConvertUserToKernelEventHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1C0107CA4 (RawInputManagerInputObserverObjectCreate.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1C0107E18 (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsCheckForRegistrationConflicts @ 0x1C0114250 (rimObsCheckForRegistrationConflicts.c)
 *     rimObsStartStopDeviceRead @ 0x1C0114A4C (rimObsStartStopDeviceRead.c)
 */

__int64 __fastcall rimObsAddInputObserver(
        __int64 a1,
        unsigned int a2,
        void *a3,
        KPROCESSOR_MODE a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        HANDLE *a9)
{
  unsigned int v13; // esi
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  PVOID v21; // rdi
  __int64 v22; // rdx
  _QWORD *v23; // rdx
  HANDLE Handle; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+38h] [rbp-40h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0xCu,
    (__int64)&WPP_fd349965ce453fe84f61905a3071c021_Traceguids);
  if ( a2 < 0x30 )
    return 3221225507LL;
  if ( !a1 || a5 > 2 )
    return 3221225485LL;
  if ( a5 == 2 )
  {
    if ( !a7 )
      return 3221225485LL;
    v13 = a6;
    if ( !a6 || a6 == 7 || a6 == 1 && (a7 == 6 || a7 == 2) )
      return 3221225485LL;
  }
  else
  {
    v13 = a6;
  }
  RIMLockExclusive((__int64)&gInputObserverLock);
  v14 = a8 >> 1;
  LOBYTE(v14) = (a8 & 2) != 0;
  v15 = rimObsCheckForRegistrationConflicts(v14, a5, v13, a7);
  if ( v15 >= 0 )
  {
    Handle = (HANDLE)-1LL;
    KeEnterCriticalRegion();
    LOBYTE(v16) = a4;
    LOBYTE(v17) = a4;
    v15 = RawInputManagerInputObserverObjectCreate(v17, v18, v19, v16, &Handle);
    KeLeaveCriticalRegion();
    if ( v15 >= 0 )
    {
      v15 = RawInputManagerInputObserverObjectResolveHandle((char *)Handle, v20, a4, &Object);
      if ( v15 >= 0 )
      {
        v21 = Object;
        *((_BYTE *)Object + 64) = a4;
        *((_QWORD *)v21 + 11) = a1;
        *((_DWORD *)v21 + 24) = a2;
        *((_DWORD *)v21 + 25) = a5;
        *((_DWORD *)v21 + 26) = v13;
        *((_DWORD *)v21 + 27) = a7;
        *((_DWORD *)v21 + 28) = a8;
        v15 = rimConvertUserToKernelEventHandle(a3, (void **)v21 + 9);
        if ( v15 >= 0 )
        {
          LOBYTE(v22) = 1;
          v15 = rimObsStartStopDeviceRead(v21, v22);
        }
        ObfDereferenceObject(v21);
      }
      if ( v15 >= 0 )
      {
        if ( a4 )
        {
          v23 = a9;
          if ( (unsigned __int64)a9 >= MmUserProbeAddress )
            v23 = (_QWORD *)MmUserProbeAddress;
          *v23 = Handle;
        }
        else
        {
          *a9 = Handle;
        }
      }
    }
    if ( v15 < 0 && Handle != (HANDLE)-1LL )
      ObCloseHandle(Handle, a4);
  }
  qword_1C0193AD8 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputObserverLock, 0LL);
  KeLeaveCriticalRegion();
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0xDu,
    (__int64)&WPP_fd349965ce453fe84f61905a3071c021_Traceguids,
    v15);
  return (unsigned int)v15;
}
