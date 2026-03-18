/*
 * XREFs of MmLockLoadedModuleListShared @ 0x14012B7B0
 * Callers:
 *     MiLockPagableImageSection @ 0x14000B0B0 (MiLockPagableImageSection.c)
 *     MiRemoveWsle @ 0x14000F040 (MiRemoveWsle.c)
 *     MiAllocateWsle @ 0x1400161C0 (MiAllocateWsle.c)
 *     MmIsSessionExecutionValid @ 0x14012B698 (MmIsSessionExecutionValid.c)
 *     RtlpxLookupFunctionTable @ 0x14012EDA0 (RtlpxLookupFunctionTable.c)
 *     MiLookupDataTableEntry @ 0x14013F6A8 (MiLookupDataTableEntry.c)
 *     RtlPcToFileName @ 0x140182850 (RtlPcToFileName.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400A22F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MmLockLoadedModuleListShared(unsigned __int8 *a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rax
  __int64 result; // rax
  int v6; // ett
  int v7; // ecx

  CurrentIrql = KeGetCurrentIrql();
  *a1 = CurrentIrql;
  if ( CurrentIrql < 0xFu )
  {
    KeGetCurrentIrql();
    __writecr8(0xFuLL);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(a2) = -1;
    return ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&PsLoadedModuleSpinLock, a2);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v7 = SchedulerAssist[5];
        SchedulerAssist[5] = v7 + 1;
        if ( v7 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    _m_prefetchw(&PsLoadedModuleSpinLock);
    v6 = PsLoadedModuleSpinLock & 0x7FFFFFFF;
    result = (unsigned int)_InterlockedCompareExchange(
                             &PsLoadedModuleSpinLock,
                             (PsLoadedModuleSpinLock & 0x7FFFFFFF) + 1,
                             PsLoadedModuleSpinLock & 0x7FFFFFFF);
    if ( v6 != (_DWORD)result )
    {
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
      return ExpWaitForSpinLockSharedAndAcquire(&PsLoadedModuleSpinLock, 0xFFu);
    }
  }
  return result;
}
