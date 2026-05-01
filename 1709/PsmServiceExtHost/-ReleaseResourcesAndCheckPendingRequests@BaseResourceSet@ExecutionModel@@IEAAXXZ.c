/*
 * XREFs of ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x180010680
 * Callers:
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x180001F68 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x1800035A8 (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x1800121D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?ReleaseResourcesInternal@BaseResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18003D8B0 (-ReleaseResourcesInternal@BaseResourceSet@ExecutionModel@@UEAAJK@Z.c)
 * Callees:
 *     ?ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z @ 0x1800107B8 (-ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z.c)
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800107F0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800113A0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     utl::list_ATL::CComPtr_ExecutionModel::BaseResourceSet__utl::allocator_ATL::CComPtr_ExecutionModel::BaseResourceSet_____::remove_if__lambda_4a96282eb34af91833354b43e8ed5ac2___ @ 0x180015E20 (utl--list_ATL--CComPtr_ExecutionModel--BaseResourceSet__utl--allocator_ATL--CComPtr_ExecutionMod.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(
        ExecutionModel::BaseResourceSet *this)
{
  int v1; // eax
  int v3; // ebx
  _QWORD *v4; // rdi
  unsigned int (__fastcall *v5)(ExecutionModel::BaseResourceSet *__hidden); // rax
  void (*v6)(void); // rax
  __int64 v7; // rcx
  int v8; // eax
  ExecutionModel::ResourceSet *v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 350);
  if ( v1 )
  {
    if ( v1 == 2 )
    {
      v3 = 0;
      v4 = (_QWORD *)((char *)this + 200);
      do
      {
        if ( *v4 )
        {
          ExecutionModel::BaseResourceSet::ReturnResourceToParent(this, (unsigned int)v3, *v4);
          *v4 = 0LL;
        }
        ++v3;
        v4 += 3;
      }
      while ( v3 < 50 );
    }
    *((_DWORD *)this + 350) = 0;
    v9 = this;
    v5 = *(unsigned int (__fastcall **)(ExecutionModel::BaseResourceSet *__hidden))(*(_QWORD *)this + 8LL);
    if ( v5 == ExecutionModel::BaseResourceSet::AddRef )
      ExecutionModel::BaseResourceSet::AddRef(this);
    else
      v5(this);
    utl::list_ATL::CComPtr_ExecutionModel::BaseResourceSet__utl::allocator_ATL::CComPtr_ExecutionModel::BaseResourceSet_____::remove_if__lambda_4a96282eb34af91833354b43e8ed5ac2___(
      *((_QWORD *)this + 23) + 160LL,
      &v9);
    if ( v9 )
    {
      v6 = *(void (**)(void))(*(_QWORD *)v9 + 16LL);
      if ( (char *)v6 == (char *)ExecutionModel::ResourceSet::Release )
        ExecutionModel::ResourceSet::Release(v9);
      else
        v6();
    }
    v7 = *((_QWORD *)this + 3);
    if ( *((_DWORD *)this + 4) == 1 )
    {
      v8 = *(_DWORD *)(v7 + 240);
      if ( (v8 & 3) == 0 )
      {
        *(_DWORD *)(v7 + 240) = v8 | 1;
        TpPostWork(*(_QWORD *)(v7 + 224));
      }
    }
    else if ( (*(_BYTE *)(v7 + 240) & 2) == 0 )
    {
      TpPostWork(*(_QWORD *)(v7 + 232));
    }
  }
}
