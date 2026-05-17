/*
 * XREFs of RtlCheckForOrphanedCriticalSections @ 0x1800815D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckHeldCriticalSections @ 0x1800815EC (RtlCheckHeldCriticalSections.c)
 */

__int64 __fastcall RtlCheckForOrphanedCriticalSections(__int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  return RtlCheckHeldCriticalSections(a1, &v2);
}
