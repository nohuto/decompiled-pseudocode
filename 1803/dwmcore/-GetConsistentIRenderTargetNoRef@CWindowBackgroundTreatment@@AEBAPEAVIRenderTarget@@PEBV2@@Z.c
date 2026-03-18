/*
 * XREFs of ?GetConsistentIRenderTargetNoRef@CWindowBackgroundTreatment@@AEBAPEAVIRenderTarget@@PEBV2@@Z @ 0x18000BB28
 * Callers:
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z @ 0x18000BDF4 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z.c)
 *     ?GetImageSourceForEffectInputNoRef@CWindowBackgroundTreatment@@QEBAPEAVIImageSource@@PEBVIRenderTarget@@@Z @ 0x18000BE88 (-GetImageSourceForEffectInputNoRef@CWindowBackgroundTreatment@@QEBAPEAVIImageSource@@PEBVIRender.c)
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18000BF08 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Release@CHwDisplayRenderTarget@@UEAAKXZ @ 0x1800463A0 (-Release@CHwDisplayRenderTarget@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

struct IRenderTarget *__fastcall CWindowBackgroundTreatment::GetConsistentIRenderTargetNoRef(
        CWindowBackgroundTreatment *this,
        int (__fastcall ***a2)(const struct IRenderTarget *, GUID *, CHwDisplayRenderTarget **))
{
  int (__fastcall **v2)(const struct IRenderTarget *, GUID *, CHwDisplayRenderTarget **); // rax
  void (*v3)(void); // rax
  CHwDisplayRenderTarget *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  v2 = *a2;
  v5 = 0LL;
  if ( (*v2)((const struct IRenderTarget *)a2, &GUID_b73b1159_a295_4c76_bb56_c18e282ae007, &v5) < 0 )
    return 0LL;
  v3 = *(void (**)(void))(*(_QWORD *)v5 + 16LL);
  if ( (char *)v3 == (char *)CHwDisplayRenderTarget::Release )
    CHwDisplayRenderTarget::Release(v5);
  else
    v3();
  return v5;
}
