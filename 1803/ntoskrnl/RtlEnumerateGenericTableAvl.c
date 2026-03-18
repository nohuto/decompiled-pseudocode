/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x1400CBBE0
 * Callers:
 *     PiDmObjectManagerPopulate @ 0x140631170 (PiDmObjectManagerPopulate.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x14076F870 (PopStatsNotifyPowerRequestCsState.c)
 *     VfAvlEnumerateNodes @ 0x14082B250 (VfAvlEnumerateNodes.c)
 * Callees:
 *     RtlEnumerateGenericTableWithoutSplayingAvl @ 0x14006E470 (RtlEnumerateGenericTableWithoutSplayingAvl.c)
 */

PVOID __stdcall RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  if ( Restart )
    Table->RestartKey = 0LL;
  return RtlEnumerateGenericTableWithoutSplayingAvl(Table, (PVOID *)&Table->RestartKey);
}
