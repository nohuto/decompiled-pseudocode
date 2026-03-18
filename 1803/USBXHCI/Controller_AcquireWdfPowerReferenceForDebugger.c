/*
 * XREFs of Controller_AcquireWdfPowerReferenceForDebugger @ 0x1C0006F00
 * Callers:
 *     Controller_LPEEnterExitCallback @ 0x1C0008AC0 (Controller_LPEEnterExitCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0005024 (WPP_RECORDER_SF_qd.c)
 *     McTemplateK0pt @ 0x1C000D500 (McTemplateK0pt.c)
 */

void __fastcall Controller_AcquireWdfPowerReferenceForDebugger(_QWORD *a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // [rsp+30h] [rbp-18h]

  if ( !*((_BYTE *)a1 + 440) )
  {
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64 (__fastcall *)(), int, const char *))(WdfFunctions_01023 + 3504))(
           WdfDriverGlobals,
           *a1,
           0LL,
           Controller_AcquireWdfPowerReferenceForDebugger,
           9537,
           "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
    if ( v2 >= 0 )
    {
      *((_BYTE *)a1 + 440) = 1;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
        McTemplateK0pt(v4, v3, v5, a1, 1);
    }
    else
    {
      v6 = v2;
      WPP_RECORDER_SF_qd(a1[9], 2u, 4u, 0xFEu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, *a1, v6);
    }
  }
}
