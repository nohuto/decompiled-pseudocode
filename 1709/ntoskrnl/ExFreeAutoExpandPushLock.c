/*
 * XREFs of ExFreeAutoExpandPushLock @ 0x14014BFC0
 * Callers:
 *     <none>
 * Callees:
 *     ExpCleanupAutoExpandPushLock @ 0x14014BFE4 (ExpCleanupAutoExpandPushLock.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall ExFreeAutoExpandPushLock(PVOID P)
{
  ExpCleanupAutoExpandPushLock();
  ExFreePoolWithTag(P, 0);
}
