/*
 * XREFs of ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18005C920
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180001EF4 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x18001E7A0 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x18000320C (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800032E0 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x18005C5BC (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 */

void __fastcall ExecutionModel::BaseResourceSet::RevokeResourceList(
        ExecutionModel::ExternalResourceSet *a1,
        __int64 ***a2)
{
  __int64 **i; // rbx
  ExecutionModel::ExternalResourceSet *v4; // rdi
  unsigned int (__fastcall *v5)(ExecutionModel::ExternalResourceSet *); // rax
  ExecutionModel::ExternalResourceSet *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  for ( i = *a2; i != (__int64 **)a2; i = (__int64 **)*i )
  {
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(
      &v6,
      (ExecutionModel::ExternalResourceSet *)i[2]);
    v4 = v6;
    ExecutionModel::ExternalResourceSet::Revoke(v6, 0);
    if ( v4 )
    {
      v5 = *(unsigned int (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v4 + 16LL);
      if ( v5 == ExecutionModel::ExternalResourceSet::Release )
        ExecutionModel::ExternalResourceSet::Release(v4);
      else
        v5(v4);
    }
  }
}
