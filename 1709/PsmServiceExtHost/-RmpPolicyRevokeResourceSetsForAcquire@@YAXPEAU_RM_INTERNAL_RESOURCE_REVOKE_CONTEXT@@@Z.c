/*
 * XREFs of ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18003BE0C
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000FAF0 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010B70 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18003BD1C (-RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REAS.c)
 *     ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4_RM_REVOKE_REASON_INTERNAL@@W4_RM_REVOKE_POLICY@@W4Enum@Priority@ExecutionModel@@PEAVResourceSet@7@@Z @ 0x18003BE64 (-RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV-$list@V-$CComPtr@VBaseResourceSet@ExecutionM.c)
 */

void __fastcall RmpPolicyRevokeResourceSetsForAcquire(struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rcx

  v2 = (_QWORD *)*((_QWORD *)a1 + 1);
  if ( (_QWORD *)*v2 != v2 )
    RmpPolicyRevokeResourceSetsForPoolAcquire(
      (_DWORD)v2,
      *(_DWORD *)(*(_QWORD *)a1 + 152LL),
      *((_DWORD *)a1 + 8),
      *((_DWORD *)a1 + 10),
      *(_QWORD *)a1);
  v3 = *((_QWORD *)a1 + 3);
  if ( *(_DWORD *)(v3 + 40) )
    RmpPolicyReclaimHostList(v3, *((_DWORD *)a1 + 9), *(_DWORD *)(*(_QWORD *)a1 + 152LL), *(_QWORD *)a1, 0LL);
}
