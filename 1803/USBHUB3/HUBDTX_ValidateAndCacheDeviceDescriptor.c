/*
 * XREFs of HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C0025174
 * Callers:
 *     HUBDSM_ValidatingAlternateDeviceDescriptor @ 0x1C001B810 (HUBDSM_ValidatingAlternateDeviceDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E98 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0p @ 0x1C0006374 (McTemplateK0p.c)
 *     HUBDESC_ValidateDeviceDescriptor @ 0x1C00336C8 (HUBDESC_ValidateDeviceDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheDeviceDescriptor(__int64 a1)
{
  int v1; // eax
  __int64 v2; // r14
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // ecx
  char v9; // al
  char v10; // al
  bool v11; // cf
  __int64 v12; // rcx
  char v13; // al
  bool v14; // zf
  char v15; // al
  int v16; // edx
  _QWORD v18[7]; // [rsp+40h] [rbp-40h] BYREF
  char v19; // [rsp+A0h] [rbp+20h] BYREF

  v1 = *(_DWORD *)(a1 + 256);
  v2 = a1 + 1732;
  v19 = 0;
  v4 = 4077;
  if ( v1 != 18 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( v1 )
    {
      *(_DWORD *)(a1 + 2432) = 1073807365;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(v5 + 1432),
        2u,
        5u,
        0x49u,
        (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
        v1,
        18);
    }
    else
    {
      *(_DWORD *)(a1 + 2432) = 1073807360;
      WPP_RECORDER_SF_(*(_QWORD *)(v5 + 1432), 2u, 5u, 0x4Au, (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids);
    }
LABEL_15:
    v4 = 4065;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
      McTemplateK0p(v6, &USBHUB3_ETW_EVENT_INVALID_DEVICE_DESCRIPTOR, (const GUID *)(a1 + 1516), *(_QWORD *)(a1 + 24));
    return v4;
  }
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005B110);
  memset(v18, 0, sizeof(v18));
  v8 = *(_DWORD *)(v7 + 4);
  LOWORD(v18[0]) = *(_WORD *)(a1 + 1990);
  HIDWORD(v18[0]) = *(_DWORD *)(a1 + 172);
  v9 = BYTE5(v18[1]);
  if ( (v8 & 0x20) != 0 )
    v9 = 1;
  v18[5] = a1;
  BYTE5(v18[1]) = v9;
  v10 = HIBYTE(v18[1]);
  if ( (v8 & 0x2000) != 0 )
    v10 = 1;
  v11 = (v8 & 0x4000) != 0;
  v12 = *(_QWORD *)(a1 + 8);
  HIBYTE(v18[1]) = v10;
  v13 = BYTE4(v18[1]);
  if ( v11 )
    v13 = 1;
  v14 = (*(_DWORD *)(a1 + 1644) & 0x200000) == 0;
  BYTE4(v18[1]) = v13;
  v15 = v18[6];
  if ( !v14 )
    v15 = 1;
  v16 = *(_DWORD *)(a1 + 256);
  LOBYTE(v18[6]) = v15;
  LODWORD(v18[2]) = *(_DWORD *)(v12 + 220);
  v18[3] = HUBMISC_LogDescriptorValidationErrorForDevice;
  v18[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( !(unsigned __int8)HUBDESC_ValidateDeviceDescriptor(
                           v2,
                           v16,
                           (unsigned int)v18,
                           (unsigned int)&v19,
                           *(_QWORD *)(v12 + 1432)) )
  {
    *(_DWORD *)(a1 + 2432) = 1073807365;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x4Bu,
      (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
      *(_DWORD *)(a1 + 256));
    goto LABEL_15;
  }
  v14 = v19 == 0;
  *(_OWORD *)(a1 + 1988) = *(_OWORD *)v2;
  *(_WORD *)(a1 + 2004) = *(_WORD *)(v2 + 16);
  if ( !v14 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 0x20000u);
  return v4;
}
