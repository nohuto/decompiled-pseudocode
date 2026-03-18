/*
 * XREFs of ?DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEA_N@Z @ 0x1C009883C
 * Callers:
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C0099150 (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 * Callees:
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C004E4A4 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IW4_VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA_KPEA_N@Z @ 0x1C009833C (-FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IW4_VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA.c)
 *     ?CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEAV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x1C00987C0 (-CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEAV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_P.c)
 *     ?GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C00A1C3C (-GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z.c)
 */

char VIDMM_WORKER_THREAD::DemoteAllocationsToFitGlobalAlloc(__int64 *a1, __int64 a2, VIDMM_DEVICE *a3, ...)
{
  __int64 *v3; // rdi
  int v4; // ecx
  VIDMM_DEVICE *v5; // r10
  __int64 v7; // rax
  unsigned int v8; // r12d
  int v9; // edx
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  __int64 v13; // rdx
  int v14; // r9d
  __int64 v15; // r11
  int v16; // edx
  _QWORD **v17; // r8
  unsigned int v18; // edx
  __int64 *v19; // rsi
  char v20; // cl
  __int64 v21; // r9
  _DWORD *v22; // rax
  unsigned int v23; // r14d
  __int64 v24; // rdx
  __int64 v25; // rcx
  VIDMM_DEVICE *v26; // r10
  _QWORD *v27; // r13
  _QWORD *v28; // r15
  __int64 **v29; // rdi
  __int64 v30; // r9
  __int64 v31; // rax
  _QWORD *v32; // r14
  _QWORD *v33; // rdi
  _QWORD *v34; // rax
  _QWORD *v35; // r13
  _QWORD *v36; // r15
  __int64 **v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rdx
  _QWORD *v44; // rcx
  __int64 v45; // rdx
  _QWORD *v46; // rcx
  unsigned __int64 LargestGap; // rdi
  __int64 v48; // rax
  unsigned __int64 v49; // rdi
  _QWORD *v50; // rax
  int v52; // [rsp+48h] [rbp-59h]
  int v53; // [rsp+4Ch] [rbp-55h]
  unsigned int v54; // [rsp+50h] [rbp-51h]
  unsigned int v55; // [rsp+54h] [rbp-4Dh]
  bool v56; // [rsp+58h] [rbp-49h]
  int v57; // [rsp+5Ch] [rbp-45h]
  unsigned int v58; // [rsp+60h] [rbp-41h] BYREF
  __int64 v59; // [rsp+68h] [rbp-39h]
  __int64 v60; // [rsp+70h] [rbp-31h]
  unsigned int v61; // [rsp+78h] [rbp-29h]
  __int64 *v62; // [rsp+80h] [rbp-21h] BYREF
  _DWORD v63[2]; // [rsp+88h] [rbp-19h] BYREF
  _DWORD *v64; // [rsp+90h] [rbp-11h]
  _QWORD *v65; // [rsp+98h] [rbp-9h]
  __int64 v66; // [rsp+A0h] [rbp-1h]
  char v68; // [rsp+100h] [rbp+5Fh] BYREF
  VIDMM_DEVICE *v69; // [rsp+108h] [rbp+67h]
  __int64 v70; // [rsp+110h] [rbp+6Fh] BYREF
  va_list va; // [rsp+110h] [rbp+6Fh]
  __int64 v72; // [rsp+118h] [rbp+77h]
  _BYTE *v73; // [rsp+120h] [rbp+7Fh]
  va_list va1; // [rsp+128h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v70 = va_arg(va1, _QWORD);
  v72 = va_arg(va1, _QWORD);
  v73 = va_arg(va1, _BYTE *);
  v69 = a3;
  v3 = a1;
  v4 = 0;
  v5 = a3;
  v52 = *(_DWORD *)(a2 + 68);
  *v73 = 0;
  LODWORD(v7) = -*(_DWORD *)(a2 + 72);
  v53 = 0;
  v8 = *(_DWORD *)(a2 + 72) != 0 ? 0 : 6;
  if ( !v52 )
    return v7;
  v9 = v52;
  while ( 2 )
  {
    if ( v8 > 5 )
    {
      LODWORD(v7) = v4;
      v12 = v4++;
      v53 = v4;
      if ( !_bittest(&v9, v7) )
        goto LABEL_85;
      v56 = 1;
    }
    else
    {
      LOBYTE(v7) = 3 * v8;
      v10 = *(_DWORD *)(a2 + 72) >> (6 * v8++);
      v11 = v10 & 0x1F;
      if ( !v11 )
        goto LABEL_84;
      v12 = v11 - 1;
      v56 = ((*(_DWORD *)(a2 + 72) >> (6 * v8)) & 0x20) == 0;
      v5 = v69;
    }
    v13 = *v3;
    v14 = *(_DWORD *)(a2 + 76);
    v52 &= ~(1 << v12);
    v61 = v12 + *(_DWORD *)(472LL * (v14 & 0x3F) + *(_QWORD *)(*v3 + 40168) + 20);
    v7 = *(_QWORD *)(v13 + 3712);
    v66 = v61;
    v15 = *(_QWORD *)(v7 + 8LL * v61);
    v60 = v15;
    if ( (*(_DWORD *)(v15 + 80) & 0x1001) != 0 )
      goto LABEL_83;
    v16 = 0;
    v55 = 0;
    if ( (v14 & 0x100) != 0 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)v5 + 1) + 48LL) & 2) == 0 )
        v16 = 7;
      v55 = v16;
    }
    v17 = (_QWORD **)(v15 + 160);
    v59 = v15 + 160;
