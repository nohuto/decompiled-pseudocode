/*
 * XREFs of PopInitializeWorkItem @ 0x1405A834C
 * Callers:
 *     PopInitializeIRTimer @ 0x140155A20 (PopInitializeIRTimer.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 *     PopInitializePowerButtonHold @ 0x14080C4FC (PopInitializePowerButtonHold.c)
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
