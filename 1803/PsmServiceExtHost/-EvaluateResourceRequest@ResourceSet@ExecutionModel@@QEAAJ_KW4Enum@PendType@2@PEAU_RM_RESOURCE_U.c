/*
 * XREFs of ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x1800204B0
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18001E320 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x18001F7C0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18001EA30 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x18001EE20 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x18002346C (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F5A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18003F5B0 (--_U@YAPEAX_K@Z.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18004E8F0 (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18005A1A8 (-RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x18005A1F8 (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
 */

__int64 ExecutionModel::ResourceSet::EvaluateResourceRequest(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _QWORD *a5,
        ...)
{
  __int64 v5; // rsi
  __int64 v6; // r12
  bool v7; // zf
  __int64 v9; // r11
  __int64 v10; // rdx
  int v11; // r14d
  __int64 v12; // r15
  ExecutionModel::BaseResourceSet *v13; // rdi
  ExecutionModel::_ResourceInfo *v14; // rax
  ExecutionModel::_ResourceInfo *v15; // rbx
  int v16; // edi
  char v17; // bl
  int v18; // eax
  char *v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rdi
  int v24; // ebp
  unsigned int v25; // r12d
  __int64 v26; // r15
  char v27; // al
  char *v28; // r15
  char *v29; // r14
  __int64 v30; // rbp
  int v31; // r12d
  _QWORD *v32; // rax
  _QWORD *i; // rcx
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v37; // rdx
  struct _RM_SYSTEM_MEMORY_METRICS *v38; // r8
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // r10
  __int64 v41; // r11
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // r9
  __int64 v44; // r9
  unsigned __int64 v45; // r9
  int v46; // ebx
  unsigned int *v47; // r11
  unsigned __int64 v48; // rdi
  __int64 v49; // rdx
  int v50; // r11d
  unsigned int *v51; // r10
  unsigned __int64 v52; // rbx
  __int64 v53; // rdx
  char v54[8]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v55; // [rsp+58h] [rbp-50h]
  unsigned int *v56; // [rsp+60h] [rbp-48h]
  int v58; // [rsp+C0h] [rbp+18h]
  __int64 v60; // [rsp+D8h] [rbp+30h] BYREF
  va_list va; // [rsp+D8h] [rbp+30h]
  char *v62; // [rsp+E0h] [rbp+38h]
  char *v63; // [rsp+E8h] [rbp+40h]
  va_list va1; // [rsp+F0h] [rbp+48h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v60 = va_arg(va1, _QWORD);
  v62 = va_arg(va1, char *);
  v63 = va_arg(va1, char *);
  v58 = a3;
  v5 = v60;
  v6 = a1 + 1584;
  v7 = *(_DWORD *)(a1 + 1584) == 2;
  v9 = a4;
  v56 = (unsigned int *)(a1 + 1584);
  v10 = a1;
  v11 = 1;
  v12 = *(_QWORD *)(v60 + 8);
  if ( v7 )
  {
    v13 = *(ExecutionModel::BaseResourceSet **)(a1 + 184);
    v14 = (ExecutionModel::_ResourceInfo *)operator new[](0x18uLL);
    v15 = v14;
    if ( v14 )
    {
      ExecutionModel::_ResourceInfo::_ResourceInfo(v14);
      *(_OWORD *)v15 = *(_OWORD *)v6;
      *((_QWORD *)v15 + 2) = *(_QWORD *)(v6 + 16);
      v16 = ExecutionModel::BaseResourceSet::RecursiveVisit(v13, 0, 1u, v15, 0, 1, (__int64 *)va, v54, v12, 0LL);
      if ( v16 >= 0 )
        v16 = 0;
      operator delete(v15);
    }
    else
    {
      v16 = -2147024882;
    }
    if ( v16 >= 0 )
    {
      if ( v54[0] )
      {
        v17 = v60;
        if ( !(_BYTE)v60 )
        {
LABEL_9:
          a3 = v58;
LABEL_10:
          v18 = 0;
LABEL_11:
          v10 = a1;
          v9 = a4;
          goto LABEL_12;
        }
      }
      else
      {
        a3 = v58;
        if ( v58 != 1 || *(_QWORD *)(v6 + 8) > *(_QWORD *)(*(_QWORD *)(a1 + 24) + 56LL) )
        {
          v17 = 0;
          v16 = -2147220992;
          goto LABEL_10;
        }
        v17 = 1;
        utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v12);
      }
      a3 = v58;
      v18 = 2;
      goto LABEL_11;
    }
    v17 = v60;
    goto LABEL_9;
  }
  v17 = 0;
  v18 = 0;
  v16 = 0;
