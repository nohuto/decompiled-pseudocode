/*
 * XREFs of HUBPDO_ReEnumerationCallback @ 0x1C00177A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF__guid_dd @ 0x1C0010FD4 (WPP_RECORDER_SF__guid_dd.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x1C0017240 (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_ReEnumerationCallback(
        __int64 SettingGuid,
        volatile signed __int32 *Value,
        __int64 ValueLength,
        _QWORD *Context)
{
  int v4; // edi
  int v7; // eax
  int v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+28h] [rbp-30h]

  v4 = 0;
  if ( !*(_BYTE *)Value )
  {
    Value = (volatile signed __int32 *)Context[2];
    if ( *((_DWORD *)Value + 100) == 1 )
    {
      if ( _InterlockedCompareExchange(Value + 1, 1, 0) )
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(Context[1] + 1432LL),
          3u,
          5u,
          0x92u,
          (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids);
      }
      else
      {
        LOBYTE(ValueLength) = 1;
        v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
               WdfDriverGlobals,
               *(_QWORD *)(*Context + 16LL),
               ValueLength,
               0LL,
               10806,
               "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
        v4 = v7;
        if ( v7 < 0 )
        {
          LODWORD(v10) = v7;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*Context + 2512LL),
            2u,
            3u,
            0x90u,
            (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
            v10);
        }
        WPP_RECORDER_SF_(
          *(_QWORD *)(Context[1] + 1432LL),
          4u,
          2u,
          0x91u,
          (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids);
        EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper((__int64)Context, 2228255LL, 0);
        (*(void (__fastcall **)(_QWORD, __int64))(Context[1] + 1240LL))(Context[1], 3011LL);
        if ( v4 >= 0 )
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
            WdfDriverGlobals,
            *(_QWORD *)(*Context + 16LL),
            0LL,
            10831LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
      }
    }
    else
    {
      v4 = -1073741811;
    }
  }
  WPP_RECORDER_SF__guid_dd(
    *(_QWORD *)(Context[1] + 1432LL),
    (__int64)Value,
    ValueLength,
    (__int64)Context,
    v9,
    SettingGuid);
  return (unsigned int)v4;
}
