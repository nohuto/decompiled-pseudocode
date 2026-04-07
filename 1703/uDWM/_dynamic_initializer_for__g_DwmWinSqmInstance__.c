/*
 * XREFs of _dynamic_initializer_for__g_DwmWinSqmInstance__ @ 0x1800011B0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 */

void *dynamic_initializer_for__g_DwmWinSqmInstance__()
{
  void *result; // rax

  memset_0(&g_DwmWinSqmInstance, 0, 0x500uLL);
  result = memset_0(&unk_1800C3F68, 0, 0x500uLL);
  byte_1800C3F60 = 0;
  byte_1800C4468 = 0;
  return result;
}
