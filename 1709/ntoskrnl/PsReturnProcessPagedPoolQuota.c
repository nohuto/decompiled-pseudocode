/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x140036640
 * Callers:
 *     FsRtlCancelNotify @ 0x1401086F0 (FsRtlCancelNotify.c)
 *     MiDeletePartialVad @ 0x1401123D4 (MiDeletePartialVad.c)
 *     FsRtlNotifyFilterReportChange @ 0x14044CD00 (FsRtlNotifyFilterReportChange.c)
 *     ExpAllocateHandleTable @ 0x14045FF04 (ExpAllocateHandleTable.c)
 *     MiReturnVadQuota @ 0x140495B20 (MiReturnVadQuota.c)
 *     MiInsertVadCharges @ 0x1404D0090 (MiInsertVadCharges.c)
 *     ExpFreeHandleTable @ 0x1404DD040 (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x1404DD154 (ExpFreeTablePagedPool.c)
 *     LpcExitProcess @ 0x1404FCC90 (LpcExitProcess.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1405404A4 (AlpcpReleasePagedPoolQuota.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140567030 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x14056765C (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x140567BB0 (FsRtlNotifyCleanupOneEntry.c)
 *     MiDeletePhysicalProcessPages @ 0x1406E5634 (MiDeletePhysicalProcessPages.c)
 *     MiResizeAweBitMap @ 0x1406E5A4C (MiResizeAweBitMap.c)
 * Callees:
 *     PspReturnQuota @ 0x140070050 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].ActiveProcessors.Bitmap[4], a1, 1LL, a2);
  return result;
}
