/*
 * XREFs of VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C000EB8C
 * Callers:
 *     VidSchResumeAdapter @ 0x1C0071DB0 (VidSchResumeAdapter.c)
 *     VidSchSuspendAdapter @ 0x1C0071DF0 (VidSchSuspendAdapter.c)
 * Callees:
 *     VidSchiDecrementDeviceReference @ 0x1C000EC50 (VidSchiDecrementDeviceReference.c)
 *     VidSchSuspendResumeDevice @ 0x1C000ECF0 (VidSchSuspendResumeDevice.c)
 */

void __fastcall VidSchiSuspendResumeDevicesForPowerTransition(__int64 a1, char a2)
{
  KSPIN_LOCK *v2; // r15
  _QWORD *v5; // rsi
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  *(_BYTE *)(a1 + 2832) = a2;
  v2 = (KSPIN_LOCK *)(a1 + 1888);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1888), &LockHandle);
  v5 = *(_QWORD **)(a1 + 256);
  while ( v5 != (_QWORD *)(a1 + 256) )
  {
    v6 = v5 - 10;
    _InterlockedIncrement64(v5 - 7);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (*(_DWORD *)(v5 - 4) & 0x10) == 0 && *(_QWORD **)(a1 + 216) != v6 )
    {
      LOBYTE(v8) = 1;
      LOBYTE(v7) = a2;
      VidSchSuspendResumeDevice(v5 - 10, v7, v8, 0LL);
    }
    KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
    v5 = (_QWORD *)*v5;
    VidSchiDecrementDeviceReference(v6);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
