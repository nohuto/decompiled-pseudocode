/*
 * XREFs of ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18001EE28
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E8E0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ @ 0x180011988 (-ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z @ 0x180011AA8 (-SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x1800121D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@PEAV12@8PEAPEAV12@@Z @ 0x1800126B0 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 *     ?SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAXPEAK@Z @ 0x18002202C (-SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAXPEAK@Z.c)
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180022744 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@@Z @ 0x180022808 (-Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnfo.c)
 *     ?RmpActivityHostApplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180035850 (-RmpActivityHostApplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4_RM_REVOKE_REASON_INTERNAL@@W4_RM_REVOKE_POLICY@@W4Enum@Priority@ExecutionModel@@PEAVResourceSet@7@@Z @ 0x18003BE64 (-RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV-$list@V-$CComPtr@VBaseResourceSet@ExecutionM.c)
 * Callees:
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800107F0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800113A0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

struct IUnknown *__fastcall ATL::AtlComPtrAssign(struct IUnknown **a1, struct IUnknown *a2)
{
  ULONG (__stdcall *AddRef)(IUnknown *); // rax
  ExecutionModel::ResourceSet *v5; // rcx
  void (*v7)(void); // rax

  if ( !a1 )
    return 0LL;
  if ( a2 )
  {
    AddRef = a2->lpVtbl->AddRef;
    if ( (char *)AddRef == (char *)ExecutionModel::BaseResourceSet::AddRef )
      ExecutionModel::BaseResourceSet::AddRef((ExecutionModel::BaseResourceSet *)a2);
    else
      ((void (__fastcall *)(struct IUnknown *))AddRef)(a2);
  }
  v5 = (ExecutionModel::ResourceSet *)*a1;
  if ( *a1 )
  {
    v7 = *(void (**)(void))(*(_QWORD *)v5 + 16LL);
    if ( (char *)v7 == (char *)ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v5);
    else
      v7();
  }
  *a1 = a2;
  return a2;
}
