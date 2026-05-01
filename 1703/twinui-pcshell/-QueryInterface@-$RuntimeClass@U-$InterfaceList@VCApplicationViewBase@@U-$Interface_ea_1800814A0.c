/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCApplicationViewBase@@U?$InterfaceList@UIWinRTApplicationView@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800814A0
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCApplicationViewBase@@U?$InterfaceList@UIWinRTApplicationView@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081410 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCApplicationViewBase@@U-$InterfaceList@UIWinRTA.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCApplicationViewBase@@U?$InterfaceList@UIWinRTApplicationView@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081430 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCApplicationViewBase@@U-$Interface_ea_180081430.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCApplicationViewBase@@U?$InterfaceList@UIWinRTApplicationView@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081460 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCApplicationViewBase@@U-$Interface_ea_180081460.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCApplicationViewBase@@U?$InterfaceList@UIWinRTApplicationView@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081490 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCApplicationViewBase@@U-$Interface_ea_180081490.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180002438 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationView@@UIApplicationViewBase@@UIApplicationViewWithEnterpriseId@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007F004 (-CanCastTo@-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationView@@UIApplication.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CApplicationViewBase,Microsoft::WRL::Details::InterfaceList<IWinRTApplicationView,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int CanCastTo; // edi
  void **v6; // r8
  __int64 v7; // r9

  v3 = 0;
  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    CanCastTo = Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationView,IApplicationViewBase,IApplicationViewWithEnterpriseId,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                  a1,
                  a2,
                  a3);
    if ( CanCastTo < 0 )
    {
      if ( *(_DWORD *)v4 == -375753807
        && *(_DWORD *)(v4 + 4) == *(_DWORD *)&GUID_e99a73b1_cde0_477b_91b8_e995fa037387.Data2
        && *(_DWORD *)(v4 + 8) == *(_DWORD *)GUID_e99a73b1_cde0_477b_91b8_e995fa037387.Data4
        && *(_DWORD *)(v4 + 12) == *(_DWORD *)&GUID_e99a73b1_cde0_477b_91b8_e995fa037387.Data4[4] )
      {
        *v6 = (void *)(v7 + 120);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                      (Microsoft::WRL::FtmBase *)(v7 + 128),
                      (const struct _GUID *)v4,
                      v6);
        if ( CanCastTo < 0 )
          return (unsigned int)CanCastTo;
      }
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*v6 + 8LL))(*v6);
    return (unsigned int)CanCastTo;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64, _DWORD *, __int64 *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a1);
  return v3;
}
