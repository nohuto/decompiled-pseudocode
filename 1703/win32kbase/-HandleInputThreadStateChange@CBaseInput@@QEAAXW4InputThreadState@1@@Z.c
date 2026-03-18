/*
 * XREFs of ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@1@@Z @ 0x1C004F8CC
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C008B110 (UserActivateMITInputProcessing.c)
 *     UserDeactivateMITInputProcessing @ 0x1C008BCC0 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?RimInputTypeToDeviceInputType@CBaseInput@@AEBAIXZ @ 0x1C004EFC0 (-RimInputTypeToDeviceInputType@CBaseInput@@AEBAIXZ.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     ?CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0090980 (-CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

void __fastcall CBaseInput::HandleInputThreadStateChange(CBaseInput *a1, int a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  int v6; // eax
  struct DEVICEINFO *i; // rdx
  void (__fastcall ***v8)(_QWORD); // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // [rsp+20h] [rbp-138h]
  _BYTE v13[24]; // [rsp+28h] [rbp-130h] BYREF
  _QWORD v14[32]; // [rsp+40h] [rbp-118h] BYREF

  if ( a2 )
  {
    v9 = (_QWORD *)((char *)a1 + 616);
    RIMLockExclusive((char *)a1 + 616);
    while ( 1 )
    {
      v10 = (_QWORD *)*((_QWORD *)a1 + 76);
      if ( !v10 )
        break;
      *((_QWORD *)a1 + 76) = *v10;
      Win32FreePool((__int64)(v10 - 1));
    }
    v11 = (*(__int64 (__fastcall **)(CBaseInput *))(*(_QWORD *)a1 + 8LL))(a1);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v9[1] = 0LL;
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v3 = 0LL;
    v4 = 0LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
    v5 = *((_QWORD *)a1 + 75);
    if ( v5 )
    {
      v3 = Win32AllocPool(8 * v5, 0x6D504E50u);
      if ( v3 )
      {
        v6 = CBaseInput::RimInputTypeToDeviceInputType(a1);
        for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
        {
          if ( *((unsigned __int8 *)i + 48) == v6 && *((_QWORD *)i + 29) && v4 < *((_QWORD *)a1 + 75) )
          {
            LODWORD(v12) = *(_QWORD *)i;
            HIDWORD(v12) = 2;
            *(_QWORD *)(v3 + 8 * v4++) = v12;
          }
        }
      }
    }
    ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
    KeLeaveCriticalRegion();
    if ( v4 )
    {
      memset(v14, 0, sizeof(v14));
      LODWORD(v14[0]) = CBaseInput::RimInputTypeToDeviceInputType(a1);
      HIDWORD(v14[0]) = 6;
      LODWORD(v14[1]) = 8 * v4;
      v14[2] = v3;
      PushW32ThreadLock(v3, v13, Win32FreePool);
      InputExtensibilityCallout::CallUserModeWithLock(
        (InputExtensibilityCallout *)WPP_MAIN_CB.Queue.Wcb.DeviceContext,
        (struct _CLIENT_DEVICE_NOTIFICATION *)v14);
      PopW32ThreadLock(v13);
    }
    if ( v3 )
      Win32FreePool(v3);
    v8 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(CBaseInput *))(*(_QWORD *)a1 + 8LL))(a1);
    if ( v8 )
      (**v8)(v8);
  }
}
