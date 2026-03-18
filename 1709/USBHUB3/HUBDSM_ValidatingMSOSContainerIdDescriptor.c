/*
 * XREFs of HUBDSM_ValidatingMSOSContainerIdDescriptor @ 0x1C001B620
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001EA8 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0p @ 0x1C000639C (McTemplateK0p.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x1C002B500 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSContainerIdDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
    WdfDriverGlobals,
    WdfDriverGlobals->Driver,
    off_1C005B110);
  v3 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL);
  if ( *(_DWORD *)(v1 + 256) == 24 )
  {
    if ( *(_QWORD *)(v1 + 1740) != *(_QWORD *)&GUID_NULL.Data1 || *(_QWORD *)(v1 + 1748) != *(_QWORD *)GUID_NULL.Data4 )
    {
      *(_OWORD *)(v1 + 2064) = *(_OWORD *)(v1 + 1740);
      _InterlockedOr((volatile signed __int32 *)(v1 + 1632), 8u);
      return v2;
    }
    WPP_RECORDER_SF_(v3, 2u, 5u, 0x104u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids);
    v4 = 114LL;
  }
  else
  {
    WPP_RECORDER_SF_dD(
      v3,
      2u,
      5u,
      0x103u,
      (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids,
      *(_DWORD *)(v1 + 256),
      24);
    v4 = 117LL;
  }
  HUBMISC_LogDescriptorValidationErrorForDevice(v1, v4);
  WPP_RECORDER_SF_(v3, 2u, 5u, 0x105u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids);
  v2 = 4065;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x200) != 0 )
    McTemplateK0p(
      v5,
      &USBHUB3_ETW_EVENT_INVALID_MSOS_CONTAINER_ID_DESCRIPTOR,
      (const GUID *)(v1 + 1516),
      *(_QWORD *)(v1 + 24));
  return v2;
}
