/*
 * XREFs of ?MeasureClockDrift@CMonitor@@AEAAXNN@Z @ 0x1800E3608
 * Callers:
 *     ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x1800E4A44 (-ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 * Callees:
 *     WPP_SF_g @ 0x1800A5030 (WPP_SF_g.c)
 *     WPP_SF_gg @ 0x1800E6144 (WPP_SF_gg.c)
 *     WPP_SF_gggg @ 0x1800E6194 (WPP_SF_gggg.c)
 */

void __fastcall CMonitor::MeasureClockDrift(CMonitor *this, double a2, double a3)
{
  double v4; // xmm7_8
  __int64 v5; // rax
  double v6; // xmm0_8
  __int64 v7; // rcx
  double v8; // xmm6_8
  double v9; // xmm1_8
  double v10; // xmm6_8
  double v11; // xmm6_8
  CAudioSessionManager *v12; // r9
  double v13; // xmm1_8

  v4 = a3 / a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_gggg(*((_QWORD *)WPP_GLOBAL_Control + 2));
  }
  v5 = *((_QWORD *)this + 60);
  v6 = *((double *)this + 59);
  v7 = v5 + 1;
  *((_QWORD *)this + 60) = v5 + 1;
  v8 = (double)(int)v5;
  if ( v5 < 0 )
    v8 = v8 + 1.844674407370955e19;
  v9 = (double)(int)v7;
  v10 = v8 * v6 + v4;
  if ( v7 < 0 )
    v9 = v9 + 1.844674407370955e19;
  v11 = v10 / v9;
  v12 = WPP_GLOBAL_Control;
  v13 = v6;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x33u, (__int64)&WPP_298f35db72853edc559b812a776cab31_Traceguids, v11);
    v13 = *((double *)this + 59);
    v12 = WPP_GLOBAL_Control;
  }
  if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v11 - v13) & _xmm) > 0.00001 )
  {
    if ( v12 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v12 + 7) & 0x800000) != 0
      && *((_BYTE *)v12 + 25) >= 4u )
    {
      WPP_SF_gg(*((_QWORD *)v12 + 2));
    }
    *((double *)this + 59) = v11;
  }
}
