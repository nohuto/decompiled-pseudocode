/*
 * XREFs of ??0CMILResourceCacheIndexManager@@QEAA@XZ @ 0x1800403A8
 * Callers:
 *     _dynamic_initializer_for__g_ResourceCacheIndexManager__ @ 0x1800011F0 (_dynamic_initializer_for__g_ResourceCacheIndexManager__.c)
 * Callees:
 *     ?Init@CCriticalSection@@QEAAJXZ @ 0x1800401AC (-Init@CCriticalSection@@QEAAJXZ.c)
 */

CMILResourceCacheIndexManager *__fastcall CMILResourceCacheIndexManager::CMILResourceCacheIndexManager(
        CMILResourceCacheIndexManager *this)
{
  byte_1800C1128 = 0;
  if ( (int)CCriticalSection::Init(&g_ResourceCacheIndexManager) >= 0 )
  {
    BitMapBuffer = 0;
    RtlInitializeBitMap(&BitMapHeader, &BitMapBuffer, 0x20u);
    RtlSetBits(&BitMapHeader, 0, 1u);
  }
  return (CMILResourceCacheIndexManager *)&g_ResourceCacheIndexManager;
}
