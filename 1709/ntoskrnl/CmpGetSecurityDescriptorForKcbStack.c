/*
 * XREFs of CmpGetSecurityDescriptorForKcbStack @ 0x140693688
 * Callers:
 *     CmpCreateTombstone @ 0x1401E4C50 (CmpCreateTombstone.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140482B3C (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorForKcbStack(__int64 a1, __int64 a2)
{
  return CmpGetSecurityCacheEntryForKcbStack(a1, a2) + 32;
}
