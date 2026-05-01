/*
 * XREFs of ?RmpTelemetryLogPartitionState@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180004290
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800046A8 (-RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpSystemQueryCompressionProcessPrivateWorkingSet@@YAJPEA_K@Z @ 0x1800046C8 (-RmpSystemQueryCompressionProcessPrivateWorkingSet@@YAJPEA_K@Z.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x18000475C (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180008A64 (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180008F30 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpTelemetryLogPartitionState(struct _RM_PARTITION *a1, void *a2)
{
  char *v2; // rdi
  unsigned int v3; // ebx
  struct _RM_PARTITION *v4; // r13
  int v5; // esi
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  unsigned int v8; // r12d
  unsigned int v9; // ecx
  __int64 v10; // r9
  __int64 v11; // r11
  int v12; // edx
  __int64 v13; // r8
  unsigned int v14; // eax
  unsigned __int64 v15; // rcx
  unsigned int v16; // edx
  int v17; // ecx
  unsigned int v18; // eax
  unsigned __int64 v19; // rcx
  unsigned int v20; // edx
  int v21; // ecx
  const GUID *v22; // r9
  __int64 v23; // r10
  unsigned __int64 v24; // rdi
  const GUID *v25; // r8
  int *v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  unsigned int v29; // ebx
  const GUID *v30; // r8
  const GUID *v31; // r9
  const GUID *v32; // r8
  const GUID *v33; // r9
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // r11
  unsigned __int64 v36; // rax
  bool v37; // cc
  unsigned __int64 v39; // rax
  unsigned int v40; // ecx
  int v41; // eax
  unsigned int v42; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v43; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v44; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v45; // [rsp+40h] [rbp-C0h] BYREF
  int v46; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int64 v47; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v48; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v49; // [rsp+58h] [rbp-A8h]
  __int64 v50; // [rsp+60h] [rbp-A0h]
  __int64 v51; // [rsp+68h] [rbp-98h]
  __int64 v52; // [rsp+70h] [rbp-90h]
  __int64 v53; // [rsp+78h] [rbp-88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 *v55; // [rsp+A0h] [rbp-60h]
  __int64 v56; // [rsp+A8h] [rbp-58h]
  unsigned int *v57; // [rsp+B0h] [rbp-50h]
  __int64 v58; // [rsp+B8h] [rbp-48h]
  unsigned int *v59; // [rsp+C0h] [rbp-40h]
  __int64 v60; // [rsp+C8h] [rbp-38h]
  unsigned int *v61; // [rsp+D0h] [rbp-30h]
  __int64 v62; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v63; // [rsp+E0h] [rbp-20h]
  __int64 v64; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR v65; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v66; // [rsp+100h] [rbp+0h]
  unsigned __int64 *v67; // [rsp+110h] [rbp+10h]
  unsigned __int64 v68; // [rsp+118h] [rbp+18h]
  unsigned int *v69; // [rsp+120h] [rbp+20h]
  unsigned __int64 v70; // [rsp+128h] [rbp+28h]
  unsigned int *v71; // [rsp+130h] [rbp+30h]
  unsigned __int64 v72; // [rsp+138h] [rbp+38h]
  int *v73; // [rsp+140h] [rbp+40h]
  unsigned __int64 v74; // [rsp+148h] [rbp+48h]
  unsigned int *v75; // [rsp+150h] [rbp+50h]
  unsigned __int64 v76; // [rsp+158h] [rbp+58h]

  v2 = (char *)a1 + 144;
  v3 = 0;
  v44 = (unsigned __int64)a1;
  *((_WORD *)a1 + 94) = 0;
  v4 = a1;
  RmpPolicyPopulateActivityHostMetrics(a1, 0LL, (char *)a1 + 144, 10LL, RmpPolicyFilterActivityHostWithFlags, 2LL);
  v5 = 0;
  v6 = 0;
  v48 = 0LL;
  v7 = 0;
  v49 = 0LL;
  v8 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  if ( *((_DWORD *)v2 + 9) )
  {
    do
    {
      v9 = RmpActivityHostIsRunnable(
             *(struct _RM_ACTIVITY_HOST **)(*(_QWORD *)v2 + ((unsigned __int64)v3 << 6) + 48),
             1u) != 0
         ? 2
         : 0;
      v13 = v12 | v9;
      if ( *(char *)(v11 + 866) >= 0 )
        v13 = v9;
      ++*((_DWORD *)&v48 + v13);
      if ( (*(_BYTE *)(v10 + 62) & 2) != 0 )
      {
        v14 = *((_DWORD *)&v50 + v13);
        v15 = *(_QWORD *)v10 >> 20;
        if ( v15 > 0xFFFFFFFF )
          LODWORD(v15) = -1;
        v16 = v15 + v14;
        v17 = -1;
        if ( v16 >= v14 )
          v17 = v16;
        *((_DWORD *)&v50 + v13) = v17;
      }
      if ( (*(_BYTE *)(v10 + 62) & 8) != 0 )
      {
        v18 = *((_DWORD *)&v52 + v13);
        v19 = *(_QWORD *)(v10 + 24) >> 20;
        if ( v19 > 0xFFFFFFFF )
          LODWORD(v19) = -1;
        v20 = v19 + v18;
        v21 = -1;
        if ( v20 >= v18 )
          v21 = v20;
        *((_DWORD *)&v52 + v13) = v21;
      }
      if ( (_DWORD)v13 == 1 && RmpActivityHostQueryCommitDebt((struct _RM_ACTIVITY_HOST *)v11, &v47) >= 0 )
      {
        v39 = v47 >> 20;
        if ( v47 >> 20 > 0xFFFFFFFF )
          LODWORD(v39) = -1;
        v40 = v39 + v8;
        v41 = -1;
        if ( v40 >= v8 )
          v41 = v40;
        v8 = v41;
      }
      ++v3;
    }
    while ( v3 < *((_DWORD *)v2 + 9) );
    v7 = v51;
    v5 = v50;
    v6 = v53;
    v4 = (struct _RM_PARTITION *)v44;
  }
  RmpSystemMemoryMetricsQuery(v4, (struct _RM_SYSTEM_MEMORY_METRICS *)&v65);
  LODWORD(v22) = hProvider;
  v23 = 4LL;
  v24 = v66 >> 20;
  if ( v66 >> 20 > 0xFFFFFFFF )
    LODWORD(v24) = -1;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
  {
    v45 = v24;
    v55 = (unsigned __int64 *)&v45;
    v46 = HIDWORD(v51);
    v57 = (unsigned int *)&v46;
    v42 = HIDWORD(v50);
    v59 = &v42;
    v61 = &v43;
    v63 = &v44;
    v56 = v23;
    v58 = v23;
    v60 = v23;
    v43 = v7;
    v62 = v23;
    LODWORD(v44) = v5;
    v64 = v23;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180055AFE, v25, v22, 7u, &pData);
    LODWORD(v22) = hProvider;
    v23 = 4LL;
  }
  v26 = (int *)&v48;
  v27 = v23;
  do
  {
    v28 = *v26;
    if ( (unsigned int)*v26 > 0xFF )
      v28 = 255;
    *v26 = v28;
    v26 = (int *)((char *)v26 + v23);
    --v27;
  }
  while ( v27 );
  v29 = HIDWORD(v49) | ((HIDWORD(v48) | (((unsigned int)v49 | ((_DWORD)v48 << 8)) << 8)) << 8);
  if ( (unsigned int)v22 > (unsigned int)v23 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
  {
    LODWORD(v44) = v24;
    v55 = &v44;
    v57 = &v43;
    v59 = &v42;
    v56 = 4LL;
    v43 = v8;
    v58 = 4LL;
    v42 = v29;
    v60 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180055A91, v30, v31, 5u, &pData);
  }
  RmpSystemQueryCompressionProcessPrivateWorkingSet(&v44);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
  {
    v36 = v70 >> 20;
    v37 = v70 >> 20 <= v35;
    v68 = v34;
    v70 = v34;
    if ( !v37 )
      LODWORD(v36) = v35;
    v42 = v6;
    LODWORD(v44) = v36;
    v67 = &v44;
    v43 = HIDWORD(v53);
    v69 = &v43;
    v71 = &v42;
    v73 = &v46;
    v75 = &v45;
    v72 = v34;
    v46 = (int)v33;
    v74 = v34;
    v45 = v29;
    v76 = v34;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180055BAE, v32, v33, 7u, &v65);
  }
  return 0LL;
}
