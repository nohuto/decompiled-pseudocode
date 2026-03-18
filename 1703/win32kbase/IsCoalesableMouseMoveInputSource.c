/*
 * XREFs of IsCoalesableMouseMoveInputSource @ 0x1C008E570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IsCoalesableMouseMoveInputSource(__int64 a1)
{
  return (*(_DWORD *)(a1 + 4) & 0xFFFFFFFB) == 0;
}
