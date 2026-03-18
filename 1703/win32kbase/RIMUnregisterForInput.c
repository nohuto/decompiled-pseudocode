/*
 * XREFs of RIMUnregisterForInput @ 0x1C0093730
 * Callers:
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C004FE90 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x1C0051868 (RIMUnregisterCurrentProcessForInput.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C008FB70 (RIMRegisterForInputWithCallbacks.c)
 *     NtRIMUnregisterForInput @ 0x1C00FFE90 (NtRIMUnregisterForInput.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_q @ 0x1C005564C (WPP_RECORDER_SF_q.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0093B28 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C00940C4 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     RIMFreeSpecificDev @ 0x1C0094300 (RIMFreeSpecificDev.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C009440C (rimResetPnpRemovePendingStateBits.c)
 *     RIMCloseDev @ 0x1C0094C40 (RIMCloseDev.c)
 *     rimFreeAllUserMem @ 0x1C0095354 (rimFreeAllUserMem.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00954F4 (rimFreeAutoRepeatCompleteFrame.c)
 */

__int64 __fastcall RIMUnregisterForInput(char *a1)
{
  int v2; // r12d
  char *v3; // rbx
  __int64 v4; // rsi
  unsigned int v5; // r14d
  __int64 *v6; // rsi
  _DWORD *v7; // r15
  __int64 **v8; // rsi
  __int64 *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rcx
  void *v12; // rcx
  CTouchProcessor *v14; // rcx
  __int64 v15; // r15
  unsigned int *v16; // r14
  int v17; // eax
  void *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+28h] [rbp-40h]
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    19,
    102,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  v2 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v2 >= 0 )
  {
    v3 = (char *)Object;
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x67u,
      (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
      Object);
    RIMLockExclusive((__int64)(v3 + 96));
    RIMLockExclusive((__int64)(v3 + 696));
    v3[72] = 1;
    v4 = *((_QWORD *)v3 + 69);
    *((_QWORD *)v3 + 69) = 0LL;
    while ( v4 )
    {
      v15 = v4;
      rimFreeAutoRepeatCompleteFrame(v4);
      v16 = (unsigned int *)(v4 + 184);
      v17 = *(_DWORD *)(v4 + 184);
      if ( (v17 & 0x10) != 0 )
      {
        *v16 = v17 & 0xFFFFFFEF;
        KeSetEvent(*(PRKEVENT *)(v4 + 360), 1, 0);
      }
      if ( (*v16 & 0x20) == 0 )
      {
        v18 = *(void **)(v4 + 248);
        if ( v18 )
        {
          IoUnregisterPlugPlayNotification(v18);
          *(_QWORD *)(v4 + 248) = 0LL;
          ObfDereferenceObject(*(PVOID *)(v4 + 32));
        }
      }
      RIMCloseDev(v4);
      v19 = (_QWORD *)(v4 + 40);
      v4 = *(_QWORD *)(v4 + 40);
      *v19 = 0LL;
      if ( (*v16 & 0x1000) == 0 )
      {
        rimResetPnpRemovePendingStateBits(v15);
        RIMFreeSpecificDev(v3, v15);
      }
    }
    v5 = 0;
    v6 = (__int64 *)(v3 + 448);
    v7 = v3 + 432;
    do
    {
      v2 = RIMUnRegisterForInputDeviceTypeClassNotifications(v3, v5);
      if ( !*v7 && *v6 )
      {
        Win32FreePool(*v6);
        *v6 = 0LL;
      }
      ++v5;
      ++v7;
      ++v6;
    }
    while ( v5 <= 2 );
    v8 = (__int64 **)(v3 + 680);
    do
    {
      v9 = *v8;
      if ( *v8 == (__int64 *)v8 )
        break;
      v20 = *v9;
      if ( (__int64 **)v9[1] != v8 || *(__int64 **)(v20 + 8) != v9 )
        __fastfail(3u);
      *v8 = (__int64 *)v20;
      *(_QWORD *)(v20 + 8) = v8;
      Win32FreePool((__int64)(v9 - 1));
    }
    while ( v9 != (__int64 *)v8 );
    rimFreeAllUserMem(v3);
    if ( v3[712] && *((_QWORD *)v3 + 97) )
    {
      if ( v3[784] )
      {
        v14 = (CTouchProcessor *)*((_QWORD *)v3 + 101);
        if ( v14 >= W32UserProbeAddress )
          v14 = W32UserProbeAddress;
        *(_OWORD *)v14 = 0xC0000128uLL;
      }
      else
      {
        *(_OWORD *)*((_QWORD *)v3 + 101) = 0xC0000128uLL;
      }
      ZwSetEvent(*((HANDLE *)v3 + 97), 0LL);
      ZwClose(*((HANDLE *)v3 + 97));
    }
    v10 = *((_QWORD *)v3 + 68);
    if ( v10 )
    {
      Win32FreePool(v10);
      *((_QWORD *)v3 + 68) = 0LL;
    }
    v11 = *((_QWORD *)v3 + 11);
    if ( v11 )
    {
      Win32FreePool(v11);
      *((_QWORD *)v3 + 11) = 0LL;
      *((_DWORD *)v3 + 20) = 0;
    }
    ZwCancelTimer(*((HANDLE *)v3 + 59), 0LL);
    ZwClose(*((HANDLE *)v3 + 59));
    *((_QWORD *)v3 + 59) = -1LL;
    v12 = (void *)*((_QWORD *)v3 + 60);
    if ( v12 != (void *)-1LL )
    {
      ZwCancelTimer(v12, 0LL);
      ZwClose(*((HANDLE *)v3 + 60));
      *((_QWORD *)v3 + 60) = -1LL;
    }
    ZwClose(*((HANDLE *)v3 + 65));
    *((_QWORD *)v3 + 65) = -1LL;
    v3[73] = 1;
    RIMSignalAllPriorPnpWorkToCompleteWaiters(v3);
    *((_QWORD *)v3 + 88) = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 696, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)v3 + 13) = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v3);
  }
  LODWORD(v21) = v2;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x68u,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    v21);
  return (unsigned int)v2;
}
