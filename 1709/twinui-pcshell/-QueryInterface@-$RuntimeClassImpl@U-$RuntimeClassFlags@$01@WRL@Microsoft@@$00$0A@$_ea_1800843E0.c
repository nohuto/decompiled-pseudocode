/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800843E0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180084340 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180084340.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180084370 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180084370.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800843A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800843A0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800843D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800843D0.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800025E8 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationView@@UIApplicationViewBase@@UIApplicationViewWithEnterpriseId@@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081F2C (-CanCastTo@-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationView@@UIApplication.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  void **v5; // r8
  __int64 v6; // r9
  int v7; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( (int)Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationView,IApplicationViewBase,IApplicationViewWithEnterpriseId>::CanCastTo(
                a1,
                a2,
                a3) < 0 )
    {
      if ( *(_DWORD *)v4 == -375753807
        && *(_DWORD *)(v4 + 4) == *(_DWORD *)&GUID_e99a73b1_cde0_477b_91b8_e995fa037387.Data2
        && *(_DWORD *)(v4 + 8) == *(_DWORD *)GUID_e99a73b1_cde0_477b_91b8_e995fa037387.Data4
        && *(_DWORD *)(v4 + 12) == *(_DWORD *)&GUID_e99a73b1_cde0_477b_91b8_e995fa037387.Data4[4] )
      {
        *v5 = (void *)(v6 + 128);
        v7 = 0;
      }
      else
      {
        v7 = -2147467262;
        if ( (int)Microsoft::WRL::FtmBase::CanCastTo(
                    (Microsoft::WRL::FtmBase *)(v6 + 136),
                    (const struct _GUID *)v4,
                    v5) >= 0 )
          v7 = 0;
      }
      if ( v7 < 0 )
        return (unsigned int)v7;
    }
    else
    {
      v7 = 0;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*v5 + 8LL))(*v5);
    return (unsigned int)v7;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64, _DWORD *, __int64 *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a1);
  return v3;
}
