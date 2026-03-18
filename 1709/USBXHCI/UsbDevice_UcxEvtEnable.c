/*
 * XREFs of UsbDevice_UcxEvtEnable @ 0x1C00360C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     Controller_IsControllerAccessible @ 0x1C0005F34 (Controller_IsControllerAccessible.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Command_SendCommand @ 0x1C000D784 (Command_SendCommand.c)
 *     Endpoint_Disable_Internal @ 0x1C001849C (Endpoint_Disable_Internal.c)
 *     Endpoint_Enable @ 0x1C00185D0 (Endpoint_Enable.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

__int64 __fastcall UsbDevice_UcxEvtEnable(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  int v5; // eax
  unsigned int v6; // esi
  int v7; // edx
  int v8; // r8d
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned int v12; // eax
  _QWORD v13[5]; // [rsp+30h] [rbp-48h] BYREF

  memset(v13, 0, sizeof(v13));
  LOWORD(v13[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v13);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(v13[1] + 16LL),
         off_1C004E2F0);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 144LL);
  v5 = Endpoint_Enable(*(_QWORD *)(v3 + 176));
  v6 = v5;
  if ( v5 < 0 )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2u,
      0xCu,
      0xEu,
      (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
      v5);
LABEL_5:
    v10 = WdfFunctions_01015;
    *(_QWORD *)(v3 + 424) = 0LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v10 + 2104))(WdfDriverGlobals, a2, v6);
  }
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    v9 = *(_QWORD *)(v3 + 176);
    LOBYTE(v7) = 1;
    v6 = -1073741810;
    Endpoint_Disable_Internal(v9, v7, v8);
    ESM_AddEvent((PVOID)(v9 + 288));
    goto LABEL_5;
  }
  *(_QWORD *)(v3 + 424) = a2;
  *(_BYTE *)(v3 + 432) = 0;
  memset((void *)(v3 + 440), 0, 0x60uLL);
  *(_QWORD *)(v3 + 512) = 0LL;
  *(_DWORD *)(v3 + 520) = 0;
  *(_DWORD *)(v3 + 524) = 0;
  *(_QWORD *)(v3 + 528) = 0LL;
  *(_QWORD *)(v3 + 480) = UsbDevice_EnableCompletion;
  v12 = *(_DWORD *)(v3 + 476) & 0xFFFF27FF;
  *(_QWORD *)(v3 + 488) = v3;
  *(_DWORD *)(v3 + 476) = v12 | 0x2400;
  return Command_SendCommand(v4, v3 + 440);
}
