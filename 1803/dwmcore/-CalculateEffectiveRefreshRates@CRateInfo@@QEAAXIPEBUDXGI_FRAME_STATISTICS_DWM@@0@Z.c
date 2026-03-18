/*
 * XREFs of ?CalculateEffectiveRefreshRates@CRateInfo@@QEAAXIPEBUDXGI_FRAME_STATISTICS_DWM@@0@Z @ 0x1800BC8A0
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18005B3B0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     McTemplateU0qff @ 0x1801514E4 (McTemplateU0qff.c)
 *     McTemplateU0qxxff @ 0x180151554 (McTemplateU0qxxff.c)
 */

void __fastcall CRateInfo::CalculateEffectiveRefreshRates(
        CRateInfo *this,
        unsigned int a2,
        const struct DXGI_FRAME_STATISTICS_DWM *a3,
        const struct DXGI_FRAME_STATISTICS_DWM *a4)
{
  unsigned int v4; // edi
  const struct DXGI_FRAME_STATISTICS_DWM *v5; // rbx
  signed __int64 *v6; // rsi
  CRateInfo *v8; // r10
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // xmm2_8
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r12
  __int64 v17; // r13
  signed __int64 v18; // r12
  double LowPart; // xmm2_8
  __m128d v20; // xmm0
  __m128d v21; // xmm1
  char v22; // xmm3_1
  __m128d v23; // xmm0
  __int128 v24; // [rsp+50h] [rbp-58h]
  __m128i v25; // [rsp+70h] [rbp-38h]

  if ( a2 )
  {
    v4 = 0;
    v5 = a4;
    v6 = (signed __int64 *)((char *)this + 256);
    v8 = this;
    v9 = 0LL;
    v10 = a3 - a4;
    do
    {
      v25 = *(__m128i *)((char *)v5 + v10 + 16);
      v11 = _mm_srli_si128(v25, 8).m128i_u64[0];
      v24 = *((_OWORD *)v5 + 1);
      if ( v11 > 0 && *((__int64 *)&v24 + 1) > v11 )
      {
        v12 = *((_QWORD *)&v24 + 1) - v11;
        if ( (unsigned int)v24 < v25.m128i_i32[0] )
        {
          v13 = (unsigned int)(v24 + 1);
          v14 = v13 + (unsigned int)(-1 - v25.m128i_i32[0]);
        }
        else
        {
          LODWORD(v13) = v24 - v25.m128i_i32[0];
          v14 = (unsigned int)(v24 - v25.m128i_i32[0]);
        }
        v15 = (v12 + ((unsigned __int64)*v6 >> 1)) % *v6;
        v16 = (v12 + ((unsigned __int64)*v6 >> 1)) / *v6;
        if ( v14 == 1 )
        {
          v17 = *((_QWORD *)&v24 + 1) - v11;
        }
        else
        {
          v15 = v12 % v14;
          v17 = v12 / v14;
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          v20 = 0LL;
          LowPart = (double)(int)g_qpcFrequency.LowPart;
          v20.m128d_f64[0] = (double)(int)v17;
          if ( v17 < 0 )
            v20.m128d_f64[0] = v20.m128d_f64[0] + 1.844674407370955e19;
          v21 = 0LL;
          v21.m128d_f64[0] = (double)(int)v12;
          v20.m128d_f64[0] = v20.m128d_f64[0] * 1000.0 / LowPart;
          v22 = _mm_cvtpd_ps(v20).m128_u8[0];
          if ( v12 < 0 )
            v21.m128d_f64[0] = v21.m128d_f64[0] + 1.844674407370955e19;
          v21.m128d_f64[0] = v21.m128d_f64[0] * 1000.0 / LowPart;
          McTemplateU0qxxff(v13, v15, v4, v14, v16, _mm_cvtpd_ps(v21).m128_i8[0], v22);
          v8 = this;
        }
        if ( v17 && v16 <= 7 )
        {
          if ( *((_BYTE *)v8 + v9 + 384) )
          {
            v18 = *(v6 - 32);
            *((_BYTE *)v8 + v9 + 384) = 0;
          }
          else
          {
            v18 = (unsigned __int64)(v17 + 15 * *v6) >> 4;
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
          {
            v23 = 0LL;
            v23.m128d_f64[0] = (double)(int)v18;
            if ( v18 < 0 )
              v23.m128d_f64[0] = v23.m128d_f64[0] + 1.844674407370955e19;
            v23.m128d_f64[0] = v23.m128d_f64[0] * 1000.0 / (double)(int)g_qpcFrequency.LowPart;
            McTemplateU0qff(
              v13,
              (unsigned int)&EVTDESC_SCHEDULE_NEW_EFFECTIVE_REFRESH_PERIOD,
              v4,
              v14,
              _mm_cvtpd_ps(v23).m128_i8[0]);
            v8 = this;
          }
          if ( v18 )
            *v6 = v18;
        }
      }
      ++v4;
      ++v9;
      v5 = (const struct DXGI_FRAME_STATISTICS_DWM *)((char *)v5 + 32);
      ++v6;
    }
    while ( v4 < a2 );
  }
}
