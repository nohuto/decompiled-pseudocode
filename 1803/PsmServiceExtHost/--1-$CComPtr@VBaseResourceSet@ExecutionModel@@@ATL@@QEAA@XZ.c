/*
 * XREFs of ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18004CC4C
 * Callers:
 *     ??1ResourceManager@ExecutionModel@@QEAA@XZ @ 0x18004E9E0 (--1ResourceManager@ExecutionModel@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>(
        ExecutionModel::ExternalResourceSet **a1)
{
  ExecutionModel::ExternalResourceSet *v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v2 == (char *)ExecutionModel::ExternalResourceSet::Release )
      ExecutionModel::ExternalResourceSet::Release(v1);
    else
      v2();
  }
}
