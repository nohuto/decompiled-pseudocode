/*
 * XREFs of MiRetainSubsection @ 0x140126D3C
 * Callers:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiProtoFault @ 0x1401269B8 (MiProtoFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIncrementSubsectionViewCount @ 0x1400A1430 (MiIncrementSubsectionViewCount.c)
 */

__int64 __fastcall MiRetainSubsection(_QWORD *BugCheckParameter2)
{
  __int64 v1; // rbx
  KIRQL v3; // al
  KIRQL v4; // bp
  int v5; // edx
  __int64 result; // rax

  v1 = *BugCheckParameter2;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72LL));
  ++*(_QWORD *)(v1 + 40);
  v4 = v3;
  v5 = *(_DWORD *)(v1 + 56);
  if ( (v5 & 0x20) == 0 && *(_QWORD *)(v1 + 64) && (v5 & 0x400) == 0 )
    MiIncrementSubsectionViewCount(BugCheckParameter2, 4LL);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
  result = v4;
  __writecr8(v4);
  return result;
}
