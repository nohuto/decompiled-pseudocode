/*
 * XREFs of _ResetDblClk @ 0x1C011D6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ResetDblClk()
{
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 128LL) = 0;
  return 1LL;
}
