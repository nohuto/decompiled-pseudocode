/*
 * XREFs of Controller_AcquireWdfPowerReferenceForDebugger @ 0x1C000FEB0
 * Callers:
 *     Controller_LPEEnterExitCallback @ 0x1C0011790 (Controller_LPEEnterExitCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0005F70 (WPP_RECORDER_SF_qd.c)
 *     McTemplateK0pt @ 0x1C0007998 (McTemplateK0pt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Controller_AcquireWdfPowerReferenceForDebugger(_QWORD *a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // [rsp+20h] [rbp-28h]
  int v7; // [rsp+30h] [rbp-18h]

  if ( !*((_BYTE *)a1 + 440) )
  {
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64 (__fastcall *)(), int, const char *))(WdfFunctions_01015 + 3504))(
           WdfDriverGlobals,
           *a1,
           0LL,
           Controller_AcquireWdfPowerReferenceForDebugger,
           9261,
           "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
    if ( v2 >= 0 )
    {
      *((_BYTE *)a1 + 440) = 1;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
      {
        LODWORD(v6) = 1;
        McTemplateK0pt(v4, v3, v5, a1, v6);
      }
    }
    else
    {
      v7 = v2;
      WPP_RECORDER_SF_qd(a1[9], 2u, 4u, 0xFCu, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, *a1, v7);
    }
  }
}
