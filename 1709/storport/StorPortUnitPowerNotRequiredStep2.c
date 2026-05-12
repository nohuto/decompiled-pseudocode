/*
 * XREFs of StorPortUnitPowerNotRequiredStep2 @ 0x1C0039324
 * Callers:
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0039240 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerNotRequiredStep2Passive @ 0x1C0039560 (StorPortUnitPowerNotRequiredStep2Passive.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x1C001E788 (RaidAdapterPoFxIdleComponent.c)
 *     McTemplateK0pqcccq @ 0x1C0036608 (McTemplateK0pqcccq.c)
 */

void __fastcall StorPortUnitPowerNotRequiredStep2(char *Context)
{
  unsigned __int8 v2; // r14
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // rcx
  char v6; // al
  NTSTATUS v7; // esi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  PVOID Contexta; // [rsp+20h] [rbp-68h]
  PIRP *Irp; // [rsp+28h] [rbp-60h]
  char v13; // [rsp+30h] [rbp-58h]
  char v14; // [rsp+38h] [rbp-50h]
  int v15; // [rsp+40h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF

  v2 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 4, &LockHandle);
  v3 = *((_QWORD *)Context + 186);
  v4 = *(_DWORD *)(v3 + 32);
  if ( (v4 & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v3 + 8) + 12LL) & 2) != 0 )
  {
    KeCancelTimer((PKTIMER)(Context + 696));
    Context[153] |= 0x20u;
    v5 = *((_QWORD *)Context + 3);
    v6 = Context[153];
    if ( *(_QWORD *)(v5 + 5088) && (v6 & 8) != 0 )
    {
      Context[153] = v6 & 0xF7;
      RaidAdapterPoFxIdleComponent(v5, 0LL, 0LL);
    }
    goto LABEL_16;
  }
  if ( *((_DWORD *)Context + 49) != 1 )
  {
LABEL_16:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *((_QWORD *)Context + 221) = MEMORY[0xFFFFF78000000008];
    v8 = *((_QWORD *)Context + 186);
    if ( *(char *)(*((_QWORD *)Context + 3) + 108LL) >= 0 )
    {
      *(_DWORD *)(v8 + 32) &= ~0x20u;
    }
    else
    {
      *(_DWORD *)(v8 + 32) |= 0x20u;
      if ( !*((_QWORD *)Context + 218) )
        *((_QWORD *)Context + 218) = *((_QWORD *)Context + 221);
    }
    PoFxCompleteDevicePowerNotRequired(**((_QWORD **)Context + 186));
    if ( StorEtwLoggingEnabled )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      {
        v10 = *((_QWORD *)Context + 3);
        v15 = v2;
        v14 = Context[90];
        v13 = Context[89];
        LOBYTE(Irp) = Context[88];
        LODWORD(Contexta) = *(_DWORD *)(v10 + 56);
        McTemplateK0pqcccq(
          v10,
          &EventUnitPowerNotRequiredStop,
          v9,
          **((_QWORD **)Context + 186),
          Contexta,
          Irp,
          v13,
          v14,
          v15);
      }
    }
    return;
  }
  if ( (v4 & 1) == 0 )
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
           (PIRP *)(*((_QWORD *)Context + 186) + 56LL));
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
      v2 = 1;
      _InterlockedExchange((volatile __int32 *)Context + 377, 0);
    }
    goto LABEL_16;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 412, 1, 0) )
    IoQueueWorkItem(
      *((PIO_WORKITEM *)Context + 204),
      StorPortUnitPowerNotRequiredStep2Passive,
      DelayedWorkQueue,
      Context);
}
