/*
 * XREFs of PiSwIrpCancelStartCreate @ 0x1402007B0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall PiSwIrpCancelStartCreate(__int64 a1, IRP *a2)
{
  _QWORD *FsContext2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rsi

  FsContext2 = a2->Tail.Overlay.CurrentStackLocation->FileObject->FsContext2;
  KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  v5 = FsContext2[18];
  if ( v5 )
    FsContext2[18] = 0LL;
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v5 )
  {
    a2->IoStatus.Information = 0LL;
    a2->IoStatus.Status = -1073741536;
    IofCompleteRequest(a2, 0);
  }
}
