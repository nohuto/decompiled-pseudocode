/*
 * XREFs of utl::list_ATL::CComPtr_ExecutionModel::BaseResourceSet__utl::allocator_ATL::CComPtr_ExecutionModel::BaseResourceSet_____::remove_if__lambda_4a96282eb34af91833354b43e8ed5ac2___ @ 0x180015E20
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW4_RM_REVOKE_REASON_INTERNAL@@W45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x1800023F4 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x180010680 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180010840 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ @ 0x180011988 (-ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z @ 0x180011AA8 (-SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z.c)
 * Callees:
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800113A0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800269DC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall utl::list_ATL::CComPtr_ExecutionModel::BaseResourceSet__utl::allocator_ATL::CComPtr_ExecutionModel::BaseResourceSet_____::remove_if__lambda_4a96282eb34af91833354b43e8ed5ac2___(
        __int64 **a1,
        _QWORD *a2)
{
  __int64 *v2; // rbx
  __int64 *v5; // rsi
  __int64 *v6; // rcx
  __int64 v7; // rax
  ExecutionModel::ResourceSet *v8; // rcx
  void (*v9)(void); // rax

  v2 = *a1;
  while ( v2 != (__int64 *)a1 )
  {
    if ( v2[2] == *a2 )
    {
      v5 = v2;
      v2 = (__int64 *)*v2;
      v6 = (__int64 *)v5[1];
      v7 = *v5;
      *v6 = *v5;
      *(_QWORD *)(v7 + 8) = v6;
      v8 = (ExecutionModel::ResourceSet *)v5[2];
      if ( v8 )
      {
        v9 = *(void (**)(void))(*(_QWORD *)v8 + 16LL);
        if ( (char *)v9 == (char *)ExecutionModel::ResourceSet::Release )
          ExecutionModel::ResourceSet::Release(v8);
        else
          v9();
      }
      operator delete(v5);
      a1[2] = (__int64 *)((char *)a1[2] - 1);
    }
    else
    {
      v2 = (__int64 *)*v2;
    }
  }
}
