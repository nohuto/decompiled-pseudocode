/*
 * XREFs of ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010B70
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18000F210 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 * Callees:
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180008A64 (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180008F30 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800096F0 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?get_MaximumPriortyToRelease@ResourceManager@ExecutionModel@@QEAA?AW4Enum@Priority@2@XZ @ 0x18000D6A0 (-get_MaximumPriortyToRelease@ResourceManager@ExecutionModel@@QEAA-AW4Enum@Priority@2@XZ.c)
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x1800101CC (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010220 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800107F0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800113A0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z @ 0x18001191C (-CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180011CCC (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x180011EC0 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_U.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013FCC (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180014000 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180014730 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180015680 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x18001F894 (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     CempQueryUnbiasedInterruptTimeMs @ 0x18001FBDC (CempQueryUnbiasedInterruptTimeMs.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800269DC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800269EC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18003BE0C (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 *     ?PendReasonChanged@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_KW4_HAM_PEND_STATE@@@Z @ 0x180045CF4 (-PendReasonChanged@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_KW4_HAM_PEND_STATE@@@Z.c)
 *     ?SynchronizeWithTerminationNeeded@HAM_ACTIVITY_RM_CONTEXT@@QEAAKXZ @ 0x180045F28 (-SynchronizeWithTerminationNeeded@HAM_ACTIVITY_RM_CONTEXT@@QEAAKXZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::AcquireInternalResources(__int64 a1, unsigned int a2, bool *a3)
{
  struct _RM_ACTIVITY_HOST *v3; // r14
  __int64 v4; // r15
  unsigned int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  char v11; // dl
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  int MaximumPriortyToRelease; // r14d
  _QWORD *v16; // rbx
  int v17; // eax
  __int64 v18; // r15
  unsigned int v19; // ebx
  void *v20; // rcx
  bool v21; // r12
  _QWORD *i; // rbx
  _QWORD *v23; // rax
  _QWORD *v24; // r14
  __int64 (__fastcall *v25)(ExecutionModel::BaseResourceSet *); // rax
  _QWORD *v26; // rax
  unsigned int v27; // edi
  struct _RM_ACTIVITY_HOST *v28; // r14
  unsigned int v29; // ebx
  _QWORD *v30; // rbx
  const GUID *v32; // r8
  const GUID *v33; // r9
  unsigned int v34; // eax
  char v35; // bl
  _QWORD *v36; // rcx
  __int64 v37; // rax
  ExecutionModel::BaseResourceSet *v38; // rcx
  void (*v39)(void); // rax
  _QWORD *v40; // rcx
  __int64 v41; // rax
  ExecutionModel::BaseResourceSet *v42; // rcx
  void (*v43)(void); // rax
  char v44; // [rsp+40h] [rbp-C0h] BYREF
  char v45; // [rsp+41h] [rbp-BFh] BYREF
  char v46; // [rsp+42h] [rbp-BEh] BYREF
  char v47; // [rsp+43h] [rbp-BDh] BYREF
  char v48; // [rsp+44h] [rbp-BCh] BYREF
  char v49; // [rsp+45h] [rbp-BBh] BYREF
  char v50; // [rsp+46h] [rbp-BAh] BYREF
  int v51; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v52; // [rsp+4Ch] [rbp-B4h]
  unsigned int v53; // [rsp+50h] [rbp-B0h]
  int v54; // [rsp+54h] [rbp-ACh] BYREF
  int v55; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v56; // [rsp+60h] [rbp-A0h] BYREF
  void *Block[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v58; // [rsp+78h] [rbp-88h]
  bool *v59; // [rsp+80h] [rbp-80h]
  __int64 v60; // [rsp+88h] [rbp-78h] BYREF
  __int64 v61; // [rsp+90h] [rbp-70h] BYREF
  __int64 v62; // [rsp+98h] [rbp-68h] BYREF
  __int64 v63; // [rsp+A0h] [rbp-60h]
  struct _RM_ACTIVITY_HOST *v64; // [rsp+A8h] [rbp-58h]
  __int64 v65; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v66; // [rsp+B8h] [rbp-48h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DESCRIPTOR v68; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v69; // [rsp+E0h] [rbp-20h] BYREF
  void **v70; // [rsp+E8h] [rbp-18h]
  __int64 v71; // [rsp+F0h] [rbp-10h]
  __int64 v72; // [rsp+F8h] [rbp-8h]
  char v73; // [rsp+100h] [rbp+0h]
  char v74; // [rsp+104h] [rbp+4h]
  int v75; // [rsp+108h] [rbp+8h]
  _BYTE v76[128]; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 v77[2]; // [rsp+190h] [rbp+90h] BYREF
  __int128 v78; // [rsp+1A0h] [rbp+A0h]
  __int128 v79; // [rsp+1B0h] [rbp+B0h]
  __int128 v80; // [rsp+1C0h] [rbp+C0h]
  __int128 v81; // [rsp+1D0h] [rbp+D0h]
  __int128 v82; // [rsp+1E0h] [rbp+E0h] BYREF
  _OWORD v83[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+230h] [rbp+130h] BYREF
  void *v85; // [rsp+240h] [rbp+140h]
  int v86; // [rsp+248h] [rbp+148h]
  int v87; // [rsp+24Ch] [rbp+14Ch]
  __int64 *v88; // [rsp+250h] [rbp+150h]
  __int64 v89; // [rsp+258h] [rbp+158h]
  __int64 *v90; // [rsp+260h] [rbp+160h]
  __int64 v91; // [rsp+268h] [rbp+168h]
  unsigned __int64 *v92; // [rsp+270h] [rbp+170h]
  __int64 v93; // [rsp+278h] [rbp+178h]
  char *v94; // [rsp+280h] [rbp+180h]
  __int64 v95; // [rsp+288h] [rbp+188h]
  __int64 *v96; // [rsp+290h] [rbp+190h]
  __int64 v97; // [rsp+298h] [rbp+198h]
  __int64 v98; // [rsp+2A0h] [rbp+1A0h]
  __int64 v99; // [rsp+2A8h] [rbp+1A8h]
  struct _EVENT_DATA_DESCRIPTOR v100; // [rsp+2B0h] [rbp+1B0h] BYREF
  void *v101; // [rsp+2C0h] [rbp+1C0h]
  int v102; // [rsp+2C8h] [rbp+1C8h]
  int v103; // [rsp+2CCh] [rbp+1CCh]
  int *v104; // [rsp+2D0h] [rbp+1D0h]
  __int64 v105; // [rsp+2D8h] [rbp+1D8h]
  char *v106; // [rsp+2E0h] [rbp+1E0h]
  __int64 v107; // [rsp+2E8h] [rbp+1E8h]
  char *v108; // [rsp+2F0h] [rbp+1F0h]
  __int64 v109; // [rsp+2F8h] [rbp+1F8h]
  char *v110; // [rsp+300h] [rbp+200h]
  __int64 v111; // [rsp+308h] [rbp+208h]
  int *v112; // [rsp+310h] [rbp+210h]
  __int64 v113; // [rsp+318h] [rbp+218h]
  int *v114; // [rsp+320h] [rbp+220h]
  __int64 v115; // [rsp+328h] [rbp+228h]
  char *v116; // [rsp+330h] [rbp+230h]
  __int64 v117; // [rsp+338h] [rbp+238h]
  char *v118; // [rsp+340h] [rbp+240h]
  __int64 v119; // [rsp+348h] [rbp+248h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+350h] [rbp+250h] BYREF
  __int64 *v121; // [rsp+370h] [rbp+270h]
  __int64 v122; // [rsp+378h] [rbp+278h]
  __int64 *v123; // [rsp+380h] [rbp+280h]
  __int64 v124; // [rsp+388h] [rbp+288h]

  v3 = *(struct _RM_ACTIVITY_HOST **)(a1 + 1440);
  v4 = *(_QWORD *)(a1 + 184);
  Block[0] = Block;
  v6 = 0;
  v58 = 0LL;
  Block[1] = Block;
  v7 = *(_QWORD *)(a1 + 24);
  v59 = a3;
  v53 = a2;
  v64 = v3;
  v8 = *(_QWORD *)(v7 + 208);
  v9 = *(_QWORD *)(a1 + 1432);
  v63 = v4;
  v10 = *(_QWORD *)(v9 + 112);
  memset_0(v76, 0, sizeof(v76));
  RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)v10, (struct _RM_SYSTEM_MEMORY_METRICS *)v77);
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v8 + 400),
    (struct _RM_REMEDIATION_ACTIONS *)(v8 + 456),
    (struct _RM_SYSTEM_MEMORY_METRICS *)v77,
    v77[0],
    (struct _RM_RESOURCE_USAGE_LIMITS *)v76);
  v82 = *(_OWORD *)v77;
  v83[1] = v79;
  v83[0] = v78;
  v83[3] = v81;
  v83[2] = v80;
  *(_WORD *)(v10 + 188) = 0;
  v56 = 0LL;
  if ( v3
    && (!ExecutionModel::_ResourceSetInfo::IsFrozen((ExecutionModel::_ResourceSetInfo *)(a1 + 1456)) || (v11 & 0x40) != 0) )
  {
    RmpActivityHostQueryCommitDebt(v3, &v56);
  }
  if ( hProvider > 4u && (qword_1800670D0 & 9) != 0 && (qword_1800670D8 & 9) == qword_1800670D8 )
  {
    v60 = *(_QWORD *)(a1 + 1896);
    v88 = &v60;
    v61 = *(_QWORD *)(a1 + 1576);
    v90 = &v61;
    v92 = &v56;
    v94 = (char *)v83 + 8;
    v62 = *(_QWORD *)(a1 + 1600);
    v96 = &v62;
    v98 = v4 + 248;
    v89 = 8LL;
    v91 = 8LL;
    v93 = 8LL;
    v95 = 8LL;
    v97 = 8LL;
    v99 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800670C8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180058CE6 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_1800670C8;
    v85 = &unk_180058CF1;
    UserData.Reserved = 2;
    v86 = 118;
    v87 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  }
  v12 = RmpResourceCheckDestroyPartitionForAcquire(*(struct _RM_RESOURCE_SET **)(a1 + 1432));
  v13 = *(_QWORD *)(a1 + 1432);
  v52 = v12;
  v14 = *(_QWORD *)(v13 + 112);
  MaximumPriortyToRelease = ExecutionModel::ResourceManager::get_MaximumPriortyToRelease(*(_QWORD *)(a1 + 24));
  memset_0(&v69, 0, 0x30uLL);
  v69 = a1;
  while ( 1 )
  {
    v16 = Block[0];
    if ( Block[0] == Block )
      break;
    v36 = (_QWORD *)*((_QWORD *)Block[0] + 1);
    v37 = *(_QWORD *)Block[0];
    *v36 = *(_QWORD *)Block[0];
    *(_QWORD *)(v37 + 8) = v36;
    v38 = (ExecutionModel::BaseResourceSet *)v16[2];
    if ( v38 )
    {
      v39 = *(void (**)(void))(*(_QWORD *)v38 + 16LL);
      if ( (char *)v39 == (char *)ExecutionModel::BaseResourceSet::Release )
      {
        ExecutionModel::BaseResourceSet::Release(v38);
      }
      else if ( (char *)v39 == (char *)ExecutionModel::ResourceSet::Release )
      {
        ExecutionModel::ResourceSet::Release(v38);
      }
      else
      {
        v39();
      }
    }
    operator delete(v16);
  }
  v70 = Block;
  v58 = 0LL;
  v72 = v14 + 144;
  v71 = v14;
  v75 = MaximumPriortyToRelease;
  v17 = ExecutionModel::ResourceSet::EvaluateResourceRequest(a1, v56, v53, v76, &v82, &v69, &v45, &v44);
  v18 = v63;
  v51 = v17;
  if ( hProvider > 4u && (qword_1800670D0 & 9) != 0 )
  {
    v19 = v52;
    if ( (qword_1800670D8 & 9) == qword_1800670D8 )
    {
      v105 = 4LL;
      v107 = 1LL;
      v104 = &v51;
      v46 = v45;
      v106 = &v46;
      v47 = v44;
      v108 = &v47;
      v110 = &v48;
      v109 = 1LL;
      v48 = v52;
      v111 = 1LL;
      v20 = v70[2];
      v112 = &v54;
      v54 = (int)v20;
      v113 = 4LL;
      LODWORD(v20) = *(_DWORD *)(v72 + 40);
      v114 = &v55;
      v49 = v73;
      v116 = &v49;
      v50 = v74;
      v118 = &v50;
      v55 = (int)v20;
      v115 = 4LL;
      v117 = 1LL;
      v119 = 1LL;
      *(_DWORD *)&v68.Level = 4;
      v100.Ptr = (ULONGLONG)off_1800670C8;
      *(_DWORD *)&v68.Id = ((unsigned int)&unk_1800593AB - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v68.Keyword = 9LL;
      v100.Size = *(unsigned __int16 *)off_1800670C8;
      v101 = &unk_1800593B6;
      v103 = 1;
      v100.Reserved = 2;
      v102 = 185;
      EventWriteTransfer(RegHandle, &v68, 0LL, 0LL, 0xAu, &v100);
      v17 = v51;
    }
  }
  else
  {
    v19 = v52;
  }
  if ( v17 < 0 )
    goto LABEL_70;
  v21 = v45 || v44 || v19;
  for ( i = *(_QWORD **)(v18 + 160);
        i != (_QWORD *)(v18 + 160) && *(_DWORD *)(i[2] + 1408LL) < *(_DWORD *)(a1 + 1408);
        i = (_QWORD *)*i )
  {
    ;
  }
  v23 = operator new(0x18uLL, (const struct std::nothrow_t *)&unk_180052633);
  v24 = v23;
  if ( !v23 )
    goto LABEL_69;
  v23[2] = a1;
  v25 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)a1 + 8LL);
  if ( v25 == ExecutionModel::BaseResourceSet::AddRef )
    ExecutionModel::BaseResourceSet::AddRef((ExecutionModel::BaseResourceSet *)a1);
  else
    v25((ExecutionModel::BaseResourceSet *)a1);
  if ( !v24 )
  {
LABEL_69:
    v51 = -2147024882;
LABEL_70:
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, 0LL);
    v6 = v51;
    goto LABEL_42;
  }
  v26 = (_QWORD *)i[1];
  v24[1] = v26;
  *v24 = i;
  *v26 = v24;
  i[1] = v24;
  ++*(_QWORD *)(v18 + 176);
  v27 = 0;
  v28 = v64;
  v51 = 0;
  if ( v64 )
  {
    if ( !v21 )
    {
      *(_DWORD *)(a1 + 1400) = 2;
      RmpActivityHostUpdateDigests(v28, 1u);
      RmpActivityHostUpdateImportance(v28, 1u);
      QueryUnbiasedInterruptTime((PULONGLONG)v28 + 164);
      if ( RmpActivityHostIsRevocable(v28) )
        SetEvent(*(HANDLE *)(*((_QWORD *)v28 + 6) + 88LL));
      v29 = 0;
      if ( (*((_BYTE *)v28 + 772) & 1) != 0 )
        v29 = HAM_ACTIVITY_RM_CONTEXT::SynchronizeWithTerminationNeeded(*(HAM_ACTIVITY_RM_CONTEXT **)(a1 + 1840)) != 0;
      if ( v59 && RmpActivityHostCheckQueueWork(v28, v29) )
      {
        if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
        {
          v65 = *((_QWORD *)v28 + 3);
          v121 = &v65;
          v66 = *(_QWORD *)(a1 + 1896);
          v123 = &v66;
          v122 = 8LL;
          v124 = 8LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180058C9D, v32, v33, 4u, &pData);
        }
        *(_DWORD *)(a1 + 1452) |= 0x10u;
        v21 = 1;
      }
      *(_DWORD *)(a1 + 1400) = 1;
    }
    if ( (*((_BYTE *)v28 + 772) & 1) != 0 && (*(_BYTE *)(a1 + 1496) & 0x10) == 0 )
    {
      HAM_ACTIVITY_RM_CONTEXT::PendReasonChanged(*(_QWORD *)(a1 + 1840), *(_QWORD *)(a1 + 1896));
      v27 = 1;
    }
  }
  if ( v21 )
  {
    *(_DWORD *)(a1 + 1904) = CempQueryUnbiasedInterruptTimeMs();
    v34 = 1;
    v35 = v44;
    if ( v45 || v44 )
      v34 = 0;
    ExecutionModel::ResourceSet::CheckUpdatePendStats((ExecutionModel::ResourceSet *)a1, v34, v52 == 0);
    if ( v45 || v35 )
      RmpPolicyRevokeResourceSetsForAcquire((struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)&v69);
  }
  else
  {
    ExecutionModel::ResourceSet::CompleteAcquire((ExecutionModel::ResourceSet *)a1, v27);
  }
  if ( v59 )
    *v59 = v21;
  v51 = 0;
LABEL_42:
  while ( 1 )
  {
    v30 = Block[0];
    if ( Block[0] == Block )
      break;
    v40 = (_QWORD *)*((_QWORD *)Block[0] + 1);
    v41 = *(_QWORD *)Block[0];
    *v40 = *(_QWORD *)Block[0];
    *(_QWORD *)(v41 + 8) = v40;
    v42 = (ExecutionModel::BaseResourceSet *)v30[2];
    if ( v42 )
    {
      v43 = *(void (**)(void))(*(_QWORD *)v42 + 16LL);
      if ( (char *)v43 == (char *)ExecutionModel::BaseResourceSet::Release )
      {
        ExecutionModel::BaseResourceSet::Release(v42);
      }
      else if ( (char *)v43 == (char *)ExecutionModel::ResourceSet::Release )
      {
        ExecutionModel::ResourceSet::Release(v42);
      }
      else
      {
        v43();
      }
    }
    operator delete(v30);
  }
  return v6;
}
