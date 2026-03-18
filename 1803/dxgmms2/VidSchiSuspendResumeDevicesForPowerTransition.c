/*
 * XREFs of VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C00127CC
 * Callers:
 *     VidSchSuspendAdapter @ 0x1C0056B00 (VidSchSuspendAdapter.c)
 *     VidSchResumeAdapter @ 0x1C0079420 (VidSchResumeAdapter.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x1C0012590 (VidSchSuspendResumeDevice.c)
 *     VidSchiDecrementDeviceReference @ 0x1C0012CAC (VidSchiDecrementDeviceReference.c)
 */

void __fastcall VidSchiSuspendResumeDevicesForPowerTransition(__int64 a1, char a2)
{
  KSPIN_LOCK *v2; // r15
  _QWORD *v5; // rsi
  _QWORD *v6; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  *(_BYTE *)(a1 + 2856) = a2;
  v2 = (KSPIN_LOCK *)(a1 + 1904);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
  v5 = *(_QWORD **)(a1 + 272);
  while ( v5 != (_QWORD *)(a1 + 272) )
  {
    v6 = v5 - 13;
    _InterlockedIncrement64(v5 - 10);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (*(_DWORD *)(v5 - 7) & 0x10) == 0 && *(_QWORD **)(a1 + 216) != v6 )
      VidSchSuspendResumeDevice((__int64)(v5 - 13), a2, 1, 0);
    KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
    v5 = (_QWORD *)*v5;
    VidSchiDecrementDeviceReference(v6);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
