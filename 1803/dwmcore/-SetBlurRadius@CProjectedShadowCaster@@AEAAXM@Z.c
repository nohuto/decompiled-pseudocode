/*
 * XREFs of ?SetBlurRadius@CProjectedShadowCaster@@AEAAXM@Z @ 0x1801A0D4C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?SetProperty@CProjectedShadowCaster@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801A0EA0 (-SetProperty@CProjectedShadowCaster@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180051998 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?DestroyWhiteColor@CProjectedShadowCaster@@AEAAXXZ @ 0x18019FBA8 (-DestroyWhiteColor@CProjectedShadowCaster@@AEAAXXZ.c)
 */

void __fastcall CProjectedShadowCaster::SetBlurRadius(CProjectedShadowCaster *this, float a2)
{
  if ( *((float *)this + 23) != a2 )
  {
    *((float *)this + 23) = a2;
    Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)this + 16);
    CProjectedShadowCaster::DestroyWhiteColor((CRenderTargetImageSource **)this);
    CResource::InvalidateAnimationSources(this, 0);
    (*(void (__fastcall **)(CProjectedShadowCaster *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  }
}
