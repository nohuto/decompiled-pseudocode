/*
 * XREFs of MiReferenceControlAreaPfn @ 0x140107570
 * Callers:
 *     MiSectionCreated @ 0x14005E604 (MiSectionCreated.c)
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 *     MiFinishMdlForMappedFileFault @ 0x140107260 (MiFinishMdlForMappedFileFault.c)
 *     MiInitializeImageProtos @ 0x14010A158 (MiInitializeImageProtos.c)
 *     MiInitializeFileOnlyPfn @ 0x140219044 (MiInitializeFileOnlyPfn.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiReferenceControlAreaPfn(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbp
  _DWORD *v6; // rsi
  KIRQL v7; // al
  KIRQL v8; // r14
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a3;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 || !*(_QWORD *)(a1 + 64) )
    a2 = 0LL;
  v6 = (_DWORD *)(a1 + 72);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  *(_QWORD *)(a1 + 32) += v4;
  v8 = v7;
  if ( a2 )
    *(_DWORD *)(a2 + 104) += v4;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v6, retaddr);
  else
    *v6 = 0;
  result = v8;
  __writecr8(v8);
  return result;
}
