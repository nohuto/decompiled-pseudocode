/*
 * XREFs of utl::list_ATL::CComPtr_ExecutionModel::BaseResourceSet__utl::allocator_ATL::CComPtr_ExecutionModel::BaseResourceSet_____::remove_if__lambda_4a96282eb34af91833354b43e8ed5ac2___ @ 0x1800234A0
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180001EF4 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18001EA30 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x18001EC40 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ @ 0x18005B074 (-ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z @ 0x18005B774 (-SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z.c)
 * Callees:
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18001FF90 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F5A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall utl::list_ATL::CComPtr_ExecutionModel::BaseResourceSet__utl::allocator_ATL::CComPtr_ExecutionModel::BaseResourceSet_____::remove_if__lambda_4a96282eb34af91833354b43e8ed5ac2___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *i; // rbx
  _QWORD *v5; // rsi
  _QWORD *v6; // rax
  ExecutionModel::ResourceSet *v7; // rcx
  void (*v8)(void); // rax

  for ( i = (_QWORD *)*a1; i != a1; i = v5 )
  {
    v5 = (_QWORD *)*i;
    if ( i[2] == *a2 )
    {
      v6 = (_QWORD *)i[1];
      *v6 = v5;
      v5[1] = v6;
      v7 = (ExecutionModel::ResourceSet *)i[2];
      if ( v7 )
      {
        v8 = *(void (**)(void))(*(_QWORD *)v7 + 16LL);
        if ( (char *)v8 == (char *)ExecutionModel::ResourceSet::Release )
          ExecutionModel::ResourceSet::Release(v7);
        else
          v8();
      }
      operator delete(i);
      --a1[2];
    }
  }
}
