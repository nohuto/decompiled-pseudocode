/*
 * XREFs of UsbhSyncPowerOnPorts @ 0x1C00155A0
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C00056B0 (UsbhFdoSetD0Cold.c)
 *     UsbhFinishStart @ 0x1C0009190 (UsbhFinishStart.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0013A80 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhRawWait @ 0x1C0021530 (UsbhRawWait.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhSyncPowerOnPorts(__int64 a1)
{
  __int64 v2; // rbp
  unsigned __int16 i; // di
  __int64 v4; // rdx
  __int16 v5; // cx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r10d
  int v14; // edx
  int v15; // [rsp+20h] [rbp-88h]
  int v16; // [rsp+48h] [rbp-60h]
  int v17; // [rsp+5Ch] [rbp-4Ch] BYREF
  int v18; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int16 v19; // [rsp+64h] [rbp-44h]
  __int16 v20; // [rsp+66h] [rbp-42h]
  int v21; // [rsp+68h] [rbp-40h] BYREF
  _WORD v22[2]; // [rsp+6Ch] [rbp-3Ch] BYREF
  char v23; // [rsp+70h] [rbp-38h]

  LODWORD(v2) = 0;
  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      21,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids);
  for ( i = 1; ; ++i )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v4 = *(_QWORD *)(a1 + 64);
    if ( !v4 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v4 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v4);
    if ( i > *(unsigned __int8 *)(v4 + 2938) )
      break;
    v17 = 0;
    if ( *(_DWORD *)v4 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v4);
    v5 = 0;
    v22[0] = 0;
    v22[1] = i;
    v21 = 0;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v6 = *(_QWORD *)(v4 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v4 + 880)) & *(_DWORD *)(v4 + 884));
      *(_DWORD *)v6 = 812675184;
      *(_QWORD *)(v6 + 16) = i;
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_QWORD *)(v6 + 24) = 0LL;
      v5 = v22[0];
    }
    v20 = v5;
    v18 = 525091;
    v23 = 3;
    v19 = i;
    v2 = (int)UsbhSyncSendCommand(a1, (__int64)&v18, 0LL, v22, v15, &v17);
    if ( (UsbhLogMask & 8) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        v9 = v17;
        *(_DWORD *)v8 = 829452400;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = v2;
        *(_QWORD *)(v8 + 24) = v9;
      }
    }
    if ( (unsigned int)v2 >> 30 == 3 && !Usb_Disconnected(v2) )
    {
      LOBYTE(v16) = 0;
      UsbhException(a1, i, 12, (int)&v21, 10, v2, v14, usbfile_hub_c, 3524, v16);
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_DWORD *)v11 = 1349808752;
        *(_QWORD *)(v11 + 24) = i;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = v2;
      }
    }
    if ( (unsigned int)v2 >> 30 == 3 )
      break;
  }
  if ( (int)v2 >= 0 )
  {
    Log(a1, 8, 2002872692, HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next), 0LL);
    UsbhRawWait(v12);
  }
  Log(a1, 8, 1934643031, (int)v2, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      22,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
      v2);
  return (unsigned int)v2;
}
