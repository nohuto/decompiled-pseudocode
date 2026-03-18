/*
 * XREFs of ACPIThermalCancelRequest @ 0x1C0058B70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqssdddd @ 0x1C002391C (WPP_RECORDER_SF_qqssdddd.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 */

void __fastcall ACPIThermalCancelRequest(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  KIRQL v4; // al
  _LIST_ENTRY *Flink; // r9
  _LIST_ENTRY *Blink; // rdx
  int v7; // [rsp+20h] [rbp-88h]
  union _LARGE_INTEGER v8; // [rsp+70h] [rbp-38h] BYREF
  struct _TIME_FIELDS v9; // [rsp+78h] [rbp-30h] BYREF

  v8.QuadPart = MEMORY[0xFFFFF78000000008];
  RtlTimeToTimeFields(&v8, &v9);
  if ( ACPIInternalGetDeviceExtension(BugCheckParameter3) )
    ACPIInternalGetDeviceExtension(BugCheckParameter3);
  WPP_RECORDER_SF_qqssdddd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (unsigned int)v9.Minute,
    (unsigned int)v9.Hour,
    0xAu,
    v7);
  IoReleaseCancelSpinLock(Irp->CancelIrql);
  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalLock);
  Flink = Irp->Tail.Overlay.ListEntry.Flink;
  if ( (void **)Flink->Blink != &Irp->Tail.CompletionKey + 6
    || (Blink = Irp->Tail.Overlay.ListEntry.Blink, (void **)Blink->Flink != &Irp->Tail.CompletionKey + 6) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  KeReleaseSpinLock(&AcpiThermalLock, v4);
  Irp->IoStatus.Status = -1073741536;
  IofCompleteRequest(Irp, 0);
}
