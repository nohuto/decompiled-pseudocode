/*
 * XREFs of RtlCheckForOrphanedCriticalSections @ 0x180082740
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008275C @ 0x18008275C (sub_18008275C.c)
 */

__int64 __fastcall RtlCheckForOrphanedCriticalSections(__int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  return sub_18008275C(a1, &v2);
}
