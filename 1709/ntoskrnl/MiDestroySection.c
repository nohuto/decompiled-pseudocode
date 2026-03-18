/*
 * XREFs of MiDestroySection @ 0x14010A894
 * Callers:
 *     MiCleanSection @ 0x14010A810 (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x14021083C (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140210974 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x1402113D0 (MiProcessDeleteOnClose.c)
 * Callees:
 *     MiDrainControlAreaWrites @ 0x14001F7E0 (MiDrainControlAreaWrites.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MiClearFilePointer @ 0x14010AB40 (MiClearFilePointer.c)
 *     MiSegmentDelete @ 0x14048D574 (MiSegmentDelete.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404E736C (FsRtlReleaseFileForCcFlush.c)
 */

__int64 __fastcall MiDestroySection(__int64 a1, KIRQL a2, struct _FILE_OBJECT *a3)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8

  *(_DWORD *)(a1 + 56) |= 9u;
  v4 = a2;
  MiDrainControlAreaWrites(a1, a2);
  MiClearFilePointer(a1, v6, v7);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  __writecr8(v4);
  if ( a3 )
  {
    FsRtlReleaseFileForCcFlush(a3);
    ObfDereferenceObject(a3);
  }
  return MiSegmentDelete(a1);
}
