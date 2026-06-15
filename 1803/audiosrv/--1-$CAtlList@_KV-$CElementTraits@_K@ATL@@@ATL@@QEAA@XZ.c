/*
 * XREFs of ??1?$CAtlList@_KV?$CElementTraits@_K@ATL@@@ATL@@QEAA@XZ @ 0x18011344C
 * Callers:
 *     _CConstraintModel::Initialize_::_1_::dtor$1 @ 0x180068799 (_CConstraintModel--Initialize_--_1_--dtor$1.c)
 *     _CConstraintModelResourceManager::ProcessRevokedResources_::_1_::dtor$0 @ 0x1800D9A64 (_CConstraintModelResourceManager--ProcessRevokedResources_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CAtlList<unsigned __int64,ATL::CElementTraits<unsigned __int64>>::~CAtlList<unsigned __int64,ATL::CElementTraits<unsigned __int64>>(
        __int64 a1)
{
  return ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll(a1);
}
