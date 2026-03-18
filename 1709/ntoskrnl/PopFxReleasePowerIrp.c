/*
 * XREFs of PopFxReleasePowerIrp @ 0x1401233B0
 * Callers:
 *     PopFreeIrp @ 0x140123030 (PopFreeIrp.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     PopRequestPowerIrp @ 0x1400B3BA0 (PopRequestPowerIrp.c)
 *     IoReleaseRemoveLockEx @ 0x14011AF40 (IoReleaseRemoveLockEx.c)
 */

__int64 __fastcall PopFxReleasePowerIrp(__int64 a1)
{
  KIRQL v2; // r12
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // r15
  int v6; // ebx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  char v9; // si
  __int64 result; // rax
  signed __int32 v11; // eax
  signed __int32 v12; // ett

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 48) + 88LL));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFEF);
  v3 = *(_QWORD *)(a1 + 488);
  v4 = *(_QWORD *)(a1 + 512);
  v5 = *(_QWORD *)(a1 + 528);
  v6 = *(_DWORD *)(a1 + 504);
  _m_prefetchw((const void *)(a1 + 32));
  v7 = *(_DWORD *)(a1 + 32);
  do
  {
    v8 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v7, v7);
  }
  while ( v8 != v7 );
  if ( (v7 & 0x20) != 0 )
  {
    v9 = 1;
    _m_prefetchw((const void *)(a1 + 32));
    v11 = *(_DWORD *)(a1 + 32);
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v11, v11);
    }
    while ( v12 != v11 );
    if ( (v11 & 0x100) != 0 )
    {
      v3 = *(_QWORD *)(a1 + 496);
      v4 = *(_QWORD *)(a1 + 520);
      v5 = *(_QWORD *)(a1 + 536);
      v6 = *(_DWORD *)(a1 + 508);
    }
  }
  else
  {
    v9 = 0;
    KeSetEvent((PRKEVENT)(a1 + 544), 0, 0);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 216), 0LL, 0x20u);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 48) + 88LL));
  result = v2;
  __writecr8(v2);
  if ( v9 )
    return PopRequestPowerIrp(v3, 2, v6, v4, v5, 1, 0LL);
  return result;
}
