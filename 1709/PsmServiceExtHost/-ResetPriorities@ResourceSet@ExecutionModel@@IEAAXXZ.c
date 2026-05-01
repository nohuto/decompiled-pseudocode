/*
 * XREFs of ?ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ @ 0x180011988
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x1800121D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010220 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800113A0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     utl::list_ATL::CComPtr_ExecutionModel::BaseResourceSet__utl::allocator_ATL::CComPtr_ExecutionModel::BaseResourceSet_____::remove_if__lambda_4a96282eb34af91833354b43e8ed5ac2___ @ 0x180015E20 (utl--list_ATL--CComPtr_ExecutionModel--BaseResourceSet__utl--allocator_ATL--CComPtr_ExecutionMod.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x18001E938 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18001EE28 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x18001F8FC (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceSet::ResetPriorities(ExecutionModel::ResourceSet *this)
{
  __int64 v1; // rax
  ExecutionModel::BaseResourceSet *v2; // rbx
  struct IUnknown *v4; // rdx
  int v5; // ecx
  void (*Release)(void); // rax
  __int64 (__fastcall *v7)(ExecutionModel::ResourceSet *); // rax
  struct IUnknown *v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 3);
  v2 = 0LL;
  v8 = 0LL;
  v4 = *(struct IUnknown **)(v1 + 104);
  if ( v4 )
  {
    ATL::AtlComPtrAssign(&v8, v4);
    v2 = (ExecutionModel::BaseResourceSet *)v8;
  }
  if ( *((_DWORD *)this + 350) )
  {
    v5 = *((_DWORD *)this + 366);
    *((_DWORD *)this + 353) = *((_DWORD *)this + 372);
    *((_DWORD *)this + 352) = v5;
    *((_DWORD *)this + 52) = v5;
    *((_DWORD *)this + 58) = *((_DWORD *)this + 366);
    *((_DWORD *)this + 64) = *((_DWORD *)this + 366);
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&v8, this);
    utl::list_ATL::CComPtr_ExecutionModel::BaseResourceSet__utl::allocator_ATL::CComPtr_ExecutionModel::BaseResourceSet_____::remove_if__lambda_4a96282eb34af91833354b43e8ed5ac2___(
      (char *)v2 + 160,
      &v8);
    if ( v8 )
    {
      Release = (void (*)(void))v8->lpVtbl->Release;
      if ( (char *)Release == (char *)ExecutionModel::BaseResourceSet::Release )
      {
        ExecutionModel::BaseResourceSet::Release((ExecutionModel::BaseResourceSet *)v8);
      }
      else if ( (char *)Release == (char *)ExecutionModel::ResourceSet::Release )
      {
        ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)v8);
      }
      else
      {
        Release();
      }
    }
    ExecutionModel::BaseResourceSet::AddToListPrioritized((char *)v2 + 160, this);
  }
  if ( v2 )
  {
    v7 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v2 + 16LL);
    if ( v7 == ExecutionModel::BaseResourceSet::Release )
    {
      ExecutionModel::BaseResourceSet::Release(v2);
    }
    else if ( v7 == ExecutionModel::ResourceSet::Release )
    {
      ExecutionModel::ResourceSet::Release(v2);
    }
    else
    {
      v7(v2);
    }
  }
}
