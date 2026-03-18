/*
 * XREFs of KiGetHalExtensionList @ 0x14085814C
 * Callers:
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     <none>
 */

__int64 KiGetHalExtensionList()
{
  return *(_QWORD *)(KeLoaderBlock_0 + 240) + 2264LL;
}
