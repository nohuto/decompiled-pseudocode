/*
 * XREFs of HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C0024684
 * Callers:
 *     HUBDSM_ValidatingAlternateBOSDescriptorHeader @ 0x1C001CAC0 (HUBDSM_ValidatingAlternateBOSDescriptorHeader.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1C0001E98 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0p @ 0x1C0006374 (McTemplateK0p.c)
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x1C0032D6C (HUBDESC_InternalValidateBOSDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheBOSDescriptorHeader(__int64 a1)
{
  __int64 v1; // r14
  unsigned int v3; // esi
  __int64 v4; // rbx
  int v5; // ecx
  __int64 v6; // rbx
  char v7; // al
  char v8; // al
  bool v9; // cf
  __int64 v10; // rcx
  char v11; // al
  bool v12; // zf
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // rbx
  _OWORD v17[4]; // [rsp+40h] [rbp-59h] BYREF
  _OWORD v18[3]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+17h]
  __int64 v20; // [rsp+B8h] [rbp+1Fh]
  __int64 v21; // [rsp+C0h] [rbp+27h]
  int v22; // [rsp+C8h] [rbp+2Fh]
  _OWORD *v23; // [rsp+D0h] [rbp+37h]
  char v24; // [rsp+100h] [rbp+67h] BYREF

  v1 = a1 + 1732;
  v3 = 4077;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005B110);
  memset(v17, 0, 0x38uLL);
  v5 = *(_DWORD *)(v4 + 4);
  v6 = *(_QWORD *)(a1 + 8);
  LOWORD(v17[0]) = *(_WORD *)(a1 + 1990);
  DWORD1(v17[0]) = *(_DWORD *)(a1 + 172);
  v7 = BYTE13(v17[0]);
  if ( (v5 & 0x20) != 0 )
    v7 = 1;
  *((_QWORD *)&v17[2] + 1) = a1;
  BYTE13(v17[0]) = v7;
  v8 = HIBYTE(v17[0]);
  if ( (v5 & 0x2000) != 0 )
    v8 = 1;
  v9 = (v5 & 0x4000) != 0;
  v10 = *(unsigned int *)(a1 + 256);
  HIBYTE(v17[0]) = v8;
  v11 = BYTE12(v17[0]);
  if ( v9 )
    v11 = 1;
  v12 = (*(_DWORD *)(a1 + 1644) & 0x200000) == 0;
  BYTE12(v17[0]) = v11;
  v13 = v17[3];
  if ( !v12 )
    v13 = 1;
  LOBYTE(v17[3]) = v13;
  LODWORD(v17[1]) = *(_DWORD *)(v6 + 220);
  *((_QWORD *)&v17[1] + 1) = HUBMISC_LogDescriptorValidationErrorForDevice;
  *(_QWORD *)&v17[2] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( (unsigned int)v10 >= 5 )
  {
    v15 = *(_QWORD *)(v6 + 1432);
    v22 = v10;
    v18[0] = v17[0];
    v20 = v1;
    v18[1] = v17[1];
    v18[2] = v17[2];
    v19 = *(_QWORD *)&v17[3];
    v21 = v1 + v10;
    memset(v17, 0, sizeof(v17));
    v23 = v17;
    if ( (unsigned __int8)HUBDESC_InternalValidateBOSDescriptor(v1, (unsigned int)v18, (unsigned int)&v24, 0, v15) )
      return v3;
    *(_DWORD *)(a1 + 2432) = 1073807378;
  }
  else
  {
    *(_DWORD *)(a1 + 2432) = 1073807378;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(v6 + 1432),
      2u,
      5u,
      0x39u,
      (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
      v10,
      5);
  }
  v3 = 4065;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
    McTemplateK0p(
      v14,
      &USBHUB3_ETW_EVENT_INVALID_BOS_DESCRIPTOR_HEADER,
      (const GUID *)(a1 + 1516),
      *(_QWORD *)(a1 + 24));
  return v3;
}
