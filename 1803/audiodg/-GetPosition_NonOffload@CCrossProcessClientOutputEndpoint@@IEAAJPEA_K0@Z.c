/*
 * XREFs of ?GetPosition_NonOffload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x1400560D8
 * Callers:
 *     ?GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140055EB0 (-GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?AEWMILOG_GENERIC@@YAXKPEAXEE_K111NNNN@Z @ 0x140053514 (-AEWMILOG_GENERIC@@YAXKPEAXEE_K111NNNN@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140054BE4 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetPosition_NonOffload(
        CCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  char v8; // al
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // r12
  int v12; // r8d
  __int64 v13; // r13
  __int64 v14; // rdx
  unsigned __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // r15
  float v18; // xmm6_4
  int v19; // r9d
  __int64 v20; // rcx
  unsigned __int64 v21; // rbp
  double LowPart; // xmm0_8
  double v23; // xmm0_8
  double v24; // xmm1_8
  signed __int64 v25; // rax
  int v26; // eax
  double v27; // xmm3_8
  float v28; // xmm0_4
  __int64 v29; // rdx
  double v30; // xmm1_8
  double v31; // xmm0_8
  unsigned __int64 v32; // rax
  double v33; // xmm0_8
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // r8
  unsigned __int64 v39; // [rsp+60h] [rbp-58h]
  LARGE_INTEGER PerformanceCount; // [rsp+C0h] [rbp+8h] BYREF
  unsigned __int64 v41; // [rsp+D8h] [rbp+20h]

  v3 = *((_QWORD *)this + 8);
  PerformanceCount.QuadPart = 0LL;
  v4 = 0;
  v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 156), 0, 0);
  v9 = (_QWORD *)*((_QWORD *)this + 8);
  if ( (v8 & 4) == 0 )
  {
    v10 = v9[18];
LABEL_3:
    *a2 = v10;
    return v4;
  }
  if ( (v8 & 2) == 0 )
  {
    v10 = v9[2];
    goto LABEL_3;
  }
  v11 = v9[13];
  v12 = 3;
  v13 = *(_QWORD *)(*((_QWORD *)this + 8) + 120LL);
  while ( 1 )
  {
    v14 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 8) + 152LL), 0, 0);
    v15 = *(_QWORD *)(*((_QWORD *)this + 8) + 40 * v14 + 24);
    v16 = *((_QWORD *)this + 8);
    v41 = v15;
    v17 = *(_QWORD *)(v16 + 40 * v14 + 48);
    v18 = *(float *)(*((_QWORD *)this + 8) + 40 * v14 + 56);
    v19 = *(_DWORD *)(*((_QWORD *)this + 8) + 40 * v14 + 60);
    if ( (_DWORD)v14 == _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 8) + 152LL), 0, 0) )
      break;
    if ( !--v12 )
    {
      v4 = -2005139393;
      goto LABEL_12;
    }
  }
  if ( !v19 )
  {
    v4 = -2005139375;
LABEL_12:
    *a2 = *((_QWORD *)this + 21);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_db619c76aadb3ae58938d7fbad798ece_Traceguids, v4);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessClientOutputEndpoint::GetPosition_NonOffload", 0x12Bu, v4);
    return v4;
  }
  v20 = *((_QWORD *)this + 8);
  v21 = *(_QWORD *)(v20 + 144) / (unsigned __int64)*((unsigned int *)this + 20);
  v39 = *(_QWORD *)(v20 + 16) / (unsigned __int64)*((unsigned int *)this + 20);
  if ( v15 >= v11 + v13 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    LowPart = (double)(int)PerformanceCount.LowPart;
    if ( PerformanceCount.QuadPart < 0 )
      LowPart = LowPart + 1.844674407370955e19;
    v23 = LowPart * 10000000.0;
    v24 = (double)(int)g_u64QPCFrequency;
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v24 = v24 + 1.844674407370955e19;
    v25 = (unsigned int)(int)(v23 / v24);
    if ( a3 )
      *a3 = v25;
    if ( v25 < v17 )
      v26 = 0;
    else
      v26 = v25 - v17;
    v27 = v18;
    v28 = *((float *)this + 35);
    v29 = v41 + (unsigned int)(int)((double)v26 * v18 / 10000000.0 + 0.5) - v13 - v11;
    if ( v28 != v18 )
    {
      v30 = (double)(int)v29;
      v31 = v28;
      if ( v29 < 0 )
        v30 = v30 + 1.844674407370955e19;
      v32 = 0LL;
      v33 = v31 * v30 / v27 + 0.5;
      if ( v33 >= 9.223372036854776e18 )
      {
        v33 = v33 - 9.223372036854776e18;
        if ( v33 < 9.223372036854776e18 )
          v32 = 0x8000000000000000uLL;
      }
      v29 = v32 + (unsigned int)(int)v33;
    }
    v34 = v21 + v29;
    v35 = v34;
    v36 = 0LL;
    if ( v34 >= v39 )
      v35 = v39;
    v37 = *((unsigned int *)this + 20) * v35;
    *a2 = v37;
    if ( a3 )
      v36 = *a3;
    AEWMILOG_GENERIC(
      *(_QWORD *)(*((_QWORD *)this + 8) + 16LL),
      this,
      v37,
      6u,
      v37,
      v36,
      v34,
      v21,
      (double)(int)*(_QWORD *)(*((_QWORD *)this + 8) + 16LL),
      (double)(int)*(_QWORD *)(*((_QWORD *)this + 8) + 8LL),
      v27,
      *((float *)this + 35));
  }
  else
  {
    *a2 = v21 * *((unsigned int *)this + 20);
  }
  return v4;
}
