/*
 * XREFs of ?GetEffectAlpha@CVisual@@QEBAMXZ @ 0x18011A554
 * Callers:
 *     ?GetPixelFormatInfo@CHwndBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x180167DB0 (-GetPixelFormatInfo@CHwndBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180050EE8 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CVisual::GetEffectAlpha(CVisual *this)
{
  float v1; // xmm6_4
  double *EffectInternal; // rbx

  v1 = FLOAT_1_0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x8000000) != 0 )
  {
    EffectInternal = (double *)CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(double *, __int64))(*(_QWORD *)EffectInternal + 48LL))(EffectInternal, 47LL) )
      v1 = EffectInternal[9];
  }
  return fminf(1.0, fmaxf(v1, 0.0));
}
