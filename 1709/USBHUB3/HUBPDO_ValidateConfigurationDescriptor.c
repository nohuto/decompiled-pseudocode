/*
 * XREFs of HUBPDO_ValidateConfigurationDescriptor @ 0x1C0012710
 * Callers:
 *     HUBPDO_ValidateSelectConfigUrb @ 0x1C00128EC (HUBPDO_ValidateSelectConfigUrb.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001EA8 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_c @ 0x1C0001FCC (WPP_RECORDER_SF_c.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C002F7F4 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
 */

__int64 __fastcall HUBPDO_ValidateConfigurationDescriptor(__int64 a1, unsigned __int8 *a2, int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rbx
  char v8; // al
  int v9; // ecx
  char v10; // al
  bool v11; // cf
  __int64 v12; // rcx
  char v13; // al
  bool v14; // zf
  char v15; // al
  _QWORD v18[7]; // [rsp+40h] [rbp-40h] BYREF

  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005B110);
  memset(v18, 0, sizeof(v18));
  v8 = BYTE5(v18[1]);
  LOWORD(v18[0]) = *(_WORD *)(a1 + 1990);
  HIDWORD(v18[0]) = *(_DWORD *)(a1 + 172);
  v9 = *(_DWORD *)(v7 + 4);
  v18[5] = a1;
  if ( (v9 & 0x20) != 0 )
    v8 = 1;
  BYTE5(v18[1]) = v8;
  v10 = HIBYTE(v18[1]);
  if ( (v9 & 0x2000) != 0 )
    v10 = 1;
  v11 = (v9 & 0x4000) != 0;
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
  LOBYTE(v18[6]) = v15;
  LODWORD(v18[2]) = *(_DWORD *)(v12 + 220);
  v18[3] = &HUBMISC_LogDescriptorValidationErrorForDevice;
  v18[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( a2[1] != 2 )
  {
    WPP_RECORDER_SF_c(
      *(_QWORD *)(v12 + 1432),
      2u,
      5u,
      0x18u,
      (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
      a2[1]);
    return (unsigned int)-1073737984;
  }
  if ( *a2 < 9u )
  {
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(v12 + 1432),
      2u,
      5u,
      0x19u,
      (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
      *a2,
      9);
    return (unsigned int)-1073737984;
  }
  if ( !*((_WORD *)a2 + 1) )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v12 + 1432), 2u, 5u, 0x1Au, (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids);
    return (unsigned int)-1073737984;
  }
  if ( !(unsigned __int8)HUBDESC_ValidateConfigurationDescriptorSet(
                           (_DWORD)a2,
                           a3,
                           (unsigned int)v18,
                           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                           0LL) )
    return (unsigned int)-1073737984;
  return v6;
}
