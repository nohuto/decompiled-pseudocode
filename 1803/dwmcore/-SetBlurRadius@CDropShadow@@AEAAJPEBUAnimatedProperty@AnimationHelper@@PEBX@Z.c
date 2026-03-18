/*
 * XREFs of ?SetBlurRadius@CDropShadow@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18018AA30
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180051998 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropShadow::SetBlurRadius(
        CDropShadow *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        float *a3)
{
  float v4; // xmm1_4
  CRenderTargetImageSource ***v5; // rdi
  CRenderTargetImageSource **i; // rbx

  v4 = fminf(750.0, *a3);
  if ( *((float *)this + 38) != v4 )
  {
    *((float *)this + 38) = v4;
    CResource::InvalidateAnimationSources(this, 0);
    (*(void (__fastcall **)(CDropShadow *, _QWORD, CDropShadow *))(*(_QWORD *)this + 64LL))(this, 0LL, this);
    Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)this + 25);
    v5 = (CRenderTargetImageSource ***)*((_QWORD *)this + 10);
    for ( i = *v5; i != (CRenderTargetImageSource **)v5; i = (CRenderTargetImageSource **)*i )
      Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(i + 4);
  }
  return 0LL;
}
