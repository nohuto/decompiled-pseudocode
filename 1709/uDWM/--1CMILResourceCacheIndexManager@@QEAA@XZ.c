/*
 * XREFs of ??1CMILResourceCacheIndexManager@@QEAA@XZ @ 0x1800450E4
 * Callers:
 *     _dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__ @ 0x180046EC0 (_dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILResourceCacheIndexManager::~CMILResourceCacheIndexManager(CMILResourceCacheIndexManager *this)
{
  if ( byte_1800C1998 )
  {
    DeleteCriticalSection(&g_ResourceCacheIndexManager);
    byte_1800C1998 = 0;
  }
}
