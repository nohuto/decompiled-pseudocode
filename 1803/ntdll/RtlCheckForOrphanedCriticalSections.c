/*
 * XREFs of RtlCheckForOrphanedCriticalSections @ 0x18007D260
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007D27C @ 0x18007D27C (sub_18007D27C.c)
 */

__int64 __fastcall RtlCheckForOrphanedCriticalSections(__int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  return sub_18007D27C(a1, &v2);
}
