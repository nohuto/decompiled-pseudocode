/*
 * XREFs of MiQuerySystemBase @ 0x140132540
 * Callers:
 *     MiInitializeSystemCache @ 0x1405B3A64 (MiInitializeSystemCache.c)
 *     MiInitializeSpecialPool @ 0x1405B6FA0 (MiInitializeSpecialPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiQuerySystemBase(int a1)
{
  return qword_140389AD0[2 * a1];
}
