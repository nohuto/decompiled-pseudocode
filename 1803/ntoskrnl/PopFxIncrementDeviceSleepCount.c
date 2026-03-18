/*
 * XREFs of PopFxIncrementDeviceSleepCount @ 0x1401539D4
 * Callers:
 *     PoFxStartDevicePowerManagement @ 0x140181020 (PoFxStartDevicePowerManagement.c)
 *     PopSystemIrpCompletion @ 0x1404756C0 (PopSystemIrpCompletion.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall PopFxIncrementDeviceSleepCount(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v2; // si

  if ( a1 )
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v1 = 0LL;
  if ( v1 )
  {
    v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88));
    if ( (*(_DWORD *)(v1 + 296) & 4) == 0 || (*(_DWORD *)(*(_QWORD *)(v1 + 80) + 704LL) & 1) == 0 )
      ++*(_DWORD *)(v1 + 124);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 88));
    __writecr8(v2);
  }
}
