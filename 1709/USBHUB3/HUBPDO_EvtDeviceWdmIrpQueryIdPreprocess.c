/*
 * XREFs of HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess @ 0x1C0014044
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C0013710 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     HUBMISC_WaitForSignal @ 0x1C002A6AC (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess(__int64 a1, __int64 a2)
{
  struct _KEVENT *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rax
  __int64 v9; // [rsp+28h] [rbp-20h]

  v3 = *(struct _KEVENT **)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                              WdfDriverGlobals,
                              a1,
                              off_1C005B070)
                          + 24);
  if ( (v3[68].Header.SignalState & 0x4000) == 0 && !*(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) && !KeGetCurrentIrql() )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
           WdfDriverGlobals,
           *(_QWORD *)&v3->Header.Lock);
    LOBYTE(v5) = 1;
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
           WdfDriverGlobals,
           v4,
           v5,
           0LL,
           3999,
           "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
    if ( v6 >= 0 )
    {
      KeClearEvent(v3 + 67);
      HUBSM_AddEvent((__int64)&v3[21], 4095);
      HUBMISC_WaitForSignal(&v3[67]);
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
             WdfDriverGlobals,
             *(_QWORD *)&v3->Header.Lock);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
        WdfDriverGlobals,
        v7,
        0LL,
        4021LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
    }
    else
    {
      LODWORD(v9) = v6;
      WPP_RECORDER_SF_d(
        (__int64)v3->Header.WaitListHead.Flink[89].Blink,
        2u,
        5u,
        0x38u,
        (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
        v9);
    }
  }
  return 0LL;
}
