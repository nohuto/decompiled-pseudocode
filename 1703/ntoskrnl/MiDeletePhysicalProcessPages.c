/*
 * XREFs of MiDeletePhysicalProcessPages @ 0x1406B896C
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x1404998CC (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140018950 (PsReturnProcessPagedPoolQuota.c)
 *     ExCleanupAutoExpandPushLock @ 0x1400249D0 (ExCleanupAutoExpandPushLock.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePhysicalProcessPages(struct _KPROCESS *a1)
{
  PVOID *v1; // rbx

  v1 = (PVOID *)a1[1].ActiveProcessors.Bitmap[3];
  a1[1].ActiveProcessors.Bitmap[3] = 0LL;
  PsReturnProcessPagedPoolQuota(a1, 8 * (((unsigned __int64)*v1 >> 6) + (((unsigned __int8)*v1 & 0x3F) != 0)));
  ExFreePoolWithTag(v1[1], 0);
  ExCleanupAutoExpandPushLock();
  ExFreePoolWithTag(v1, 0);
}
