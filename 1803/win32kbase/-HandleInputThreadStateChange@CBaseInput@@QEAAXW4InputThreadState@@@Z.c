/*
 * XREFs of ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C0122A38
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0130CD4 (UserActivateMITInputProcessing.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0130F14 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0039F28 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0120700 (-CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     GetKnownRIMDeviceKind @ 0x1C012E388 (GetKnownRIMDeviceKind.c)
 *     RimInputTypeToDeviceInputType @ 0x1C012E918 (RimInputTypeToDeviceInputType.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CBaseInput::HandleInputThreadStateChange(__int64 a1, int a2)
{
  CInputThread *v2; // rdi
  bool v5; // bl
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  int v11; // eax
  struct DEVICEINFO *v12; // r9
  int i; // r11d
  int KnownRIMDeviceKind; // eax
  __int64 v15; // r10
  void (__fastcall ***v16)(_QWORD); // rax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  _QWORD v19[4]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v20[32]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  v5 = CInputThread::_CalledOnInputThread(v2);
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( !v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  if ( a2 )
  {
    if ( a2 != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
    RIMLockExclusive(a1 + 1064);
    while ( 1 )
    {
      v17 = *(_QWORD **)(a1 + 1056);
      if ( !v17 )
        break;
      *(_QWORD *)(a1 + 1056) = *v17;
      Win32FreePool((__int64)(v17 - 2));
    }
    v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    *(_QWORD *)(a1 + 1072) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 1064, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v8 = 0LL;
    v9 = 0LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
    v10 = *(_QWORD *)(a1 + 1048);
    if ( v10 )
    {
      v8 = Win32AllocPool(12 * v10, 0x6D504E50u);
      if ( v8 )
      {
        v11 = RimInputTypeToDeviceInputType(*(unsigned int *)(a1 + 136));
        v12 = CBaseInput::_spDevList;
        for ( i = v11; v12; v12 = (struct DEVICEINFO *)*((_QWORD *)v12 + 7) )
        {
          if ( *((unsigned __int8 *)v12 + 48) == i )
          {
            if ( *((_QWORD *)v12 + 29) )
            {
              KnownRIMDeviceKind = GetKnownRIMDeviceKind(v12);
              if ( KnownRIMDeviceKind )
              {
                if ( v9 < *(_QWORD *)(a1 + 1048) )
                {
                  LODWORD(v19[0]) = KnownRIMDeviceKind;
                  ++v9;
                  HIDWORD(v19[0]) = *(_QWORD *)v12;
                  *(_QWORD *)v15 = v19[0];
                  *(_DWORD *)(v15 + 8) = 2;
                }
              }
            }
          }
        }
      }
    }
    ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
    KeLeaveCriticalRegion();
    if ( v9 )
    {
      memset(v20, 0, 0xF8uLL);
      LODWORD(v20[0]) = RimInputTypeToDeviceInputType(*(unsigned int *)(a1 + 136));
      HIDWORD(v20[0]) = 5;
      LODWORD(v20[1]) = 12 * v9;
      v20[2] = v8;
      PushW32ThreadLock(v8, v19, Win32FreePool);
      InputExtensibilityCallout::CallUserModeWithLock(
        gpInputExtensibilityCallout,
        (struct _CLIENT_DEVICE_NOTIFICATION *)v20);
      PopW32ThreadLock(v19);
    }
    if ( v8 )
      Win32FreePool(v8);
    v16 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    if ( v16 )
      (**v16)(v16);
  }
}
