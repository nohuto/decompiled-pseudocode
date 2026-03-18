/*
 * XREFs of ExFreeAutoExpandPushLock @ 0x14015BFD0
 * Callers:
 *     <none>
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x1400B5B60 (ExCleanupAutoExpandPushLock.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall ExFreeAutoExpandPushLock(PVOID P)
{
  ExCleanupAutoExpandPushLock((__int64)P);
  ExFreePoolWithTag(P, 0);
}
