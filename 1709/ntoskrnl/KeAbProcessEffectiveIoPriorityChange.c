/*
 * XREFs of KeAbProcessEffectiveIoPriorityChange @ 0x14010F854
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14008B550 (ExpApplyPriorityBoost.c)
 *     PsBoostThreadIoQoS @ 0x140113034 (PsBoostThreadIoQoS.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x14010F97C (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x140124280 (KiAbThreadInsertList.c)
 */

void __fastcall KeAbProcessEffectiveIoPriorityChange(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx

  if ( !a2 && *(_BYTE *)(a1 + 793) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(a1, &CurrentPrcb->AbPropagateBoostsList, a1 + 1376) )
      KiAbQueueAutoBoostDpc(CurrentPrcb);
    __writecr8(CurrentIrql);
  }
}
