/*
 * XREFs of ?HasBlurEffectNode@CEffectBrush@@QEBA_NXZ @ 0x180082E98
 * Callers:
 *     ?Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1800801EC (-Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVis.c)
 *     ?GetLayerPointAndSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPointAndSizeF@@@Z @ 0x18008253C (-GetLayerPointAndSize@CTreeEffectLayer@@SA-AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::HasBlurEffectNode(CEffectBrush *this)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 16LL))(*((_QWORD *)this + 13));
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 136LL))(v1);
}
