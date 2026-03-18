/*
 * XREFs of MiQuerySystemBase @ 0x1400D2D84
 * Callers:
 *     MiInitializeSpecialPool @ 0x14060AB08 (MiInitializeSpecialPool.c)
 *     MiInitializeSystemCache @ 0x14062BC48 (MiInitializeSystemCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiQuerySystemBase(int a1)
{
  return qword_1403CD090[2 * a1];
}
