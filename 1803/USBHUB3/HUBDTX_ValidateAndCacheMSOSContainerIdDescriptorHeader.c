/*
 * XREFs of HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader @ 0x1C002575C
 * Callers:
 *     HUBDSM_ValidatingMSOSContainerIdHeaderDescriptor @ 0x1C001C120 (HUBDSM_ValidatingMSOSContainerIdHeaderDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E98 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0p @ 0x1C0006374 (McTemplateK0p.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x1C002C490 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader(__int64 a1)
{
  unsigned int v2; // r14d
  __int64 v3; // rbp
  char v4; // al
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // cx
  __int64 v7; // rcx
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v2 = 4077;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
    WdfDriverGlobals,
    WdfDriverGlobals->Driver,
    off_1C005B110);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
  v4 = 1;
  if ( *(_DWORD *)(a1 + 256) != 8 )
  {
    WPP_RECORDER_SF_d(
      v3,
      2u,
      5u,
      0xFEu,
      (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
      *(_DWORD *)(a1 + 256));
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, 117LL);
LABEL_10:
    WPP_RECORDER_SF_(v3, 2u, 5u, 0x102u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
    *(_DWORD *)(a1 + 2432) = 1073807381;
    v2 = 4065;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x200) != 0 )
      McTemplateK0p(
        v7,
        &USBHUB3_ETW_EVENT_INVALID_MSOS_CONTAINER_ID_DESCRIPTOR_HEADER,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24));
    return v2;
  }
  v5 = *(_WORD *)(a1 + 1736);
  if ( v5 != 256 )
  {
    WPP_RECORDER_SF_dD(v3, 2u, 5u, 0xFFu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v5, 256);
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, 115LL);
    v4 = 0;
  }
  v6 = *(_WORD *)(a1 + 1738);
  if ( v6 != 6 )
  {
    LODWORD(v10) = 6;
    LODWORD(v9) = v6;
    WPP_RECORDER_SF_dD(v3, 2u, 5u, 0x100u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v9, v10);
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, 116LL);
    v4 = 0;
  }
  if ( *(_DWORD *)(a1 + 1732) != 24 )
  {
    LODWORD(v10) = 24;
    LODWORD(v9) = *(_DWORD *)(a1 + 1732);
    WPP_RECORDER_SF_dD(v3, 2u, 5u, 0x101u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v9, v10);
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, 118LL);
    v4 = 0;
  }
  if ( !v4 )
    goto LABEL_10;
  return v2;
}
