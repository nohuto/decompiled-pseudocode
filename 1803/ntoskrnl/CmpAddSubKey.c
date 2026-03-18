/*
 * XREFs of CmpAddSubKey @ 0x1406FF12C
 * Callers:
 *     CmpCreateTombstone @ 0x140222DF4 (CmpCreateTombstone.c)
 * Callees:
 *     CmpAddSubKeyEx @ 0x140513418 (CmpAddSubKeyEx.c)
 */

char __fastcall CmpAddSubKey(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  return CmpAddSubKeyEx(a1, a2, a3, 0);
}
