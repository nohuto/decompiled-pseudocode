/*
 * XREFs of HUBDSM_ValidatingMSOSExtendedConfigDescriptor @ 0x1C001B880
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0p @ 0x1C000639C (McTemplateK0p.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptor @ 0x1C0032930 (HUBDESC_ValidateMSOSExtendedConfigDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSExtendedConfigDescriptor(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // esi
  __int64 v3; // rbx
  int v4; // ecx
  char v5; // al
  char v6; // al
  bool v7; // cf
  __int64 v8; // rcx
  char v9; // al
  bool v10; // zf
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  void *v14; // rcx
  _QWORD v16[8]; // [rsp+30h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005B110);
  memset(v16, 0, 0x38uLL);
  v4 = *(_DWORD *)(v3 + 4);
  LOWORD(v16[0]) = *(_WORD *)(v1 + 1990);
  HIDWORD(v16[0]) = *(_DWORD *)(v1 + 172);
  v5 = BYTE5(v16[1]);
  if ( (v4 & 0x20) != 0 )
    v5 = 1;
  v16[5] = v1;
  BYTE5(v16[1]) = v5;
  v6 = HIBYTE(v16[1]);
  if ( (v4 & 0x2000) != 0 )
    v6 = 1;
  v7 = (v4 & 0x4000) != 0;
  v8 = *(_QWORD *)(v1 + 8);
  HIBYTE(v16[1]) = v6;
  v9 = BYTE4(v16[1]);
  if ( v7 )
    v9 = 1;
  v10 = (*(_DWORD *)(v1 + 1644) & 0x200000) == 0;
  BYTE4(v16[1]) = v9;
  v11 = v16[6];
  if ( !v10 )
    v11 = 1;
  v12 = *(unsigned int *)(v1 + 256);
  LOBYTE(v16[6]) = v11;
  LODWORD(v16[2]) = *(_DWORD *)(v8 + 220);
  v16[3] = HUBMISC_LogDescriptorValidationErrorForDevice;
  v16[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( (_DWORD)v12 == *(_DWORD *)(v1 + 1732) )
  {
    if ( (unsigned __int8)HUBDESC_ValidateMSOSExtendedConfigDescriptor(
                            *(_QWORD *)(v1 + 2104),
                            v12,
                            v16,
                            *(_QWORD *)(v8 + 1432)) )
      return v2;
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 1432),
      2u,
      5u,
      0x52u,
      (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
      v12,
      v16[0]);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x200) != 0 )
    McTemplateK0p(
      v13,
      &USBHUB3_ETW_EVENT_INVALID_MSOS_EXTENDED_CONFIGURATION_DESCRIPTOR,
      (const GUID *)(v1 + 1516),
      *(_QWORD *)(v1 + 24));
  v14 = *(void **)(v1 + 2104);
  v2 = 4065;
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0x64334855u);
    *(_QWORD *)(v1 + 2104) = 0LL;
  }
  return v2;
}
