/*
 * XREFs of ?GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x14005E300
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     memset @ 0x14001DC2C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AEWMILOG_GENERIC@@YAXKPEAXEE_K111NNNN@Z @ 0x140053A34 (-AEWMILOG_GENERIC@@YAXKPEAXEE_K111NNNN@Z.c)
 *     ?LogGetPosition@CSpatialCrossProcessEndpointTraceLogger@@QEAAX_K00000@Z @ 0x140059F40 (-LogGetPosition@CSpatialCrossProcessEndpointTraceLogger@@QEAAX_K00000@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AB90 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsValidFlags@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005D360 (-IsValidFlags@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?IsTimestampInitialized@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005E804 (-IsTimestampInitialized@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?IsValidTimestamp@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005E830 (-IsValidTimestamp@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetPosition(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  signed __int64 v6; // r14
  const GUID *v7; // r13
  signed __int64 v8; // r12
  int v9; // esi
  double v10; // xmm0_8
  double v11; // xmm0_8
  double v12; // xmm1_8
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rax
  double LowPart; // xmm0_8
  double v16; // xmm0_8
  double v17; // xmm1_8
  __int64 v18; // r8
  float v19; // xmm0_4
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rax
  double v22; // xmm2_8
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // r8
  const GUID *v29; // r8
  __int64 v30; // rdx
  unsigned __int64 v32; // [rsp+38h] [rbp-99h]
  unsigned __int64 v33; // [rsp+38h] [rbp-99h]
  const GUID *v34; // [rsp+68h] [rbp-69h]
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp-61h] BYREF
  unsigned __int64 v36; // [rsp+78h] [rbp-59h] BYREF
  signed __int64 v37; // [rsp+80h] [rbp-51h] BYREF
  _QWORD v38[5]; // [rsp+88h] [rbp-49h] BYREF
  unsigned __int64 v39[5]; // [rsp+B0h] [rbp-21h] BYREF

  PerformanceCount.QuadPart = 0LL;
  memset(v39, 0, sizeof(v39));
  memset(v38, 0, sizeof(v38));
  v6 = 0LL;
  v7 = 0LL;
  v36 = 0LL;
  LOBYTE(v8) = 0;
  v37 = 0LL;
  v34 = 0LL;
  if ( !*((_BYTE *)this - 840) )
  {
    v9 = -2005139437;
LABEL_56:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientOutputEndpoint::GetPosition", 485, v9);
    return (unsigned int)v9;
  }
  if ( !a2 )
  {
    v9 = -2147467261;
    goto LABEL_10;
  }
  if ( a3 )
    *a3 = 0LL;
  if ( !CSpatialCrossProcessBaseEndpoint::IsValidFlags((CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 912)) )
  {
    v9 = -2005139387;
LABEL_9:
    v7 = 0LL;
    goto LABEL_10;
  }
  v9 = (*(__int64 (__fastcall **)(char *, unsigned __int64 *, _QWORD *, unsigned __int64 *, signed __int64 *))(*((_QWORD *)this - 114) + 96LL))(
         (char *)this - 912,
         v39,
         v38,
         &v36,
         &v37);
  if ( v9 < 0 )
    goto LABEL_9;
  if ( !CSpatialCrossProcessBaseEndpoint::IsTimestampInitialized((CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 912)) )
  {
    *a2 = v36;
    goto LABEL_9;
  }
  if ( !CSpatialCrossProcessBaseEndpoint::IsValidTimestamp((CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 912)) )
  {
    v14 = v37;
LABEL_23:
    *a2 = v14;
    goto LABEL_9;
  }
  if ( !HIDWORD(v38[4]) )
  {
    v9 = -2005139375;
    *a2 = *((_QWORD *)this - 98);
    goto LABEL_9;
  }
  if ( v38[0] < v39[2] + v39[0] )
  {
    v14 = v36;
    goto LABEL_23;
  }
  QueryPerformanceCounter(&PerformanceCount);
  LowPart = (double)(int)PerformanceCount.LowPart;
  if ( PerformanceCount.QuadPart < 0 )
    LowPart = LowPart + 1.844674407370955e19;
  v16 = LowPart * 10000000.0;
  v17 = (double)(int)g_u64QPCFrequency;
  if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
    v17 = v17 + 1.844674407370955e19;
  v8 = (unsigned int)(int)(v16 / v17);
  if ( a3 )
    *a3 = v8;
  if ( v8 < v38[3] )
  {
    v18 = 0LL;
  }
  else
  {
    v18 = v8 - v38[3];
    v34 = (const GUID *)(v8 - v38[3]);
  }
  v19 = *((float *)this - 201);
  v20 = v38[0] + (unsigned int)(int)(*(float *)&v38[4] * (double)(int)v18 / 10000000.0 + 0.5) - v39[2] - v39[0];
  if ( v19 != *(float *)&v38[4] )
  {
    v21 = 0LL;
    v22 = v19 * (double)(int)v20 / *(float *)&v38[4] + 0.5;
    if ( v22 >= 9.223372036854776e18 )
    {
      v22 = v22 - 9.223372036854776e18;
      if ( v22 < 9.223372036854776e18 )
        v21 = 0x8000000000000000uLL;
    }
    v20 = v21 + (unsigned int)(int)v22;
  }
  v6 = v36 + v20;
  v23 = v37;
  if ( v6 < v37 )
    v23 = v6;
  *a2 = v23;
  v24 = *((_QWORD *)this - 98);
  if ( v23 < v24 )
  {
    AEWMILOG_GENERIC(v23, (char *)this - 912, v18, 8, v23, v24, v24 - v23, 0LL, 0.0, 0.0, 0.0, 0.0);
    *a2 = *((_QWORD *)this - 98);
  }
  v7 = v34;
LABEL_10:
  if ( a3 )
  {
    if ( !*a3 )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v10 = (double)(int)PerformanceCount.LowPart;
      if ( PerformanceCount.QuadPart < 0 )
        v10 = v10 + 1.844674407370955e19;
      v11 = v10 * 10000000.0;
      v12 = (double)(int)g_u64QPCFrequency;
      if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
        v12 = v12 + 1.844674407370955e19;
      v8 = (unsigned int)(int)(v11 / v12);
      *a3 = v8;
    }
    v13 = *a3;
  }
  else
  {
    v13 = 0LL;
  }
  if ( a2 )
    v25 = *a2 * *(unsigned __int16 *)(*((_QWORD *)this - 95) + 12LL);
  else
    v25 = 0LL;
  v26 = *(unsigned __int16 *)(*((_QWORD *)this - 95) + 12LL);
  v27 = v26 * *(_QWORD *)(*((_QWORD *)this - 4) + 40LL);
  AEWMILOG_GENERIC(
    v27,
    (char *)this - 912,
    v25,
    6,
    v25,
    v13,
    v6 * v26,
    v36 * v26,
    (double)(int)(v37 * *(unsigned __int16 *)(*((_QWORD *)this - 95) + 12LL)),
    (double)(int)v27,
    *(float *)&v38[4],
    *((float *)this - 201));
  if ( a2 )
  {
    v28 = *((_QWORD *)this - 98);
    if ( *a2 < v28 )
    {
      v32 = *(unsigned __int16 *)(*((_QWORD *)this - 95) + 12LL);
      AEWMILOG_GENERIC(v32, (char *)this - 912, v28, 8, *a2, v28, v32, 0LL, 0.0, 0.0, 0.0, 0.0);
    }
    v29 = (const GUID *)v39[2];
    v30 = v39[0];
    *((_QWORD *)this - 98) = *a2;
    v33 = *(unsigned __int16 *)(*((_QWORD *)this - 95) + 12LL) * *a2;
    *a2 = v33;
    CSpatialCrossProcessEndpointTraceLogger::LogGetPosition(
      (CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 528),
      v30,
      v29,
      v7,
      *((_QWORD *)this - 98),
      v8,
      v33);
  }
  if ( v9 < 0 )
    goto LABEL_56;
  return (unsigned int)v9;
}
