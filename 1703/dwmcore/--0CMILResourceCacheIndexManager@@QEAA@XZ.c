/*
 * XREFs of ??0CMILResourceCacheIndexManager@@QEAA@XZ @ 0x1800CA3A0
 * Callers:
 *     _dynamic_initializer_for__g_ResourceCacheIndexManager__ @ 0x180001450 (_dynamic_initializer_for__g_ResourceCacheIndexManager__.c)
 * Callees:
 *     <none>
 */

CMILResourceCacheIndexManager *__fastcall CMILResourceCacheIndexManager::CMILResourceCacheIndexManager(
        CMILResourceCacheIndexManager *this)
{
  InitializeCriticalSection(&g_ResourceCacheIndexManager);
  BitMapBuffer = 0;
  RtlInitializeBitMap(&BitMapHeader, &BitMapBuffer, 0x20u);
  RtlSetBits(&BitMapHeader, 0, 1u);
  return (CMILResourceCacheIndexManager *)&g_ResourceCacheIndexManager;
}
