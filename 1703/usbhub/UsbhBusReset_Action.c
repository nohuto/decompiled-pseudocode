/*
 * XREFs of UsbhBusReset_Action @ 0x1C0008450
 * Callers:
 *     Usbh_BS_BusSuspend @ 0x1C0008394 (Usbh_BS_BusSuspend.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhBusReset_Action(__int64 a1, int a2)
{
  unsigned __int16 i; // di
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r10
  __int64 v10; // [rsp+70h] [rbp+8h]

  FdoExt(a1);
  Log(a1, 2048, 1919251262, 0, 0LL);
  for ( i = 1; ; ++i )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v5 = *(_QWORD *)(a1 + 64);
    if ( !v5 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v5 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v5);
    result = *(unsigned __int8 *)(v5 + 2938);
    if ( i > (unsigned __int16)result )
      break;
    if ( *(_DWORD *)v5 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v5);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        63,
        (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        i);
    Log(a1, 512, 1346711609, 0, i);
    Log(a1, 8, 1735410772, i, 0LL);
    if ( i )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( !v7 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)v7 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      if ( i <= *(unsigned __int8 *)(FdoExt(a1) + 2938) )
      {
        v8 = *(_QWORD *)(v7 + 3056);
        if ( v8 )
        {
          Log(a1, 8, 1735410750, i, v8 + 2928LL * (i - 1));
          if ( v9 )
          {
            LODWORD(v10) = 0;
            UsbhDispatch_PortChangeQueueEventEx(a1, v9, 9, a2, v10, 0, 0LL, 0LL);
          }
        }
      }
    }
  }
  return result;
}
