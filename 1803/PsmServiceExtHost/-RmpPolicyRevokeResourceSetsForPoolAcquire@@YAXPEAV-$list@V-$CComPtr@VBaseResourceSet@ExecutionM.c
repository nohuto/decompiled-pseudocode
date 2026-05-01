/*
 * XREFs of ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4_RM_REVOKE_REASON_INTERNAL@@W4_RM_REVOKE_POLICY@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18005A828
 * Callers:
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18005A7D4 (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 * Callees:
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800032E0 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18003AA48 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?RmpPolicyTryGetRevokeAction@@YAKPEAVResourceSet@ExecutionModel@@W4_RM_REVOKE_POLICY@@PEAW4_RM_REVOKE_ACTION@@@Z @ 0x18005A910 (-RmpPolicyTryGetRevokeAction@@YAKPEAVResourceSet@ExecutionModel@@W4_RM_REVOKE_POLICY@@PEAW4_RM_R.c)
 *     ?Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAV12@@Z @ 0x18005B17C (-Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPE.c)
 *     ?RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z @ 0x1800662F8 (-RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z.c)
 */

void __fastcall RmpPolicyRevokeResourceSetsForPoolAcquire(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  _QWORD *v4; // rdi
  ExecutionModel::ExternalResourceSet *v5; // rbx
  struct IUnknown *v10; // rdx
  unsigned int (__fastcall *v11)(ExecutionModel::ExternalResourceSet *); // rax
  struct IUnknown *v12; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF

  v4 = (_QWORD *)*a1;
  v5 = 0LL;
  v12 = 0LL;
  while ( v4 != a1 )
  {
    v10 = (struct IUnknown *)v4[2];
    if ( v5 != (ExecutionModel::ExternalResourceSet *)v10 )
    {
      ATL::AtlComPtrAssign(&v12, v10);
      v5 = (ExecutionModel::ExternalResourceSet *)v12;
    }
    if ( (unsigned int)RmpPolicyTryGetRevokeAction(v5, a3, &v13) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)v5 + 180) + 804LL) & 1) != 0 )
        HAM_ACTIVITY_RM_CONTEXT::RequestStop(*((HAM_ACTIVITY_RM_CONTEXT **)v5 + 229), *((_QWORD *)v5 + 235));
      else
        ExecutionModel::ResourceSet::Revoke(v5, v13, a2, -1LL, a4);
    }
    v4 = (_QWORD *)*v4;
  }
  if ( v5 )
  {
    v11 = *(unsigned int (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v5 + 16LL);
    if ( v11 == ExecutionModel::ExternalResourceSet::Release )
      ExecutionModel::ExternalResourceSet::Release(v5);
    else
      v11(v5);
  }
}
