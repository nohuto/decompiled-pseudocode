/*
 * XREFs of Usbh_FDO_WaitPnpStop_CB @ 0x1C0009700
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReleaseFdoPnpLock @ 0x1C00097A8 (UsbhReleaseFdoPnpLock.c)
 *     UsbhAsyncStartComplete @ 0x1C0009800 (UsbhAsyncStartComplete.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhSetFdoPnpState @ 0x1C001BBC0 (UsbhSetFdoPnpState.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     UsbhNotifyPnpOfFailure_Action @ 0x1C00439C8 (UsbhNotifyPnpOfFailure_Action.c)
 *     UsbhAsyncStop @ 0x1C004AC60 (UsbhAsyncStop.c)
 *     UsbhModuleDispatch @ 0x1C004B76C (UsbhModuleDispatch.c)
 *     Usbh_PnpRemove @ 0x1C004BFF4 (Usbh_PnpRemove.c)
 */

__int64 __fastcall Usbh_FDO_WaitPnpStop_CB(_QWORD *Tag, unsigned int a2)
{
  unsigned int started; // esi
  __int64 v5; // rdx
  int v7; // edx
  int v8; // edx

  Log(Tag[1], 2, 2001945410, (_DWORD)Tag, (int)a2);
  switch ( a2 )
  {
    case 2u:
      UsbhAsyncStop(Tag, 2LL);
      UsbhModuleDispatch(0, v8, Tag[1], 6, 0LL, (__int64)Tag);
      return Usbh_PnpRemove(Tag, 2LL);
    case 3u:
      UsbhAsyncStop(Tag, 3LL);
      UsbhModuleDispatch(0, v7, Tag[1], 6, 0LL, (__int64)Tag);
      v5 = 4LL;
      goto LABEL_6;
    case 5u:
      UsbhAsyncStop(Tag, 5LL);
      v5 = 7LL;
LABEL_6:
      UsbhSetFdoPnpState(Tag[1], v5, a2);
      UsbhReleaseFdoPnpLock(Tag[1], Tag);
      return 0LL;
  }
  if ( a2 != 8 )
    UsbhTrapFatal_Dbg(Tag[1], Tag);
  started = UsbhAsyncStartComplete(Tag);
  v5 = 5LL;
  if ( (started & 0xC0000000) != 0xC0000000 )
    goto LABEL_6;
  UsbhSetFdoPnpState(Tag[1], 5LL, 8LL);
  UsbhReleaseFdoPnpLock(Tag[1], Tag);
  UsbhNotifyPnpOfFailure_Action(Tag[1]);
  return started;
}
