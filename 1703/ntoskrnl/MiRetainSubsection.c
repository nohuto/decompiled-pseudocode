/*
 * XREFs of MiRetainSubsection @ 0x14006BC58
 * Callers:
 *     MiProtoFault @ 0x14006B9C4 (MiProtoFault.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIncrementSubsectionViewCount @ 0x14009A170 (MiIncrementSubsectionViewCount.c)
 */

__int64 __fastcall MiRetainSubsection(__int64 *a1)
{
  __int64 v1; // rbx
  KIRQL v3; // al
  KIRQL v4; // bp
  int v5; // edx
  __int64 result; // rax

  v1 = *a1;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*a1 + 72));
  ++*(_QWORD *)(v1 + 40);
  v4 = v3;
  v5 = *(_DWORD *)(v1 + 56);
  if ( (v5 & 0x20) == 0 && *(_QWORD *)(v1 + 64) && (v5 & 0x400) == 0 )
    MiIncrementSubsectionViewCount(a1, 4LL);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
  result = v4;
  __writecr8(v4);
  return result;
}
