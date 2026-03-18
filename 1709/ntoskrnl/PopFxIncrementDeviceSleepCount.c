/*
 * XREFs of PopFxIncrementDeviceSleepCount @ 0x14023E0AC
 * Callers:
 *     PoFxStartDevicePowerManagement @ 0x140150FF0 (PoFxStartDevicePowerManagement.c)
 *     PopSystemIrpCompletion @ 0x140437950 (PopSystemIrpCompletion.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
    if ( (*(_DWORD *)(v1 + 296) & 4) == 0 || (*(_DWORD *)(*(_QWORD *)(v1 + 80) + 624LL) & 1) == 0 )
      ++*(_DWORD *)(v1 + 124);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 88));
    __writecr8(v2);
  }
}
