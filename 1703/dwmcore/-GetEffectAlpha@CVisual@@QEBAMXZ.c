/*
 * XREFs of ?GetEffectAlpha@CVisual@@QEBAMXZ @ 0x18012B6A8
 * Callers:
 *     ?GetAlphaMode@CHwndBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180164910 (-GetAlphaMode@CHwndBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180085014 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CVisual::GetEffectAlpha(CVisual *this)
{
  float v1; // xmm6_4
  double *EffectInternal; // rbx

  v1 = FLOAT_1_0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x8000000) != 0 )
  {
    EffectInternal = (double *)CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(double *, __int64))(*(_QWORD *)EffectInternal + 48LL))(EffectInternal, 7LL) )
      v1 = EffectInternal[9];
  }
  return fminf(1.0, fmaxf(v1, 0.0));
}
