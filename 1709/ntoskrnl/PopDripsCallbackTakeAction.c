/*
 * XREFs of PopDripsCallbackTakeAction @ 0x14070A6BC
 * Callers:
 *     PopDripsWatchdogWorkerRoutine @ 0x14070AC40 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x14011AF40 (IoReleaseRemoveLockEx.c)
 *     PopDeviceConstraintsEnforced @ 0x14024C2C8 (PopDeviceConstraintsEnforced.c)
 *     PopFxFreeChildDevicesActiveList @ 0x1406F82A4 (PopFxFreeChildDevicesActiveList.c)
 *     PopDripsWatchdogFetchDeviceBlockers @ 0x14070A778 (PopDripsWatchdogFetchDeviceBlockers.c)
 *     PopDripsWatchdogInvokeDeviceCallbacks @ 0x14070A844 (PopDripsWatchdogInvokeDeviceCallbacks.c)
 */

void __fastcall PopDripsCallbackTakeAction(int a1, char a2, unsigned int a3)
{
  __int64 v4; // rbx
  void *v5; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v7; // [rsp+58h] [rbp+10h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF

  if ( a2 < 0 )
  {
    v6 = 0LL;
    v8 = -1;
    v5 = 0LL;
    v7 = 0;
    if ( (byte_140389C6C & 1) == 0 || (a2 & 1) != 0 )
    {
      PopDripsWatchdogFetchDeviceBlockers(a1, (unsigned int)&v6, (unsigned int)&v8, (unsigned int)&v5, (__int64)&v7);
      v4 = v6;
      if ( v6 && PopDeviceConstraintsEnforced() )
        PopDripsWatchdogInvokeDeviceCallbacks(v4, v5, v7, a3);
      if ( v5 )
        PopFxFreeChildDevicesActiveList(v4, v5);
      if ( v4 )
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 216), 0LL, 0x20u);
    }
  }
}
