/*
 * XREFs of ExReleaseResourceAndLeavePriorityRegion @ 0x14025C130
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x14008D210 (PsBoostThreadIoEx.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 */

__int64 __fastcall ExReleaseResourceAndLeavePriorityRegion(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rbx

  ExReleaseResourceLite(a1);
  CurrentThread = KeGetCurrentThread();
  PsBoostThreadIoEx((__int64)CurrentThread, 1, 0, 0LL);
  return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
}
