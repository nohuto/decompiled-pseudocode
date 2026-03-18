/*
 * XREFs of UsbhAsyncStartComplete @ 0x1C0008830
 * Callers:
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0008730 (Usbh_FDO_WaitPnpStop_CB.c)
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x1C000B320 (UsbhDispatch_BusEvent.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhFinishStart @ 0x1C0017D60 (UsbhFinishStart.c)
 */

__int64 __fastcall UsbhAsyncStartComplete(_QWORD *Tag)
{
  __int64 v2; // rdi
  int v3; // esi
  __int64 v4; // r8

  v2 = FdoExt(Tag[1]);
  Log(Tag[1], 2, 1634957635, Tag[1], (__int64)Tag);
  v3 = UsbhFinishStart(Tag[1]);
  v4 = 5LL;
  if ( v3 < 0 )
    v4 = 9LL;
  UsbhDispatch_BusEvent(Tag[1], Tag, v4);
  *(_QWORD *)(v2 + 5112) = MEMORY[0xFFFFF78000000014];
  KeSetEvent((PRKEVENT)(v2 + 2576), 0, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 1224), Tag, 0x20u);
  return (unsigned int)v3;
}
