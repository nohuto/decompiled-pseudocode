/*
 * XREFs of MiMarkPxeAsShadowed @ 0x14017C11C
 * Callers:
 *     MiInitializeShadowPageTable @ 0x14043CFEC (MiInitializeShadowPageTable.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400F1C30 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall MiMarkPxeAsShadowed(unsigned int a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
  _bittestandset((signed __int32 *)qword_140388884, ((a1 >> 3) & 0x1FF) - 256);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
