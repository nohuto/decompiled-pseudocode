/*
 * XREFs of VidSchUnreferenceDisplayingAllocationInternal @ 0x1C002F390
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00103BC (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiSignalFlipEvents @ 0x1C0014694 (VidSchiSignalFlipEvents.c)
 *     VidSchiUpdateFlipDeviceStatus @ 0x1C0014798 (VidSchiUpdateFlipDeviceStatus.c)
 */

void __fastcall VidSchUnreferenceDisplayingAllocationInternal(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  int updated; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = a4;
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL) + 8LL));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
  v6 = *(_QWORD *)(a1 + 8 * v5 + 3032);
  if ( v6 )
  {
    VidSchiCheckPendingDeviceCommand(*(_QWORD **)(v6 + 16));
    updated = VidSchiUpdateFlipDeviceStatus(v6);
    VidSchiSignalFlipEvents(v6, updated, 0);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
