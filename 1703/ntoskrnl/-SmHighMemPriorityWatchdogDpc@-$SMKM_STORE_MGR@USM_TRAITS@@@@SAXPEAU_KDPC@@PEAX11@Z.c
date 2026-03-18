/*
 * XREFs of ?SmHighMemPriorityWatchdogDpc@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KDPC@@PEAX11@Z @ 0x14003C830
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogDpc(__int64 a1, __int64 a2)
{
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 1792), a2 + 1768, 0LL) )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 1768), NormalWorkQueue);
}
