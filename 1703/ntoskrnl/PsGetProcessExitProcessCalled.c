/*
 * XREFs of PsGetProcessExitProcessCalled @ 0x140036380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsGetProcessExitProcessCalled(__int64 a1)
{
  return (*(_DWORD *)(a1 + 772) & 4) != 0;
}
