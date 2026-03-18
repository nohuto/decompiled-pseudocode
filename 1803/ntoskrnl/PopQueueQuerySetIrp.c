/*
 * XREFs of PopQueueQuerySetIrp @ 0x140167738
 * Callers:
 *     PopRequestPowerIrp @ 0x1401671C0 (PopRequestPowerIrp.c)
 *     PopNotifyDevice @ 0x140472AA4 (PopNotifyDevice.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     PopDeepSleepSetDisengageReason @ 0x1400733E0 (PopDeepSleepSetDisengageReason.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 *     PopEnableIrpWatchdog @ 0x1401678D8 (PopEnableIrpWatchdog.c)
 *     PopDiagTraceIrpStart @ 0x1401679AC (PopDiagTraceIrpStart.c)
 */

NTSTATUS __fastcall PopQueueQuerySetIrp(PIRP Irp)
{
  char v1; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  PIRP v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  struct _DEVICE_OBJECT *v7; // rbp
  PIRP *v8; // rdi
  KIRQL v9; // al
  struct _DEVICE_OBJECT *AttachedTo; // rdx
  PIRP v11; // rax
  NTSTATUS result; // eax
  struct _LIST_ENTRY *v13; // rcx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  IRP *i; // rcx
  struct _LIST_ENTRY *Flink; // rcx
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
  v8 = (PIRP *)(v6 + 248);
  if ( *(_DWORD *)(v4 + 188) == 1 )
  {
    if ( *(_BYTE *)(v4 + 184) == 2 && CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart == 1 )
    {
      v9 = KeAcquireQueuedSpinLock(0xAuLL);
      AttachedTo = v7;
      if ( v7 )
      {
        while ( (AttachedTo->Flags & 0x4000) == 0 )
        {
          AttachedTo = AttachedTo->DeviceObjectExtension->AttachedTo;
          if ( !AttachedTo )
            goto LABEL_12;
        }
        v1 = 1;
      }
LABEL_12:
      KeReleaseQueuedSpinLock(0xAuLL, v9);
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
    v13 = (struct _LIST_ENTRY *)qword_1403AA708;
    p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v3->Tail.Overlay.ListEntry;
    if ( *(__int64 **)qword_1403AA708 != &PopInrushIrpList )
      __fastfail(3u);
    p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)&PopInrushIrpList;
    v3->Tail.Overlay.ListEntry.Blink = v13;
    v13->Flink = &p_ListEntry->ListEntry;
    qword_1403AA708 = (__int64)&v3->Tail.Overlay.ListEntry;
  }
  v11 = v8[1];
  if ( v11 )
  {
    for ( i = (IRP *)v11->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink;
          i;
          i = (IRP *)i->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink )
    {
      v11 = i;
    }
    v11->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)v3;
  }
  else
  {
    v8[1] = v3;
    if ( !*v8 )
    {
      if ( !v1 )
      {
LABEL_17:
        v8[1] = 0LL;
        *v8 = v3;
        goto LABEL_18;
      }
      if ( !PopInrushIrp )
      {
        PopInrushIrp = (__int64)v3;
        Flink = v3->Tail.Overlay.ListEntry.Flink;
        if ( (PVOID *)Flink->Blink != &v3->Tail.CompletionKey + 6
          || (Blink = v3->Tail.Overlay.ListEntry.Blink, (PVOID *)Blink->Flink != &v3->Tail.CompletionKey + 6) )
        {
          __fastfail(3u);
        }
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        goto LABEL_17;
      }
    }
  }
  v3 = 0LL;
LABEL_18:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( v3 )
  {
    PopDiagTraceIrpStart(v7, v3);
    PopEnableIrpWatchdog(v3);
    return IofCallDriver(v7, v3);
  }
  return result;
}
