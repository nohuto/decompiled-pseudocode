/*
 * XREFs of UsbhEtwRundown @ 0x1C002802C
 * Callers:
 *     UsbhEtwEnableCallback @ 0x1C0028000 (UsbhEtwEnableCallback.c)
 * Callees:
 *     UsbhAcquirePdoStateLock @ 0x1C0005D8C (UsbhAcquirePdoStateLock.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C00087D8 (UsbhReleaseFdoPnpLock.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhEtwLogPortInformation @ 0x1C001D500 (UsbhEtwLogPortInformation.c)
 *     UsbhEtwLogHubInformation @ 0x1C001E5BC (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C001FE2C (UsbhEtwLogDeviceDescription.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C003F788 (UsbhAcquireFdoPnpLock.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C0058F78 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C00592B8 (UsbhEtwLogHubPastExceptions.c)
 */

LONG UsbhEtwRundown()
{
  struct _DEVICE_OBJECT *i; // rdi
  void (__fastcall **p_DeferredRoutine)(_KDPC *, void *, void *, void *); // rbx
  __int64 Flink; // rsi
  unsigned int v4; // eax
  _DWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  char *j; // r14
  _DWORD *v9; // rax
  _DWORD *v10; // rax

  KeWaitForSingleObject(&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, Executive, 0, 0, 0LL);
  for ( i = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Queue.Wcb.DeviceObject;
        i != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject;
        i = *(struct _DEVICE_OBJECT **)&i->Type )
  {
    p_DeferredRoutine = &i[-16].Dpc.DeferredRoutine;
    Flink = (__int64)i[-12].Queue.ListEntry.Flink;
    v4 = (unsigned int)FdoExt(Flink);
    if ( (unsigned int)UsbhAcquireFdoPnpLock(Flink, v4 + 1384, 13, 0, 1) == 5 )
    {
      UsbhEtwLogHubInformation((__int64)&i[-16].Dpc.DeferredRoutine);
      UsbhEtwLogHubPastExceptions(&i[-16].Dpc.DeferredRoutine);
      UsbhEtwLogPortInformation(Flink);
      v5 = FdoExt(Flink);
      UsbhAcquirePdoStateLock(v6, (__int64)(v5 + 346), 25);
      for ( j = (char *)p_DeferredRoutine[601]; j != (char *)(p_DeferredRoutine + 601); j = *(char **)j )
      {
        LOBYTE(v7) = 1;
        UsbhEtwLogDeviceInformation(j - 1312, &USBHUB_ETW_EVENT_DEVICE_INFORMATION, v7);
        UsbhEtwLogDeviceDescription((__int64)(j - 1312), &USBHUB_ETW_EVENT_DEVICE_DESCRIPTION);
      }
      v9 = FdoExt(Flink) + 346;
      v9[34] = 0;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      v9[22] = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *((_BYTE *)v9 + 132));
    }
    v10 = FdoExt(Flink);
    UsbhReleaseFdoPnpLock(Flink, (__int64)(v10 + 346));
  }
  return KeSetEvent((PRKEVENT)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0, 0);
}
