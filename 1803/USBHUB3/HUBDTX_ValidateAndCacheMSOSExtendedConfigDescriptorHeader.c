/*
 * XREFs of HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader @ 0x1C0025A94
 * Callers:
 *     HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader @ 0x1C001C3C0 (HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E98 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0p @ 0x1C0006374 (McTemplateK0p.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x1C002C490 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader(__int64 a1)
{
  unsigned int v2; // r15d
  char v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rdx
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // ax
  __int64 v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-28h]

  v2 = 4077;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
    WdfDriverGlobals,
    WdfDriverGlobals->Driver,
    off_1C005B110);
  v3 = 1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
  if ( *(_DWORD *)(a1 + 256) != 16 )
  {
    WPP_RECORDER_SF_dD(
      v4,
      2u,
      5u,
      0x10Bu,
      (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
      *(_DWORD *)(a1 + 256),
      16);
    v5 = 122LL;
LABEL_3:
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, v5);
LABEL_13:
    WPP_RECORDER_SF_(v4, 2u, 5u, 0x110u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
    *(_DWORD *)(a1 + 2432) = 1073807382;
    v2 = 4065;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
      McTemplateK0p(
        v8,
        &USBHUB3_ETW_EVENT_INVALID_MSOS_EXTENDED_CONFIGURATION_DESCRIPTOR_HEADER,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24));
    return v2;
  }
  v6 = *(_WORD *)(a1 + 1736);
  if ( v6 != 256 )
  {
    WPP_RECORDER_SF_dD(v4, 2u, 5u, 0x10Cu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v6, 256);
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, 120LL);
    v3 = 0;
  }
  v7 = *(_WORD *)(a1 + 1738);
  if ( v7 != 4 )
  {
    LODWORD(v11) = 4;
    LODWORD(v10) = v7;
    WPP_RECORDER_SF_dD(v4, 2u, 5u, 0x10Du, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v10, v11);
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, 125LL);
    v3 = 0;
  }
  if ( *(_BYTE *)(a1 + 1740) != 1 )
  {
    WPP_RECORDER_SF_(v4, 2u, 5u, 0x10Eu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
    v5 = 121LL;
    goto LABEL_3;
  }
  if ( *(_DWORD *)(a1 + 1732) != 40 )
  {
    v3 = 0;
    LODWORD(v11) = 40;
    LODWORD(v10) = *(_DWORD *)(a1 + 1732);
    WPP_RECORDER_SF_dD(v4, 2u, 5u, 0x10Fu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v10, v11);
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, 127LL);
  }
  if ( !v3 )
    goto LABEL_13;
  return v2;
}
