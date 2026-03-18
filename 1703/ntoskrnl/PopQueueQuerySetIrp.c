/*
 * XREFs of PopQueueQuerySetIrp @ 0x140146394
 * Callers:
 *     PopRequestPowerIrp @ 0x140145E60 (PopRequestPowerIrp.c)
 *     PopNotifyDevice @ 0x140408C28 (PopNotifyDevice.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x14006F418 (PopDeepSleepSetDisengageReason.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     PopEnableIrpWatchdog @ 0x140146530 (PopEnableIrpWatchdog.c)
 *     PopDiagTraceIrpStart @ 0x140146604 (PopDiagTraceIrpStart.c)
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
  PIRP *v8; // rdi
  PIRP Flink; // rax
  __int64 v10; // rcx
  NTSTATUS result; // eax
  KIRQL v12; // al
  struct _DEVICE_OBJECT *AttachedTo; // rdx
  struct _LIST_ENTRY *v14; // rcx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  struct _LIST_ENTRY *v16; // rdx
  struct _LIST_ENTRY *Blink; // rcx
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
  v8 = (PIRP *)(v6 + 248);
  if ( *(_DWORD *)(v4 + 188) == 1 )
  {
    if ( *(_BYTE *)(v4 + 184) == 2 && CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart == 1 )
    {
      v12 = KeAcquireQueuedSpinLock(0xAuLL);
      AttachedTo = v7;
      if ( v7 )
      {
        while ( (AttachedTo->Flags & 0x4000) == 0 )
        {
          AttachedTo = AttachedTo->DeviceObjectExtension->AttachedTo;
          if ( !AttachedTo )
            goto LABEL_22;
        }
        v1 = 1;
      }
LABEL_22:
      KeReleaseQueuedSpinLock(0xAuLL, v12);
    }
  }
  else
  {
    v8 += 2;
  }
  v3->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  if ( v1 )
  {
    v14 = (struct _LIST_ENTRY *)qword_14034B7F8;
    p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v3->Tail.Overlay.ListEntry;
    if ( *(__int64 **)qword_14034B7F8 != &PopInrushIrpList )
      __fastfail(3u);
    p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)&PopInrushIrpList;
    v3->Tail.Overlay.ListEntry.Blink = v14;
    v14->Flink = &p_ListEntry->ListEntry;
    qword_14034B7F8 = (__int64)&v3->Tail.Overlay.ListEntry;
  }
  Flink = v8[1];
  if ( Flink )
  {
    while ( Flink->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink )
      Flink = (PIRP)Flink->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink;
    Flink->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)v3;
  }
  else
  {
    v8[1] = v3;
    if ( !*v8 )
    {
      if ( !v1 )
      {
LABEL_15:
        v8[1] = 0LL;
        *v8 = v3;
        goto LABEL_16;
      }
      if ( !PopInrushIrp )
      {
        PopInrushIrp = (__int64)v3;
        v16 = v3->Tail.Overlay.ListEntry.Flink;
        Blink = v3->Tail.Overlay.ListEntry.Blink;
        if ( (PVOID *)v16->Blink != &v3->Tail.CompletionKey + 6 || (PVOID *)Blink->Flink != &v3->Tail.CompletionKey + 6 )
          __fastfail(3u);
        Blink->Flink = v16;
        v16->Blink = Blink;
        goto LABEL_15;
      }
    }
  }
  v3 = 0LL;
LABEL_16:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( v3 )
  {
    PopDiagTraceIrpStart(v10, v3);
    PopEnableIrpWatchdog(v3);
    return IofCallDriver(v7, v3);
  }
  return result;
}
