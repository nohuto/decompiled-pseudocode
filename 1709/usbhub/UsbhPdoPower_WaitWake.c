/*
 * XREFs of UsbhPdoPower_WaitWake @ 0x1C00088F0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C000A050 (UsbhDecPdoIoCount.c)
 *     UsbhIncPdoIoCount @ 0x1C000A1B0 (UsbhIncPdoIoCount.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C001C0E0 (UsbhEtwLogDeviceIrpEvent.c)
 */

__int64 __fastcall UsbhPdoPower_WaitWake(ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  __int64 v4; // rdi
  signed __int32 v5; // ebp
  unsigned int v6; // esi

  v4 = PdoExt(BugCheckParameter3);
  FdoExt(*(_QWORD *)(v4 + 1176));
  UsbhEtwLogDeviceIrpEvent(v4, 0LL, &USBHUB_ETW_EVENT_DEVICE_WAIT_WAKE_DISPATCH, 0LL);
  v5 = _InterlockedIncrement((volatile signed __int32 *)(v4 + 2344));
  v6 = UsbhIncPdoIoCount(BugCheckParameter3, BugCheckParameter4, 2004308036LL, 0LL);
  if ( (v6 & 0xC0000000) == 0xC0000000 )
  {
    UsbhEtwLogDeviceIrpEvent(v4, 0LL, &USBHUB_ETW_EVENT_DEVICE_WAIT_WAKE_COMPLETE, v6);
    BugCheckParameter4->IoStatus.Status = v6;
    IofCompleteRequest(BugCheckParameter4, 0);
  }
  else
  {
    if ( (*(_DWORD *)(v4 + 1412) & 0x100) != 0 )
    {
      if ( !v5 )
      {
        BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        Log(*(_QWORD *)(v4 + 1176), 16, 2004306249, 0, (__int64)BugCheckParameter4);
        IoCsqInsertIrp((PIO_CSQ)(v4 + 2272), BugCheckParameter4, 0LL);
        return 259LL;
      }
      v6 = -2147483631;
    }
    else
    {
      v6 = -1073741637;
    }
    UsbhEtwLogDeviceIrpEvent(v4, 0LL, &USBHUB_ETW_EVENT_DEVICE_WAIT_WAKE_COMPLETE, v6);
    BugCheckParameter4->IoStatus.Status = v6;
    IofCompleteRequest(BugCheckParameter4, 0);
    UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 2344));
  return v6;
}
