/*
 * XREFs of KeAbProcessBaseIoPriorityChangeInternal @ 0x140043934
 * Callers:
 *     IoUpdateThreadIoRateThrottle @ 0x1400022C0 (IoUpdateThreadIoRateThrottle.c)
 *     KeAbProcessBaseIoPriorityChange @ 0x1400438F8 (KeAbProcessBaseIoPriorityChange.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x140039664 (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x1400C38F0 (KiAbThreadInsertList.c)
 */

__int64 __fastcall KeAbProcessBaseIoPriorityChangeInternal(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // di
  struct _KDPC *CurrentPrcb; // rbx
  __int64 result; // rax
  __int64 v5; // r8
  PVOID *p_DpcData; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = (struct _KDPC *)KeGetCurrentPrcb();
  if ( !*(_BYTE *)(a1 + 1423) || a2 )
  {
    if ( !*(_BYTE *)(a1 + 793) || !a2 )
      goto LABEL_3;
    v5 = a1 + 1376;
    p_DpcData = &CurrentPrcb[401].DpcData;
  }
  else
  {
    v5 = a1 + 1384;
    p_DpcData = &CurrentPrcb[401].SystemArgument2;
  }
  if ( (unsigned int)KiAbThreadInsertList(a1, p_DpcData, v5) )
    KiAbQueueAutoBoostDpc(CurrentPrcb);
LABEL_3:
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
