/*
 * XREFs of HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb @ 0x1C0025FA4
 * Callers:
 *     HUBDSM_QueryingDescriptorForFdoRequestFromStoppedEnumerated @ 0x1C0019720 (HUBDSM_QueryingDescriptorForFdoRequestFromStoppedEnumerated.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     HUBFDO_CompleteGetDescriptorRequest @ 0x1C000BF50 (HUBFDO_CompleteGetDescriptorRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rax

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64 *), __int64 *))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    a1[62],
    HUBDTX_GetDeviceDescriptorComplete,
    a1);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2024))(
             WdfDriverGlobals,
             a1[62],
             *(_QWORD *)(*a1 + 32),
             0LL);
  if ( !(_BYTE)result )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(a1[1] + 1432),
      2u,
      5u,
      0x66u,
      (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids);
    HUBSM_AddEvent((__int64)(a1 + 63), 4004);
    HUBFDO_CompleteGetDescriptorRequest(*a1, *(unsigned __int16 *)(a1[1] + 200), a1[62], -1073741823, 0);
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
             WdfDriverGlobals,
             v3,
             "User Mode FDO Request",
             5929LL,
             "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\devicexfer.c");
  }
  return result;
}
