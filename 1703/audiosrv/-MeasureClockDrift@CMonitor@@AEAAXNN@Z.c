/*
 * XREFs of ?MeasureClockDrift@CMonitor@@AEAAXNN@Z @ 0x18007ABFC
 * Callers:
 *     ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x1800473E4 (-ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 * Callees:
 *     WPP_SF_g @ 0x180087868 (WPP_SF_g.c)
 *     WPP_SF_gg @ 0x1800B8558 (WPP_SF_gg.c)
 *     WPP_SF_gggg @ 0x1800B85A8 (WPP_SF_gggg.c)
 */

void __fastcall CMonitor::MeasureClockDrift(CMonitor *this, double a2, double a3)
{
  __int64 v4; // rax
  double v5; // xmm6_8
  double v6; // xmm6_8
  bool v7; // sf
  __int64 v8; // rax
  double v9; // xmm0_8
  double v10; // xmm6_8
  double v11; // xmm6_8
  CVolumeStrip *v12; // r9

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_gggg(*((_QWORD *)WPP_GLOBAL_Control + 2));
  }
  v4 = *((_QWORD *)this + 60);
  v5 = (double)(int)v4;
  if ( v4 < 0 )
    v5 = v5 + 1.844674407370955e19;
  v6 = v5 * *((double *)this + 59);
  v7 = v4 + 1 < 0;
  v8 = v4 + 1;
  *((_QWORD *)this + 60) = v8;
  v9 = (double)(int)v8;
  v10 = v6 + a3 / a2;
  if ( v7 )
    v9 = v9 + 1.844674407370955e19;
  v11 = v10 / v9;
  v12 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, &WPP_bd0193786e9e34b543d459a2183e6794_Traceguids);
    v12 = WPP_GLOBAL_Control;
  }
  if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v11 - *((double *)this + 59)) & _xmm) > 0.00001 )
  {
    if ( v12 != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v12 + 7) & 0x800000) != 0
      && *((_BYTE *)v12 + 25) >= 4u )
    {
      WPP_SF_gg(*((_QWORD *)v12 + 2));
    }
    *((double *)this + 59) = v11;
  }
}
