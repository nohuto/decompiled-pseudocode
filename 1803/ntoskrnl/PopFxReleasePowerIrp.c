/*
 * XREFs of PopFxReleasePowerIrp @ 0x1401665F4
 * Callers:
 *     PopFreeIrp @ 0x140165F90 (PopFreeIrp.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     IoReleaseRemoveLockEx @ 0x1400BA4B0 (IoReleaseRemoveLockEx.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PopRequestPowerIrp @ 0x1401671C0 (PopRequestPowerIrp.c)
 */

__int64 __fastcall PopFxReleasePowerIrp(__int64 a1)
{
  KIRQL v2; // r12
  __int64 v3; // rbp
  __int64 v4; // r15
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  char v7; // si
  __int64 result; // rax
  signed __int32 v9; // eax
  signed __int32 v10; // ett

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 48) + 88LL));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFEF);
  v3 = *(_QWORD *)(a1 + 488);
  v4 = *(_QWORD *)(a1 + 528);
  _m_prefetchw((const void *)(a1 + 32));
  v5 = *(_DWORD *)(a1 + 32);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v5, v5);
  }
  while ( v6 != v5 );
  if ( (v5 & 0x20) != 0 )
  {
    v7 = 1;
    _m_prefetchw((const void *)(a1 + 32));
    v9 = *(_DWORD *)(a1 + 32);
    do
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v9, v9);
    }
    while ( v10 != v9 );
    if ( (v9 & 0x100) != 0 )
    {
      v3 = *(_QWORD *)(a1 + 496);
      v4 = *(_QWORD *)(a1 + 536);
    }
  }
  else
  {
    v7 = 0;
    KeSetEvent((PRKEVENT)(a1 + 544), 0, 0);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 216), 0LL, 0x20u);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 48) + 88LL));
  result = v2;
  __writecr8(v2);
  if ( v7 )
    return PopRequestPowerIrp(v3, v4, 1, 0LL);
  return result;
}
