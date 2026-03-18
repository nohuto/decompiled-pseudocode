/*
 * XREFs of VidSchiDecrementDeviceReference @ 0x1C000EC50
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1C000ADA0 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiDecrementContextReference @ 0x1C000E770 (VidSchiDecrementContextReference.c)
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C000EB8C (VidSchiSuspendResumeDevicesForPowerTransition.c)
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C00155DC (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     VidSchTerminateDevice @ 0x1C00709F0 (VidSchTerminateDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiDecrementDeviceReference(char *P, int a2)
{
  char **v4; // rcx
  PVOID *v5; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)P + 4) + 1888LL), &LockHandle);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)P + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v4 = (char **)*((_QWORD *)P + 10);
    if ( v4[1] != P + 80 || (v5 = (PVOID *)*((_QWORD *)P + 11), *v5 != P + 80) )
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
