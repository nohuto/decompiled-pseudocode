/*
 * XREFs of UsbhSshEnableDisable @ 0x1C001E4F0
 * Callers:
 *     UsbhHubSSH_PnpStart @ 0x1C001E330 (UsbhHubSSH_PnpStart.c)
 *     UsbhPowerCallback @ 0x1C001F480 (UsbhPowerCallback.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C004CB60 (Usbh_FDO_WaitPnpRestart.c)
 *     UsbhSetWmiDataBlock @ 0x1C004F740 (UsbhSetWmiDataBlock.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhSshEnabled @ 0x1C001E764 (UsbhSshEnabled.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     UsbhSshDisabled @ 0x1C0057C5C (UsbhSshDisabled.c)
 */

LONG __fastcall UsbhSshEnableDisable(__int64 a1, int a2)
{
  __int64 v4; // rsi
  int v5; // eax
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  _DWORD *v10; // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  KeWaitForSingleObject((PVOID)(v4 + 3360), Executive, 0, 0, 0LL);
  v5 = *(_DWORD *)(v4 + 3280);
  if ( v5 > 0 )
  {
    if ( v5 > 3 )
    {
      if ( v5 <= 5 )
      {
        if ( a2 == 4 )
        {
          v10 = FdoExt(a1);
          UsbhSshEnabled(a1, v10 + 478);
          *(_DWORD *)(v4 + 3280) = 4;
          return KeSetEvent((PRKEVENT)(v4 + 3360), 0, 0);
        }
        if ( (unsigned int)(a2 - 5) <= 1 )
          goto LABEL_21;
      }
      else if ( v5 == 6 )
      {
        v8 = FdoExt(a1);
        UsbhSshDisabled(a1, v8 + 478);
      }
    }
    else
    {
      switch ( a2 )
      {
        case 2:
          goto LABEL_11;
        case 3:
LABEL_21:
          v9 = FdoExt(a1);
          UsbhSshDisabled(a1, v9 + 478);
          goto LABEL_12;
        case 4:
LABEL_11:
          v7 = FdoExt(a1);
          UsbhSshEnabled(a1, v7 + 478);
LABEL_12:
          *(_DWORD *)(v4 + 3280) = a2;
          return KeSetEvent((PRKEVENT)(v4 + 3360), 0, 0);
      }
      if ( a2 > 4 && a2 <= 6 )
        goto LABEL_21;
    }
  }
  return KeSetEvent((PRKEVENT)(v4 + 3360), 0, 0);
}
