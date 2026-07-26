/*
 * XREFs of ndisDmaExecutionRoutine @ 0x1C005D0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisDmaExecutionRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_QWORD *)a4 = a3;
  KeSetEvent((PRKEVENT)(a4 + 8), 0, 0);
  return 1LL;
}
