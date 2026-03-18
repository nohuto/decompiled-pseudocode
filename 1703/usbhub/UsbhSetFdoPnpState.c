/*
 * XREFs of UsbhSetFdoPnpState @ 0x1C001BBC0
 * Callers:
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0009700 (Usbh_FDO_WaitPnpStop_CB.c)
 *     Usbh_FDO_WaitPnpAdd @ 0x1C0017D90 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpStart @ 0x1C001B980 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1C004BC50 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C004BCF0 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004BE90 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_PnpRemove @ 0x1C004BFF4 (Usbh_PnpRemove.c)
 * Callees:
 *     UsbhEtwLogHubInformation @ 0x1C001EB70 (UsbhEtwLogHubInformation.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 */

__int64 (__fastcall *__fastcall UsbhSetFdoPnpState(__int64 a1, int a2, int a3))()
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 (__fastcall *result)(); // rax
  void *v7; // rdx

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
  result = (__int64 (__fastcall *)())*(unsigned int *)(v4 + 1360);
  if ( a2 != (_DWORD)result )
  {
    if ( (_DWORD)result == 5 )
    {
      v7 = &USBHUB_ETW_EVENT_HUB_REMOVE;
    }
    else
    {
      if ( a2 != 5 )
        goto LABEL_7;
      v7 = &USBHUB_ETW_EVENT_HUB_START;
    }
    result = (__int64 (__fastcall *)())UsbhEtwLogHubInformation(v4, v7);
  }
LABEL_7:
  switch ( a2 )
  {
    case 1:
      result = (__int64 (__fastcall *)())Usbh_FDO_WaitPnpAdd;
      break;
    case 2:
      result = (__int64 (__fastcall *)())Usbh_FDO_WaitPnpStart;
      break;
    case 3:
      *(_QWORD *)(v4 + 1368) = 0LL;
      goto LABEL_14;
    case 4:
      result = Usbh_FDO_WaitPnpRemove;
      break;
    case 5:
      result = Usbh_FDO_WaitPnpStop;
      break;
    case 6:
      result = (__int64 (__fastcall *)())Usbh_FDO_WaitPnpStop_CB;
      break;
    case 7:
      result = Usbh_FDO_WaitPnpRestart;
      break;
    default:
      goto LABEL_14;
  }
  *(_QWORD *)(v4 + 1368) = result;
LABEL_14:
  *(_DWORD *)(v4 + 1360) = a2;
  return result;
}
