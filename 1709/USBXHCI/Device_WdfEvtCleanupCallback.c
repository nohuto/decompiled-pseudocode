/*
 * XREFs of Device_WdfEvtCleanupCallback @ 0x1C0014A70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Device_WdfEvtCleanupCallback(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdx
  __int64 result; // rax
  __int64 v4; // rdx

  v1 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C004E408);
  v2 = (_QWORD *)v1[5];
  if ( v2 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *v2);
    v1[5] = 0LL;
  }
  result = imp_WppRecorderLogDelete(WPP_GLOBAL_Control, v1[2]);
  v4 = v1[1];
  v1[2] = 0LL;
  if ( v4 )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01015 + 1648))(
               WdfDriverGlobals,
               *(_QWORD *)(v4 + 8),
               Controller_WdfEvtDeviceAdd,
               2676LL,
               "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
    v1[1] = 0LL;
  }
  return result;
}
