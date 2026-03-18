/*
 * XREFs of UsbhEtwRundown @ 0x1C0008014
 * Callers:
 *     UsbhEtwEnableCallback @ 0x1C0007FF0 (UsbhEtwEnableCallback.c)
 * Callees:
 *     UsbhEtwLogHubPastExceptions @ 0x1C000820C (UsbhEtwLogHubPastExceptions.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C00097A8 (UsbhReleaseFdoPnpLock.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhEtwLogPortInformation @ 0x1C001E080 (UsbhEtwLogPortInformation.c)
 *     UsbhEtwLogHubInformation @ 0x1C001EB70 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C0025888 (UsbhEtwLogDeviceDescription.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C0025994 (UsbhEtwLogDeviceInformation.c)
 *     UsbhAcquirePdoStateLock @ 0x1C0027744 (UsbhAcquirePdoStateLock.c)
 */

LONG UsbhEtwRundown()
{
  struct _DEVICE_OBJECT *i; // rsi
  _LIST_ENTRY *Flink; // rbp
  __int64 v2; // rbx
  __int64 v3; // rdi
  int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD **v9; // r14
  _QWORD *j; // rdi
  __int64 v11; // rax
  __int64 v12; // rax

  KeWaitForSingleObject(&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, Executive, 0, 0, 0LL);
  for ( i = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Queue.Wcb.DeviceObject;
        i != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject;
        i = *(struct _DEVICE_OBJECT **)&i->Type )
  {
    Flink = i[-12].Queue.ListEntry.Flink;
    v2 = FdoExt(Flink) + 1384;
    v3 = FdoExt(Flink);
    KeWaitForSingleObject((PVOID)(v3 + 4960), Executive, 0, 0, 0LL);
    *(_DWORD *)(v2 + 56) = *(_DWORD *)(v3 + 1360);
    *(_DWORD *)(v2 + 60) = 13;
    *(_DWORD *)(v2 + 48) = 827278406;
    *(_QWORD *)(v2 + 24) = KeGetCurrentThread();
    v4 = *(_DWORD *)(v3 + 24);
    *(_QWORD *)(v3 + 1328) = v2;
    v5 = ((_BYTE)v4 + 1) & 7;
    *(_DWORD *)(v3 + 24) = v5;
    v5 *= 32LL;
    *(_DWORD *)(v5 + v3 + 28) = 13;
    *(_DWORD *)(v5 + v3 + 32) = *(_DWORD *)(v3 + 1360);
    *(_QWORD *)(v5 + v3 + 36) = *(unsigned int *)(v3 + 1360);
    if ( *(_DWORD *)(v3 + 1360) == 5 )
    {
      UsbhEtwLogHubInformation(&i[-16].Dpc.DeferredRoutine, &USBHUB_ETW_EVENT_HUB_INFORMATION);
      UsbhEtwLogHubPastExceptions(&i[-16].Dpc.DeferredRoutine);
      UsbhEtwLogPortInformation(Flink);
      v6 = FdoExt(Flink);
      UsbhAcquirePdoStateLock(v7, v6 + 1384, 25LL);
      v9 = (_QWORD **)(&i[-2].Reserved + 1);
      for ( j = *v9; j != v9; j = (_QWORD *)*j )
      {
        LOBYTE(v8) = 1;
        UsbhEtwLogDeviceInformation(j - 164, &USBHUB_ETW_EVENT_DEVICE_INFORMATION, v8);
        UsbhEtwLogDeviceDescription(j - 164, &USBHUB_ETW_EVENT_DEVICE_DESCRIPTION);
      }
      v11 = FdoExt(Flink) + 1384;
      *(_DWORD *)(v11 + 136) = 0;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      *(_DWORD *)(v11 + 88) = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v11 + 132));
    }
    v12 = FdoExt(Flink);
    UsbhReleaseFdoPnpLock(Flink, v12 + 1384);
  }
  return KeSetEvent((PRKEVENT)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0, 0);
}
