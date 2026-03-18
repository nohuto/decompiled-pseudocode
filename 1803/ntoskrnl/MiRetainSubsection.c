/*
 * XREFs of MiRetainSubsection @ 0x1400C819C
 * Callers:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiFaultGetFileExtents @ 0x14026194C (MiFaultGetFileExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiIncrementSubsectionViewCount @ 0x1400E5E20 (MiIncrementSubsectionViewCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiRetainSubsection(__int64 *BugCheckParameter2)
{
  __int64 v1; // rbx
  KIRQL v3; // al
  KIRQL v4; // bp
  int v5; // edx
  __int64 result; // rax

  v1 = *BugCheckParameter2;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  ++*(_QWORD *)(v1 + 40);
  v4 = v3;
  v5 = *(_DWORD *)(v1 + 56);
  if ( (v5 & 0x20) == 0 && *(_QWORD *)(v1 + 64) && (v5 & 0x400) == 0 )
    MiIncrementSubsectionViewCount((ULONG_PTR)BugCheckParameter2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
  result = v4;
  __writecr8(v4);
  return result;
}
