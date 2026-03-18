/*
 * XREFs of KeAbProcessBaseIoPriorityChangeInternal @ 0x140021908
 * Callers:
 *     IoUpdateThreadIoRateThrottle @ 0x14000F2F0 (IoUpdateThreadIoRateThrottle.c)
 *     KeAbProcessBaseIoPriorityChange @ 0x1400218CC (KeAbProcessBaseIoPriorityChange.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x14010F97C (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x140124280 (KiAbThreadInsertList.c)
 */

__int64 __fastcall KeAbProcessBaseIoPriorityChangeInternal(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 result; // rax
  __int64 v5; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !*(_BYTE *)(a1 + 1423) || a2 )
  {
    if ( !*(_BYTE *)(a1 + 793) || !a2 )
      goto LABEL_3;
    v5 = a1 + 1376;
    p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
  }
  else
  {
    v5 = a1 + 1384;
    p_AbPropagateBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
  }
  if ( (unsigned int)KiAbThreadInsertList(a1, p_AbPropagateBoostsList, v5) )
    KiAbQueueAutoBoostDpc(CurrentPrcb);
LABEL_3:
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
