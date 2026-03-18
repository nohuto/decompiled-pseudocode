/*
 * XREFs of ?GetEffectAlpha@CVisual@@QEBAMXZ @ 0x18013C9A8
 * Callers:
 *     ?GetPixelFormatInfo@CHwndBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801907D0 (-GetPixelFormatInfo@CHwndBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004FC80 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CVisual::GetEffectAlpha(CVisual *this)
{
  float v1; // xmm6_4
  double *EffectInternal; // rbx

  v1 = FLOAT_1_0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 27) + 4LL) & 0x8000000) != 0 )
  {
    EffectInternal = (double *)CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(double *, __int64))(*(_QWORD *)EffectInternal + 48LL))(EffectInternal, 52LL) )
      v1 = EffectInternal[9];
  }
  return fminf(1.0, fmaxf(v1, 0.0));
}
