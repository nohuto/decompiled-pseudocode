/*
 * XREFs of ?AdjustPeriods@CRateInfo@@QEAAXPEBUDXGI_FRAME_STATISTICS_DWM@@0@Z @ 0x180133C2C
 * Callers:
 *     ?GetPresentStatisticsAndAdjustRates@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013CDA8 (-GetPresentStatisticsAndAdjustRates@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 * Callees:
 *     Template_x @ 0x18013BE18 (Template_x.c)
 *     Template_xxxxx @ 0x18013C060 (Template_xxxxx.c)
 */

void __fastcall CRateInfo::AdjustPeriods(
        CRateInfo *this,
        const struct DXGI_FRAME_STATISTICS_DWM *a2,
        const struct DXGI_FRAME_STATISTICS_DWM *a3)
{
  __int64 v3; // rax
  __int64 v5; // r9
  unsigned int v6; // ecx
  unsigned __int64 v7; // r9
  unsigned int v8; // eax
  unsigned __int64 v9; // r8
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx

  v3 = *((_QWORD *)a2 + 3);
  if ( v3 > 0 )
  {
    v5 = *((_QWORD *)a3 + 3);
    if ( v5 > v3 )
    {
      v6 = *((_DWORD *)a2 + 4);
      v7 = v5 - v3;
      v8 = *((_DWORD *)a3 + 4);
      if ( v8 < v6 )
        v9 = ~v6 + (unsigned __int64)(v8 + 1);
      else
        v9 = v8 - v6;
      v10 = (unsigned int)Microsoft_Windows_Dwm_CoreEnableBits;
      v11 = (v7 + (*((_QWORD *)this + 3) >> 1)) / *((_QWORD *)this + 3);
      v12 = v7 / v9;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        Template_xxxxx(
          g_qpcFrequency.LowPart,
          (unsigned int)&EVTDESC_SCHEDULE_ADJUST_PERIODS,
          v9,
          v11,
          v7,
          v7 / v9,
          g_qpcFrequency.QuadPart);
        v10 = (unsigned int)Microsoft_Windows_Dwm_CoreEnableBits;
      }
      if ( v12 && v11 <= 7 )
      {
        v13 = *((_QWORD *)this + 3);
        v14 = (v12 + 15 * v13) >> 4;
        if ( (v10 & 4) != 0 )
          Template_x(v10, &EVTDESC_SCHEDULE_ADJUST_NEW_REFRESH_PERIOD, v13);
        v15 = 10000000 * (v14 / g_qpcFrequency.QuadPart)
            + 10000000 * (v14 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
        if ( v15 )
        {
          v16 = v15 * *((unsigned int *)this + 8);
          *((_QWORD *)this + 3) = v14;
          *((_QWORD *)this + 6) = v16;
          *((_QWORD *)this + 1) = v15;
        }
      }
    }
  }
}
