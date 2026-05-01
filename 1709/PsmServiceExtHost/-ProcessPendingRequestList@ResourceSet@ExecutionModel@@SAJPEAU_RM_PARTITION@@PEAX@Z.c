/*
 * XREFs of ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000FAF0
 * Callers:
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x18000F9E0 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 * Callees:
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180005690 (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180008A64 (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?get_MaximumPriortyToRelease@ResourceManager@ExecutionModel@@QEAA?AW4Enum@Priority@2@XZ @ 0x18000D6A0 (-get_MaximumPriortyToRelease@ResourceManager@ExecutionModel@@QEAA-AW4Enum@Priority@2@XZ.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010220 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800113A0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z @ 0x18001191C (-CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180011CCC (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x180011EC0 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_U.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180015680 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180016998 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x18001F894 (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAVResourceSet@ExecutionModel@@W4Enum@Priority@5@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18001FD10 (-RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180020070 (-RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800269DC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18003BE0C (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 *     ?PendReasonChanged@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_KW4_HAM_PEND_STATE@@@Z @ 0x180045CF4 (-PendReasonChanged@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_KW4_HAM_PEND_STATE@@@Z.c)
 *     ?SynchronizeWithTerminationNeeded@HAM_ACTIVITY_RM_CONTEXT@@QEAAKXZ @ 0x180045F28 (-SynchronizeWithTerminationNeeded@HAM_ACTIVITY_RM_CONTEXT@@QEAAKXZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ProcessPendingRequestList(struct _RM_PARTITION *a1, void *a2)
{
  _QWORD *v2; // rdi
  __int64 *v3; // rbx
  const GUID *v6; // r8
  const GUID *v7; // r9
  __int64 v8; // rbx
  int MaximumPriortyToRelease; // eax
  __int64 v10; // r10
  __int64 v11; // r13
  int v12; // r15d
  __int64 v13; // rbx
  __int64 v14; // rsi
  unsigned int v15; // r14d
  const GUID *v16; // r8
  const GUID *v17; // r9
  char v18; // r12
  char v19; // r15
  unsigned int v20; // edx
  int v21; // eax
  unsigned int v22; // r14d
  __int64 *v23; // rcx
  __int64 v24; // rax
  ExecutionModel::BaseResourceSet *v25; // rcx
  unsigned int (__fastcall *v26)(ExecutionModel::ResourceSet *__hidden); // rax
  char v27; // [rsp+40h] [rbp-C0h] BYREF
  char v28; // [rsp+41h] [rbp-BFh] BYREF
  _BYTE v29[2]; // [rsp+42h] [rbp-BEh] BYREF
  int i; // [rsp+44h] [rbp-BCh]
  unsigned __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD Block[3]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v35[48]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v36[128]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v37[24]; // [rsp+130h] [rbp+30h] BYREF
  char v38; // [rsp+148h] [rbp+48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+180h] [rbp+80h] BYREF
  void *v40; // [rsp+190h] [rbp+90h]
  int v41; // [rsp+198h] [rbp+98h]
  int v42; // [rsp+19Ch] [rbp+9Ch]
  EVENT_DATA_DESCRIPTOR v43; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v44; // [rsp+1C0h] [rbp+C0h]
  __int64 v45; // [rsp+1C8h] [rbp+C8h]
  unsigned __int64 *v46; // [rsp+1D0h] [rbp+D0h]
  __int64 v47; // [rsp+1D8h] [rbp+D8h]
  char *v48; // [rsp+1E0h] [rbp+E0h]
  __int64 v49; // [rsp+1E8h] [rbp+E8h]
  __int64 v50; // [rsp+1F0h] [rbp+F0h]
  __int64 v51; // [rsp+1F8h] [rbp+F8h]
  __int64 v52; // [rsp+200h] [rbp+100h]
  __int64 v53; // [rsp+208h] [rbp+108h]
  char *v54; // [rsp+210h] [rbp+110h]
  __int64 v55; // [rsp+218h] [rbp+118h]
  __int64 *v56; // [rsp+220h] [rbp+120h]
  __int64 v57; // [rsp+228h] [rbp+128h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+230h] [rbp+130h] BYREF

  v2 = (_QWORD *)((char *)a1 + 200);
  v3 = Block;
  Block[0] = Block;
  Block[1] = Block;
  Block[2] = 0LL;
  if ( (_QWORD *)*v2 != v2 )
  {
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180059470, v6, v7, 2u, &pData);
    v8 = *((_QWORD *)a1 + 3);
    RmpPolicyPrepareToCheckMetrics(
      a1,
      (struct _RM_POLICY *)(v8 + 400),
      (struct _RM_RESOURCE_USAGE_LIMITS *)v36,
      (struct _RM_SYSTEM_MEMORY_METRICS *)v37);
    MaximumPriortyToRelease = ExecutionModel::ResourceManager::get_MaximumPriortyToRelease(*(_QWORD *)(v8 + 1896));
    v11 = *(_QWORD *)(v10 + 104);
    v12 = MaximumPriortyToRelease;
    for ( i = MaximumPriortyToRelease; (_QWORD *)*v2 != v2; v12 = i )
    {
      v13 = *(_QWORD *)(*v2 - 88LL);
      v14 = *(_QWORD *)(v13 + 1440);
      v31 = 0LL;
      if ( v14 && !RmpResourceSetIsCommitSaveEligible((const struct ExecutionModel::_ResourceSetInfo *)(v13 + 1456)) )
        RmpActivityHostQueryCommitDebt((struct _RM_ACTIVITY_HOST *)v14, &v31);
      v15 = RmpResourceCheckDestroyPartitionForAcquire(*(struct _RM_RESOURCE_SET **)(v13 + 1432));
      if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v45 = 8LL;
        v46 = &v31;
        v44 = v13 + 224;
        v48 = &v38;
        v50 = v13 + 248;
        v52 = v11 + 248;
        v54 = &v28;
        v33 = *(_QWORD *)(v13 + 1896);
        v56 = &v33;
        v47 = 8LL;
        v49 = 8LL;
        v51 = 8LL;
        v53 = 8LL;
        v28 = v15;
        v55 = 1LL;
        v57 = 8LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180059121, v16, v17, 9u, &v43);
      }
      RmpPolicyInitializeRevokeContext(*(_QWORD *)(*(_QWORD *)(v13 + 1432) + 112LL), (int)Block, v13, v12, v35);
      if ( (int)ExecutionModel::ResourceSet::EvaluateResourceRequest(v13, v31, 1LL, v36, v37, v35, v29, &v27) < 0 )
        break;
      v18 = v29[0];
      v19 = v27;
      v20 = !v29[0] && !v27;
      ExecutionModel::ResourceSet::CheckUpdatePendStats((ExecutionModel::ResourceSet *)v13, v20, v15 == 0);
      if ( v18 || v19 || v15 )
      {
        RmpPolicyRevokeResourceSetsForAcquire((struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)v35);
        break;
      }
      if ( v14 )
      {
        v21 = *(_DWORD *)(v13 + 1452);
        if ( (v21 & 0x10) == 0 )
        {
          *(_DWORD *)(v13 + 1452) = v21 | 0x10;
          RmpActivityHostResourceSetsChanged((struct _RM_ACTIVITY_HOST *)v14, 1u);
          if ( (*(_BYTE *)(v14 + 772) & 1) != 0 )
            HAM_ACTIVITY_RM_CONTEXT::PendReasonChanged(*(_QWORD *)(v13 + 1840), *(_QWORD *)(v13 + 1896));
        }
        v22 = 0;
        if ( (*(_BYTE *)(v14 + 772) & 1) != 0 )
          v22 = HAM_ACTIVITY_RM_CONTEXT::SynchronizeWithTerminationNeeded(*(HAM_ACTIVITY_RM_CONTEXT **)(v13 + 1840)) != 0;
        if ( RmpActivityHostCheckQueueWork((struct _RM_ACTIVITY_HOST *)v14, v22) )
          break;
      }
      ExecutionModel::ResourceSet::CompleteAcquire((ExecutionModel::ResourceSet *)v13, 1u);
    }
    v3 = (__int64 *)Block[0];
  }
  if ( hProvider > 5u && (qword_1800670D0 & 1) != 0 && (qword_1800670D8 & 1) == qword_1800670D8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 517;
    UserData.Ptr = (ULONGLONG)off_1800670C8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180059492 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800670C8;
    v40 = &unk_18005949D;
    UserData.Reserved = 2;
    v41 = 22;
    v42 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
    v3 = (__int64 *)Block[0];
  }
  while ( v3 != Block )
  {
    v23 = (__int64 *)v3[1];
    v24 = *v3;
    *v23 = *v3;
    *(_QWORD *)(v24 + 8) = v23;
    v25 = (ExecutionModel::BaseResourceSet *)v3[2];
    if ( v25 )
    {
      v26 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v25 + 16LL);
      if ( v26 == ExecutionModel::BaseResourceSet::Release )
      {
        ExecutionModel::BaseResourceSet::Release(v25);
      }
      else if ( v26 == ExecutionModel::ResourceSet::Release )
      {
        ExecutionModel::ResourceSet::Release(v25);
      }
      else
      {
        ((void (__fastcall *)(ExecutionModel::BaseResourceSet *, void *))v26)(v25, a2);
      }
    }
    operator delete(v3);
    v3 = (__int64 *)Block[0];
  }
  return 0LL;
}
