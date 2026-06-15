/*
 * XREFs of ?GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x14005E700
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?AEWMILOG_GENERIC@@YAXKPEAXEE_K111NNNN@Z @ 0x140053514 (-AEWMILOG_GENERIC@@YAXKPEAXEE_K111NNNN@Z.c)
 *     ?LogGetPosition@CSpatialCrossProcessEndpointTraceLogger@@QEAAX_K00000@Z @ 0x14005A208 (-LogGetPosition@CSpatialCrossProcessEndpointTraceLogger@@QEAAX_K00000@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AE50 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsValidFlags@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005D710 (-IsValidFlags@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?IsTimestampInitialized@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005EC04 (-IsTimestampInitialized@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?IsValidTimestamp@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005EC2C (-IsValidTimestamp@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
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
  unsigned __int64 v10; // r9
  double v11; // xmm0_8
  double v12; // xmm0_8
  double v13; // xmm1_8
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
  __int64 v25; // rax
  unsigned __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // r8
  unsigned __int64 v35; // [rsp+38h] [rbp-99h]
  unsigned __int64 v36; // [rsp+38h] [rbp-99h]
  const GUID *v37; // [rsp+68h] [rbp-69h]
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp-61h] BYREF
  unsigned __int64 v39; // [rsp+78h] [rbp-59h] BYREF
  signed __int64 v40; // [rsp+80h] [rbp-51h] BYREF
  _QWORD v41[3]; // [rsp+88h] [rbp-49h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-31h]
  float v43; // [rsp+A8h] [rbp-29h]
  int v44; // [rsp+ACh] [rbp-25h]
  unsigned __int64 v45[2]; // [rsp+B0h] [rbp-21h] BYREF
  unsigned __int64 v46; // [rsp+C0h] [rbp-11h]

  PerformanceCount.QuadPart = 0LL;
  memset_0(v45, 0, 0x28uLL);
  memset_0(v41, 0, 0x28uLL);
  v6 = 0LL;
  v7 = 0LL;
  v39 = 0LL;
  LOBYTE(v8) = 0;
  v40 = 0LL;
  v37 = 0LL;
  if ( !*((_BYTE *)this - 848) )
  {
    v9 = -2005139437;
LABEL_55:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientOutputEndpoint::GetPosition", 508, v9);
    return (unsigned int)v9;
  }
  if ( !a2 )
  {
    v9 = -2147467261;
    goto LABEL_10;
  }
  if ( a3 )
    *a3 = 0LL;
  if ( !CSpatialCrossProcessBaseEndpoint::IsValidFlags((CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 920)) )
  {
    v9 = -2005139387;
LABEL_9:
    v7 = 0LL;
    goto LABEL_10;
  }
  v9 = (*(__int64 (__fastcall **)(char *, unsigned __int64 *, _QWORD *, unsigned __int64 *, signed __int64 *))(*((_QWORD *)this - 115) + 96LL))(
         (char *)this - 920,
         v45,
         v41,
         &v39,
         &v40);
  if ( v9 < 0 )
    goto LABEL_9;
  if ( !CSpatialCrossProcessBaseEndpoint::IsTimestampInitialized((CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 920)) )
  {
    *a2 = v39;
    goto LABEL_9;
  }
  if ( !CSpatialCrossProcessBaseEndpoint::IsValidTimestamp((CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 920)) )
  {
    v14 = v40;
LABEL_22:
    *a2 = v14;
    goto LABEL_9;
  }
  if ( !v44 )
  {
    v9 = -2005139375;
    *a2 = *((_QWORD *)this - 99);
    goto LABEL_9;
  }
  if ( v41[0] < v46 + v45[0] )
  {
    v14 = v39;
    goto LABEL_22;
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
  if ( v8 < v42 )
  {
    v18 = 0LL;
  }
  else
  {
    v18 = v8 - v42;
    v37 = (const GUID *)(v8 - v42);
  }
  v19 = *((float *)this - 203);
  v20 = v41[0] + (unsigned int)(int)(v43 * (double)(int)v18 / 10000000.0 + 0.5) - v46 - v45[0];
  if ( v19 != v43 )
  {
    v21 = 0LL;
    v22 = v19 * (double)(int)v20 / v43 + 0.5;
    if ( v22 >= 9.223372036854776e18 )
    {
      v22 = v22 - 9.223372036854776e18;
      if ( v22 < 9.223372036854776e18 )
        v21 = 0x8000000000000000uLL;
    }
    v20 = v21 + (unsigned int)(int)v22;
  }
  v6 = v39 + v20;
  v23 = v40;
  if ( v6 < v40 )
    v23 = v6;
  *a2 = v23;
  v24 = *((_QWORD *)this - 99);
  if ( v23 < v24 )
  {
    AEWMILOG_GENERIC(v23, (char *)this - 920, v18, 8u, v23, v24, v24 - v23, 0LL, 0.0, 0.0, 0.0, 0.0);
    *a2 = *((_QWORD *)this - 99);
  }
  v7 = v37;
LABEL_10:
  if ( a3 )
  {
    v10 = *a3;
    if ( !*a3 )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v11 = (double)(int)PerformanceCount.LowPart;
      if ( PerformanceCount.QuadPart < 0 )
        v11 = v11 + 1.844674407370955e19;
      v12 = v11 * 10000000.0;
      v13 = (double)(int)g_u64QPCFrequency;
      if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
        v13 = v13 + 1.844674407370955e19;
      v8 = (unsigned int)(int)(v12 / v13);
      *a3 = v8;
      v10 = v8;
    }
  }
  else
  {
    v10 = 0LL;
  }
  v25 = *((_QWORD *)this - 96);
  if ( a2 )
    v26 = *a2 * *(unsigned __int16 *)(v25 + 12);
  else
    v26 = 0LL;
  v27 = *(unsigned __int16 *)(v25 + 12);
  v28 = v27 * *(_QWORD *)(*((_QWORD *)this - 5) + 40LL);
  AEWMILOG_GENERIC(
    v28,
    (char *)this - 920,
    v26,
    6u,
    v26,
    v10,
    v6 * v27,
    v39 * v27,
    (double)(int)(v40 * *(unsigned __int16 *)(v25 + 12)),
    (double)(int)v28,
    v43,
    *((float *)this - 203));
  if ( a2 )
  {
    v29 = *a2;
    v30 = *((_QWORD *)this - 99);
    if ( *a2 < v30 )
    {
      v35 = *(unsigned __int16 *)(*((_QWORD *)this - 96) + 12LL);
      AEWMILOG_GENERIC(v35, (char *)this - 920, v29, 8u, v29, v30, v35, 0LL, 0.0, 0.0, 0.0, 0.0);
      v29 = *a2;
    }
    v31 = *((_QWORD *)this - 96);
    v32 = v45[0];
    *((_QWORD *)this - 99) = v29;
    v33 = v46;
    v36 = *(unsigned __int16 *)(v31 + 12) * *a2;
    *a2 = v36;
    CSpatialCrossProcessEndpointTraceLogger::LogGetPosition(
      (CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 536),
      v32,
      v33,
      v7,
      *((_QWORD *)this - 99),
      v8,
      v36);
  }
  if ( v9 < 0 )
    goto LABEL_55;
  return (unsigned int)v9;
}
