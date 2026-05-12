/*
 * XREFs of RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011770
 * Callers:
 *     RaidAdapterDevicePowerUpSrbComplete @ 0x1C000F660 (RaidAdapterDevicePowerUpSrbComplete.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0011690 (RaidAdapterPowerUpDeviceCompletion.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C00054E4 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C000E778 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidAdapterRestartQueues @ 0x1C0011918 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C00119A4 (RaidResumeAdapterQueue.c)
 *     RaidAdapterRestartAdapter @ 0x1C0011A08 (RaidAdapterRestartAdapter.c)
 *     RaidIsAdapterControlSupported @ 0x1C0012E88 (RaidIsAdapterControlSupported.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C0018D48 (StorUpdateCrashDumpPowerReady.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     RaidAdapterReInitialize @ 0x1C002CC6C (RaidAdapterReInitialize.c)
 *     WPP_SF_qqD @ 0x1C0030584 (WPP_SF_qqD.c)
 *     StorPortUnitIdleState @ 0x1C0036EB0 (StorPortUnitIdleState.c)
 *     Template_qpq @ 0x1C00384B8 (Template_qpq.c)
 */

void __fastcall RaidAdapterPowerUpDeviceCompletionLastStep(PIRP Irp, __int64 a2)
{
  KIRQL v4; // bl
  unsigned int LowPart; // ebx
  int v6; // edx
  int v7; // ecx
  PSLIST_ENTRY v8; // rax
  PSLIST_ENTRY v9; // rbx
  IRP *Next; // rdx
  __int64 v11; // r8
  int v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+38h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v15[2]; // [rsp+58h] [rbp-20h] BYREF

  if ( (unsigned int)RaidIsAdapterControlSupported(a2, 2LL) )
    RaidAdapterRestartAdapter(a2);
  else
    RaidAdapterReInitialize(a2);
  RaidResumeAdapterQueue(a2);
  v4 = KfRaiseIrql(2u);
  RaidAdapterRestartQueues(a2);
  KeLowerIrql(v4);
  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 80), &LockHandle);
  *(_DWORD *)(a2 + 268) = LowPart;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  PoSetPowerState(*(PDEVICE_OBJECT *)(a2 + 8), DevicePowerState, (POWER_STATE)LowPart);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      28LL,
      &WPP_e84d6fd860f635d2c40ebca745df63f2_Traceguids,
      a2,
      Irp,
      Irp->IoStatus.Status);
  }
  if ( StorEtwLoggingEnabled )
  {
    v15[0] = 0LL;
    v15[1] = 0LL;
    IoGetActivityIdIrp(Irp, v15);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      Template_qpq(v7, v6, (unsigned int)v15, *(_DWORD *)(a2 + 56), (char)Irp, Irp->IoStatus.Status);
  }
  if ( *(_BYTE *)(a2 + 109) >= 0x80u )
  {
    v12 = *(_DWORD *)(a2 + 676);
    v13 = *(_QWORD *)(a2 + 664);
    IoReportInterruptActive(&v12);
  }
  if ( *(_DWORD *)(a2 + 96) && *(_QWORD *)(a2 + 5144) )
    StorUpdateCrashDumpPowerReady(a2);
  RaidCompleteRequestEx(Irp, 0, Irp->IoStatus.Status);
  while ( 1 )
  {
    v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a2 + 5072));
    if ( !v8 )
      break;
    v9 = v8 - 103;
    if ( *((_BYTE *)&v8[-2].Next + 9) )
    {
      Next = (IRP *)v9[102].Next;
      v9[102].Next = 0LL;
      *((_BYTE *)&v9[101].Next + 9) = 0;
      RaidUnitProcessSetDevicePowerIrp((char *)&v8[-103], Next);
      RaUnitReleaseRemoveLock((struct _KEVENT *)v9);
    }
    else if ( *((_BYTE *)&v9[101].Next + 8) )
    {
      v11 = *((unsigned int *)&v9[101].Next + 3);
      *((_BYTE *)&v9[101].Next + 8) = 0;
      StorPortUnitIdleState(&v8[-103], 0LL, v11);
    }
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 256));
}
