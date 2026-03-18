/*
 * XREFs of ?GetBrushRealizationInternal@CSolidColorLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18004BBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetOpacity@CLegacyMilBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0DC@@@PEAM@Z @ 0x18007D3BC (-GetOpacity@CLegacyMilBrush@@KAJNPEAV-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0DC@@@PEAM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrush::GetBrushRealizationInternal(
        CSolidColorLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2,
        struct CMILBrush **a3)
{
  int Opacity; // eax
  unsigned int v6; // ebx
  void (*v7)(void); // rax
  __m128 v9; // [rsp+30h] [rbp-18h]
  float v10; // [rsp+50h] [rbp+8h] BYREF

  Opacity = CLegacyMilBrush::GetOpacity(this, *((_QWORD *)this + 10), &v10);
  v6 = Opacity;
  if ( Opacity < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Opacity, 0x33u);
  }
  else
  {
    v9 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 104));
    v7 = *(void (**)(void))(*((_QWORD *)this + 18) + 48LL);
    v9.m128_f32[3] = _mm_shuffle_ps(v9, v9, 255).m128_f32[0] * v10;
    *((__m128 *)this + 11) = v9;
    v7();
    *a3 = (struct CMILBrush *)(((unsigned __int64)this + 144) & -(__int64)((CSolidColorLegacyMilBrush *)((char *)this + 120) != 0LL));
  }
  return v6;
}
