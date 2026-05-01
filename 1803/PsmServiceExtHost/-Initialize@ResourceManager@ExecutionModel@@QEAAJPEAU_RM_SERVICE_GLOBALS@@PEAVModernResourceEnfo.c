/*
 * XREFs of ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@@Z @ 0x18003A918
 * Callers:
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x18003A08C (-CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@P.c)
 * Callees:
 *     ?CreatePendingRequestWorkItems@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18003A654 (-CreatePendingRequestWorkItems@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?ReadSettings@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18003A71C (-ReadSettings@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18003A858 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18003AA48 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

int __fastcall ExecutionModel::ResourceManager::Initialize(
        struct IUnknown *this,
        struct IUnknownVtbl *a2,
        struct IUnknown **a3)
{
  int result; // eax

  this[19].lpVtbl = a2;
  if ( a3 && a3[39] != &this[1] )
    ATL::AtlComPtrAssign(a3 + 39, this + 1);
  result = ExecutionModel::ResourceManager::ReadSettings((const WCHAR **)this);
  if ( result >= 0 )
  {
    result = ExecutionModel::ResourceManager::InitializePools((ExecutionModel::ResourceManager *)this);
    if ( result >= 0 )
    {
      result = ExecutionModel::ResourceManager::CreatePendingRequestWorkItems((ExecutionModel::ResourceManager *)this);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
