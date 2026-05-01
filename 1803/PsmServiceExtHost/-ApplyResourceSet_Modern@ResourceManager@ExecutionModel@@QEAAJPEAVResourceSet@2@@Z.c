/*
 * XREFs of ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18001CEA0
 * Callers:
 *     ?Apply@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x18001FF14 (-Apply@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180020370 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x18000BCB4 (-RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 *     CempPackageFamilyNameFromPsmKey @ 0x18000CE50 (CempPackageFamilyNameFromPsmKey.c)
 *     ?RmpCommitThresholdsSubtractValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x18001A320 (-RmpCommitThresholdsSubtractValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001D5F8 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?IsPaused@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18001E5F8 (-IsPaused@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18001E708 (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18001EDB0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18001EE38 (-RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?RmpPolicyDigestMerge@@YA?AT_RM_POLICY_DIGEST@@T1@0@Z @ 0x18001EE70 (-RmpPolicyDigestMerge@@YA-AT_RM_POLICY_DIGEST@@T1@0@Z.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18001F380 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ @ 0x18001FF04 (-IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18001FF90 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800214D0 (-RmpPolicyDigestCompute@@YA-AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800219F0 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180021A70 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180025D6C (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x1800271F8 (-RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18003AA48 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x18004CBB0 (-SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z.c)
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x18004F56C (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 *     ?RmpResourceSetIsValidPredecessor@@YAKPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800528FC (-RmpResourceSetIsValidPredecessor@@YAKPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x180052C6C (-RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 *     ?RmpActivityHostTryGetPpleResourceSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180054BE0 (-RmpActivityHostTryGetPpleResourceSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ApplyResourceSet_Modern(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceSet *a2)
{
  struct _RM_RESOURCE_SET **v2; // r12
  __int64 v4; // rsi
  ExecutionModel::ResourceManager *v5; // r13
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rbx
  __int64 v13; // rax
  _QWORD *v14; // rcx
  unsigned int (__fastcall *v15)(ExecutionModel::ResourceSet *__hidden); // rax
  unsigned int (__fastcall *v16)(ExecutionModel::ResourceSet *__hidden); // rax
  __int64 v17; // r14
  unsigned int (__fastcall *v18)(ExecutionModel::BaseResourceSet *__hidden); // rax
  _DWORD *v19; // r14
  unsigned int (__fastcall *v20)(ExecutionModel::BaseResourceSet *__hidden); // rax
  __int64 v21; // rax
  unsigned __int16 v22; // r14
  unsigned __int16 v23; // bx
  __int64 v24; // rcx
  __int64 v25; // r15
  __int64 v26; // rcx
  __int16 v27; // r11
  __int64 v28; // r10
  __int64 v29; // r10
  __int16 v30; // r9
  __int64 v31; // r10
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int16 v37; // r14
  __int64 v38; // rax
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // r14
  __int64 v42; // rdi
  __int64 v43; // rbx
  __int64 v44; // rsi
  int v45; // edi
  __int64 v46; // rdx
  wchar_t *v47; // rcx
  wchar_t v48; // ax
  __int128 v49; // xmm0
  int v50; // eax
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  WCHAR *v54; // rbx
  __int64 v55; // rdi
  unsigned __int8 *v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  __int64 v59; // rbx
  __int64 v60; // r11
  __int64 v61; // r9
  int v62; // r10d
  struct _RM_ACTIVITY_HOST *v63; // rbx
  int v64; // ebx
  int v66; // ebx
  struct _RM_ACTIVITY_HOST *v67; // rdx
  unsigned __int16 v68; // ax
  __int64 v69; // r8
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rbx
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // r10
  int v76; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_RESOURCE_SET **v77; // [rsp+38h] [rbp-C8h]
  ExecutionModel::ResourceManager *v78; // [rsp+40h] [rbp-C0h]
  __int64 v79; // [rsp+48h] [rbp-B8h]
  __int64 v80; // [rsp+50h] [rbp-B0h]
  _QWORD v81[5]; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t v82[232]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v83[4]; // [rsp+250h] [rbp+150h] BYREF
  int v84; // [rsp+290h] [rbp+190h]
  int v85; // [rsp+294h] [rbp+194h]
  WCHAR String1[72]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v87[464]; // [rsp+330h] [rbp+230h] BYREF

  v2 = (struct _RM_RESOURCE_SET **)*((_QWORD *)a2 + 234);
  v4 = *((_QWORD *)a2 + 180);
  v5 = this;
  v78 = this;
  v77 = v2;
  if ( !v2 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)a2 + 179) + 160LL);
    if ( v6 )
      v7 = *(_QWORD *)(v6 + 24);
    else
      v7 = *((_QWORD *)a2 + 190);
    v8 = *(_QWORD *)(v4 + 1288);
    if ( v8 == v7 )
      goto LABEL_9;
    if ( v8 == -1LL )
    {
      *(_QWORD *)(v4 + 1288) = -1LL;
      goto LABEL_10;
    }
    if ( v8 >= v7 )
    {
      v9 = 0;
      v10 = v8 - v7;
    }
    else
    {
      v9 = -1073741675;
      v10 = -1LL;
    }
    *(_QWORD *)(v4 + 1288) = v10;
    if ( v9 < 0 )
LABEL_9:
      *(_QWORD *)(v4 + 1288) = 0LL;
LABEL_10:
    v11 = *((_QWORD *)a2 + 180);
    v12 = (_QWORD *)((char *)a2 + 1416);
    v13 = *((_QWORD *)a2 + 177);
    if ( *(struct ExecutionModel::ResourceSet **)(v13 + 8) != (struct ExecutionModel::ResourceSet *)((char *)a2 + 1416)
      || (v14 = (_QWORD *)*((_QWORD *)a2 + 178), (_QWORD *)*v14 != v12) )
    {
      __fastfail(3u);
    }
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    *v12 = 0LL;
    *((_QWORD *)a2 + 178) = 0LL;
    --*(_DWORD *)(v11 + 1024);
    *((_DWORD *)a2 + 362) = 2;
    v15 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)a2 + 16LL);
    if ( v15 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(a2);
    else
      v15(a2);
    v16 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)a2 + 16LL);
    if ( v16 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(a2);
    else
      v16(a2);
    v17 = *((_QWORD *)a2 + 180);
    v18 = *(unsigned int (__fastcall **)(ExecutionModel::BaseResourceSet *__hidden))(*(_QWORD *)a2 + 8LL);
    if ( v18 == ExecutionModel::BaseResourceSet::AddRef )
      ExecutionModel::BaseResourceSet::AddRef(a2);
    else
      v18(a2);
    v19 = (_DWORD *)(v17 + 1032);
    v20 = *(unsigned int (__fastcall **)(ExecutionModel::BaseResourceSet *__hidden))(*(_QWORD *)a2 + 8LL);
    if ( v20 == ExecutionModel::BaseResourceSet::AddRef )
      ExecutionModel::BaseResourceSet::AddRef(a2);
    else
      v20(a2);
    v21 = *(_QWORD *)v19;
    if ( *(_DWORD **)(*(_QWORD *)v19 + 8LL) != v19 )
      __fastfail(3u);
    *v12 = v21;
    *((_QWORD *)a2 + 178) = v19;
    *(_QWORD *)(v21 + 8) = v12;
    *(_QWORD *)v19 = v12;
    ++v19[4];
    *((_DWORD *)a2 + 362) = 1;
    if ( *((_QWORD *)a2 + 234) )
      ATL::AtlComPtrAssign((struct IUnknown **)a2 + 234, 0LL);
    v22 = 102;
    *((_BYTE *)a2 + 12) = 1;
    v23 = 102;
    v24 = *(_QWORD *)(v4 + 1008);
    v25 = 0LL;
    if ( v24 != v4 + 1008 )
      v25 = v24 - 1416;
    while ( v25 )
    {
      if ( ExecutionModel::ResourceSet::IsConsideredAcquiredForEnforcement((ExecutionModel::ResourceSet *)v25) )
      {
        v68 = RmpPolicyDigestCompute();
        v23 = RmpPolicyDigestMerge(v23, v68);
      }
      v69 = *(_QWORD *)(v25 + 1416);
      v70 = 3 * (*(int *)(v25 + 1448) + 42LL);
      v71 = *(_QWORD *)(v25 + 1440);
      v25 = 0LL;
      if ( v69 != v71 + 8 * v70 )
        v25 = v69 - 1416;
    }
    *(_WORD *)(v4 + 1056) = v23;
    v26 = *(_QWORD *)(v4 + 1032);
    v27 = *(_WORD *)(v4 + 1058);
    v28 = 0LL;
    if ( v26 != v4 + 1032 )
      v28 = v26 - 1416;
    if ( v28 )
    {
      do
      {
        if ( *(_DWORD *)(v28 + 1400) == 2 || (*(_BYTE *)(v28 + 1452) & 0x10) != 0 )
        {
          if ( !ExecutionModel::_ResourceSetInfo::IsPaused((ExecutionModel::_ResourceSetInfo *)(v28 + 1456)) )
            ExecutionModel::_ResourceSetInfo::IsFrozen((ExecutionModel::_ResourceSetInfo *)(v29 + 1456));
          if ( !RmpResourceSetIsCommitSaveEligible((const struct ExecutionModel::_ResourceSetInfo *)(v29 + 1456)) )
            v30 |= 8u;
          v32 = *(_DWORD *)(v31 + 1452) >> 7;
          LOWORD(v32) = v30 | (8
                             * (*(_WORD *)(v31 + 1496) & 8 | (2
                                                            * (*(_WORD *)(v31 + 1496) & 3 | (8
                                                                                           * (((*(_DWORD *)(v31 + 1452) & 0x80) != 0) | 2))))));
          v22 = RmpPolicyDigestMerge(v22, v32);
        }
        v33 = *(_QWORD *)(v28 + 1416);
        v34 = 3 * (*(int *)(v28 + 1448) + 42LL);
        v35 = *(_QWORD *)(v28 + 1440);
        v28 = 0LL;
        if ( v33 != v35 + 8 * v34 )
          v28 = v33 - 1416;
      }
      while ( v28 );
      v2 = v77;
    }
    *(_WORD *)(v4 + 1058) = v22;
    v36 = *(_QWORD *)(v4 + 56);
    v37 = v22 & 0x80;
    if ( (v27 & 0x80u) != 0 )
    {
      if ( !v37 )
        --*(_DWORD *)(v36 + 196);
    }
    else if ( v37 )
    {
      ++*(_DWORD *)(v36 + 196);
    }
    RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)v4, 3u);
    QueryUnbiasedInterruptTime((PULONGLONG)(v4 + 1456));
    if ( RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)v4) )
      SetEvent(*(HANDLE *)(*(_QWORD *)(v4 + 56) + 88LL));
    v38 = *(_QWORD *)(v4 + 48);
    *(_QWORD *)(v4 + 1112) = 0LL;
    v39 = *(_QWORD *)(v38 + 2232);
    v40 = *(_DWORD *)(v39 + 184);
    if ( (v40 & 3) == 0 )
    {
      *(_DWORD *)(v39 + 184) = v40 | 1;
      TpPostWork(*(_QWORD *)(v39 + 168));
    }
    v41 = *((_QWORD *)a2 + 179);
    v42 = *(_QWORD *)(v41 + 48) + 1456LL;
    if ( (*(_BYTE *)(*(_QWORD *)(v41 + 48) + 1498LL) & 7) == 4 && *(_DWORD *)(v41 + 112) )
    {
      v72 = **(_QWORD **)(v41 + 104);
      RmpResourceSetGetReportedCommitThresholds((struct _RM_RESOURCE_SET *)v72, (struct _RM_COMMIT_THRESHOLDS *)v81);
      RmpCommitThresholdsSubtractValue((struct _RM_COMMIT_THRESHOLDS *)v81, *(_QWORD *)(v72 + 64));
      v73 = v81[3];
      *(_QWORD *)(v42 + 24) = v81[2];
      *(_QWORD *)(v42 + 56) = v81[1];
      v74 = v81[0];
      *(_QWORD *)(v42 + 64) = v73;
      *(_QWORD *)(v42 + 360) = v74;
      ExecutionModel::_ResourceSetInfo::SetAmount(v42, 0LL, *(_QWORD *)(*(_QWORD *)(v72 + 48) + 1544LL));
      *(_DWORD *)(v42 + 44) ^= (*(_DWORD *)(v42 + 44) ^ *(_DWORD *)(v75 + 1500)) & 3;
      RmpActivityHostComputeAndApplyEnforcementSettings(*(struct _RM_ACTIVITY_HOST **)(*(_QWORD *)(v41 + 48) + 1440LL));
    }
    if ( (*(_BYTE *)(v4 + 804) & 1) != 0
      || (v66 = RmpActivityHostComputeAndApplyEnforcementSettings((struct _RM_ACTIVITY_HOST *)v4), v66 >= 0) )
    {
      ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(v5, (struct _RM_ACTIVITY_HOST *)v4);
      if ( *(_DWORD *)(v4 + 624) == 2 )
      {
        memset_0(String1, 0, 0x82uLL);
        v43 = v4 + 88;
        v76 = 130;
        if ( (int)PsmGetApplicationNameFromKey(v4 + 88, String1, &v76) < 0
          || CompareStringOrdinal(String1, -1, L"ppleae38af2e007f4358a809ac99a64a67c1", -1, 1) != 2 )
        {
          v44 = *(_QWORD *)(v4 + 48);
          v80 = v44;
          v79 = 0LL;
          if ( CempPackageFamilyNameFromPsmKey(v43, (__int64)v87) < 0 )
          {
            v59 = 0LL;
          }
          else
          {
            v45 = *(_DWORD *)(v43 + 532);
            memset_0(v82, 0, 0x218uLL);
            v46 = 232LL;
            v47 = v82;
            while ( v46 != -2147483414 )
            {
              v48 = v47[344];
              if ( !v48 )
                break;
              *v47++ = v48;
              if ( !--v46 )
              {
                --v47;
                break;
              }
            }
            v49 = *(_OWORD *)(v43 + 464);
            v50 = *(_DWORD *)(v43 + 528);
            v51 = *(_OWORD *)(v43 + 480);
            *v47 = 0;
            v83[0] = v49;
            v52 = *(_OWORD *)(v43 + 496);
            v84 = v50;
            v83[1] = v51;
            v53 = *(_OWORD *)(v43 + 512);
            v85 = v45;
            v83[2] = v52;
            v83[3] = v53;
            v54 = v82;
            v55 = 314159LL;
            do
            {
              LOWORD(v76) = RtlUpcaseUnicodeChar(*v54++);
              v55 = BYTE1(v76) + 37 * ((unsigned __int8)v76 + 37 * v55);
            }
            while ( v54 < (WCHAR *)v83 );
            v56 = (unsigned __int8 *)v83;
            v57 = 9LL;
            do
            {
              v58 = *v56;
              v56 += 8;
              v55 = *(v56 - 1)
                  + 37
                  * (*(v56 - 2)
                   + 37
                   * (*(v56 - 3)
                    + 37
                    * (*(v56 - 4) + 37 * (*(v56 - 5) + 37 * (*(v56 - 6) + 37 * (*(v56 - 7) + 37 * (v58 + 37 * v55)))))));
              --v57;
            }
            while ( v57 );
            v59 = 0LL;
LABEL_62:
            v60 = -1LL << (*(_BYTE *)(v44 + 1996) & 0x1F);
            v61 = v55 & v60;
            if ( v59 )
            {
              v44 = v80;
LABEL_65:
              while ( 1 )
              {
                v59 = *(_QWORD *)v59;
                if ( (v59 & 1) != 0 )
                  break;
                if ( v61 == (v60 & *(_QWORD *)(v59 + 8)) )
                {
                  if ( !(unsigned int)RmpPsmAppFamilyCompareForHashTable((const wchar_t *)v59, v82) )
                    goto LABEL_62;
                  v2 = v77;
                  v5 = v78;
                  if ( !v59 )
                    v59 = v79;
                  goto LABEL_70;
                }
              }
            }
            else
            {
              v62 = *(_DWORD *)(v44 + 1996) >> 5;
              if ( v62 )
              {
                v44 = v80;
                v59 = *(_QWORD *)(v80 + 2000)
                    + 8
                    * ((((v55 & (unsigned __int64)v60) >> 56)
                      + 37
                      * ((unsigned __int8)((v55 & (unsigned __int64)v60) >> 48)
                       + 37
                       * ((unsigned __int8)((unsigned __int16)((v55 & (unsigned __int64)v60) >> 32) >> 8)
                        + 37
                        * ((unsigned __int8)((v55 & (unsigned __int64)v60) >> 32)
                         + 37
                         * ((((unsigned int)v55 & (unsigned int)v60) >> 24)
                          + 37
                          * ((unsigned __int8)(((unsigned int)v55 & (unsigned int)v60) >> 16)
                           + 37
                           * ((unsigned __int8)((unsigned __int16)(v55 & v60) >> 8)
                            + 37 * ((unsigned __int8)v61 + 11623883)))))))) & (unsigned int)(v62 - 1));
                goto LABEL_65;
              }
            }
            v59 = v79;
            v2 = v77;
            v5 = v78;
          }
LABEL_70:
          v63 = *(struct _RM_ACTIVITY_HOST **)(v59 + 568);
          if ( v63 && RmpActivityHostTryGetPpleResourceSet(v63) )
            ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(v5, v63);
        }
      }
      v64 = 0;
    }
    else
    {
      v64 = v66 | 0x10000000;
    }
    goto LABEL_72;
  }
  (*((void (__fastcall **)(struct _RM_RESOURCE_SET **))*v2 + 1))(v2);
  if ( !RmpResourceSetIsValidPredecessor((struct ExecutionModel::ResourceSet *)v2, v67) )
  {
    v64 = -2147220218;
    goto LABEL_72;
  }
  ExecutionModel::ResourceManager::TransitionResources(v5, (struct ExecutionModel::ResourceSet *)v2, a2);
  v64 = RmpResourceSetTransition(v2[179], *((struct _RM_RESOURCE_SET **)a2 + 179));
  if ( v64 >= 0 )
  {
    ExecutionModel::ResourceSet::PerformReleaseResources((ExecutionModel::ResourceSet *)v2, 1u);
    goto LABEL_10;
  }
LABEL_72:
  if ( v2 )
    (*((void (__fastcall **)(struct _RM_RESOURCE_SET **))*v2 + 2))(v2);
  return (unsigned int)v64;
}
