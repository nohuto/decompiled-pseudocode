/*
 * XREFs of ?RmpPolicyTryGetRevokeAction@@YAKPEAVResourceSet@ExecutionModel@@W4_RM_REVOKE_POLICY@@PEAW4_RM_REVOKE_ACTION@@@Z @ 0x18003BF48
 * Callers:
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x18000160C (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180036344 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4_RM_REVOKE_REASON_INTERNAL@@W4_RM_REVOKE_POLICY@@W4Enum@Priority@ExecutionModel@@PEAVResourceSet@7@@Z @ 0x18003BE64 (-RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV-$list@V-$CComPtr@VBaseResourceSet@ExecutionM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpPolicyTryGetRevokeAction(__int64 a1, int a2, int *a3)
{
  __int64 v3; // rax
  __int16 v5; // r9
  __int16 v6; // ax
  int v7; // edx
  int v8; // edx
  unsigned int v9; // r8d
  int v10; // eax

  v3 = *(_QWORD *)(a1 + 1440);
  if ( v3 )
    v5 = *(_WORD *)(v3 + 866);
  else
    LOBYTE(v5) = 102;
  v6 = *(_WORD *)(a1 + 1496);
  v7 = a2 - 1;
  if ( !v7 )
  {
    v9 = 1;
    goto LABEL_13;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = 1;
    if ( (v6 & 1) != 0 )
      goto LABEL_15;
    if ( (v6 & 2) != 0 )
    {
LABEL_11:
      v10 = 1;
      goto LABEL_16;
    }
    return 0;
  }
  if ( v8 != 1 )
    return 0;
  v9 = 1;
  if ( (*(_WORD *)(a1 + 1496) & 2) != 0 && (v5 & 0x20) != 0 )
    goto LABEL_11;
LABEL_13:
  if ( (v6 & 1) == 0 )
    return 0;
LABEL_15:
  v10 = 0;
LABEL_16:
  if ( a3 )
    *a3 = v10;
  return v9;
}
