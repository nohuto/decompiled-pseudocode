/*
 * XREFs of ?SetApp@CDragVisual@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1802F16B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z @ 0x1802DA740 (-BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180305708 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 */

__int64 __fastcall CDragVisual::SetApp(CDragVisual *this, struct IUnknown *a2)
{
  IUnknown *v4; // rbx
  struct IApplicationView **v5; // r9
  int ViewForApplication; // ebx
  struct IAppLayout **v7; // r8
  AppLayoutHelpers *v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v4 = (IUnknown *)*((_QWORD *)this - 1);
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v9);
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(v4, a2, (struct IImmersiveApplication *)&v9, v5);
  if ( ViewForApplication >= 0 )
    ViewForApplication = AppLayoutHelpers::BuildSingleViewLayout(v9, (struct IApplicationView *)&v10, v7);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v9);
  if ( ViewForApplication >= 0 )
    ViewForApplication = (*(__int64 (__fastcall **)(CDragVisual *, __int64, _QWORD))(*(_QWORD *)this + 72LL))(
                           this,
                           v10,
                           0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return (unsigned int)ViewForApplication;
}
