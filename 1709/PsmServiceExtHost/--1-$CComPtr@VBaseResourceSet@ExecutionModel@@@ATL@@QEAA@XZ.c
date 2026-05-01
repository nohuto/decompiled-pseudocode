/*
 * XREFs of ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18002FCB8
 * Callers:
 *     ??1ResourceManager@ExecutionModel@@QEAA@XZ @ 0x180031878 (--1ResourceManager@ExecutionModel@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>(
        ExecutionModel::BaseResourceSet **a1)
{
  ExecutionModel::BaseResourceSet *v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v2 == (char *)ExecutionModel::BaseResourceSet::Release )
    {
      ExecutionModel::BaseResourceSet::Release(v1);
    }
    else if ( (char *)v2 == (char *)ExecutionModel::ResourceSet::Release )
    {
      ExecutionModel::ResourceSet::Release(v1);
    }
    else
    {
      v2();
    }
  }
}
