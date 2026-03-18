/*
 * XREFs of UsbhCompletePdoWakeIrp @ 0x1C0001978
 * Callers:
 *     UsbhPdoSetDx @ 0x1C0001100 (UsbhPdoSetDx.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C00017C0 (UsbhSS_PdoWakeWorker.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001CC4 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C0003700 (UsbhCompletePdoWakeIrps.c)
 *     UsbhPdoRemoveCleanup @ 0x1C0056010 (UsbhPdoRemoveCleanup.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C000A050 (UsbhDecPdoIoCount.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C001C0E0 (UsbhEtwLogDeviceIrpEvent.c)
 *     WPP_RECORDER_SF_ddqqD @ 0x1C00473B0 (WPP_RECORDER_SF_ddqqD.c)
 */

char __fastcall UsbhCompletePdoWakeIrp(__int64 a1, __int64 a2, int a3)
{
  char v5; // si
  __int64 v6; // rdi
  PIRP v7; // rbx
  int v9; // edx
  int v10; // r8d
  int v11; // r9d

  v5 = 0;
  v6 = PdoExt(a2);
  v7 = IoCsqRemoveNextIrp((PIO_CSQ)(v6 + 2272), 0LL);
  if ( v7 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      FdoExt(a1);
      WPP_RECORDER_SF_ddqqD(WPP_GLOBAL_Control->DeviceExtension, v9, v10, v11);
    }
    Log(a1, 16, 2004304720, a3, (__int64)v7);
    if ( a3 >= 0 && (*(_DWORD *)(FdoExt(a1) + 2560) & 0x4000000) != 0 )
      PoSetSystemWake(v7);
    UsbhEtwLogDeviceIrpEvent(v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_WAIT_WAKE_COMPLETE, (unsigned int)a3);
    v7->IoStatus.Status = a3;
    IofCompleteRequest(v7, 0);
    UsbhDecPdoIoCount(*(_QWORD *)(v6 + 840), (ULONG_PTR)v7);
    v5 = 1;
  }
  *(_DWORD *)(v6 + 1412) &= ~0x2000u;
  return v5;
}
