/*
 * XREFs of _CAppViewManager::CollapseAllViewsForApp_::_1_::dtor$2 @ 0x18011E8E1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppViewManager::CollapseAllViewsForApp_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 120));
}
