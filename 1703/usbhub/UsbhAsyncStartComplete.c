/*
 * XREFs of UsbhAsyncStartComplete @ 0x1C0009800
 * Callers:
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0009700 (Usbh_FDO_WaitPnpStop_CB.c)
 * Callees:
 *     UsbhFinishStart @ 0x1C0009190 (UsbhFinishStart.c)
 *     UsbhDispatch_BusEvent @ 0x1C000A910 (UsbhDispatch_BusEvent.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 */

__int64 __fastcall UsbhAsyncStartComplete(_QWORD *Tag)
{
  __int64 v2; // rdi
  int v3; // esi
  __int64 v4; // r8

  v2 = FdoExt(Tag[1]);
  Log(Tag[1], 2, 1634957635, Tag[1], (__int64)Tag);
  v3 = UsbhFinishStart(Tag[1], (__int64)Tag);
  v4 = 5LL;
  if ( v3 < 0 )
    v4 = 9LL;
  UsbhDispatch_BusEvent(Tag[1], Tag, v4);
  *(_QWORD *)(v2 + 5112) = MEMORY[0xFFFFF78000000014];
  KeSetEvent((PRKEVENT)(v2 + 2576), 0, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 1224), Tag, 0x20u);
  return (unsigned int)v3;
}
