/*
 * XREFs of ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@1@@Z @ 0x1C001A300
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0090124 (UserActivateMITInputProcessing.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0091E24 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     ?GetKnownRIMDeviceKind@CBaseInput@@AEBA?AW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@@Z @ 0x1C0019900 (-GetKnownRIMDeviceKind@CBaseInput@@AEBA-AW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@@Z.c)
 *     ?RimInputTypeToDeviceInputType@CBaseInput@@AEBAIXZ @ 0x1C0019964 (-RimInputTypeToDeviceInputType@CBaseInput@@AEBAIXZ.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0096010 (-CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

void __fastcall CBaseInput::HandleInputThreadStateChange(CBaseInput *a1, int a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // eax
  struct DEVICEINFO *v7; // r9
  int i; // r11d
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  void (__fastcall ***v12)(_QWORD); // rax
  int KnownRIMDeviceKind; // eax
  __int64 v14; // r10
  __int64 v15; // rax
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rcx
  _QWORD v20[4]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v21[32]; // [rsp+48h] [rbp-C0h] BYREF

  if ( a2 )
  {
    v16 = (_QWORD *)((char *)a1 + 936);
    RIMLockExclusive((__int64)a1 + 936);
    while ( 1 )
    {
      v19 = (_QWORD *)*((_QWORD *)a1 + 116);
      if ( !v19 )
        break;
      *((_QWORD *)a1 + 116) = *v19;
      Win32FreePool(v19 - 2, v17, v18);
    }
    v15 = (*(__int64 (__fastcall **)(CBaseInput *))(*(_QWORD *)a1 + 8LL))(a1);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v16[1] = 0LL;
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v3 = 0LL;
    v4 = 0LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
    v5 = *((_QWORD *)a1 + 115);
    if ( v5 )
    {
      v3 = Win32AllocPool(12 * v5, 1833979472LL);
      if ( v3 )
      {
        v6 = CBaseInput::RimInputTypeToDeviceInputType(a1);
        v7 = CBaseInput::_spDevList;
        for ( i = v6; v7; v7 = (struct DEVICEINFO *)*((_QWORD *)v7 + 7) )
        {
          v9 = *((unsigned __int8 *)v7 + 48);
          if ( (_DWORD)v9 == i )
          {
            if ( *((_QWORD *)v7 + 29) )
            {
              KnownRIMDeviceKind = CBaseInput::GetKnownRIMDeviceKind(v9, (__int64)v7);
              if ( KnownRIMDeviceKind )
              {
                if ( v4 < *((_QWORD *)a1 + 115) )
                {
                  LODWORD(v20[0]) = KnownRIMDeviceKind;
                  ++v4;
                  HIDWORD(v20[0]) = *(_QWORD *)v7;
                  *(_QWORD *)v14 = v20[0];
                  *(_DWORD *)(v14 + 8) = 2;
                }
              }
            }
          }
        }
      }
    }
    ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
    KeLeaveCriticalRegion();
    if ( v4 )
    {
      memset(v21, 0, sizeof(v21));
      LODWORD(v21[0]) = CBaseInput::RimInputTypeToDeviceInputType(a1);
      HIDWORD(v21[0]) = 6;
      LODWORD(v21[1]) = 12 * v4;
      v21[2] = v3;
      PushW32ThreadLock(v3, v20, Win32FreePool);
      InputExtensibilityCallout::CallUserModeWithLock(
        (InputExtensibilityCallout *)WPP_MAIN_CB.Queue.Wcb.DeviceContext,
        (struct _CLIENT_DEVICE_NOTIFICATION *)v21);
      PopW32ThreadLock(v20);
    }
    if ( v3 )
      Win32FreePool(v3, v10, v11);
    v12 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(CBaseInput *))(*(_QWORD *)a1 + 8LL))(a1);
    if ( v12 )
      (**v12)(v12);
  }
}
