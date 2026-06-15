/*
 * XREFs of ?GetDevicePosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x1400559C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140054BE4 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z @ 0x14006013C (-AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetDevicePosition(
        CCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 a3)
{
  unsigned __int64 *v3; // r14
  int v6; // edi
  int v7; // r9d
  unsigned __int64 v8; // r10
  int v9; // r11d
  unsigned __int64 v10; // rax
  double LowPart; // xmm0_8
  double v12; // xmm0_8
  double v13; // xmm1_8
  unsigned __int64 v14; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp+8h] BYREF

  v3 = (unsigned __int64 *)a3;
  PerformanceCount.QuadPart = 0LL;
  if ( a2 )
  {
    if ( a3 )
      *(_QWORD *)a3 = 0LL;
    _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 42) + 156LL), 0, 0);
    v6 = 0;
    v7 = 3;
    while ( 1 )
    {
      a3 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 42) + 152LL), 0, 0);
      v8 = *(_QWORD *)(*((_QWORD *)this - 42) + 40 * a3 + 24);
      v9 = *(_DWORD *)(*((_QWORD *)this - 42) + 40 * a3 + 60);
      if ( (_DWORD)a3 == _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 42) + 152LL), 0, 0) )
        break;
      if ( !--v7 )
      {
        v6 = -2005139393;
        *a2 = *((_QWORD *)this - 28);
        goto LABEL_12;
      }
    }
    if ( v9 )
    {
      *a2 = v8;
    }
    else
    {
      v6 = -2005139375;
      *a2 = *((_QWORD *)this - 28);
    }
  }
  else
  {
    v6 = -2147467261;
  }
LABEL_12:
  if ( v3 )
  {
    v10 = *v3;
    if ( !*v3 )
    {
      QueryPerformanceCounter(&PerformanceCount);
      LowPart = (double)(int)PerformanceCount.LowPart;
      if ( PerformanceCount.QuadPart < 0 )
        LowPart = LowPart + 1.844674407370955e19;
      v12 = LowPart * 10000000.0;
      v13 = (double)(int)g_u64QPCFrequency;
      if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
        v13 = v13 + 1.844674407370955e19;
      v10 = (unsigned int)(int)(v12 / v13);
      *v3 = v10;
    }
  }
  else
  {
    v10 = 0LL;
  }
  v14 = 0LL;
  if ( a2 )
    v14 = *a2;
  AEWMILOG_POSITION(v14, (char *)this - 400, a3, 7u, 0LL, v14, 0LL, v10);
  if ( a2 )
    *((_QWORD *)this - 28) = *a2;
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_db619c76aadb3ae58938d7fbad798ece_Traceguids, v6);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessClientOutputEndpoint::GetDevicePosition", 0x239u, v6);
  }
  return (unsigned int)v6;
}
