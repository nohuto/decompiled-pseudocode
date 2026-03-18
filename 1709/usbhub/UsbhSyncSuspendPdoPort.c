/*
 * XREFs of UsbhSyncSuspendPdoPort @ 0x1C0023164
 * Callers:
 *     UsbhPdoSetDx @ 0x1C0001100 (UsbhPdoSetDx.c)
 *     UsbhSshResumeDownstream @ 0x1C000266C (UsbhSshResumeDownstream.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C00247E0 (UsbhBusIf_SuspendChildHub.c)
 * Callees:
 *     UsbhPCE_Suspend @ 0x1C0008EE8 (UsbhPCE_Suspend.c)
 *     UsbhQueryPortState @ 0x1C0011680 (UsbhQueryPortState.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     Usbh__TestPoint__Ulong @ 0x1C0023280 (Usbh__TestPoint__Ulong.c)
 *     UsbhPdoArmedForWake @ 0x1C0024540 (UsbhPdoArmedForWake.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D59C (WPP_RECORDER_SF_q.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 *     UsbhEnableDeviceForWake @ 0x1C005539C (UsbhEnableDeviceForWake.c)
 */

__int64 __fastcall UsbhSyncSuspendPdoPort(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // ebp
  _DWORD *v7; // rbx
  int v8; // edx
  unsigned int v9; // esi
  int v11; // [rsp+48h] [rbp-30h]
  int v12; // [rsp+80h] [rbp+8h] BYREF
  char v13; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      17,
      (__int64)&WPP_ee5e40984a3c387d1cb2bd9d553f663f_Traceguids);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1,
      18,
      (__int64)&WPP_ee5e40984a3c387d1cb2bd9d553f663f_Traceguids,
      a2);
  v7 = PdoExt(a2);
  v8 = UsbhQueryPortState(*(_QWORD *)(a1 + 8), *((_WORD *)v7 + 710), (__int64)&v13, &v12);
  if ( v8 >= 0 && (v13 & 1) != 0 )
  {
    if ( (v7[353] & 0x100) != 0 )
    {
      if ( (unsigned __int8)UsbhPdoArmedForWake(a2) )
      {
        if ( !a3 && (v7[353] & 4) == 0 )
        {
          v4 = UsbhEnableDeviceForWake(*(_QWORD *)(a1 + 8), a2, &v12);
          if ( (v4 & 0xC0000000) == 0xC0000000 )
          {
            LOBYTE(v11) = 0;
            UsbhException(
              *(_QWORD *)(a1 + 8),
              *((unsigned __int16 *)v7 + 710),
              50,
              0,
              0,
              v4,
              v12,
              usbfile_pdopwr_c,
              1404,
              v11);
          }
        }
      }
    }
    Usbh__TestPoint__Ulong(*(_QWORD *)(a1 + 8), 3LL, v4, *((unsigned __int16 *)v7 + 710));
    v9 = UsbhPCE_Suspend(*(_QWORD *)(a1 + 8), a1, *((_WORD *)v7 + 710));
    Usbh__TestPoint__Ulong(*(_QWORD *)(a1 + 8), 4LL, v9, *((unsigned __int16 *)v7 + 710));
  }
  else
  {
    LOBYTE(v11) = 0;
    UsbhException(*(_QWORD *)(a1 + 8), *((unsigned __int16 *)v7 + 710), 118, 0, 0, v8, v12, usbfile_pdopwr_c, 1420, v11);
    return (unsigned int)-1073741823;
  }
  return v9;
}
