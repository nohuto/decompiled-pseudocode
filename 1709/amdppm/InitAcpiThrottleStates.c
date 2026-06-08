/*
 * XREFs of InitAcpiThrottleStates @ 0x1C0029CAC
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001EB90 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000134C (WPP_RECORDER_SF_D.c)
 *     Display_PCT_PTC @ 0x1C0003788 (Display_PCT_PTC.c)
 *     Display_TSS @ 0x1C00038C4 (Display_TSS.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 *     InitAcpi1ThrottleStates @ 0x1C0029E04 (InitAcpi1ThrottleStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C0029FB0 (InitAcpi3ThrottleStates.c)
 *     ValidateAcpiThrottleStates @ 0x1C002AEC8 (ValidateAcpiThrottleStates.c)
 */

__int64 __fastcall InitAcpiThrottleStates(__int64 a1)
{
  int inited; // edi
  __int64 v3; // rdx
  unsigned int v4; // eax
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  inited = -1073741823;
  if ( (*(_DWORD *)(a1 + 264) & 0x3000000) != 0 )
  {
    inited = InitAcpi3ThrottleStates(a1);
    if ( inited >= 0 )
      goto LABEL_7;
    *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFCFFFFFFuLL;
  }
  if ( (*(_DWORD *)(a1 + 264) & 0x300000) == 0 )
    goto LABEL_13;
  inited = InitAcpi1ThrottleStates(a1);
  if ( inited < 0 )
  {
    *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFFCFFFFFuLL;
    goto LABEL_13;
  }
LABEL_7:
  v3 = *(_QWORD *)(a1 + 472);
  v4 = 0;
  v6 = 0;
  if ( a1 == -448 )
  {
    inited = -1073741823;
  }
  else
  {
    inited = ValidateAcpiThrottleStates(a1 + 448, v3, &v6);
    v4 = v6;
  }
  if ( inited >= 0 )
  {
    inited = 0;
    Display_TSS(*(unsigned int **)(a1 + 472));
    Display_PCT_PTC(a1 + 448, "_PTC");
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1080), v4);
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x12u,
      (__int64)&WPP_4fb804b79ee83e7d3d0dc001d18061c9_Traceguids,
      inited);
  }
LABEL_13:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)inited;
}
