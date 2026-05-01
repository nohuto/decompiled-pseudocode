/*
 * XREFs of ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18001E320
 * Callers:
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x18001E210 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 * Callees:
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180006D54 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180012A54 (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18001EE38 (-RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180020370 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x1800204B0 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_U.c)
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x180022948 (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180024F18 (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DAA0 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ??1?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180034044 (--1-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F5A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAVResourceSet@ExecutionModel@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18005A520 (-RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18005A7D4 (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 *     ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z @ 0x18005A96C (-CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ProcessPendingRequestList(struct _RM_PARTITION *a1, void *a2)
{
  __int64 *v2; // rbx
  _QWORD *v3; // rdi
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned int v10; // r15d
  __int64 v11; // rdx
  char v12; // r14
  unsigned int v13; // edx
  int v14; // eax
  __int64 *v15; // rcx
  __int64 v16; // rax
  char v17; // [rsp+48h] [rbp-C0h] BYREF
  char v18; // [rsp+49h] [rbp-BFh] BYREF
  char v19; // [rsp+4Ah] [rbp-BEh] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD Block[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v24[48]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v25[128]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v26[24]; // [rsp+138h] [rbp+30h] BYREF
  char v27; // [rsp+150h] [rbp+48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+188h] [rbp+80h] BYREF
  void *v29; // [rsp+198h] [rbp+90h]
  int v30; // [rsp+1A0h] [rbp+98h]
  int v31; // [rsp+1A4h] [rbp+9Ch]
  EVENT_DATA_DESCRIPTOR v32; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v33; // [rsp+1C8h] [rbp+C0h]
  __int64 v34; // [rsp+1D0h] [rbp+C8h]
  unsigned __int64 *v35; // [rsp+1D8h] [rbp+D0h]
  __int64 v36; // [rsp+1E0h] [rbp+D8h]
  char *v37; // [rsp+1E8h] [rbp+E0h]
  __int64 v38; // [rsp+1F0h] [rbp+E8h]
  __int64 v39; // [rsp+1F8h] [rbp+F0h]
  __int64 v40; // [rsp+200h] [rbp+F8h]
  __int64 v41; // [rsp+208h] [rbp+100h]
  __int64 v42; // [rsp+210h] [rbp+108h]
  char *v43; // [rsp+218h] [rbp+110h]
  __int64 v44; // [rsp+220h] [rbp+118h]
  __int64 *v45; // [rsp+228h] [rbp+120h]
  __int64 v46; // [rsp+230h] [rbp+128h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+238h] [rbp+130h] BYREF

  v2 = Block;
  v3 = (_QWORD *)((char *)a1 + 200);
  Block[0] = Block;
  Block[1] = Block;
  Block[2] = 0LL;
  if ( (_QWORD *)*v3 != v3 )
  {
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007F649, 0LL, 0LL, 2u, &pData);
    v6 = *((_QWORD *)a1 + 3);
    RmpPolicyPrepareToCheckMetrics(
      a1,
      (struct _RM_POLICY *)(v6 + 424),
      (struct _RM_RESOURCE_USAGE_LIMITS *)v25,
      (struct _RM_SYSTEM_MEMORY_METRICS *)v26);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 2232) + 48LL);
    while ( (_QWORD *)*v3 != v3 )
    {
      v8 = *(_QWORD *)(*v3 - 88LL);
      v9 = *(_QWORD *)(v8 + 1440);
      v20 = 0LL;
      if ( !RmpResourceSetIsCommitSaveEligible((const struct ExecutionModel::_ResourceSetInfo *)(v8 + 1456)) )
        RmpActivityHostQueryCommitDebt((struct _RM_ACTIVITY_HOST *)v9, &v20);
      v10 = RmpResourceCheckDestroyPartitionForAcquire(*(struct _RM_RESOURCE_SET **)(v8 + 1432));
      if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v34 = 8LL;
        v35 = &v20;
        v33 = v8 + 224;
        v37 = &v27;
        v39 = v8 + 248;
        v41 = v7 + 248;
        v43 = &v18;
        v22 = *(_QWORD *)(v8 + 1880);
        v45 = &v22;
        v36 = 8LL;
        v38 = 8LL;
        v40 = 8LL;
        v42 = 8LL;
        v18 = v10;
        v44 = v11;
        v46 = 8LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007EF7C, 0LL, 0LL, 9u, &v32);
      }
      RmpPolicyInitializeRevokeContext(*(_QWORD *)(*(_QWORD *)(v8 + 1432) + 120LL), Block, v8, v24);
      if ( (int)ExecutionModel::ResourceSet::EvaluateResourceRequest(v8, v20, 1LL, v25, v26, v24, &v17, &v19) < 0 )
        break;
      v12 = v19;
      v13 = !v17 && !v19;
      ExecutionModel::ResourceSet::CheckUpdatePendStats((ExecutionModel::ResourceSet *)v8, v13, v10 == 0);
      if ( v17 || v12 || v10 )
      {
        RmpPolicyRevokeResourceSetsForAcquire((struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)v24);
        break;
      }
      v14 = *(_DWORD *)(v8 + 1452);
      if ( (v14 & 0x10) == 0 )
      {
        *(_DWORD *)(v8 + 1452) = v14 | 0x10;
        RmpActivityHostResourceSetsChanged((struct _RM_ACTIVITY_HOST *)v9, 1u);
      }
      if ( (*(_BYTE *)(v9 + 804) & 1) == 0 && RmpActivityHostCheckQueueWork((struct _RM_ACTIVITY_HOST *)v9) )
        break;
      ExecutionModel::ResourceSet::CompleteAcquire((ExecutionModel::ResourceSet *)v8, 1u);
    }
    v2 = (__int64 *)Block[0];
  }
  if ( hProvider <= 5u || (qword_1800920C0 & 1) == 0 || (qword_1800920C8 & 1) != qword_1800920C8 )
    goto LABEL_3;
  *(_DWORD *)&EventDescriptor.Level = 517;
  UserData.Ptr = (ULONGLONG)off_1800920B8;
  *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18007EF5A - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
  EventDescriptor.Keyword = 1LL;
  UserData.Size = *(unsigned __int16 *)off_1800920B8;
  v29 = &unk_18007EF65;
  UserData.Reserved = 2;
  v30 = 22;
  v31 = 1;
  EventWriteTransfer(qword_1800920D0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  while ( 1 )
  {
    v2 = (__int64 *)Block[0];
LABEL_3:
    if ( v2 == Block )
      break;
    v15 = (__int64 *)v2[1];
    v16 = *v2;
    *v15 = *v2;
    *(_QWORD *)(v16 + 8) = v15;
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::~CComPtrBase<ExecutionModel::BaseResourceSet>(v2 + 2, a2);
    operator delete(v2);
  }
  return 0LL;
}
