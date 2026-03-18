/*
 * XREFs of PopInitializeWorkItem @ 0x140627684
 * Callers:
 *     PopInitializeIRTimer @ 0x140171B48 (PopInitializeIRTimer.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 *     PopInitializePowerButtonHold @ 0x1408A8DD4 (PopInitializePowerButtonHold.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopInitializeWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = a3;
  return result;
}
