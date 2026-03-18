/*
 * XREFs of UsbhFdoColdStartCheckPort @ 0x1C0005DB0
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C00056B0 (UsbhFdoSetD0Cold.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     UsbhQueryPortState @ 0x1C00130E0 (UsbhQueryPortState.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0024BE0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoColdStartCheckPort(__int64 a1, int a2, __int64 a3)
{
  _DWORD *v5; // rdx
  __int64 PortState; // rdi
  int v7; // r11d
  int v9; // r9d
  int v10; // [rsp+20h] [rbp-38h]
  int v11; // [rsp+48h] [rbp-10h]
  int v12; // [rsp+60h] [rbp+8h]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_DWORD **)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v5);
  PortState = (int)UsbhQueryPortState(a1);
  Log(a1, 16, 1667515185, *(unsigned __int16 *)(a3 + 4), PortState);
  if ( (PortState & 0xC0000000) != 0xC0000000 )
  {
    if ( (a2 & 1) != 0 && (a2 & 0x10000) == 0 )
    {
      Log(a1, v7, 1667515187, 0, PortState);
      UsbhEtwLogHubIrpEvent(
        a1,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_PORT_CONNECT,
        *(unsigned __int16 *)(a3 + 4),
        PortState);
      *(_BYTE *)(a3 + 2841) = 1;
    }
    return (unsigned int)PortState;
  }
  Log(a1, v7, 1667515186, 0, PortState);
  if ( !Usb_Disconnected(PortState) )
  {
    LOBYTE(v11) = v9;
    UsbhException(a1, *(unsigned __int16 *)(a3 + 4), 48, v9, v9 & v10, PortState, v12, usbfile_fdopwr_c, 3004, v11);
    return (unsigned int)PortState;
  }
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_HUB_DISCONNECT, v9 & v10, PortState);
  return 0LL;
}
