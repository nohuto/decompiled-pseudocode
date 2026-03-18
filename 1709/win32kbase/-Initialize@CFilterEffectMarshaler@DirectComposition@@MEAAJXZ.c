/*
 * XREFs of ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C01481D0
 * Callers:
 *     ?Initialize@CGaussianBlurEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C014DB90 (-Initialize@CGaussianBlurEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CBrightnessEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C014DD60 (-Initialize@CBrightnessEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C014E060 (-Initialize@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CShadowEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C014E530 (-Initialize@CShadowEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CSaturationEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C014E8C0 (-Initialize@CSaturationEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C014EA40 (-Initialize@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CFloodEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C014ECD0 (-Initialize@CFloodEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C014EEF0 (-Initialize@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CCompositeEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C014F3B0 (-Initialize@CCompositeEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C014F560 (-Initialize@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C014F7D0 (-Initialize@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z @ 0x1C0148D08 (-Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z.c)
 */

__int64 __fastcall DirectComposition::CFilterEffectMarshaler::Initialize(
        DirectComposition::CFilterEffectMarshaler *this)
{
  unsigned int v2; // eax

  v2 = (*(__int64 (__fastcall **)(DirectComposition::CFilterEffectMarshaler *))(*(_QWORD *)this + 240LL))(this);
  return DirectComposition::CEffectInputSet::Initialize(
           (DirectComposition::CFilterEffectMarshaler *)((char *)this + 48),
           v2);
}
