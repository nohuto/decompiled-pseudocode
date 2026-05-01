/*
 * XREFs of ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x180011EC0
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000FAF0 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010B70 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     ?EvaluatePoolResourceRequest@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_NPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAW4_RM_REVOKE_POLICY@@@Z @ 0x180011DFC (-EvaluatePoolResourceRequest@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_NPEAV-$list@.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18001F8EC (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18003B898 (-RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x18003B8E8 (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::EvaluateResourceRequest(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        struct _RM_SYSTEM_MEMORY_METRICS *a5,
        __int64 a6,
        char *a7,
        _BYTE *a8)
{
  __int64 result; // rax
  __int64 v13; // rdx
  int v14; // ebp
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdi
  unsigned int v17; // r10d
  __int64 v18; // r12
  __int64 v19; // rbx
  unsigned int v20; // r14d
  __int64 v21; // r15
  _BYTE *v22; // r15
  __int64 v23; // rbp
  unsigned int *v24; // rsi
  int v25; // r12d
  _QWORD *v26; // rax
  _QWORD *i; // rcx
  __int64 v28; // r9
  __int64 v29; // rcx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // r9
  int v35; // ebx
  unsigned int *v36; // r11
  unsigned __int64 v37; // rdi
  __int64 v38; // rdx
  int v39; // r11d
  unsigned int *v40; // r10
  unsigned __int64 v41; // rbx
  __int64 v42; // rdx
  unsigned __int64 v43; // [rsp+30h] [rbp-48h]
  unsigned __int64 v46; // [rsp+A8h] [rbp+30h]

  result = ExecutionModel::ResourceSet::EvaluatePoolResourceRequest(a1, a3, a7, *(_QWORD *)(a6 + 8), (int *)(a6 + 32));
  if ( (int)result >= 0 )
  {
    v13 = a1;
    v14 = -1;
    v15 = *(_QWORD *)(a1 + 1576);
    if ( v15 == -1LL || a2 == -1 )
    {
      v16 = -1LL;
    }
    else
    {
      v16 = v15 + a2;
      if ( v15 + a2 < v15 )
        return 3489661077LL;
    }
    v17 = 0;
    v18 = *(_QWORD *)(a1 + 1440);
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 1432) + 112LL) + 144LL;
    if ( a3 == 1 )
    {
      v14 = 1;
    }
    else if ( a3 )
    {
      if ( a3 == 2 )
        v14 = 2;
    }
    else
    {
      v14 = 0;
    }
    v20 = *(_DWORD *)(a1 + 1408);
    v21 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 208LL);
    if ( !v16 )
      goto LABEL_8;
    if ( v16 + *((_QWORD *)a5 + 2) + 1 < v16 )
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1432) + 112LL) + 184LL) = 0;
LABEL_33:
      *a8 = 0;
      return 2147746304LL;
    }
    if ( *((_QWORD *)a5 + 1) < v16 && *(char *)(a1 + 1498) >= 0 )
      goto LABEL_33;
    v43 = *(_QWORD *)(a4 + 48);
    if ( (int)RmpEmPriorityCompare(v20, *(unsigned int *)(v21 + 516)) >= 0 )
      v32 = v30;
    else
      v32 = *(_QWORD *)(a4 + 32);
    v46 = v32;
    if ( v31 >= v30 || v31 >= v32 )
    {
      RmpPolicyEnsureMetricsForAcquire(*(struct _RM_PARTITION **)(a6 + 16), a5);
      if ( (int)RmpEmPriorityCompare(v20, *(unsigned int *)(v21 + 516)) < 0 )
      {
        v33 = v16 + *((_QWORD *)a5 + 2) - *((_QWORD *)a5 + 4);
        if ( v33 >= v46 )
        {
          if ( v14 == 2 )
            goto LABEL_33;
          RmpPolicyGenerateReclaimListForCommit(*(_QWORD *)(a6 + 16), v19, v18, v33 - v46, v20, 1);
          *(_DWORD *)(a6 + 36) = 1;
LABEL_51:
          v22 = a8;
          v17 = 0;
          v13 = a1;
          *a8 = 1;
LABEL_9:
          if ( *a7 )
          {
            *(_DWORD *)(v19 + 40) = v17;
            *(_DWORD *)(a6 + 36) = v17;
            *v22 = 0;
          }
          else if ( !*v22 )
          {
            v23 = *(_QWORD *)(v13 + 184);
            v24 = (unsigned int *)(v13 + 1592);
            v25 = *(_DWORD *)(v13 + 1408);
            v26 = *(_QWORD **)(v23 + 160);
            for ( i = v26; ; i = (_QWORD *)*i )
            {
              if ( i == (_QWORD *)(v23 + 160) )
              {
                while ( v26 != (_QWORD *)(v23 + 160) )
                {
                  v29 = v26[2];
                  if ( *(_DWORD *)(v29 + 1400) == 1 && *(_DWORD *)(v29 + 1408) < v25 )
                  {
                    v39 = 0;
                    v40 = (unsigned int *)(a1 + 1568);
                    while ( 1 )
                    {
                      if ( *((_QWORD *)v40 + 1) )
                      {
                        v41 = *v40;
                        if ( *(_QWORD *)(v29 + 24LL * (int)v41 + 200) )
                        {
                          v42 = *(_QWORD *)(v23 + 1392);
                          if ( !_bittest64(&v42, v41) )
                            break;
                        }
                      }
                      ++v39;
                      v40 += 6;
                      if ( v39 )
                        goto LABEL_17;
                    }
                    if ( a3 == 1 )
                    {
                      *v22 = 1;
                      return 0LL;
                    }
                    return 2147746304LL;
                  }
LABEL_17:
                  v26 = (_QWORD *)*v26;
                }
                return 0LL;
              }
              v28 = i[2];
              if ( *(_DWORD *)(v28 + 1400) == 1 && *(_DWORD *)(v28 + 1408) < v25 )
                break;
LABEL_14:
              ;
            }
            v35 = 0;
            v36 = v24;
            while ( 1 )
            {
              if ( *((_QWORD *)v36 + 1) )
              {
                v37 = *v36;
                if ( *(_QWORD *)(v28 + 24LL * (int)v37 + 200) )
                {
                  v38 = *(_QWORD *)(v23 + 1392);
                  if ( !_bittest64(&v38, v37) )
                    break;
                }
              }
              ++v35;
              v36 += 6;
              if ( v35 )
                goto LABEL_14;
            }
            if ( a3 == 1 )
            {
              *a7 = 1;
              return 0LL;
            }
            return 2147746304LL;
          }
          return v17;
        }
      }
      v34 = v16 + *((_QWORD *)a5 + 2);
      if ( v34 >= v43 )
      {
        if ( v14 == 2 )
          goto LABEL_33;
        RmpPolicyGenerateReclaimListForCommit(*(_QWORD *)(a6 + 16), v19, v18, v34 - v43 + 1, v20, 2);
        *(_DWORD *)(a6 + 36) = 2;
        goto LABEL_51;
      }
      v17 = 0;
    }
    v13 = a1;
LABEL_8:
    v22 = a8;
    *(_DWORD *)(a6 + 36) = v17;
    *(_DWORD *)(v19 + 40) = v17;
    *a8 = 0;
    goto LABEL_9;
  }
  return result;
}
