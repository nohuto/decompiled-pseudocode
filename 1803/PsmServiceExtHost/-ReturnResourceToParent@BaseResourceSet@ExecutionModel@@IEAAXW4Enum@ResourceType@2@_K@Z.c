/*
 * XREFs of ?ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z @ 0x18001ED78
 * Callers:
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x18001EC40 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x18004F56C (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::BaseResourceSet::ReturnResourceToParent(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)(a1 + 1392);
  if ( !_bittest64(&v3, a2) )
  {
    if ( a2 == 2 && a3 )
      ExecutionModel::ResourceManager::ReplenishIoCounterPool(*(ExecutionModel::ResourceManager **)(a1 + 24), a3);
    else
      *(_QWORD *)(*(_QWORD *)(a1 + 184) + 24LL * (int)a2 + 200) += a3;
  }
}
