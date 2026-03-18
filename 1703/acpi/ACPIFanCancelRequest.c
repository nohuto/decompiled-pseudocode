/*
 * XREFs of ACPIFanCancelRequest @ 0x1C004D680
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000DE58 (WPP_RECORDER_SF_qqss.c)
 */

void __fastcall ACPIFanCancelRequest(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rcx
  const char *v5; // rdx
  __int64 v6; // rbx
  const char *v7; // r8
  __int64 v8; // rax
  KIRQL v9; // al
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *Blink; // rdx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  LOBYTE(v4) = 0;
  v5 = byte_1C0066CD0;
  v6 = DeviceExtension;
  v7 = byte_1C0066CD0;
  if ( DeviceExtension )
  {
    v4 = DeviceExtension;
    v8 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v5 = *(const char **)(v4 + 560);
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = *(const char **)(v4 + 568);
    }
  }
  WPP_RECORDER_SF_qqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0x10u,
    0x15u,
    (__int64)&WPP_c4ce4549a8103c4f89a2f46d9050f7e8_Traceguids,
    (char)a2,
    v4,
    v5,
    v7);
  IoReleaseCancelSpinLock(a2->CancelIrql);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 184));
  Flink = a2->Tail.Overlay.ListEntry.Flink;
  Blink = a2->Tail.Overlay.ListEntry.Blink;
  if ( (void **)Flink->Blink != &a2->Tail.CompletionKey + 6 || (void **)Blink->Flink != &a2->Tail.CompletionKey + 6 )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 184), v9);
  a2->IoStatus.Status = -1073741536;
  IofCompleteRequest(a2, 0);
}
