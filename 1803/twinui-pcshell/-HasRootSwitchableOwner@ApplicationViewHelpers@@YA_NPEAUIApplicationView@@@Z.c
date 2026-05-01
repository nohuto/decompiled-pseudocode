/*
 * XREFs of ?HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1803057AC
 * Callers:
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1802840BC (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall ApplicationViewHelpers::HasRootSwitchableOwner(struct IUnknown *this, struct IApplicationView *a2)
{
  bool v3; // bl
  struct IUnknown *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v5 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v5);
  if ( ((int (__fastcall *)(struct IUnknown *, struct IUnknown **))this->lpVtbl[15].QueryInterface)(this, &v5) >= 0 )
    v3 = (unsigned int)SHIsSameObject(this, v5) == 0;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v5);
  return v3;
}
