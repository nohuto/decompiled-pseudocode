/*
 * XREFs of UsbhSetFdoPnpState @ 0x1C001F38C
 * Callers:
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0008730 (Usbh_FDO_WaitPnpStop_CB.c)
 *     Usbh_FDO_WaitPnpStart @ 0x1C0016BD0 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpAdd @ 0x1C0017910 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1C004CAC0 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C004CB60 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004CD00 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_PnpRemove @ 0x1C004CE64 (Usbh_PnpRemove.c)
 * Callees:
 *     UsbhEtwLogHubInformation @ 0x1C001E5BC (UsbhEtwLogHubInformation.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 */

int __fastcall UsbhSetFdoPnpState(__int64 a1, int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(); // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v5 = ((unsigned __int8)*(_DWORD *)(v4 + 24) + 1) & 7;
  *(_DWORD *)(v4 + 24) = v5;
  v5 *= 32LL;
  *(_DWORD *)(v5 + v4 + 28) = a3;
  *(_DWORD *)(v5 + v4 + 32) = *(_DWORD *)(v4 + 1360);
  *(_DWORD *)(v5 + v4 + 36) = a2;
  LODWORD(v6) = *(_DWORD *)(v4 + 1360);
  if ( a2 != (_DWORD)v6 && ((_DWORD)v6 == 5 || a2 == 5) )
    LODWORD(v6) = UsbhEtwLogHubInformation(v4);
  switch ( a2 )
  {
    case 1:
      v6 = (__int64 (__fastcall *)())Usbh_FDO_WaitPnpAdd;
      break;
    case 2:
      v6 = (__int64 (__fastcall *)())Usbh_FDO_WaitPnpStart;
      break;
    case 3:
      *(_QWORD *)(v4 + 1368) = 0LL;
      goto LABEL_14;
    case 4:
      v6 = Usbh_FDO_WaitPnpRemove;
      break;
    case 5:
      v6 = Usbh_FDO_WaitPnpStop;
      break;
    case 6:
      v6 = (__int64 (__fastcall *)())Usbh_FDO_WaitPnpStop_CB;
      break;
    case 7:
      v6 = Usbh_FDO_WaitPnpRestart;
      break;
    default:
      goto LABEL_14;
  }
  *(_QWORD *)(v4 + 1368) = v6;
LABEL_14:
  *(_DWORD *)(v4 + 1360) = a2;
  return (int)v6;
}
