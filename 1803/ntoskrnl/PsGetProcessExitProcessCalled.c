/*
 * XREFs of PsGetProcessExitProcessCalled @ 0x1400CFD30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsGetProcessExitProcessCalled(__int64 a1)
{
  return (*(_DWORD *)(a1 + 772) & 4) != 0;
}
