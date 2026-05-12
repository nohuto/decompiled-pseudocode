/*
 * XREFs of RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0010460
 * Callers:
 *     RaidAdapterDevicePowerUpSrbComplete @ 0x1C000FD50 (RaidAdapterDevicePowerUpSrbComplete.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C000FE30 (RaidAdapterPowerUpDeviceCompletion.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0005880 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C000EA70 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidAdapterRestartQueues @ 0x1C0010608 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C00106A4 (RaidResumeAdapterQueue.c)
 *     RaidAdapterRestartAdapter @ 0x1C0010708 (RaidAdapterRestartAdapter.c)
 *     RaidIsAdapterControlSupported @ 0x1C00127FC (RaidIsAdapterControlSupported.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C00187C8 (StorUpdateCrashDumpPowerReady.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     RaidAdapterReInitialize @ 0x1C002DBEC (RaidAdapterReInitialize.c)
 *     WPP_SF_qqD @ 0x1C0030BFC (WPP_SF_qqD.c)
 *     McTemplateK0qpq @ 0x1C00370D8 (McTemplateK0qpq.c)
 *     StorPortUnitIdleState @ 0x1C0038D50 (StorPortUnitIdleState.c)
 */

void __fastcall RaidAdapterPowerUpDeviceCompletionLastStep(PIRP Irp, __int64 a2)
{
  KIRQL v4; // bl
  unsigned int LowPart; // ebx
  int v6; // edx
  int v7; // ecx
  PSLIST_ENTRY v8; // rax
  __int64 v9; // rbx
  IRP *v10; // rdx
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
      &WPP_0c5c8aed4ecb3cf637873a43b49c0b60_Traceguids,
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
      McTemplateK0qpq(v7, v6, (unsigned int)v15, *(_DWORD *)(a2 + 56), (char)Irp, Irp->IoStatus.Status);
  }
  if ( *(char *)(a2 + 109) < 0 )
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
    v9 = (__int64)&v8[-105];
    if ( *((_BYTE *)&v8[-2].Next + 9) )
    {
      v10 = *(IRP **)(v9 + 1664);
      *(_QWORD *)(v9 + 1664) = 0LL;
      *(_BYTE *)(v9 + 1657) = 0;
      RaidUnitProcessSetDevicePowerIrp((char *)&v8[-105], v10);
      RaUnitReleaseRemoveLock(v9);
    }
    else if ( *(_BYTE *)(v9 + 1656) )
    {
      v11 = *(unsigned int *)(v9 + 1660);
      *(_BYTE *)(v9 + 1656) = 0;
      StorPortUnitIdleState(&v8[-105], 0LL, v11);
    }
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 256));
}
