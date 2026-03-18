/*
 * XREFs of AcpiNativeMethodEvalRequestCompletion @ 0x1C0033560
 * Callers:
 *     <none>
 * Callees:
 *     AMLIRestartContext @ 0x1C00442C0 (AMLIRestartContext.c)
 */

__int64 __fastcall AcpiNativeMethodEvalRequestCompletion(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 64) = a2;
  return AMLIRestartContext(*(_QWORD *)a1);
}
