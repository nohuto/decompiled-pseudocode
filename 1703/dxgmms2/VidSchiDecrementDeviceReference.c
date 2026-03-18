/*
 * XREFs of VidSchiDecrementDeviceReference @ 0x1C00103AC
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1C00098D0 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiDecrementContextReference @ 0x1C0010100 (VidSchiDecrementContextReference.c)
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C00102E8 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 *     VidSchFlushQueuePackets @ 0x1C0013350 (VidSchFlushQueuePackets.c)
 *     VidSchTerminateDevice @ 0x1C006BEF0 (VidSchTerminateDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiDecrementDeviceReference(char *P, int a2)
{
  char **v4; // rdx
  PVOID *v5; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)P + 4) + 1880LL), &LockHandle);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)P + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v4 = (char **)*((_QWORD *)P + 10);
    v5 = (PVOID *)*((_QWORD *)P + 11);
    if ( v4[1] != P + 80 || *v5 != P + 80 )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = (char *)v5;
    if ( !a2 )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    ExFreePoolWithTag(P, 0);
  }
  else if ( !a2 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
