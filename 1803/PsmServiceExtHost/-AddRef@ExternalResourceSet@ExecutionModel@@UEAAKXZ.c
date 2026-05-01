/*
 * XREFs of ?AddRef@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x180003250
 * Callers:
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x18000320C (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ExecutionModel::ExternalResourceSet::AddRef(ExecutionModel::ExternalResourceSet *this)
{
  return ExecutionModel::BaseResourceSet::AddRef(this);
}
