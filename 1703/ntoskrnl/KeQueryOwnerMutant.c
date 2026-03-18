/*
 * XREFs of KeQueryOwnerMutant @ 0x140003D24
 * Callers:
 *     NtQueryMutant @ 0x14041EF34 (NtQueryMutant.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 */

void __stdcall KeQueryOwnerMutant(PKMUTANT Mutant, PCLIENT_ID ClientId)
{
  unsigned __int8 CurrentIrql; // si
  _KTHREAD *OwnerThread; // rax

  ClientId->UniqueProcess = 0LL;
  ClientId->UniqueThread = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KiAcquireKobjectLockSafe();
  OwnerThread = Mutant->OwnerThread;
  if ( OwnerThread )
    *ClientId = *(PCLIENT_ID)&OwnerThread[1].CurrentRunTime;
  _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
  __writecr8(CurrentIrql);
}
