/*
 * XREFs of KeAbProcessEffectiveIoPriorityChange @ 0x140205384
 * Callers:
 *     KiAbThreadBoostIoPriority @ 0x14011F390 (KiAbThreadBoostIoPriority.c)
 * Callees:
 *     KiAbThreadInsertList @ 0x1400309BC (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x14011F45C (KiAbQueueAutoBoostDpc.c)
 */

void __fastcall KeAbProcessEffectiveIoPriorityChange(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // di
  struct _KDPC *CurrentPrcb; // rbx

  if ( !a2 && *(_BYTE *)(a1 + 793) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = (struct _KDPC *)KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(a1, &CurrentPrcb[406].DpcData, (_QWORD *)(a1 + 1376)) )
      KiAbQueueAutoBoostDpc(CurrentPrcb);
    __writecr8(CurrentIrql);
  }
}
