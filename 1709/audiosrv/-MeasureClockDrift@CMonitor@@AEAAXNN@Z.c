/*
 * XREFs of ?MeasureClockDrift@CMonitor@@AEAAXNN@Z @ 0x1800A8BA0
 * Callers:
 *     ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x1800A9FD8 (-ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 * Callees:
 *     WPP_SF_g @ 0x18006BA2C (WPP_SF_g.c)
 *     WPP_SF_gg @ 0x1800AB6B4 (WPP_SF_gg.c)
 *     WPP_SF_gggg @ 0x1800AB704 (WPP_SF_gggg.c)
 */

void __fastcall CMonitor::MeasureClockDrift(CMonitor *this, double a2, double a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  double v6; // xmm6_8
  double v7; // xmm0_8
  double v8; // xmm6_8
  double v9; // xmm6_8
  CAudioDGProcess *v10; // r9

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_gggg(*((_QWORD *)WPP_GLOBAL_Control + 2));
  }
  v4 = *((_QWORD *)this + 60);
  v5 = v4 + 1;
  *((_QWORD *)this + 60) = v4 + 1;
  v6 = (double)(int)v4;
  if ( v4 < 0 )
    v6 = v6 + 1.844674407370955e19;
  v7 = (double)(int)v5;
  v8 = v6 * *((double *)this + 59) + a3 / a2;
  if ( v5 < 0 )
    v7 = v7 + 1.844674407370955e19;
  v9 = v8 / v7;
  v10 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x33u, (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids, v9);
    v10 = WPP_GLOBAL_Control;
  }
  if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9 - *((double *)this + 59)) & _xmm) > 0.00001 )
  {
    if ( v10 != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v10 + 7) & 0x800000) != 0
      && *((_BYTE *)v10 + 25) >= 4u )
    {
      WPP_SF_gg(*((_QWORD *)v10 + 2));
    }
    *((double *)this + 59) = v9;
  }
}
