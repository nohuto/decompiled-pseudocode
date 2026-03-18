/*
 * XREFs of CmpAddSubKey @ 0x14066FE88
 * Callers:
 *     CmpCreateTombstone @ 0x1401E0B20 (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpAddSubKey(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  return CmpAddSubKeyEx(a1, a2, a3, 0);
}
