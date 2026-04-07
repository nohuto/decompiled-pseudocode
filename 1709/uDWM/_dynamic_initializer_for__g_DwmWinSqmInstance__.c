/*
 * XREFs of _dynamic_initializer_for__g_DwmWinSqmInstance__ @ 0x180001210
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180045938 (memset_0.c)
 */

void *dynamic_initializer_for__g_DwmWinSqmInstance__()
{
  void *result; // rax

  memset_0(&g_DwmWinSqmInstance, 0, 0x500uLL);
  result = memset_0(&unk_1800C1FF8, 0, 0x500uLL);
  byte_1800C1FF0 = 0;
  byte_1800C24F8 = 0;
  return result;
}
