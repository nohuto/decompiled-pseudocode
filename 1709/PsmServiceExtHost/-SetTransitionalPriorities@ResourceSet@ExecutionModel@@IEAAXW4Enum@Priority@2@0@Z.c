/*
 * XREFs of ?SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z @ 0x180011AA8
 * Callers:
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@PEAV12@8PEAPEAV12@@Z @ 0x1800126B0 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010220 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800113A0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     utl::list_ATL::CComPtr_ExecutionModel::BaseResourceSet__utl::allocator_ATL::CComPtr_ExecutionModel::BaseResourceSet_____::remove_if__lambda_4a96282eb34af91833354b43e8ed5ac2___ @ 0x180015E20 (utl--list_ATL--CComPtr_ExecutionModel--BaseResourceSet__utl--allocator_ATL--CComPtr_ExecutionMod.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x18001E938 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18001EE28 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18001F8EC (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x18001F8FC (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

struct IUnknown *__fastcall ExecutionModel::ResourceSet::SetTransitionalPriorities(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  ExecutionModel::BaseResourceSet *v3; // rbx
  struct IUnknown *result; // rax
  struct IUnknown *lpVtbl; // rdx
  __int64 (__fastcall *v9)(ExecutionModel::ResourceSet *); // rax
  void (*Release)(void); // rax
  struct IUnknown *v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  v11 = 0LL;
  result = *(struct IUnknown **)(a1 + 24);
  lpVtbl = (struct IUnknown *)result[13].lpVtbl;
  if ( lpVtbl )
  {
    result = ATL::AtlComPtrAssign(&v11, lpVtbl);
    v3 = (ExecutionModel::BaseResourceSet *)v11;
  }
  if ( *(_DWORD *)(a1 + 1400) )
  {
    if ( (int)RmpEmPriorityCompare(a2, *(unsigned int *)(a1 + 1408)) > 0 )
    {
      *(_DWORD *)(a1 + 1408) = a2;
      *(_DWORD *)(a1 + 208) = a2;
      *(_DWORD *)(a1 + 232) = a2;
      *(_DWORD *)(a1 + 256) = a2;
      ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&v11, a1);
      utl::list_ATL::CComPtr_ExecutionModel::BaseResourceSet__utl::allocator_ATL::CComPtr_ExecutionModel::BaseResourceSet_____::remove_if__lambda_4a96282eb34af91833354b43e8ed5ac2___(
        (char *)v3 + 160,
        &v11);
      if ( v11 )
      {
        Release = (void (*)(void))v11->lpVtbl->Release;
        if ( (char *)Release == (char *)ExecutionModel::BaseResourceSet::Release )
        {
          ExecutionModel::BaseResourceSet::Release((ExecutionModel::BaseResourceSet *)v11);
        }
        else if ( (char *)Release == (char *)ExecutionModel::ResourceSet::Release )
        {
          ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)v11);
        }
        else
        {
          Release();
        }
      }
      ExecutionModel::BaseResourceSet::AddToListPrioritized((char *)v3 + 160, a1);
    }
    result = (struct IUnknown *)RmpEmPriorityCompare(a3, *(unsigned int *)(a1 + 1412));
    if ( (int)result > 0 )
      *(_DWORD *)(a1 + 1412) = a3;
  }
  if ( v3 )
  {
    v9 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v3 + 16LL);
    if ( v9 == ExecutionModel::BaseResourceSet::Release )
    {
      return (struct IUnknown *)ExecutionModel::BaseResourceSet::Release(v3);
    }
    else if ( v9 == ExecutionModel::ResourceSet::Release )
    {
      return (struct IUnknown *)ExecutionModel::ResourceSet::Release(v3);
    }
    else
    {
      return (struct IUnknown *)v9(v3);
    }
  }
  return result;
}
