/*
 * XREFs of InitAcpiThrottleStates @ 0x1C001C2C4
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001DF9C (ProcLibDeviceStart.c)
 * Callees:
 *     Display_PCT_PTC @ 0x1C0002A58 (Display_PCT_PTC.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     Display_TSS @ 0x1C000A31C (Display_TSS.c)
 *     InitAcpi1ThrottleStates @ 0x1C001C394 (InitAcpi1ThrottleStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C001C600 (InitAcpi3ThrottleStates.c)
 *     ValidateAcpiThrottleStates @ 0x1C0026254 (ValidateAcpiThrottleStates.c)
 */

__int64 __fastcall InitAcpiThrottleStates(__int64 a1)
{
  int inited; // edi
  __int64 v4; // rdx
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  inited = -1073741823;
  if ( (*(_DWORD *)(a1 + 264) & 0x3000000) != 0 )
  {
    inited = InitAcpi3ThrottleStates(a1);
    if ( inited >= 0 )
      goto LABEL_8;
    *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFCFFFFFFuLL;
  }
  if ( (*(_DWORD *)(a1 + 264) & 0x300000) == 0 )
    goto LABEL_7;
  inited = InitAcpi1ThrottleStates(a1);
  if ( inited < 0 )
  {
    *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFFCFFFFFuLL;
    goto LABEL_7;
  }
LABEL_8:
  v4 = *(_QWORD *)(a1 + 472);
  v5 = 0;
  inited = ValidateAcpiThrottleStates(a1 + 448, v4, &v5);
  if ( inited >= 0 )
  {
    inited = 0;
    Display_TSS(*(unsigned int **)(a1 + 472));
    Display_PCT_PTC(a1 + 448, "_PTC");
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1080), v5);
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x12u,
      (__int64)&WPP_2c713a617c4c3eb023611b8c89b96b90_Traceguids,
      inited);
  }
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)inited;
}
