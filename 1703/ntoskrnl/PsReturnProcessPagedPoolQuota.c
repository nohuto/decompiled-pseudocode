/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x140018950
 * Callers:
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     FsRtlCancelNotify @ 0x140018DC0 (FsRtlCancelNotify.c)
 *     ExpAllocateHandleTable @ 0x14042BEEC (ExpAllocateHandleTable.c)
 *     FsRtlNotifyFilterReportChange @ 0x140431400 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x140432250 (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlNotifyCompleteIrp @ 0x140432850 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x140432CEC (FsRtlNotifyCleanupOneEntry.c)
 *     ExpFreeHandleTable @ 0x140432E04 (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x140432F18 (ExpFreeTablePagedPool.c)
 *     AlpcpReleasePagedPoolQuota @ 0x14047A170 (AlpcpReleasePagedPoolQuota.c)
 *     LpcExitProcess @ 0x140498C20 (LpcExitProcess.c)
 *     MiInsertVadCharges @ 0x1405136C0 (MiInsertVadCharges.c)
 *     MiReturnVadQuota @ 0x14051DBE0 (MiReturnVadQuota.c)
 *     MiDeletePhysicalProcessPages @ 0x1406B896C (MiDeletePhysicalProcessPages.c)
 *     MiResizeAweBitMap @ 0x1406B8CF8 (MiResizeAweBitMap.c)
 * Callees:
 *     PspReturnQuota @ 0x1400DC8F0 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].ActiveProcessors.Bitmap[4], a1, 1LL, a2);
  return result;
}
