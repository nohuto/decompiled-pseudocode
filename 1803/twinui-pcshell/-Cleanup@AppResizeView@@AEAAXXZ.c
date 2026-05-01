/*
 * XREFs of ?Cleanup@AppResizeView@@AEAAXXZ @ 0x1802DF184
 * Callers:
 *     ?CancelResize@AppResizeView@@AEAAXXZ @ 0x1802DF148 (-CancelResize@AppResizeView@@AEAAXXZ.c)
 *     ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x1802DF1D0 (-CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AppResizeView::Cleanup(AppResizeView *this, __int64 a2)
{
  IUnknown *v3; // rcx
  __int64 v4; // rcx

  v3 = (IUnknown *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    IUnknown_SetSite(v3, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 8);
  }
  v4 = *((_QWORD *)this + 10);
  if ( v4 )
  {
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 56LL))(v4, a2);
  }
}
