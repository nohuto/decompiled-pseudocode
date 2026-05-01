/*
 * XREFs of ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800096F0
 * Callers:
 *     ?RmpPolicyGetCurrentUsageLimits@@YAXPEAU_RM_PARTITION@@PEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x1800056F8 (-RmpPolicyGetCurrentUsageLimits@@YAXPEAU_RM_PARTITION@@PEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REM.c)
 *     ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006868 (-RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU.c)
 *     ?RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180008E4C (-RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONI.c)
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180009070 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009AF0 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010B70 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

void __fastcall RmpPolicyComputeUsageLimits(
        struct _RM_USAGE_LIMIT_SETTINGS *a1,
        struct _RM_REMEDIATION_ACTIONS *a2,
        struct _RM_SYSTEM_MEMORY_METRICS *a3,
        unsigned __int64 a4,
        struct _RM_RESOURCE_USAGE_LIMITS *a5)
{
  unsigned __int64 *v9; // r15
  unsigned __int64 v10; // kr00_8
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // kr10_8
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // kr20_8
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // kr30_8
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // kr40_8
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // kr50_8
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // kr60_8
  bool v33; // zf
  unsigned __int64 v34; // r8
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  unsigned __int64 v42; // r8
  __int16 v43; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v44; // [rsp+32h] [rbp-CEh] BYREF
  unsigned __int64 v45; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v47; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v48; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v49; // [rsp+70h] [rbp-90h]
  __int128 v50; // [rsp+80h] [rbp-80h] BYREF
  __int128 v51; // [rsp+90h] [rbp-70h]
  __int128 v52; // [rsp+A0h] [rbp-60h]
  __int128 v53; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v54; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  void *v56; // [rsp+E0h] [rbp-20h]
  int v57; // [rsp+E8h] [rbp-18h]
  int v58; // [rsp+ECh] [rbp-14h]
  unsigned __int64 *v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]
  __int16 *v63; // [rsp+110h] [rbp+10h]
  __int64 v64; // [rsp+118h] [rbp+18h]
  __int128 *v65; // [rsp+120h] [rbp+20h]
  __int64 v66; // [rsp+128h] [rbp+28h]
  __int16 *v67; // [rsp+130h] [rbp+30h]
  __int64 v68; // [rsp+138h] [rbp+38h]
  char *v69; // [rsp+140h] [rbp+40h]
  __int64 v70; // [rsp+148h] [rbp+48h]
  __int128 *v71; // [rsp+150h] [rbp+50h]
  __int64 v72; // [rsp+158h] [rbp+58h]
  char *v73; // [rsp+160h] [rbp+60h]
  __int64 v74; // [rsp+168h] [rbp+68h]

  v45 = a4;
  if ( *(_OWORD *)a5 != __PAIR128__(*((_QWORD *)a3 + 5), a4) )
  {
    memset_0(&v47, 0, 0x80uLL);
    v9 = (unsigned __int64 *)((char *)a3 + 40);
    v10 = *((unsigned int *)a1 + 5);
    v11 = -1LL;
    *(_QWORD *)&v47 = a4;
    v12 = *v9;
    v13 = -1LL;
    *((_QWORD *)&v47 + 1) = *v9;
    if ( is_mul_ok(a4, v10) )
      v13 = a4 * v10;
    v14 = v13 / 0x64;
    if ( v14 >= a4 - *(_QWORD *)a1 )
      v14 = a4 - *(_QWORD *)a1;
    v15 = -1LL;
    v16 = *((unsigned int *)a1 + 11);
    v17 = -1LL;
    *(_QWORD *)&v50 = v14;
    *((_QWORD *)&v49 + 1) = v14;
    if ( is_mul_ok(a4, v16) )
      v15 = a4 * v16;
    v18 = *((unsigned int *)a1 + 3);
    *((_QWORD *)&v54 + 1) = v15 / 0x64;
    v19 = -1LL;
    if ( is_mul_ok(a4, v18) )
      v17 = a4 * v18;
    v20 = v17 / 0x64;
    if ( is_mul_ok(v12, *((unsigned int *)a1 + 4)) )
      v19 = v12 * *((unsigned int *)a1 + 4);
    v21 = v19 / 0x64;
    if ( v20 >= v21 )
      v20 = v21;
    if ( v14 < v20 )
      v20 = v14;
    v22 = -1LL;
    v23 = *((unsigned int *)a1 + 2);
    *(_QWORD *)&v49 = v20;
    if ( is_mul_ok(a4, v23) )
      v22 = a4 * v23;
    v24 = v22 / 0x64;
    if ( v20 < v24 )
      v24 = v20;
    v25 = -1LL;
    v26 = *((unsigned int *)a1 + 6);
    *((_QWORD *)&v48 + 1) = v24;
    v27 = -1LL;
    if ( is_mul_ok(v12, v26) )
      v25 = v12 * v26;
    v28 = *((unsigned int *)a1 + 7);
    *((_QWORD *)&v51 + 1) = v25 / 0x64;
    *(_QWORD *)&v51 = v25 / 0x64;
    if ( is_mul_ok(v12, v28) )
      v27 = v12 * v28;
    v29 = *((unsigned int *)a1 + 8);
    *(_QWORD *)&v52 = v27 / 0x64;
    v30 = -1LL;
    v32 = v29;
    v31 = v12 * v29;
    if ( is_mul_ok(v12, v32) )
      v30 = v31;
    v33 = *((_DWORD *)a2 + 10) == 0;
    *((_QWORD *)&v52 + 1) = v30 / 0x64;
    if ( !v33 )
    {
      v42 = -1LL;
      if ( is_mul_ok(a4, *((unsigned int *)a1 + 9)) )
        v42 = a4 * *((unsigned int *)a1 + 9);
      *(_QWORD *)&v53 = v42 / 0x64;
    }
    if ( *((_DWORD *)a2 + 11) )
    {
      v34 = -1LL;
      if ( is_mul_ok(v12, *((unsigned int *)a1 + 10)) )
        v34 = v12 * *((unsigned int *)a1 + 10);
      *((_QWORD *)&v53 + 1) = v34 / 0x64;
    }
    if ( *((_DWORD *)a1 + 12) )
    {
      if ( is_mul_ok(v12, *((unsigned int *)a1 + 12)) )
        v11 = v12 * *((unsigned int *)a1 + 12);
      *(_QWORD *)&v54 = v11 / 0x64;
    }
    if ( hProvider > 4u && (qword_1800670D0 & 1) != 0 && (qword_1800670D8 & 1) == qword_1800670D8 )
    {
      v60 = 8LL;
      v59 = &v45;
      v61 = v9;
      v63 = &v43;
      v65 = &v48;
      v67 = &v44;
      v69 = (char *)&v50 + 8;
      v71 = &v53;
      v73 = (char *)&v53 + 8;
      v62 = 8LL;
      v43 = 5;
      v64 = 2LL;
      v66 = 40LL;
      v44 = 5;
      v68 = 2LL;
      v70 = 40LL;
      v72 = 8LL;
      v74 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800670C8;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180058BAB - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_1800670C8;
      v56 = &unk_180058BB6;
      UserData.Reserved = 2;
      v57 = 164;
      v58 = 1;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
    }
    v35 = v48;
    *(_OWORD *)a5 = v47;
    v36 = v49;
    *((_OWORD *)a5 + 1) = v35;
    v37 = v50;
    *((_OWORD *)a5 + 2) = v36;
    v38 = v51;
    *((_OWORD *)a5 + 3) = v37;
    v39 = v52;
    *((_OWORD *)a5 + 4) = v38;
    v40 = v53;
    *((_OWORD *)a5 + 5) = v39;
    v41 = v54;
    *((_OWORD *)a5 + 6) = v40;
    *((_OWORD *)a5 + 7) = v41;
  }
}
