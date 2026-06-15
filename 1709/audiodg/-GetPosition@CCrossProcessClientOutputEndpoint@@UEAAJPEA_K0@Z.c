/*
 * XREFs of ?GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140058260
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     ?AEWMILOG_GENERIC@@YAXKPEAXEE_K111NNNN@Z @ 0x140055874 (-AEWMILOG_GENERIC@@YAXKPEAXEE_K111NNNN@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140056F64 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetPosition_NonOffload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x140058488 (-GetPosition_NonOffload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z.c)
 *     ?GetPosition_Offload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x1400587B0 (-GetPosition_Offload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetPosition(
        CCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  int v6; // esi
  bool v7; // zf
  char *v8; // rbp
  CCrossProcessClientOutputEndpoint *v9; // rcx
  int Position_NonOffload; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // r8
  double LowPart; // xmm0_8
  double v14; // xmm0_8
  double v15; // xmm1_8
  double v16; // xmm0_8
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r8
  LARGE_INTEGER PerformanceCount; // [rsp+98h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( a3 )
      *a3 = 0LL;
    v7 = (*((_BYTE *)this - 232) & 1) == 0;
    v8 = (char *)this - 392;
    v9 = (CCrossProcessClientOutputEndpoint *)((char *)this - 392);
    if ( v7 )
      Position_NonOffload = CCrossProcessClientOutputEndpoint::GetPosition_NonOffload(v9, a2, a3);
    else
      Position_NonOffload = CCrossProcessClientOutputEndpoint::GetPosition_Offload(v9, a2, a3);
    v6 = Position_NonOffload;
    if ( Position_NonOffload >= 0 )
    {
      v11 = *((_QWORD *)this - 28);
      if ( *a2 < v11 )
      {
        AEWMILOG_GENERIC(
          *((unsigned int *)this - 78),
          v8,
          *a2,
          8,
          *a2,
          v11,
          (v11 - *a2) / *((unsigned int *)this - 78),
          0LL,
          0.0,
          0.0,
          0.0,
          0.0);
        *a2 = *((_QWORD *)this - 28);
      }
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( a3 && !*a3 )
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    LowPart = (double)(int)PerformanceCount.LowPart;
    if ( PerformanceCount.QuadPart < 0 )
      LowPart = LowPart + 1.844674407370955e19;
    v14 = LowPart * 10000000.0;
    v15 = (double)(int)g_u64QPCFrequency;
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v15 = v15 + 1.844674407370955e19;
    v16 = v14 / v15;
    v17 = (unsigned int)(int)v16;
    *a3 = v17;
    if ( a2 )
      v18 = *a2;
    else
      v18 = 0LL;
    AEWMILOG_GENERIC(v17, (char *)this - 392, v12, 6, v18, (unsigned int)(int)v16, 0LL, 0LL, 0.0, 0.0, 0.0, 0.0);
  }
  if ( a2 )
  {
    v19 = *((_QWORD *)this - 28);
    if ( *a2 < v19 )
      AEWMILOG_GENERIC(*a2, (char *)this - 392, v19, 8, *a2, v19, *((unsigned int *)this - 78), 0LL, 0.0, 0.0, 0.0, 0.0);
    *((_QWORD *)this - 28) = *a2;
  }
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_8ba84e4c02b33f572bdb63ead5dc6032_Traceguids, v6);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessClientOutputEndpoint::GetPosition", 140, v6);
  }
  return (unsigned int)v6;
}
