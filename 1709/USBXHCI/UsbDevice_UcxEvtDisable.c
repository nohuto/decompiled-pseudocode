/*
 * XREFs of UsbDevice_UcxEvtDisable @ 0x1C0035E30
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C0005F34 (Controller_IsControllerAccessible.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Command_SendCommand @ 0x1C000D784 (Command_SendCommand.c)
 *     Endpoint_Disable_Internal @ 0x1C001849C (Endpoint_Disable_Internal.c)
 *     RootHub_ClearPortResumeTime @ 0x1C001F7EC (RootHub_ClearPortResumeTime.c)
 *     RootHub_DisableLPMForSlot @ 0x1C001F83C (RootHub_DisableLPMForSlot.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C00359BC (UsbDevice_SetDeviceDisabled.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00378F8 (WPP_RECORDER_SF_dq.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

__int64 __fastcall UsbDevice_UcxEvtDisable(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  int v7; // edx
  __int64 v8; // rdi
  int v9; // edx
  int v10; // r8d
  int v11; // edx
  int v12; // r8d
  __int64 *v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rdi
  unsigned int v17; // eax
  _QWORD v18[5]; // [rsp+40h] [rbp-48h] BYREF

  memset(v18, 0, sizeof(v18));
  LOWORD(v18[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v18);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(v18[1] + 16LL),
         off_1C004E2F0);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_QWORD *)(v4 + 144);
  v6 = *(_QWORD *)v3;
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_dq(
    *(_QWORD *)(v4 + 72),
    v6,
    12,
    51,
    (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
    *(_BYTE *)(v3 + 135),
    *(_QWORD *)v3);
  if ( !*(_BYTE *)(v3 + 134) )
  {
    v7 = *(unsigned __int8 *)(v3 + 135);
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v7,
      12,
      52,
      (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
      *(_BYTE *)(v3 + 135),
      *(_QWORD *)v3);
    v8 = *(_QWORD *)(v3 + 176);
    LOBYTE(v9) = 1;
    Endpoint_Disable_Internal(v8, v9, v10);
    ESM_AddEvent((PVOID)(v8 + 288));
    v13 = (__int64 *)(v3 + 184);
    v14 = 30LL;
    do
    {
      v15 = *v13;
      if ( *v13 )
      {
        LOBYTE(v11) = 1;
        Endpoint_Disable_Internal(*v13, v11, v12);
        ESM_AddEvent((PVOID)(v15 + 288));
        *v13 = 0LL;
      }
      ++v13;
      --v14;
    }
    while ( v14 );
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             0LL);
  }
  if ( *(_BYTE *)(v3 + 552) )
    RootHub_DisableLPMForSlot(
      *(_QWORD **)(*(_QWORD *)(v3 + 8) + 152LL),
      *(_DWORD *)(v3 + 44),
      *(unsigned __int8 *)(v3 + 135));
  if ( *(_BYTE *)(v3 + 553) )
    RootHub_ClearPortResumeTime(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 152LL), *(_DWORD *)(v3 + 44));
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    UsbDevice_SetDeviceDisabled(v3);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             0LL);
  }
  *(_QWORD *)(v3 + 424) = a2;
  *(_BYTE *)(v3 + 432) = 1;
  memset((void *)(v3 + 440), 0, 0x60uLL);
  *(_QWORD *)(v3 + 512) = 0LL;
  *(_DWORD *)(v3 + 520) = 0;
  *(_DWORD *)(v3 + 524) = 0;
  *(_QWORD *)(v3 + 528) = 0LL;
  *(_QWORD *)(v3 + 480) = UsbDevice_DisableCompletionReturnSuccess;
  v17 = *(_DWORD *)(v3 + 476) & 0xFFFF2BFF;
  *(_QWORD *)(v3 + 488) = v3;
  *(_DWORD *)(v3 + 476) = v17 | 0x2800;
  *(_BYTE *)(v3 + 479) = *(_BYTE *)(v3 + 135);
  return Command_SendCommand(v5, v3 + 440);
}
