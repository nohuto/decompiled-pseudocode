/*
 * XREFs of MiReferenceControlAreaPfn @ 0x1400579A8
 * Callers:
 *     MiSectionCreated @ 0x14004D194 (MiSectionCreated.c)
 *     MiInitializeImageProtos @ 0x14004DF48 (MiInitializeImageProtos.c)
 *     MiFinishMdlForMappedFileFault @ 0x140057A28 (MiFinishMdlForMappedFileFault.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     MiInitializeFileOnlyPfns @ 0x14025DF18 (MiInitializeFileOnlyPfns.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiReferenceControlAreaPfn(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rsi
  KIRQL v6; // al
  KIRQL v7; // r14
  __int64 result; // rax

  v4 = a3;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 || !*(_QWORD *)(a1 + 64) )
    a2 = 0LL;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  *(_QWORD *)(a1 + 32) += v4;
  v7 = v6;
  if ( a2 )
    *(_DWORD *)(a2 + 104) += v4;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  result = v7;
  __writecr8(v7);
  return result;
}
