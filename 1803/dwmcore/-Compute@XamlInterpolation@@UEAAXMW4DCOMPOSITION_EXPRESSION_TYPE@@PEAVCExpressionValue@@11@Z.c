/*
 * XREFs of ?Compute@XamlInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800C3330
 * Callers:
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x18003F0F0 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?EvaluateCurve@XamlPowerInterpolation@@MEAANN@Z @ 0x1800C33E0 (-EvaluateCurve@XamlPowerInterpolation@@MEAANN@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlInterpolation::Compute(
        XamlPowerInterpolation *a1,
        float a2,
        unsigned int a3,
        struct _D3DCOLORVALUE *a4,
        struct _D3DCOLORVALUE *a5,
        struct _D3DCOLORVALUE *a6)
{
  void (*v9)(void); // rax
  double v10; // xmm1_8
  __int64 v11; // rdx

  v9 = *(void (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( *((_DWORD *)a1 + 6) )
  {
    if ( *((_DWORD *)a1 + 6) == 1 )
    {
      v10 = 1.0 - a2;
      if ( (char *)v9 == (char *)XamlPowerInterpolation::EvaluateCurve )
        XamlPowerInterpolation::EvaluateCurve(a1, v10);
      else
        v9();
    }
    else
    {
      ((double (*)(void))v9)();
    }
  }
  else
  {
    v9();
  }
  return KeyframeInterpolation::Interpolate((__int64)a1, v11, a3, a4, a5, a6);
}
