/*
 * XREFs of MiDestroySection @ 0x1401490F8
 * Callers:
 *     MiCleanSection @ 0x140149074 (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x140209CC8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140209E24 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x14020A790 (MiProcessDeleteOnClose.c)
 * Callees:
 *     MiClearFilePointer @ 0x1400164D8 (MiClearFilePointer.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     MiDrainControlAreaWrites @ 0x140119240 (MiDrainControlAreaWrites.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404C6C34 (FsRtlReleaseFileForCcFlush.c)
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
