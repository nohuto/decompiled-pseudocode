/*
 * XREFs of ?GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140056040
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ?AEWMILOG_GENERIC@@YAXKPEAXEE_K111NNNN@Z @ 0x140053A34 (-AEWMILOG_GENERIC@@YAXKPEAXEE_K111NNNN@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400550E4 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetPosition(
        CCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  float v5; // xmm8_4
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r12
  int v9; // ebp
  char v10; // cl
  _QWORD *v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // r13
  int v14; // r8d
  __int64 v15; // rdx
  unsigned __int64 v16; // r11
  __int64 v17; // rax
  __int64 v18; // r15
  int v19; // r9d
  __int64 v20; // rcx
  unsigned __int64 v21; // r8
  double LowPart; // xmm0_8
  double v23; // xmm0_8
  double v24; // xmm1_8
  signed __int64 v25; // rax
  int v26; // eax
  float v27; // xmm0_4
  __int64 v28; // rsi
  double v29; // xmm1_8
  double v30; // xmm0_8
  unsigned __int64 v31; // rax
  double v32; // xmm1_8
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r9
  double v36; // xmm0_8
  double v37; // xmm0_8
  double v38; // xmm1_8
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // rdx
  __int64 v41; // r8
  unsigned __int64 v42; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v45; // [rsp+E8h] [rbp+10h]
  unsigned __int64 v46; // [rsp+F0h] [rbp+18h]
  unsigned __int64 v47; // [rsp+F8h] [rbp+20h]

  v5 = 0.0;
  PerformanceCount.QuadPart = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( !a2 )
  {
    v9 = -2147467261;
    goto LABEL_39;
  }
  if ( a3 )
    *a3 = 0LL;
  v10 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 41) + 156LL), 0, 0);
  v9 = 0;
  v11 = (_QWORD *)*((_QWORD *)this - 41);
  if ( (v10 & 4) == 0 )
  {
    v12 = v11[18];
LABEL_7:
    *a2 = v12;
    goto LABEL_39;
  }
  if ( (v10 & 2) == 0 )
  {
    v12 = v11[2];
    goto LABEL_7;
  }
  v13 = v11[13];
  v14 = 3;
  v45 = *(_QWORD *)(*((_QWORD *)this - 41) + 120LL);
  while ( 1 )
  {
    v15 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 41) + 152LL), 0, 0);
    v16 = *(_QWORD *)(*((_QWORD *)this - 41) + 40 * v15 + 24);
    v17 = *((_QWORD *)this - 41);
    v46 = v16;
    v18 = *(_QWORD *)(v17 + 40 * v15 + 48);
    v5 = *(float *)(*((_QWORD *)this - 41) + 40 * v15 + 56);
    v19 = *(_DWORD *)(*((_QWORD *)this - 41) + 40 * v15 + 60);
    if ( (_DWORD)v15 == _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 41) + 152LL), 0, 0) )
      break;
    if ( !--v14 )
    {
      v9 = -2005139393;
LABEL_38:
      *a2 = *((_QWORD *)this - 28);
      goto LABEL_39;
    }
  }
  if ( !v19 )
  {
    v9 = -2005139375;
    goto LABEL_38;
  }
  v20 = *((_QWORD *)this - 41);
  v21 = *((unsigned int *)this - 78);
  v8 = *(_QWORD *)(v20 + 144) / v21;
  v47 = *(_QWORD *)(v20 + 16) / v21;
  if ( v16 < v45 + v13 )
  {
    *a2 = v8 * v21;
    goto LABEL_39;
  }
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
  if ( v25 < v18 )
    v26 = 0;
  else
    v26 = v25 - v18;
  v27 = *((float *)this - 63);
  v28 = v46 + (unsigned int)(int)((double)v26 * v5 / 10000000.0 + 0.5) - v45 - v13;
  if ( v27 != v5 )
  {
    v29 = v27;
    v30 = (double)(int)v28;
    if ( v28 < 0 )
      v30 = v30 + 1.844674407370955e19;
    v31 = 0LL;
    v32 = v29 * v30 / v5 + 0.5;
    if ( v32 >= 9.223372036854776e18 )
    {
      v32 = v32 - 9.223372036854776e18;
      if ( v32 < 9.223372036854776e18 )
        v31 = 0x8000000000000000uLL;
    }
    v28 = v31 + (unsigned int)(int)v32;
  }
  v7 = v8 + v28;
  v33 = v7;
  if ( v7 >= v47 )
    v33 = v47;
  v34 = *((unsigned int *)this - 78) * v33;
  *a2 = v34;
  v35 = *((_QWORD *)this - 28);
  if ( v34 < v35 )
  {
    AEWMILOG_GENERIC(
      *((unsigned int *)this - 78),
      (char *)this - 392,
      v34,
      8,
      v34,
      v35,
      (v35 - v34) / *((unsigned int *)this - 78),
      0LL,
      0.0,
      0.0,
      0.0,
      0.0);
    goto LABEL_38;
  }
LABEL_39:
  if ( a3 )
  {
    if ( !*a3 )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v36 = (double)(int)PerformanceCount.LowPart;
      if ( PerformanceCount.QuadPart < 0 )
        v36 = v36 + 1.844674407370955e19;
      v37 = v36 * 10000000.0;
      v38 = (double)(int)g_u64QPCFrequency;
      if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
        v38 = v38 + 1.844674407370955e19;
      *a3 = (unsigned int)(int)(v37 / v38);
    }
    v39 = *a3;
  }
  else
  {
    v39 = 0LL;
  }
  v40 = 0LL;
  if ( a2 )
    v40 = *a2;
  AEWMILOG_GENERIC(
    *(_QWORD *)(*((_QWORD *)this - 41) + 16LL),
    (char *)this - 392,
    v39,
    6,
    v40,
    v39,
    v7,
    v8,
    (double)(int)*(_QWORD *)(*((_QWORD *)this - 41) + 16LL),
    (double)(int)*(_QWORD *)(*((_QWORD *)this - 41) + 8LL),
    v5,
    *((float *)this - 63));
  if ( a2 )
  {
    v42 = *((_QWORD *)this - 28);
    if ( *a2 < v42 )
      AEWMILOG_GENERIC(v42, (char *)this - 392, v41, 8, *a2, v42, *((unsigned int *)this - 78), 0LL, 0.0, 0.0, 0.0, 0.0);
    *((_QWORD *)this - 28) = *a2;
  }
  if ( v9 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_18bcff24aefe30010f0feed95000f45d_Traceguids, v9);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessClientOutputEndpoint::GetPosition", 304, v9);
  }
  return (unsigned int)v9;
}
