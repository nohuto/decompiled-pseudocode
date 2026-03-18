/*
 * XREFs of HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode @ 0x1C0029D60
 * Callers:
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0033088 (HUBDESC_ValidateBOSDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C0006374 (McTemplateK0p.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002B5EC (HUBMISC_VerifierDbgBreak.c)
 */

NTSTATUS __fastcall HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode(__int64 a1)
{
  int v2; // ecx
  NTSTATUS result; // eax
  __int64 v4; // rcx

  v2 = *(_DWORD *)(a1 + 1632);
  if ( (v2 & 0x800) != 0
    && (*(_DWORD *)(a1 + 1456) & 0x10000) != 0
    && (v2 & 2) == 0
    && (*(_DWORD *)(a1 + 1644) & 0x80000) == 0 )
  {
    result = WPP_RECORDER_SF_(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
               2u,
               5u,
               0x2Bu,
               (__int64)&WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids);
    if ( (*(_DWORD *)(a1 + 2436) & 0x800) != 0 )
      result = HUBMISC_VerifierDbgBreak("DeviceHwVerifierSuperSpeedDeviceWorkingAtLowerSpeed", a1 + 504);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x200000) != 0 )
      return McTemplateK0p(
               v4,
               &USBHUB3_ETW_EVENT_SSDEVICE_CONNECTED_AT_LS,
               (const GUID *)(a1 + 1516),
               *(_QWORD *)(a1 + 24));
  }
  return result;
}
