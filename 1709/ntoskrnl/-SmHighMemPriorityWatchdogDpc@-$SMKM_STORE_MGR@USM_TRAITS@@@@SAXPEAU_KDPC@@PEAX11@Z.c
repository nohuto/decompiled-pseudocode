/*
 * XREFs of ?SmHighMemPriorityWatchdogDpc@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KDPC@@PEAX11@Z @ 0x14000EC00
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogDpc(__int64 a1, __int64 a2)
{
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 1816), a2 + 1792, 0LL) )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 1792), NormalWorkQueue);
}
