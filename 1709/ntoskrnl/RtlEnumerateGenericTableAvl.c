/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x14012ABB0
 * Callers:
 *     PiDmObjectManagerPopulate @ 0x1405CD534 (PiDmObjectManagerPopulate.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x14070C3A4 (PopStatsNotifyPowerRequestCsState.c)
 *     VfAvlEnumerateNodes @ 0x1407BDE78 (VfAvlEnumerateNodes.c)
 * Callees:
 *     RtlEnumerateGenericTableWithoutSplayingAvl @ 0x1400DF640 (RtlEnumerateGenericTableWithoutSplayingAvl.c)
 */

PVOID __stdcall RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  if ( Restart )
    Table->RestartKey = 0LL;
  return RtlEnumerateGenericTableWithoutSplayingAvl(Table, (PVOID *)&Table->RestartKey);
}
