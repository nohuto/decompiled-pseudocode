/*
 * XREFs of RIMUnregisterForInput @ 0x1C00099C0
 * Callers:
 *     RIMUnregisterCurrentProcessForInput @ 0x1C0017E90 (RIMUnregisterCurrentProcessForInput.c)
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C001A8F0 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0098970 (RIMRegisterForInputWithCallbacks.c)
 *     NtRIMUnregisterForInput @ 0x1C0100310 (NtRIMUnregisterForInput.c)
 * Callees:
 *     rimFreeAllUserMem @ 0x1C000930C (rimFreeAllUserMem.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0009DB8 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C000B52C (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     RIMCloseDev @ 0x1C000C0AC (RIMCloseDev.c)
 *     RIMFreeSpecificDev @ 0x1C000C69C (RIMFreeSpecificDev.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C000C718 (rimResetPnpRemovePendingStateBits.c)
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C009C094 (rimFreeAutoRepeatCompleteFrame.c)
 */

__int64 __fastcall RIMUnregisterForInput(__int64 a1)
{
  __int64 v2; // r8
  int v3; // edx
  int v4; // r12d
  char *v5; // rbx
  __int64 v6; // rsi
  unsigned int v7; // r14d
  _QWORD *v8; // rsi
  _DWORD *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 **v12; // rsi
  __int64 *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  void *v18; // rcx
  _OWORD *v20; // rdx
  __int64 v21; // r15
  unsigned int *v22; // r14
  int v23; // eax
  void *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rax
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    19,
    102,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  LOBYTE(v2) = 1;
  v4 = RawInputManagerObjectResolveHandle(a1, 3LL, v2, &Object);
  if ( v4 >= 0 )
  {
    v5 = (char *)Object;
    LOBYTE(v3) = 3;
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      19,
      103,
      (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
      (char)Object);
    RIMLockExclusive(v5 + 96);
    RIMLockExclusive(v5 + 696);
    v5[72] = 1;
    v6 = *((_QWORD *)v5 + 69);
    *((_QWORD *)v5 + 69) = 0LL;
    while ( v6 )
    {
      v21 = v6;
      rimFreeAutoRepeatCompleteFrame(v6);
      v22 = (unsigned int *)(v6 + 184);
      v23 = *(_DWORD *)(v6 + 184);
      if ( (v23 & 0x10) != 0 )
      {
        *v22 = v23 & 0xFFFFFFEF;
        KeSetEvent(*(PRKEVENT *)(v6 + 360), 1, 0);
      }
      if ( (*v22 & 0x20) == 0 )
      {
        v24 = *(void **)(v6 + 248);
        if ( v24 )
        {
          IoUnregisterPlugPlayNotification(v24);
          *(_QWORD *)(v6 + 248) = 0LL;
          ObfDereferenceObject(*(PVOID *)(v6 + 32));
        }
      }
      RIMCloseDev(v6);
      v25 = (_QWORD *)(v6 + 40);
      v6 = *(_QWORD *)(v6 + 40);
      *v25 = 0LL;
      if ( (*v22 & 0x1000) == 0 )
      {
        rimResetPnpRemovePendingStateBits(v21);
        RIMFreeSpecificDev(v5, v21);
      }
    }
    v7 = 0;
    v8 = v5 + 448;
    v9 = v5 + 432;
    do
    {
      v4 = RIMUnRegisterForInputDeviceTypeClassNotifications(v5, v7);
      if ( !*v9 && *v8 )
      {
        Win32FreePool(*v8, v10, v11);
        *v8 = 0LL;
      }
      ++v7;
      ++v9;
      ++v8;
    }
    while ( v7 <= 2 );
    v12 = (__int64 **)(v5 + 680);
    do
    {
      v13 = *v12;
      if ( *v12 == (__int64 *)v12 )
        break;
      v26 = *v13;
      if ( (__int64 **)v13[1] != v12 || *(__int64 **)(v26 + 8) != v13 )
        __fastfail(3u);
      *v12 = (__int64 *)v26;
      *(_QWORD *)(v26 + 8) = v12;
      Win32FreePool(v13 - 1, v10, v11);
    }
    while ( v13 != (__int64 *)v12 );
    rimFreeAllUserMem((__int64)v5);
    if ( v5[712] && *((_QWORD *)v5 + 97) )
    {
      if ( v5[784] )
      {
        v20 = (_OWORD *)*((_QWORD *)v5 + 101);
        if ( (unsigned __int64)v20 >= MmUserProbeAddress )
          v20 = (_OWORD *)MmUserProbeAddress;
        *v20 = 0xC0000128uLL;
      }
      else
      {
        *(_OWORD *)*((_QWORD *)v5 + 101) = 0xC0000128uLL;
      }
      ZwSetEvent(*((HANDLE *)v5 + 97), 0LL);
      ZwClose(*((HANDLE *)v5 + 97));
    }
    v16 = *((_QWORD *)v5 + 68);
    if ( v16 )
    {
      Win32FreePool(v16, v14, v15);
      *((_QWORD *)v5 + 68) = 0LL;
    }
    v17 = *((_QWORD *)v5 + 11);
    if ( v17 )
    {
      Win32FreePool(v17, v14, v15);
      *((_QWORD *)v5 + 11) = 0LL;
      *((_DWORD *)v5 + 20) = 0;
    }
    ZwCancelTimer(*((HANDLE *)v5 + 59), 0LL);
    ZwClose(*((HANDLE *)v5 + 59));
    *((_QWORD *)v5 + 59) = -1LL;
    v18 = (void *)*((_QWORD *)v5 + 60);
    if ( v18 != (void *)-1LL )
    {
      ZwCancelTimer(v18, 0LL);
      ZwClose(*((HANDLE *)v5 + 60));
      *((_QWORD *)v5 + 60) = -1LL;
    }
    ZwClose(*((HANDLE *)v5 + 65));
    *((_QWORD *)v5 + 65) = -1LL;
    v5[73] = 1;
    RIMSignalAllPriorPnpWorkToCompleteWaiters(v5);
    *((_QWORD *)v5 + 88) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 696, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)v5 + 13) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  LOBYTE(v3) = 3;
  WPP_RECORDER_SF_d(
    WPP_GLOBAL_Control->DeviceExtension,
    v3,
    19,
    104,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    v4);
  return (unsigned int)v4;
}
