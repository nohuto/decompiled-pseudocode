/*
 * XREFs of KiGetHalExtensionList @ 0x1408CA1BC
 * Callers:
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 * Callees:
 *     <none>
 */

__int64 KiGetHalExtensionList()
{
  return *(_QWORD *)(KeLoaderBlock_0 + 240) + 2264LL;
}
