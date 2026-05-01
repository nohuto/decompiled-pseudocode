/*
 * XREFs of ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4_RM_REVOKE_REASON_INTERNAL@@W4_RM_REVOKE_POLICY@@W4Enum@Priority@ExecutionModel@@PEAVResourceSet@7@@Z @ 0x18003BE64
 * Callers:
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18003BE0C (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 * Callees:
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010220 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800113A0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18001EE28 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ?RmpPolicyTryGetRevokeAction@@YAKPEAVResourceSet@ExecutionModel@@W4_RM_REVOKE_POLICY@@PEAW4_RM_REVOKE_ACTION@@@Z @ 0x18003BF48 (-RmpPolicyTryGetRevokeAction@@YAKPEAVResourceSet@ExecutionModel@@W4_RM_REVOKE_POLICY@@PEAW4_RM_R.c)
 *     ?Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAV12@@Z @ 0x18003C2C4 (-Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPE.c)
 */

void __fastcall RmpPolicyRevokeResourceSetsForPoolAcquire(
        _QWORD *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 a5)
{
  _QWORD *v5; // rdi
  ExecutionModel::BaseResourceSet *v6; // rbx
  __int64 v7; // r15
  struct IUnknown *v12; // rdx
  __int64 (__fastcall *v13)(ExecutionModel::ResourceSet *); // rax
  struct IUnknown *v14; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+70h] [rbp+8h] BYREF

  v5 = (_QWORD *)*a1;
  v6 = 0LL;
  v7 = a5;
  v14 = 0LL;
  while ( v5 != a1 )
  {
    v12 = (struct IUnknown *)v5[2];
    if ( v6 != (ExecutionModel::BaseResourceSet *)v12 )
    {
      ATL::AtlComPtrAssign(&v14, v12);
      v6 = (ExecutionModel::BaseResourceSet *)v14;
    }
    if ( *((_DWORD *)v6 + 352) >= a4 )
    {
      if ( (unsigned int)RmpPolicyTryGetRevokeAction(v6, a3, &v15) )
        ExecutionModel::ResourceSet::Revoke(v6, v15, a2, -1LL, v7);
    }
    v5 = (_QWORD *)*v5;
  }
  if ( v6 )
  {
    v13 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v6 + 16LL);
    if ( v13 == ExecutionModel::BaseResourceSet::Release )
    {
      ExecutionModel::BaseResourceSet::Release(v6);
    }
    else if ( v13 == ExecutionModel::ResourceSet::Release )
    {
      ExecutionModel::ResourceSet::Release(v6);
    }
    else
    {
      v13(v6);
    }
  }
}
