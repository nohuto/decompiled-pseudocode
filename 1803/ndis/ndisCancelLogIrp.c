/*
 * XREFs of ndisCancelLogIrp @ 0x1C005D760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisCancelLogIrp(__int64 a1, _IRP *a2)
{
  __int64 v3; // rbx
  KIRQL v4; // al

  v3 = *((_QWORD *)a2->Tail.Overlay.CurrentStackLocation->FileObject->FsContext + 2);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(*(_QWORD *)(v3 + 936) + 16LL) = 0LL;
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = -1073741248;
  *(_QWORD *)(v3 + 520) = 0LL;
  *(_DWORD *)(v3 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v4);
  IoReleaseCancelSpinLock(a2->CancelIrql);
  IofCompleteRequest(a2, 2);
}
