/*
 * XREFs of StorPortUnitPowerNotRequiredStep2 @ 0x1C0037434
 * Callers:
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0037350 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerNotRequiredStep2Passive @ 0x1C0037670 (StorPortUnitPowerNotRequiredStep2Passive.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x1C001D990 (RaidAdapterPoFxIdleComponent.c)
 *     Template_pqcccq @ 0x1C0037974 (Template_pqcccq.c)
 */

void __fastcall StorPortUnitPowerNotRequiredStep2(char *Context)
{
  __int64 v2; // rax
  int v3; // edx
  char v4; // si
  __int64 v5; // rcx
  char v6; // al
  NTSTATUS v7; // ebp
  __int64 v8; // rax
  int v9; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 4, &LockHandle);
  v2 = *((_QWORD *)Context + 182);
  v3 = *(_DWORD *)(v2 + 32);
  if ( (v3 & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v2 + 8) + 12LL) & 2) != 0 )
  {
    KeCancelTimer((PKTIMER)(Context + 664));
    Context[153] |= 0x20u;
    v4 = 0;
    v5 = *((_QWORD *)Context + 3);
    v6 = Context[153];
    if ( *(_QWORD *)(v5 + 5088) && (v6 & 8) != 0 )
    {
      Context[153] = v6 & 0xF7;
      RaidAdapterPoFxIdleComponent(v5, 0LL, 0LL);
    }
    goto LABEL_16;
  }
  v4 = 0;
  if ( *((_DWORD *)Context + 49) != 1 )
  {
LABEL_16:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *((_QWORD *)Context + 217) = MEMORY[0xFFFFF78000000008];
    v8 = *((_QWORD *)Context + 182);
    if ( *(_BYTE *)(*((_QWORD *)Context + 3) + 108LL) < 0x80u )
    {
      *(_DWORD *)(v8 + 32) &= ~0x20u;
    }
    else
    {
      *(_DWORD *)(v8 + 32) |= 0x20u;
      if ( !*((_QWORD *)Context + 214) )
        *((_QWORD *)Context + 214) = *((_QWORD *)Context + 217);
    }
    PoFxCompleteDevicePowerNotRequired(**((_QWORD **)Context + 182));
    if ( StorEtwLoggingEnabled )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
        Template_pqcccq(
          *((_QWORD *)Context + 3),
          (unsigned int)&EventUnitPowerNotRequiredStop,
          v9,
          **((_QWORD **)Context + 182),
          *(_DWORD *)(*((_QWORD *)Context + 3) + 56LL),
          Context[88],
          Context[89],
          Context[90],
          v4);
    }
    return;
  }
  if ( (v3 & 1) == 0 )
  {
    v7 = 0;
    goto LABEL_13;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !KeGetCurrentIrql() )
  {
    v7 = PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           0,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)StorPortUnitPoFxWaitWakeCompletion,
           Context,
           (PIRP *)(*((_QWORD *)Context + 182) + 64LL));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 4, &LockHandle);
LABEL_13:
    if ( v7 >= 0
      && PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)4,
           (PREQUEST_POWER_COMPLETE)StorPortUnitPoFxD3Completion,
           Context,
           0LL) == 259 )
    {
      Context[153] |= 1u;
      v4 = 1;
      _InterlockedExchange((volatile __int32 *)Context + 369, 0);
    }
    goto LABEL_16;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 404, 1, 0) )
    IoQueueWorkItem(
      *((PIO_WORKITEM *)Context + 200),
      StorPortUnitPowerNotRequiredStep2Passive,
      DelayedWorkQueue,
      Context);
}
