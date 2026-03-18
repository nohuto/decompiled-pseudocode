/*
 * XREFs of KiSetBasePriorityAndClearDecrement @ 0x1400D3C50
 * Callers:
 *     KeRemovePriQueue @ 0x140061A80 (KeRemovePriQueue.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D34C8 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x1400D38F0 (KeSetBasePriorityThread.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x14010F97C (KiAbQueueAutoBoostDpc.c)
 */

__int64 __fastcall KiSetBasePriorityAndClearDecrement(__int64 a1, _BYTE *a2, int a3)
{
  unsigned int v3; // r9d
  char v7; // al
  struct _KPRCB *CurrentPrcb; // rcx
  struct _SINGLE_LIST_ENTRY *v10; // rdx
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r8

  v3 = 0;
  if ( a2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( *a2 < *(_BYTE *)(a1 + 563) )
    {
      if ( *(_BYTE *)(a1 + 1423) )
      {
        v10 = (struct _SINGLE_LIST_ENTRY *)(a1 + 1384);
        if ( *(_QWORD *)(a1 + 1384) == 1LL )
        {
          p_AbSelfIoBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
          if ( CurrentPrcb != (struct _KPRCB *)-25712LL )
          {
            v10->Next = p_AbSelfIoBoostsList->Next;
            p_AbSelfIoBoostsList->Next = v10;
            _InterlockedAdd16((volatile signed __int16 *)(a1 + 1420), 1u);
            KiAbQueueAutoBoostDpc(CurrentPrcb);
          }
        }
      }
    }
    *(_BYTE *)(a1 + 563) = *a2;
    v3 = *(_DWORD *)a2;
  }
  v7 = *(_BYTE *)(a1 + 564);
  if ( v7 )
  {
    if ( (v7 & 0xF) != 0 )
      *(_DWORD *)(a1 + 1424) = MEMORY[0xFFFFF78000000320];
    if ( a3 )
    {
      v3 = *(char *)(a1 + 195) - (*(_BYTE *)(a1 + 564) & 0xF);
      *(_BYTE *)(a1 + 564) &= 0xF0u;
    }
    else
    {
      *(_BYTE *)(a1 + 564) = 0;
    }
  }
  return v3;
}
