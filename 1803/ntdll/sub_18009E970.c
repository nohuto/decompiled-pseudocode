/*
 * XREFs of sub_18009E970 @ 0x18009E970
 * Callers:
 *     LdrInitializeEnclave @ 0x1800C9810 (LdrInitializeEnclave.c)
 *     LdrCallEnclave_0 @ 0x1800CA210 (LdrCallEnclave_0.c)
 * Callees:
 *     ZwCallEnclave @ 0x18009BC90 (ZwCallEnclave.c)
 */

__int64 sub_18009E970()
{
  return ZwCallEnclave();
}
