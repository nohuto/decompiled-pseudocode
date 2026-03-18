/*
 * XREFs of PspUserApcReserveKernelRoutine @ 0x1406E2FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall PspUserApcReserveKernelRoutine(__int64 a1)
{
  _DWORD *v1; // rcx

  v1 = (_DWORD *)(a1 - 8);
  *v1 = 0;
  return ObfDereferenceObject(v1);
}
