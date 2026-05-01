/*
 * XREFs of ?ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ @ 0x18005B074
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18001F380 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180003178 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x18000320C (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800032E0 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     utl::list_ATL::CComPtr_ExecutionModel::BaseResourceSet__utl::allocator_ATL::CComPtr_ExecutionModel::BaseResourceSet_____::remove_if__lambda_4a96282eb34af91833354b43e8ed5ac2___ @ 0x1800234A0 (utl--list_ATL--CComPtr_ExecutionModel--BaseResourceSet__utl--allocator_ATL--CComPtr_ExecutionMod.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18003AA48 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceSet::ResetPriorities(ExecutionModel::ResourceSet *this)
{
  ExecutionModel::ExternalResourceSet *v1; // rbx
  struct IUnknown *v3; // rdx
  int v4; // ecx
  void (*Release)(void); // rax
  unsigned int (__fastcall *v6)(ExecutionModel::ExternalResourceSet *); // rax
  struct IUnknown *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  v7 = 0LL;
  v3 = *(struct IUnknown **)(*((_QWORD *)this + 3) + 48LL);
  if ( v3 )
  {
    ATL::AtlComPtrAssign(&v7, v3);
    v1 = (ExecutionModel::ExternalResourceSet *)v7;
  }
  if ( *((_DWORD *)this + 350) )
  {
    v4 = *((_DWORD *)this + 366);
    *((_DWORD *)this + 353) = *((_DWORD *)this + 372);
    *((_DWORD *)this + 352) = v4;
    *((_DWORD *)this + 52) = v4;
    *((_DWORD *)this + 58) = *((_DWORD *)this + 366);
    *((_DWORD *)this + 64) = *((_DWORD *)this + 366);
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(
      (ExecutionModel::ExternalResourceSet **)&v7,
      this);
    utl::list_ATL::CComPtr_ExecutionModel::BaseResourceSet__utl::allocator_ATL::CComPtr_ExecutionModel::BaseResourceSet_____::remove_if__lambda_4a96282eb34af91833354b43e8ed5ac2___(
      (_QWORD *)v1 + 20,
      &v7);
    if ( v7 )
    {
      Release = (void (*)(void))v7->lpVtbl->Release;
      if ( (char *)Release == (char *)ExecutionModel::ExternalResourceSet::Release )
        ExecutionModel::ExternalResourceSet::Release((ExecutionModel::ExternalResourceSet *)v7);
      else
        Release();
    }
    ExecutionModel::BaseResourceSet::AddToListPrioritized((_QWORD *)v1 + 20, (__int64)this);
  }
  if ( v1 )
  {
    v6 = *(unsigned int (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v1 + 16LL);
    if ( v6 == ExecutionModel::ExternalResourceSet::Release )
      ExecutionModel::ExternalResourceSet::Release(v1);
    else
      v6(v1);
  }
}
