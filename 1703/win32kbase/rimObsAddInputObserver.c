/*
 * XREFs of rimObsAddInputObserver @ 0x1C0115320
 * Callers:
 *     NtRIMAddInputObserver @ 0x1C00FF7D0 (NtRIMAddInputObserver.c)
 *     RIMAddInputObserver @ 0x1C0100490 (RIMAddInputObserver.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C0093E74 (rimConvertUserToKernelEventHandle.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1C0108CE4 (RawInputManagerInputObserverObjectCreate.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1C0108E58 (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsCheckForRegistrationConflicts @ 0x1C0115780 (rimObsCheckForRegistrationConflicts.c)
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
        CTouchProcessor *a9)
{
  unsigned int v10; // edi
  unsigned int v13; // esi
  __int64 v14; // rcx
  int v15; // edi
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  PVOID v21; // rbx
  CTouchProcessor *v22; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v26; // [rsp+88h] [rbp+10h]

  v26 = a2;
  v10 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    12,
    (__int64)&WPP_c3e998bf1f303cec21152f5fc17d2fdb_Traceguids);
  if ( v10 < 0x30 )
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
  v14 = a8 >> 1;
  LOBYTE(v14) = (a8 & 2) != 0;
  v15 = rimObsCheckForRegistrationConflicts(v14, a5, v13, a7);
  if ( v15 >= 0 )
  {
    RIMLockExclusive((__int64)&gInputObserverLock);
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
        *((_DWORD *)v21 + 24) = v26;
        *((_DWORD *)v21 + 25) = a5;
        *((_DWORD *)v21 + 26) = v13;
        *((_DWORD *)v21 + 27) = a7;
        *((_DWORD *)v21 + 28) = a8;
        v15 = rimConvertUserToKernelEventHandle(a3, (void **)v21 + 9);
        ObfDereferenceObject(v21);
      }
      if ( v15 >= 0 )
      {
        if ( a4 )
        {
          v22 = a9;
          if ( a9 >= W32UserProbeAddress )
            v22 = W32UserProbeAddress;
          *(_QWORD *)v22 = Handle;
        }
        else
        {
          *(_QWORD *)a9 = Handle;
        }
      }
    }
    if ( v15 < 0 && Handle != (HANDLE)-1LL )
      ObCloseHandle(Handle, a4);
    qword_1C018EC78 = 0LL;
    ExReleasePushLockExclusiveEx(&gInputObserverLock, 0LL);
    KeLeaveCriticalRegion();
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0xDu,
    (__int64)&WPP_c3e998bf1f303cec21152f5fc17d2fdb_Traceguids,
    v15);
  return (unsigned int)v15;
}
