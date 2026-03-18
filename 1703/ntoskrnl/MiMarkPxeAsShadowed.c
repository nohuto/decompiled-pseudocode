/*
 * XREFs of MiMarkPxeAsShadowed @ 0x14017C994
 * Callers:
 *     MiInitializeShadowPageTable @ 0x14041D49C (MiInitializeShadowPageTable.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14012B570 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall MiMarkPxeAsShadowed(unsigned int a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
  _bittestandset((signed __int32 *)qword_14036C4FC, ((a1 >> 3) & 0x1FF) - 256);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