LABEL_14:
    v18 = 2013265919;
    v19 = (__int64 *)(*(_QWORD *)(a2 + 16) + (*(_QWORD *)(a2 + 16) >> 2));
    v63[0] = 0;
    v62 = v19;
    v63[1] = 2;
    while ( 2 )
    {
      v58 = 0;
      v20 = *((_BYTE *)v5 + 50) & 0x10;
      v54 = v18;
      LODWORD(v21) = v20 != 0;
      v57 = v21;
      v22 = &v63[v20 != 0];
      v64 = v22;
      do
      {
        v23 = v18;
        LODWORD(v70) = *v22;
        if ( (_DWORD)v70 == 2 )
        {
          if ( (*(_DWORD *)(a2 + 76) & 0x40) != 0 && v18 >= *(_DWORD *)(a2 + 408) - 1 )
            v23 = *(_DWORD *)(a2 + 408) - 1;
          v27 = (_QWORD *)((char *)VIDMM_PROCESS::GetCommitmentInformation(
                                     *((VIDMM_PROCESS **)v5 + 1),
                                     *(_DWORD *)(*(_QWORD *)(*v3 + 24) + 200LL),
                                     *(_DWORD *)(v15 + 20))
                         + 40);
          v28 = (_QWORD *)*v27;
          if ( (_QWORD *)*v27 != v27 )
          {
            do
            {
              v29 = (__int64 **)v28[4];
              v28 = (_QWORD *)*v28;
              if ( (v29 != (__int64 **)v26
                 || (VIDMM_GLOBAL::_Config & 0x40) != 0
                 && (*(_DWORD *)(a2 + 408) >= 0xA0000000 || (*(_DWORD *)(a2 + 76) & 0x40) == 0))
                && ((*((_BYTE *)v26 + 50) & 0x10) == 0 || v29 == (__int64 **)v26) )
              {
                if ( g_IsInternalReleaseOrDbg )
                  *(_QWORD *)(WdLogNewEntry5_WdTrace(v25) + 24) = v29;
                LOBYTE(v70) = 0;
                VIDMM_DEVICE::FaultAllDemotableAllocations(v29, v24, v61, v55, v23, &v58, &v62, (__int64 *)va);
                if ( (_BYTE)v70 && g_IsInternalReleaseOrDbg )
                {
                  v31 = WdLogNewEntry5_WdTrace(v25);
                  v25 = v23;
                  *(_QWORD *)(v31 + 24) = v29;
                  *(_QWORD *)(v31 + 32) = v23;
                }
                v19 = v62;
                if ( !v62 )
                  goto LABEL_66;
                v26 = v69;
              }
            }
            while ( v28 != v27 );
            v17 = (_QWORD **)v59;
            goto LABEL_36;
          }
          v17 = (_QWORD **)v59;
LABEL_37:
          v18 = v54;
          goto LABEL_38;
        }
        v32 = *v17;
        if ( *v17 != v17 )
        {
          do
          {
            v33 = v32 - 3;
            v32 = (_QWORD *)*v32;
            v34 = (_QWORD *)*v33;
            v65 = v33;
            if ( !(unsigned __int8)PsIsSystemProcess(*v34) )
            {
              v35 = v33 + 5;
              v36 = (_QWORD *)v33[5];
              while ( v36 != v35 )
              {
                v37 = (__int64 **)v36[4];
                v36 = (_QWORD *)*v36;
                if ( VIDMM_DEVICE::CanSuspendThisDevice((VIDMM_DEVICE *)v37, v69, v70, v72) )
                {
                  if ( g_IsInternalReleaseOrDbg )
                    *(_QWORD *)(WdLogNewEntry5_WdTrace(v39) + 24) = v37;
                  v68 = 0;
                  VIDMM_DEVICE::FaultAllDemotableAllocations(v37, v38, v61, v55, v54, &v58, &v62, &v68);
                  if ( v68 )
                  {
                    if ( g_IsInternalReleaseOrDbg )
                    {
                      v41 = WdLogNewEntry5_WdTrace(v40);
                      *(_QWORD *)(v41 + 24) = v37;
                      *(_QWORD *)(v41 + 32) = v54;
                    }
                    v42 = v65 + 3;
                    if ( v65[3] )
                    {
                      v43 = *v42;
                      v44 = (_QWORD *)v65[4];
                      if ( *(_QWORD **)(*v42 + 8LL) != v42 || (_QWORD *)*v44 != v42 )
                        __fastfail(3u);
                      *v44 = v43;
                      *(_QWORD *)(v43 + 8) = v44;
                      v45 = v59;
                      v46 = *(_QWORD **)(v59 + 8);
                      if ( *v46 != v59 )
                        __fastfail(3u);
                      *v42 = v59;
                      v42[1] = v46;
                      *v46 = v42;
                      *(_QWORD *)(v45 + 8) = v42;
                    }
                  }
                  v19 = v62;
                  if ( !v62 )
                  {
LABEL_66:
                    LOBYTE(v30) = v56;
                    LargestGap = VIDMM_SEGMENT::GetLargestGap(v60, a2, v55, v30);
                    if ( g_IsInternalReleaseOrDbg )
                    {
                      v48 = WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
                      *(_QWORD *)(v48 + 24) = LargestGap;
                      *(_QWORD *)(v48 + 32) = *(_QWORD *)(a2 + 16);
                    }
                    if ( LargestGap < *(_QWORD *)(a2 + 16) )
                    {
                      v17 = (_QWORD **)v59;
                      v5 = v69;
                      v15 = v60;
                      v3 = a1;
                      goto LABEL_14;
                    }
                    goto LABEL_89;
                  }
                }
              }
            }
            v17 = (_QWORD **)v59;
          }
          while ( v32 != (_QWORD *)v59 );
LABEL_36:
          v3 = a1;
          v15 = v60;
          LODWORD(v21) = v57;
          goto LABEL_37;
        }
LABEL_38:
        v21 = (unsigned int)(v21 + 1);
        v5 = v69;
        v22 = v64 + 1;
        v57 = v21;
        ++v64;
      }
      while ( (unsigned int)v21 < 2 );
      if ( v58 - 1 <= 0xC7FFFFFE )
      {
        if ( v18 == 2013265919 )
        {
          v18 = -939524097;
          if ( v58 <= 0x9FFFFFFF )
            v18 = -1610612737;
          goto LABEL_65;
        }
        if ( v18 == -1610612737 )
        {
          v18 = -939524097;
LABEL_65:
          v5 = v69;
          continue;
        }
      }
      break;
    }
    if ( v19 == (__int64 *)(*(_QWORD *)(a2 + 16) + (*(_QWORD *)(a2 + 16) >> 2)) )
      goto LABEL_74;
    LOBYTE(v21) = v56;
    v49 = VIDMM_SEGMENT::GetLargestGap(v15, a2, 0LL, v21);
    if ( g_IsInternalReleaseOrDbg )
    {
      v50 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
      v50[3] = v66;
      v50[4] = v49;
      v50[5] = *(_QWORD *)(a2 + 16);
    }
    if ( v49 < *(_QWORD *)(a2 + 16) )
    {
LABEL_74:
      LOBYTE(v7) = VIDMM_GLOBAL::_Config;
      if ( (VIDMM_GLOBAL::_Config & 0x40) != 0 && (_DWORD)v72 != 2 )
      {
        if ( *(_DWORD *)(a2 + 408) >= 0xA0000000 || (LODWORD(v7) = *(_DWORD *)(a2 + 76), (v7 & 0x40) == 0) )
        {
          LOBYTE(v7) = (_BYTE)v73;
          if ( !*v73 )
          {
            LOBYTE(v7) = g_DemotedHighPriAllocDebugMode;
            if ( !g_DemotedHighPriAllocDebugMode )
            {
              LOBYTE(v7) = KdRefreshDebuggerNotPresent();
              if ( !(_BYTE)v7 )
              {
                DbgPrintEx(
                  0x65u,
                  0,
                  "\nCouldn't find preferred memory for a high priority allocation 0x%p.\n",
                  (const void *)a2);
                DbgPrintEx(
                  0x65u,
                  0,
                  "\n"
                  "We broke into the debugger to allow a chance for debugging this issue.\n"
                  "\n"
                  "To disable debug breaks on high priority allocation page-in failures, run \"?? dxgmms2!g_DemotedHighPr"
                  "iAllocDebugMode=1\"\n"
                  "or \"ed 0x%p 1\"\n"
                  "To re-attempt the suspend attempt for debugging purposes, run \"?? dxgmms2!g_DemotedHighPriAllocDebugM"
                  "ode=2\"\n"
                  "or \"ed 0x%p 2\"\n"
                  "\n",
                  (const void *)&g_DemotedHighPriAllocDebugMode,
                  (const void *)&g_DemotedHighPriAllocDebugMode);
                __debugbreak();
              }
            }
          }
        }
      }
      v3 = a1;
LABEL_83:
      v9 = v52;
LABEL_84:
      v4 = v53;
LABEL_85:
      if ( v9 )
      {
        v5 = v69;
        continue;
      }
    }
    else
    {
LABEL_89:
      LOBYTE(v7) = (_BYTE)v73;
      *v73 = 1;
    }
    return v7;
  }
}
