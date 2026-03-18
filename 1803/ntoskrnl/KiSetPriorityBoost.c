/*
 * XREFs of KiSetPriorityBoost @ 0x1400A7404
 * Callers:
 *     KiPrepareReadyThreadForRescheduling @ 0x1400A6D68 (KiPrepareReadyThreadForRescheduling.c)
 *     KiQuantumEnd @ 0x1400EBA30 (KiQuantumEnd.c)
 * Callees:
 *     KiSetLockOwnershipQuantum @ 0x1400A745C (KiSetLockOwnershipQuantum.c)
 *     KiSetPriorityThread @ 0x1400ED840 (KiSetPriorityThread.c)
 *     KiUpdateThreadPriority @ 0x1400EDCB0 (KiUpdateThreadPriority.c)
 */

__int64 __fastcall KiSetPriorityBoost(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v6; // r8

  *(_BYTE *)(a2 + 564) += 16 * (a3 - *(_BYTE *)(a2 + 195));
  v6 = (unsigned int)a3;
  if ( a1 )
    KiSetPriorityThread(a2, a1, v6);
  else
    KiUpdateThreadPriority(0LL, a2, v6, 0LL);
  return KiSetLockOwnershipQuantum(a2, a4);
}
