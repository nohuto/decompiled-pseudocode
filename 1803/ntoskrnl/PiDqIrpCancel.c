/*
 * XREFs of PiDqIrpCancel @ 0x14023BA20
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     PiDqQueryLock @ 0x14072ACC8 (PiDqQueryLock.c)
 *     PiDqQueryUnlock @ 0x14072ACF4 (PiDqQueryUnlock.c)
 */

void __fastcall PiDqIrpCancel(__int64 a1, IRP *a2)
{
  char v3; // si
  _DWORD *FsContext2; // rbx

  v3 = 0;
  FsContext2 = a2->Tail.Overlay.CurrentStackLocation->FileObject->FsContext2;
  KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
  PiDqQueryLock(FsContext2);
  if ( *((_QWORD *)FsContext2 + 22) )
  {
    FsContext2[54] &= ~0x10u;
    v3 = 1;
    *((_QWORD *)FsContext2 + 22) = 0LL;
  }
  PiDqQueryUnlock(FsContext2);
  if ( v3 )
  {
    a2->IoStatus.Information = 0LL;
    a2->IoStatus.Status = -1073741536;
    IofCompleteRequest(a2, 0);
  }
}
