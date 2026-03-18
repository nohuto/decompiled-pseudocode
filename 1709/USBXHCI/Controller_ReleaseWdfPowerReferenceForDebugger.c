/*
 * XREFs of Controller_ReleaseWdfPowerReferenceForDebugger @ 0x1C0012058
 * Callers:
 *     Controller_LPEEnterExitCallback @ 0x1C0011790 (Controller_LPEEnterExitCallback.c)
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C005A3E0 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 * Callees:
 *     McTemplateK0pt @ 0x1C0007998 (McTemplateK0pt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall Controller_ReleaseWdfPowerReferenceForDebugger(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  NTSTATUS result; // eax
  __int64 v6; // [rsp+20h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 440) )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void (__fastcall *)(_QWORD *), __int64, const char *))(WdfFunctions_01015 + 3512))(
      WdfDriverGlobals,
      *(_QWORD *)a1,
      Controller_AcquireWdfPowerReferenceForDebugger,
      9294LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
    *(_BYTE *)(a1 + 440) = 0;
    result = (NTSTATUS)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    {
      LODWORD(v6) = 0;
      return McTemplateK0pt(v3, v2, v4, a1, v6);
    }
  }
  return result;
}
