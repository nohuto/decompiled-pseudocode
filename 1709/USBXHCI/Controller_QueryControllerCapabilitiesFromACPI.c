/*
 * XREFs of Controller_QueryControllerCapabilitiesFromACPI @ 0x1C0011E64
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0059AB0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     Controller_ExecuteDSM @ 0x1C0057028 (Controller_ExecuteDSM.c)
 */

__int64 __fastcall Controller_QueryControllerCapabilitiesFromACPI(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*(_DWORD *)(a1 + 524) && !*(_BYTE *)(a1 + 441) )
  {
    result = Controller_ExecuteDSM(a1, &GUID_USB_ACPI_DSM, 0LL);
    if ( (result & 1) != 0 )
    {
      result = WPP_RECORDER_SF_(
                 *(_QWORD *)(a1 + 72),
                 4u,
                 4u,
                 0xEDu,
                 (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
      *(_DWORD *)(a1 + 524) = 1;
    }
  }
  return result;
}
