/*
 * XREFs of MiDestroySection @ 0x14015E144
 * Callers:
 *     MiCleanSection @ 0x14015E0C0 (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x14024EC98 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x14024EDD4 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x14024F838 (MiProcessDeleteOnClose.c)
 * Callees:
 *     MiDrainControlAreaWrites @ 0x14004B30C (MiDrainControlAreaWrites.c)
 *     MiClearFilePointer @ 0x1400851C4 (MiClearFilePointer.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiSegmentDelete @ 0x1404BC75C (MiSegmentDelete.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404E0808 (FsRtlReleaseFileForCcFlush.c)
 */

__int64 __fastcall MiDestroySection(__int64 a1, KIRQL a2, struct _FILE_OBJECT *a3)
{
  unsigned __int64 v4; // rbx

  *(_DWORD *)(a1 + 56) |= 9u;
  v4 = a2;
  MiDrainControlAreaWrites(a1, a2);
  MiClearFilePointer(a1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  __writecr8(v4);
  if ( a3 )
  {
    FsRtlReleaseFileForCcFlush(a3);
    ObfDereferenceObject(a3);
  }
  return MiSegmentDelete(a1);
}
