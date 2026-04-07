/*
 * XREFs of ?ContinueTo@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNN@Z @ 0x180096000
 * Callers:
 *     ?AddCubic@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJNMMMM@Z @ 0x180095D50 (-AddCubic@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJNMMMM@Z.c)
 *     ?End@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJNM@Z @ 0x180096640 (-End@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJNM@Z.c)
 * Callees:
 *     ?AddTransitionToChoppedValue@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNNN@Z @ 0x180095DE0 (-AddTransitionToChoppedValue@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNNN@Z.c)
 *     ?IsWithinRange@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA_NNNN@Z @ 0x180096650 (-IsWithinRange@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA_NNNN@Z.c)
 */

__int64 __fastcall CThemeAnimationScheduleHelper::CCubicBezierChopper::ContinueTo(
        CThemeAnimationScheduleHelper::CCubicBezierChopper *this,
        double a2,
        double a3)
{
  double v6; // xmm8_8
  double v7; // xmm1_8
  double v8; // xmm10_8
  CThemeAnimationScheduleHelper::CCubicBezierChopper *v9; // rcx
  double v10; // xmm6_8
  double v11; // xmm2_8
  double v12; // xmm11_8
  float v13; // xmm0_4
  double v14; // xmm10_8
  int v15; // eax
  double v16; // xmm11_8
  float v17; // xmm1_4
  double v18; // xmm8_8
  bool v19; // cc
  double v20; // xmm9_8
  float v21; // xmm0_4
  double v22; // xmm8_8

  v6 = *((double *)this + 9);
  v7 = *((double *)this + 8);
  v8 = *((double *)this + 11);
  if ( CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(0LL, v7, v8, v6)
    || CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v9, v7, v8, *((double *)this + 10)) )
  {
    v11 = v6;
    if ( CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v9, v7, v6, a3) )
    {
      v10 = a2 - *((double *)this + 13);
      if ( v10 <= 0.0 )
        return (unsigned int)v9;
LABEL_38:
      LODWORD(v9) = CThemeAnimationScheduleHelper::CCubicBezierChopper::AddTransitionToChoppedValue(this, a3, v11, v10);
      return (unsigned int)v9;
    }
    v12 = *((float *)this + 28);
    if ( CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v9, v7, v6, v12) )
    {
      v13 = *((float *)this + 29);
      if ( v13 == 0.0 )
      {
        v14 = 0.0;
      }
      else
      {
        v14 = fmin(a2 - *((double *)this + 13), (v6 - v12) / v13);
        if ( v14 > 0.0 )
        {
          v15 = CThemeAnimationScheduleHelper::CCubicBezierChopper::AddTransitionToChoppedValue(this, v6, v6, v14);
          v9 = (CThemeAnimationScheduleHelper::CCubicBezierChopper *)(unsigned int)v15;
          if ( v15 < 0 )
            return (unsigned int)v9;
        }
      }
      v16 = *((double *)this + 10);
      if ( CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v9, *((double *)this + 8), v16, a3) )
      {
        v10 = a2 - *((double *)this + 13) - v14;
        if ( v10 <= 0.0 )
          return (unsigned int)v9;
        goto LABEL_37;
      }
      v17 = *((float *)this + 29);
      if ( v17 == 0.0 )
        v18 = 0.0;
      else
        v18 = fmin(a2 - *((double *)this + 13), (v16 - *((float *)this + 28)) / v17);
      if ( v18 - v14 > 0.0 )
        LODWORD(v9) = CThemeAnimationScheduleHelper::CCubicBezierChopper::AddTransitionToChoppedValue(
                        this,
                        v16,
                        v16,
                        v18 - v14);
      if ( (int)v9 < 0 )
        return (unsigned int)v9;
      v10 = a2 - *((double *)this + 13) - v18;
      v19 = v10 <= 0.0;
    }
    else
    {
      v20 = *((double *)this + 10);
      if ( CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v9, v20, v8, v12) )
      {
        v10 = a2 - *((double *)this + 13);
        if ( v10 <= 0.0 )
          return (unsigned int)v9;
        v11 = v20;
        goto LABEL_38;
      }
      if ( !CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v9, v20, v8, a3) )
      {
        v10 = a2 - *((double *)this + 13);
LABEL_37:
        v11 = a3;
        goto LABEL_38;
      }
      v21 = *((float *)this + 29);
      if ( v21 == 0.0 )
      {
        v22 = 0.0;
      }
      else
      {
        v22 = fmin(a2 - *((double *)this + 13), (v20 - v12) / v21);
        if ( v22 > 0.0 )
        {
          LODWORD(v9) = CThemeAnimationScheduleHelper::CCubicBezierChopper::AddTransitionToChoppedValue(
                          this,
                          v20,
                          v20,
                          v22);
          if ( (int)v9 < 0 )
            return (unsigned int)v9;
        }
      }
      v10 = a2 - *((double *)this + 13) - v22;
      v19 = v10 <= 0.0;
    }
    if ( v19 )
      return (unsigned int)v9;
    v11 = *((double *)this + 10);
    goto LABEL_38;
  }
  v10 = a2 - *((double *)this + 13);
  if ( v10 > 0.0 )
  {
    if ( !CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v9, v7, v6, v8) )
      v6 = *((double *)this + 10);
    v11 = v6;
    goto LABEL_38;
  }
  return (unsigned int)v9;
}
