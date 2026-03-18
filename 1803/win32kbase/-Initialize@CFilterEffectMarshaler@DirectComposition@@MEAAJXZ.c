/*
 * XREFs of ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C0151F40
 * Callers:
 *     ?Initialize@CGaussianBlurEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C015B530 (-Initialize@CGaussianBlurEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CBrightnessEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C015B700 (-Initialize@CBrightnessEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C015B980 (-Initialize@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CShadowEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C015BE50 (-Initialize@CShadowEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CSaturationEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C015C1E0 (-Initialize@CSaturationEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C015C340 (-Initialize@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CFloodEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C015C5D0 (-Initialize@CFloodEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C015C870 (-Initialize@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CCompositeEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C015CD30 (-Initialize@CCompositeEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C015CEE0 (-Initialize@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C015D150 (-Initialize@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z @ 0x1C01531C8 (-Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z.c)
 */

__int64 __fastcall DirectComposition::CFilterEffectMarshaler::Initialize(
        DirectComposition::CFilterEffectMarshaler *this)
{
  unsigned int v2; // eax

  v2 = (*(__int64 (__fastcall **)(DirectComposition::CFilterEffectMarshaler *))(*(_QWORD *)this + 248LL))(this);
  return DirectComposition::CEffectInputSet::Initialize(
           (DirectComposition::CFilterEffectMarshaler *)((char *)this + 48),
           v2);
}
