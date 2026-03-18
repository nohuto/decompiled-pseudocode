/*
 * XREFs of CmpGetSecurityDescriptorForKcbStack @ 0x140668650
 * Callers:
 *     CmpCreateTombstone @ 0x1401E0B20 (CmpCreateTombstone.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1404FCEA0 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorForKcbStack(__int64 a1, __int64 a2)
{
  return CmpGetSecurityCacheEntryForKcbStack(a1, a2) + 32;
}
