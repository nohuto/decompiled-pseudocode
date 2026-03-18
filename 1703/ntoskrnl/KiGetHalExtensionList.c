/*
 * XREFs of KiGetHalExtensionList @ 0x140826AA0
 * Callers:
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 * Callees:
 *     <none>
 */

__int64 KiGetHalExtensionList()
{
  return *(_QWORD *)(KeLoaderBlock_0 + 240) + 2264LL;
}
