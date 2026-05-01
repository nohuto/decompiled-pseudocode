/*
 * XREFs of ?IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180284050
 * Callers:
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1802840BC (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1802C40FC (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?CancelMoveSizeOperationForOperableView@TabletModePositioner@@AEAAJXZ @ 0x1802C4BC4 (-CancelMoveSizeOperationForOperableView@TabletModePositioner@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall TabletModePositionerHelpers::IsControlledView(
        TabletModePositionerHelpers *this,
        struct IApplicationView *a2)
{
  bool v3; // di
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v5 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v5);
  if ( (*(int (__fastcall **)(TabletModePositionerHelpers *, __int64 *))(*(_QWORD *)this + 264LL))(this, &v5) >= 0 )
    v3 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5) == 1;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v5);
  return v3;
}
