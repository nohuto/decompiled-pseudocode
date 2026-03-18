/*
 * XREFs of KeQueryOwnerMutant @ 0x14012B14C
 * Callers:
 *     NtQueryMutant @ 0x140591510 (NtQueryMutant.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 */

void __stdcall KeQueryOwnerMutant(PKMUTANT Mutant, PCLIENT_ID ClientId)
{
  unsigned __int8 CurrentIrql; // si
  _KTHREAD *OwnerThread; // rax

  ClientId->UniqueProcess = 0LL;
  ClientId->UniqueThread = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KiAcquireKobjectLockSafe(&Mutant->Header.Lock);
  OwnerThread = Mutant->OwnerThread;
  if ( OwnerThread )
    *ClientId = *(PCLIENT_ID)&OwnerThread[1].CycleTime;
  _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
  __writecr8(CurrentIrql);
}
