/*
 * XREFs of MiDeletePhysicalProcessPages @ 0x14074FB68
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x1405128C0 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x1400B5B60 (ExCleanupAutoExpandPushLock.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400F0EE0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePhysicalProcessPages(struct _KPROCESS *a1)
{
  PVOID *v1; // rbx

  v1 = (PVOID *)a1[1].ActiveProcessors.Bitmap[3];
  a1[1].ActiveProcessors.Bitmap[3] = 0LL;
  PsReturnProcessNonPagedPoolQuota(a1, 8 * (((unsigned __int64)*v1 >> 6) + (((unsigned __int8)*v1 & 0x3F) != 0)));
  ExFreePoolWithTag(v1[1], 0);
  ExCleanupAutoExpandPushLock((__int64)(v1 + 2));
  ExFreePoolWithTag(v1, 0);
}
