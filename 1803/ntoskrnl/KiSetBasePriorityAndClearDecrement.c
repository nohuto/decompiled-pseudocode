/*
 * XREFs of KiSetBasePriorityAndClearDecrement @ 0x14006B24C
 * Callers:
 *     KiDirectSwitchThread @ 0x1400399E0 (KiDirectSwitchThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14006AA44 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x14006AEA0 (KeSetBasePriorityThread.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1400EB950 (KiUpdateVPBackingThreadPriority.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     KeRemovePriQueue @ 0x1401264C0 (KeRemovePriQueue.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x140039664 (KiAbQueueAutoBoostDpc.c)
 */

__int64 __fastcall KiSetBasePriorityAndClearDecrement(__int64 a1, char *a2, int a3)
{
  unsigned int v3; // r9d
  char v7; // al
  struct _KDPC *CurrentPrcb; // rcx
  char v9; // al
  PVOID *v11; // rdx
  PVOID *p_SystemArgument2; // r8

  v3 = 0;
  if ( a2 )
  {
    v7 = *a2;
    CurrentPrcb = (struct _KDPC *)KeGetCurrentPrcb();
    if ( *a2 < *(char *)(a1 + 563) )
    {
      if ( *(_BYTE *)(a1 + 1423) )
      {
        v11 = (PVOID *)(a1 + 1384);
        if ( *(_QWORD *)(a1 + 1384) == 1LL )
        {
          p_SystemArgument2 = &CurrentPrcb[401].SystemArgument2;
          if ( CurrentPrcb != (struct _KDPC *)-25712LL )
          {
            *v11 = *p_SystemArgument2;
            *p_SystemArgument2 = v11;
            _InterlockedAdd16((volatile signed __int16 *)(a1 + 1420), 1u);
            KiAbQueueAutoBoostDpc(CurrentPrcb);
            v7 = *a2;
          }
        }
      }
    }
    *(_BYTE *)(a1 + 563) = v7;
    v3 = *(_DWORD *)a2;
  }
  v9 = *(_BYTE *)(a1 + 564);
  if ( v9 )
  {
    if ( (v9 & 0xF) != 0 )
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
