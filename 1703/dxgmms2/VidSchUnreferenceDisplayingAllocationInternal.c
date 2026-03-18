/*
 * XREFs of VidSchUnreferenceDisplayingAllocationInternal @ 0x1C002A790
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000E8C8 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiSignalFlipEvents @ 0x1C0013720 (VidSchiSignalFlipEvents.c)
 *     VidSchiUpdateFlipDeviceStatus @ 0x1C0013868 (VidSchiUpdateFlipDeviceStatus.c)
 */

void __fastcall VidSchUnreferenceDisplayingAllocationInternal(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  int updated; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = a4;
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL) + 8LL));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1880), &LockHandle);
  v6 = *(_QWORD *)(a1 + 8 * v5 + 2992);
  if ( v6 )
  {
    VidSchiCheckPendingDeviceCommand(*(_QWORD **)(v6 + 16));
    updated = VidSchiUpdateFlipDeviceStatus(v6);
    VidSchiSignalFlipEvents(v6, updated);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
