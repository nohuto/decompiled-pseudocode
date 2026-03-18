/*
 * XREFs of ??1CMILResourceCacheIndexManager@@QEAA@XZ @ 0x1800D2A38
 * Callers:
 *     _dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__ @ 0x1800D6DE0 (_dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILResourceCacheIndexManager::~CMILResourceCacheIndexManager(CMILResourceCacheIndexManager *this)
{
  DeleteCriticalSection(&g_ResourceCacheIndexManager);
}
