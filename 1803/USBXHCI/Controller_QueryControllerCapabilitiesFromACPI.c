/*
 * XREFs of Controller_QueryControllerCapabilitiesFromACPI @ 0x1C0009194
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0056AA0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     Controller_ExecuteDSM @ 0x1C0053F00 (Controller_ExecuteDSM.c)
 */

void __fastcall Controller_QueryControllerCapabilitiesFromACPI(__int64 a1)
{
  int v2; // eax

  if ( !*(_DWORD *)(a1 + 532) && !*(_BYTE *)(a1 + 441) && (Controller_ExecuteDSM(a1, &GUID_USB_ACPI_DSM, 0LL) & 1) != 0 )
  {
    v2 = Controller_ExecuteDSM(a1, &GUID_USB_ACPI_DSM, 0LL);
    if ( v2 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 128) + 64LL) = v2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4u, 4u, 0xEFu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
      *(_DWORD *)(a1 + 532) = 1;
    }
    else
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2u, 4u, 0xEEu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
    }
  }
}
