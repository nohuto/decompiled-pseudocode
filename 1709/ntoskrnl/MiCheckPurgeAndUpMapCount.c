/*
 * XREFs of MiCheckPurgeAndUpMapCount @ 0x14009F9C0
 * Callers:
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 *     MiMapViewInSystemSpace @ 0x1404F7614 (MiMapViewInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x1405431E0 (MmLoadSystemImageEx.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14009FA50 (ExpAcquireSpinLockExclusive.c)
 *     KeWaitForGate @ 0x1400E3F18 (KeWaitForGate.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiCheckPurgeAndUpMapCount(__int64 a1)
{
  KIRQL CurrentIrql; // si
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+28h] [rbp-30h]
  __int16 v7; // [rsp+30h] [rbp-28h] BYREF
  char v8; // [rsp+32h] [rbp-26h]
  int v9; // [rsp+34h] [rbp-24h]
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = a1 + 72;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v3, CurrentIrql);
  for ( ; (*(_DWORD *)(a1 + 56) & 4) != 0; CurrentIrql = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72)) )
  {
    v6 = 2;
    v10[1] = v10;
    v7 = 263;
    v10[0] = v10;
    v5 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v5;
    v8 = 6;
    v9 = 0;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    __writecr8(CurrentIrql);
    KeWaitForGate(&v7, 18LL);
  }
  ++*(_QWORD *)(a1 + 40);
  ++*(_QWORD *)(a1 + 48);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
  else
    *(_DWORD *)(a1 + 72) = 0;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
