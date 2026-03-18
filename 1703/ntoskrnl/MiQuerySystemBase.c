/*
 * XREFs of MiQuerySystemBase @ 0x14003CB8C
 * Callers:
 *     MiInitializeSpecialPool @ 0x14057E514 (MiInitializeSpecialPool.c)
 *     MiInitializeSystemCache @ 0x1405BA9B8 (MiInitializeSystemCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiQuerySystemBase(int a1)
{
  return qword_14036D800[2 * a1];
}
