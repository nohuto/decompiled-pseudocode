/*
 * XREFs of isleadbyte @ 0x180094430
 * Callers:
 *     ReadString @ 0x180099CD0 (ReadString.c)
 *     _input_l @ 0x18009A000 (_input_l.c)
 * Callees:
 *     <none>
 */

int __cdecl isleadbyte(int C)
{
  return pctype[(unsigned __int8)C] & 0x8000;
}
