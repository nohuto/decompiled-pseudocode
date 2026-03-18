/*
 * XREFs of PsIsProcessCommitRelinquished @ 0x1406DFA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsProcessCommitRelinquished(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1740) & 0x40000) != 0;
}
