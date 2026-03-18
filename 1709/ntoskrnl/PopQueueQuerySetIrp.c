/*
 * XREFs of PopQueueQuerySetIrp @ 0x1400B38D4
 * Callers:
 *     PopRequestPowerIrp @ 0x1400B3BA0 (PopRequestPowerIrp.c)
 *     PopNotifyDevice @ 0x140437350 (PopNotifyDevice.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     PopDeepSleepSetDisengageReason @ 0x1400AF04C (PopDeepSleepSetDisengageReason.c)
 *     PopEnableIrpWatchdog @ 0x1400B3804 (PopEnableIrpWatchdog.c)
 *     PopDiagTraceIrpStart @ 0x1400B3A64 (PopDiagTraceIrpStart.c)
 */

NTSTATUS __fastcall PopQueueQuerySetIrp(PIRP Irp)
{
  char v1; // bp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  PIRP v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  struct _DEVICE_OBJECT *v7; // r14
  int v8; // ecx
  PIRP *v9; // rdi
  PIRP Flink; // rax
  __int64 v11; // rcx
  NTSTATUS result; // eax
  KIRQL v13; // al
  struct _DEVICE_OBJECT *AttachedTo; // rdx
  struct _LIST_ENTRY *v15; // rcx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  struct _LIST_ENTRY *v17; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = Irp;
  v4 = *((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  v5 = *(_QWORD *)(v4 + 24);
  if ( v5 )
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
  else
    v6 = 0LL;
  v7 = *(struct _DEVICE_OBJECT **)(v4 + 32);
  if ( *(_BYTE *)(v4 + 184) == 2
    && *(_DWORD *)(v4 + 188) == 1
    && _InterlockedIncrement(&PopPendingSetPowerDeviceIrps) == 1 )
  {
    PopDeepSleepSetDisengageReason(2);
  }
  v8 = *(_DWORD *)(v4 + 188);
  v9 = (PIRP *)(v6 + 248);
  if ( v8 != 1 )
    v9 += 2;
  if ( *(_BYTE *)(v4 + 184) == 2 && v8 == 1 && CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart == 1 )
  {
    v13 = KeAcquireQueuedSpinLock(0xAuLL);
    AttachedTo = v7;
    if ( v7 )
    {
      while ( (AttachedTo->Flags & 0x4000) == 0 )
      {
        AttachedTo = AttachedTo->DeviceObjectExtension->AttachedTo;
        if ( !AttachedTo )
          goto LABEL_23;
      }
      v1 = 1;
    }
LABEL_23:
    KeReleaseQueuedSpinLock(0xAuLL, v13);
  }
  v3->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  if ( v1 )
  {
    v15 = (struct _LIST_ENTRY *)qword_140365E88;
    p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v3->Tail.Overlay.ListEntry;
    if ( *(__int64 **)qword_140365E88 != &PopInrushIrpList )
      __fastfail(3u);
    p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)&PopInrushIrpList;
    v3->Tail.Overlay.ListEntry.Blink = v15;
    v15->Flink = &p_ListEntry->ListEntry;
    qword_140365E88 = (__int64)&v3->Tail.Overlay.ListEntry;
  }
  Flink = v9[1];
  if ( Flink )
  {
    while ( Flink->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink )
      Flink = (PIRP)Flink->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink;
    Flink->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)v3;
  }
  else
  {
    v9[1] = v3;
    if ( !*v9 )
    {
      if ( !v1 )
      {
LABEL_16:
        v9[1] = 0LL;
        *v9 = v3;
        goto LABEL_17;
      }
      if ( !PopInrushIrp )
      {
        PopInrushIrp = (__int64)v3;
        v17 = v3->Tail.Overlay.ListEntry.Flink;
        if ( (PVOID *)v17->Blink != &v3->Tail.CompletionKey + 6
          || (Blink = v3->Tail.Overlay.ListEntry.Blink, (PVOID *)Blink->Flink != &v3->Tail.CompletionKey + 6) )
        {
          __fastfail(3u);
        }
        Blink->Flink = v17;
        v17->Blink = Blink;
        goto LABEL_16;
      }
    }
  }
  v3 = 0LL;
LABEL_17:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( v3 )
  {
    PopDiagTraceIrpStart(v11, v3);
    PopEnableIrpWatchdog((__int64)v3);
    return IofCallDriver(v7, v3);
  }
  return result;
}