LABEL_12:
  v19 = v62;
  *(_DWORD *)(v5 + 32) = v18;
  *v19 = v17;
  if ( v16 < 0 )
    return (unsigned int)v16;
  v20 = *(_QWORD *)(v10 + 1568);
  if ( v20 == -1LL || a2 == -1 )
  {
    v21 = -1LL;
  }
  else
  {
    v21 = v20 + a2;
    if ( v20 + a2 < v20 )
      return 3489661077LL;
  }
  v22 = *(_QWORD *)(v10 + 1440);
  v23 = *(_QWORD *)(*(_QWORD *)(v10 + 1432) + 120LL) + 144LL;
  if ( a3 == 1 )
  {
    v24 = 1;
  }
  else if ( a3 )
  {
    v24 = 2;
    if ( a3 != 2 )
      v24 = -1;
  }
  else
  {
    v24 = 0;
  }
  v25 = *(_DWORD *)(v10 + 1408);
  v26 = *(_QWORD *)(*(_QWORD *)(v10 + 24) + 152LL);
  if ( !v21 )
    goto LABEL_19;
  if ( v21 + a5[2] + 1 >= v21 )
  {
    if ( a5[1] < v21 && *(char *)(v10 + 1498) >= 0 )
      goto LABEL_49;
    v37 = *(unsigned int *)(v26 + 540);
    v55 = *(_QWORD *)(v9 + 48);
    if ( (int)RmpEmPriorityCompare(v25, v37) >= 0 )
      v42 = v39;
    else
      v42 = *(_QWORD *)(v41 + 32);
    v60 = v42;
    if ( v40 >= v39 || v40 >= v42 )
    {
      RmpPolicyEnsureMetricsForAcquire(*(struct _RM_PARTITION **)(v5 + 16), v38);
      if ( (int)RmpEmPriorityCompare(v25, *(unsigned int *)(v26 + 540)) < 0 )
      {
        v43 = v21 + a5[2] - a5[4];
        if ( v43 >= v60 )
        {
          if ( v24 == 2 )
            goto LABEL_49;
          v44 = v43 - v60;
LABEL_62:
          RmpPolicyGenerateReclaimListForCommit(*(_QWORD *)(v5 + 16), v23, v22, v44, v25, v11);
          *(_DWORD *)(v5 + 36) = v11;
          v27 = 1;
          v10 = a1;
LABEL_20:
          v28 = v63;
          v29 = v62;
          *v63 = v27;
          if ( *v29 )
          {
            *(_DWORD *)(v23 + 40) = 0;
            *(_DWORD *)(v5 + 36) = 0;
            *v28 = 0;
          }
          else if ( !v27 )
          {
            v30 = *(_QWORD *)(v10 + 184);
            v31 = *(_DWORD *)(v10 + 1408);
            v32 = *(_QWORD **)(v30 + 160);
            for ( i = v32; ; i = (_QWORD *)*i )
            {
              if ( i == (_QWORD *)(v30 + 160) )
              {
                while ( v32 != (_QWORD *)(v30 + 160) )
                {
                  v35 = v32[2];
                  if ( *(_DWORD *)(v35 + 1400) == 1 && *(_DWORD *)(v35 + 1408) < v31 )
                  {
                    v50 = 0;
                    v51 = (unsigned int *)(a1 + 1560);
                    while ( 1 )
                    {
                      if ( *((_QWORD *)v51 + 1) )
                      {
                        v52 = *v51;
                        if ( *(_QWORD *)(v35 + 24LL * (int)v52 + 200) )
                        {
                          v53 = *(_QWORD *)(v30 + 1392);
                          if ( !_bittest64(&v53, v52) )
                            break;
                        }
                      }
                      ++v50;
                      v51 += 6;
                      if ( v50 )
                        goto LABEL_28;
                    }
                    if ( v58 == 1 )
                    {
                      *v28 = 1;
                      return 0LL;
                    }
                    return 2147746304LL;
                  }
LABEL_28:
                  v32 = (_QWORD *)*v32;
                }
                return 0LL;
              }
              v34 = i[2];
              if ( *(_DWORD *)(v34 + 1400) == 1 && *(_DWORD *)(v34 + 1408) < v31 )
                break;
LABEL_25:
              ;
            }
            v46 = 0;
            v47 = v56;
            while ( 1 )
            {
              if ( *((_QWORD *)v47 + 1) )
              {
                v48 = *v47;
                if ( *(_QWORD *)(v34 + 24LL * (int)v48 + 200) )
                {
                  v49 = *(_QWORD *)(v30 + 1392);
                  if ( !_bittest64(&v49, v48) )
                    break;
                }
              }
              ++v46;
              v47 += 6;
              if ( v46 )
                goto LABEL_25;
            }
            if ( v58 == 1 )
            {
              *v29 = 1;
              return 0LL;
            }
            return 2147746304LL;
          }
          return 0LL;
        }
      }
      v45 = v21 + a5[2];
      if ( v45 >= v55 )
      {
        if ( v24 == 2 )
          goto LABEL_49;
        v11 = 2;
        v44 = v45 - v55 + 1;
        goto LABEL_62;
      }
    }
    v10 = a1;
LABEL_19:
    *(_DWORD *)(v5 + 36) = 0;
    v27 = 0;
    *(_DWORD *)(v23 + 40) = 0;
    goto LABEL_20;
  }
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 1432) + 120LL) + 184LL) = 0;
LABEL_49:
  *v63 = 0;
  return 2147746304LL;
}
