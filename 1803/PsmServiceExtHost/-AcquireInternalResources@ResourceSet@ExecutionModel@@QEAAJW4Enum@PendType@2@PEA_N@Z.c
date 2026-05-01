/*
 * XREFs of ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x18001F7C0
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18001DAC0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180012A54 (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18001E708 (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18001EDB0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RmpPolicyDigestMerge@@YA?AT_RM_POLICY_DIGEST@@T1@0@Z @ 0x18001EE70 (-RmpPolicyDigestMerge@@YA-AT_RM_POLICY_DIGEST@@T1@0@Z.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180020370 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x1800204B0 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_U.c)
 *     ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800214D0 (-RmpPolicyDigestCompute@@YA-AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800219F0 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180021A70 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180022410 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180022810 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x180022948 (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180028B44 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DAA0 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ??1?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180034044 (--1-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F5A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003F5B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18005A7D4 (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 *     ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z @ 0x18005A96C (-CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::AcquireInternalResources(__int64 a1, unsigned int a2, bool *a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v7; // rbx
  __int64 v8; // rdi
  char v9; // dl
  unsigned int v10; // r12d
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  char *v15; // rdi
  int v16; // ebx
  unsigned int v17; // edi
  void *v18; // rcx
  bool v19; // r15
  _QWORD *v20; // rdi
  _QWORD *i; // rbx
  _QWORD *v22; // rax
  _QWORD *v23; // r14
  __int64 (__fastcall *v24)(ExecutionModel::BaseResourceSet *); // rax
  _QWORD *v25; // rax
  unsigned int v26; // r14d
  __int64 v27; // rbx
  __int16 v28; // di
  __int64 v29; // rbx
  __int16 v31; // ax
  __int64 v32; // rdx
  void *v33; // rdi
  _QWORD *v35; // rcx
  __int64 v36; // rax
  int UnbiasedInterruptTimeMs64; // eax
  char v38; // bl
  unsigned int v39; // r8d
  _QWORD *v40; // rdx
  char *v41; // rcx
  __int64 v42; // rax
  char v43; // [rsp+40h] [rbp-C0h] BYREF
  char v44; // [rsp+41h] [rbp-BFh] BYREF
  char v45; // [rsp+42h] [rbp-BEh] BYREF
  char v46; // [rsp+43h] [rbp-BDh] BYREF
  char v47; // [rsp+44h] [rbp-BCh] BYREF
  char v48; // [rsp+45h] [rbp-BBh] BYREF
  char v49; // [rsp+46h] [rbp-BAh] BYREF
  unsigned int v50; // [rsp+48h] [rbp-B8h]
  int v51; // [rsp+4Ch] [rbp-B4h] BYREF
  int v52; // [rsp+50h] [rbp-B0h] BYREF
  int v53; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int64 v54; // [rsp+58h] [rbp-A8h] BYREF
  void *Block[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+70h] [rbp-90h]
  bool *v57; // [rsp+78h] [rbp-88h]
  __int64 v58; // [rsp+80h] [rbp-80h] BYREF
  void **v59; // [rsp+88h] [rbp-78h]
  __int64 v60; // [rsp+90h] [rbp-70h]
  __int64 v61; // [rsp+98h] [rbp-68h]
  char v62; // [rsp+A0h] [rbp-60h]
  char v63; // [rsp+A4h] [rbp-5Ch]
  __int64 v64; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v66; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v67; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v68; // [rsp+C8h] [rbp-38h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DESCRIPTOR v70; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v71[128]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v72[2]; // [rsp+170h] [rbp+70h] BYREF
  __int128 v73; // [rsp+180h] [rbp+80h]
  __int128 v74; // [rsp+190h] [rbp+90h]
  __int128 v75; // [rsp+1A0h] [rbp+A0h]
  __int128 v76; // [rsp+1B0h] [rbp+B0h]
  __int128 v77; // [rsp+1C0h] [rbp+C0h] BYREF
  _OWORD v78[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+210h] [rbp+110h] BYREF
  void *v80; // [rsp+220h] [rbp+120h]
  int v81; // [rsp+228h] [rbp+128h]
  int v82; // [rsp+22Ch] [rbp+12Ch]
  __int64 *v83; // [rsp+230h] [rbp+130h]
  __int64 v84; // [rsp+238h] [rbp+138h]
  __int64 *v85; // [rsp+240h] [rbp+140h]
  __int64 v86; // [rsp+248h] [rbp+148h]
  unsigned __int64 *v87; // [rsp+250h] [rbp+150h]
  __int64 v88; // [rsp+258h] [rbp+158h]
  char *v89; // [rsp+260h] [rbp+160h]
  __int64 v90; // [rsp+268h] [rbp+168h]
  __int64 *v91; // [rsp+270h] [rbp+170h]
  __int64 v92; // [rsp+278h] [rbp+178h]
  __int64 v93; // [rsp+280h] [rbp+180h]
  __int64 v94; // [rsp+288h] [rbp+188h]
  struct _EVENT_DATA_DESCRIPTOR v95; // [rsp+290h] [rbp+190h] BYREF
  void *v96; // [rsp+2A0h] [rbp+1A0h]
  int v97; // [rsp+2A8h] [rbp+1A8h]
  int v98; // [rsp+2ACh] [rbp+1ACh]
  int *v99; // [rsp+2B0h] [rbp+1B0h]
  __int64 v100; // [rsp+2B8h] [rbp+1B8h]
  char *v101; // [rsp+2C0h] [rbp+1C0h]
  __int64 v102; // [rsp+2C8h] [rbp+1C8h]
  char *v103; // [rsp+2D0h] [rbp+1D0h]
  __int64 v104; // [rsp+2D8h] [rbp+1D8h]
  char *v105; // [rsp+2E0h] [rbp+1E0h]
  __int64 v106; // [rsp+2E8h] [rbp+1E8h]
  int *v107; // [rsp+2F0h] [rbp+1F0h]
  __int64 v108; // [rsp+2F8h] [rbp+1F8h]
  int *v109; // [rsp+300h] [rbp+200h]
  __int64 v110; // [rsp+308h] [rbp+208h]
  char *v111; // [rsp+310h] [rbp+210h]
  __int64 v112; // [rsp+318h] [rbp+218h]
  char *v113; // [rsp+320h] [rbp+220h]
  __int64 v114; // [rsp+328h] [rbp+228h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+330h] [rbp+230h] BYREF
  __int64 *v116; // [rsp+350h] [rbp+250h]
  __int64 v117; // [rsp+358h] [rbp+258h]
  __int64 *v118; // [rsp+360h] [rbp+260h]
  __int64 v119; // [rsp+368h] [rbp+268h]

  v3 = *(_QWORD *)(a1 + 1440);
  v4 = *(_QWORD *)(a1 + 184);
  Block[0] = Block;
  v57 = a3;
  Block[1] = Block;
  v56 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 152LL);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 1432) + 120LL);
  memset_0(v71, 0, sizeof(v71));
  RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)v8, (struct _RM_SYSTEM_MEMORY_METRICS *)v72);
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v7 + 424),
    (struct _RM_REMEDIATION_ACTIONS *)(v7 + 480),
    (struct _RM_SYSTEM_MEMORY_METRICS *)v72,
    v72[0],
    (struct _RM_RESOURCE_USAGE_LIMITS *)v71);
  v77 = *(_OWORD *)v72;
  v78[1] = v74;
  v78[0] = v73;
  v78[3] = v76;
  v78[2] = v75;
  *(_WORD *)(v8 + 188) = 0;
  v54 = 0LL;
  if ( !ExecutionModel::_ResourceSetInfo::IsFrozen((ExecutionModel::_ResourceSetInfo *)(a1 + 1456)) || (v9 & 0x40) != 0 )
    RmpActivityHostQueryCommitDebt((struct _RM_ACTIVITY_HOST *)v3, &v54);
  v10 = 1;
  if ( hProvider > 4u && (qword_1800920C0 & 9) != 0 && (qword_1800920C8 & 9) == qword_1800920C8 )
  {
    v64 = *(_QWORD *)(a1 + 1880);
    v83 = &v64;
    v65 = *(_QWORD *)(a1 + 1568);
    v85 = &v65;
    v87 = &v54;
    v89 = (char *)v78 + 8;
    v66 = *(_QWORD *)(a1 + 1592);
    v91 = &v66;
    v93 = v4 + 248;
    v84 = 8LL;
    v86 = 8LL;
    v88 = 8LL;
    v90 = 8LL;
    v92 = 8LL;
    v94 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800920B8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18007F1AF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_1800920B8;
    v80 = &unk_18007F1BA;
    UserData.Reserved = 2;
    v81 = 118;
    v82 = 1;
    EventWriteTransfer(qword_1800920D0, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  }
  v11 = RmpResourceCheckDestroyPartitionForAcquire(*(struct _RM_RESOURCE_SET **)(a1 + 1432));
  v12 = *(_QWORD *)(a1 + 1432);
  v50 = v11;
  v13 = *(_QWORD *)(v12 + 120);
  memset_0(&v58, 0, 0x28uLL);
  v58 = a1;
  while ( 1 )
  {
    v15 = (char *)Block[0];
    if ( Block[0] == Block )
      break;
    v35 = (_QWORD *)*((_QWORD *)Block[0] + 1);
    v36 = *(_QWORD *)Block[0];
    *v35 = *(_QWORD *)Block[0];
    *(_QWORD *)(v36 + 8) = v35;
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::~CComPtrBase<ExecutionModel::BaseResourceSet>(v15 + 16, v14);
    operator delete(v15);
  }
  v60 = v13;
  v56 = 0LL;
  v59 = Block;
  v61 = v13 + 144;
  v16 = ExecutionModel::ResourceSet::EvaluateResourceRequest(a1, v54, a2, v71, &v77, &v58, &v44, &v43);
  v51 = v16;
  if ( hProvider > 4u && (qword_1800920C0 & 9) != 0 )
  {
    v17 = v50;
    if ( (qword_1800920C8 & 9) == qword_1800920C8 )
    {
      v100 = 4LL;
      v99 = &v51;
      v45 = v44;
      v101 = &v45;
      v46 = v43;
      v103 = &v46;
      v105 = &v47;
      v102 = 1LL;
      v104 = 1LL;
      v47 = v50;
      v106 = 1LL;
      v18 = v59[2];
      v107 = &v52;
      v52 = (int)v18;
      v108 = 4LL;
      LODWORD(v18) = *(_DWORD *)(v61 + 40);
      v109 = &v53;
      v48 = v62;
      v111 = &v48;
      v49 = v63;
      v113 = &v49;
      v53 = (int)v18;
      v110 = 4LL;
      v112 = 1LL;
      v114 = 1LL;
      *(_DWORD *)&v70.Level = 4;
      v95.Ptr = (ULONGLONG)off_1800920B8;
      *(_DWORD *)&v70.Id = ((unsigned int)&unk_18007F015 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v70.Keyword = 9LL;
      v95.Size = *(unsigned __int16 *)off_1800920B8;
      v96 = &unk_18007F020;
      v95.Reserved = 2;
      v97 = 185;
      v98 = 1;
      EventWriteTransfer(qword_1800920D0, &v70, 0LL, 0LL, 0xAu, &v95);
      v16 = v51;
    }
  }
  else
  {
    v17 = v50;
  }
  if ( v16 >= 0 )
  {
    v19 = v44 || v43 || v17;
    v20 = (_QWORD *)(v4 + 160);
    for ( i = *(_QWORD **)(v4 + 160); i != v20 && *(_DWORD *)(i[2] + 1408LL) < *(_DWORD *)(a1 + 1408); i = (_QWORD *)*i )
      ;
    v22 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v23 = v22;
    if ( !v22 )
      goto LABEL_69;
    v22[2] = a1;
    v24 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)a1 + 8LL);
    if ( v24 == ExecutionModel::BaseResourceSet::AddRef )
      ExecutionModel::BaseResourceSet::AddRef((ExecutionModel::BaseResourceSet *)a1);
    else
      v24((ExecutionModel::BaseResourceSet *)a1);
    if ( v23 )
    {
      v25 = (_QWORD *)i[1];
      v23[1] = v25;
      *v23 = i;
      *v25 = v23;
      i[1] = v23;
      ++v20[2];
      v51 = 0;
      v26 = 0;
      if ( v19 )
        goto LABEL_63;
      *(_DWORD *)(a1 + 1400) = 2;
      v27 = *(_QWORD *)(v3 + 1008);
      v28 = 102;
      if ( v27 != v3 + 1008 )
      {
        v29 = v27 - 1416;
        if ( v29 )
        {
          do
          {
            if ( *(_DWORD *)(v29 + 1400) == 2 || (*(_BYTE *)(v29 + 1452) & 0x10) != 0 )
            {
              v31 = RmpPolicyDigestCompute(v29);
              v28 = RmpPolicyDigestMerge(v28, v31);
            }
            v32 = *(_QWORD *)(v29 + 1416);
            if ( v32 == *(_QWORD *)(v29 + 1440) + 24 * (*(int *)(v29 + 1448) + 42LL) )
              break;
            v29 = v32 - 1416;
          }
          while ( v32 != 1416 );
        }
      }
      *(_WORD *)(v3 + 1056) = v28;
      RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)v3, 1u);
      QueryUnbiasedInterruptTime((PULONGLONG)(v3 + 1456));
      if ( RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)v3) )
        SetEvent(*(HANDLE *)(*(_QWORD *)(v3 + 56) + 88LL));
      if ( (*(_BYTE *)(v3 + 804) & 1) != 0 )
      {
        v26 = 1;
      }
      else if ( v57 && RmpActivityHostCheckQueueWork((struct _RM_ACTIVITY_HOST *)v3) )
      {
        if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
        {
          v67 = *(_QWORD *)(v3 + 32);
          v116 = &v67;
          v68 = *(_QWORD *)(a1 + 1880);
          v118 = &v68;
          v117 = 8LL;
          v119 = 8LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007F600, 0LL, 0LL, 4u, &pData);
        }
        *(_DWORD *)(a1 + 1452) |= 0x10u;
        v19 = 1;
      }
      *(_DWORD *)(a1 + 1400) = 1;
      if ( v19 )
      {
LABEL_63:
        UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
        v38 = v43;
        v39 = v50 == 0;
        *(_DWORD *)(a1 + 1888) = UnbiasedInterruptTimeMs64;
        if ( v44 || v38 )
          v10 = 0;
        ExecutionModel::ResourceSet::CheckUpdatePendStats((ExecutionModel::ResourceSet *)a1, v10, v39);
        if ( v44 || v38 )
          RmpPolicyRevokeResourceSetsForAcquire((struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)&v58);
      }
      else
      {
        ExecutionModel::ResourceSet::CompleteAcquire((ExecutionModel::ResourceSet *)a1, v26);
      }
      if ( v57 )
        *v57 = v19;
      v16 = 0;
    }
    else
    {
LABEL_69:
      v16 = -2147024882;
    }
    v51 = v16;
  }
  while ( 1 )
  {
    v33 = Block[0];
    if ( Block[0] == Block )
      break;
    v40 = (_QWORD *)*((_QWORD *)Block[0] + 1);
    v41 = (char *)Block[0] + 16;
    v42 = *(_QWORD *)Block[0];
    *v40 = *(_QWORD *)Block[0];
    *(_QWORD *)(v42 + 8) = v40;
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::~CComPtrBase<ExecutionModel::BaseResourceSet>(v41, v40);
    operator delete(v33);
  }
  return (unsigned int)v16;
}
