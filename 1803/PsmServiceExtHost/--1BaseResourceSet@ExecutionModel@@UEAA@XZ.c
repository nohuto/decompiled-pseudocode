/*
 * XREFs of ??1BaseResourceSet@ExecutionModel@@UEAA@XZ @ 0x1800022CC
 * Callers:
 *     ??_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z @ 0x180003320 (--_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z.c)
 *     ??_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x18005C890 (--_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x18002346C (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F5A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ExecutionModel::BaseResourceSet::~BaseResourceSet(ExecutionModel::BaseResourceSet *this)
{
  char *v2; // rcx

  *(_QWORD *)this = &ExecutionModel::BaseResourceSet::`vftable';
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear((char *)this + 160);
  v2 = (char *)*((_QWORD *)this + 4);
  if ( v2 != (char *)this + 48 )
    operator delete(v2);
}
