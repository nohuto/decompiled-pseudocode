/*
 * XREFs of ?SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z @ 0x18005B774
 * Callers:
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@PEAV12@8PEAPEAV12@@Z @ 0x18001EF50 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180003178 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x18000320C (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800032E0 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     utl::list_ATL::CComPtr_ExecutionModel::BaseResourceSet__utl::allocator_ATL::CComPtr_ExecutionModel::BaseResourceSet_____::remove_if__lambda_4a96282eb34af91833354b43e8ed5ac2___ @ 0x1800234A0 (utl--list_ATL--CComPtr_ExecutionModel--BaseResourceSet__utl--allocator_ATL--CComPtr_ExecutionMod.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18003AA48 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18004E8F0 (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 */

int __fastcall ExecutionModel::ResourceSet::SetTransitionalPriorities(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax
  ExecutionModel::ExternalResourceSet *v4; // rbx
  struct IUnknown *v8; // rdx
  void (*Release)(void); // rax
  unsigned int (__fastcall *v10)(ExecutionModel::ExternalResourceSet *); // rax
  struct IUnknown *v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0LL;
  v12 = 0LL;
  v8 = *(struct IUnknown **)(v3 + 48);
  if ( v8 )
  {
    LODWORD(v3) = (unsigned int)ATL::AtlComPtrAssign(&v12, v8);
    v4 = (ExecutionModel::ExternalResourceSet *)v12;
  }
  if ( *(_DWORD *)(a1 + 1400) )
  {
    if ( (int)RmpEmPriorityCompare(a2, *(_DWORD *)(a1 + 1408)) > 0 )
    {
      *(_DWORD *)(a1 + 1408) = a2;
      *(_DWORD *)(a1 + 208) = a2;
      *(_DWORD *)(a1 + 232) = a2;
      *(_DWORD *)(a1 + 256) = a2;
      ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(
        (ExecutionModel::ExternalResourceSet **)&v12,
        (ExecutionModel::ExternalResourceSet *)a1);
      utl::list_ATL::CComPtr_ExecutionModel::BaseResourceSet__utl::allocator_ATL::CComPtr_ExecutionModel::BaseResourceSet_____::remove_if__lambda_4a96282eb34af91833354b43e8ed5ac2___(
        (_QWORD *)v4 + 20,
        &v12);
      if ( v12 )
      {
        Release = (void (*)(void))v12->lpVtbl->Release;
        if ( (char *)Release == (char *)ExecutionModel::ExternalResourceSet::Release )
          ExecutionModel::ExternalResourceSet::Release((ExecutionModel::ExternalResourceSet *)v12);
        else
          Release();
      }
      ExecutionModel::BaseResourceSet::AddToListPrioritized((_QWORD *)v4 + 20, a1);
    }
    LODWORD(v3) = RmpEmPriorityCompare(a3, *(_DWORD *)(a1 + 1412));
    if ( (int)v3 > 0 )
      *(_DWORD *)(a1 + 1412) = a3;
  }
  if ( v4 )
  {
    v10 = *(unsigned int (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v4 + 16LL);
    if ( v10 == ExecutionModel::ExternalResourceSet::Release )
      LODWORD(v3) = ExecutionModel::ExternalResourceSet::Release(v4);
    else
      LODWORD(v3) = v10(v4);
  }
  return v3;
}
