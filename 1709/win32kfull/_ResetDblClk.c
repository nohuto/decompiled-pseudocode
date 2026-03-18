/*
 * XREFs of _ResetDblClk @ 0x1C0126D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ResetDblClk()
{
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 160LL) = 0;
  return 1LL;
}
