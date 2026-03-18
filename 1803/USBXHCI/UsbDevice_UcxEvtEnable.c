/*
 * XREFs of UsbDevice_UcxEvtEnable @ 0x1C0033C50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     Command_SendCommand @ 0x1C0004578 (Command_SendCommand.c)
 *     Controller_IsControllerAccessible @ 0x1C0008A48 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Endpoint_Disable @ 0x1C00110F8 (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x1C0011310 (Endpoint_Enable.c)
 */

__int64 __fastcall UsbDevice_UcxEvtEnable(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v11; // eax
  int v12; // [rsp+28h] [rbp-40h]
  _QWORD v13[5]; // [rsp+30h] [rbp-38h] BYREF

  memset(v13, 0, sizeof(v13));
  LOWORD(v13[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v13);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(v13[1] + 16LL),
         off_1C004B2F0);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 144LL);
  v5 = Endpoint_Enable(*(_QWORD *)(v3 + 176));
  v6 = *(_QWORD *)(v3 + 8);
  v7 = v5;
  if ( v5 < 0 )
  {
    v12 = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v6 + 72),
      2u,
      0xCu,
      0xEu,
      (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids,
      v12);
LABEL_5:
    v9 = WdfFunctions_01023;
    *(_QWORD *)(v3 + 424) = 0LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v9 + 2104))(WdfDriverGlobals, a2, v7);
  }
  if ( !Controller_IsControllerAccessible(v6) )
  {
    LOBYTE(v8) = 1;
    v7 = -1073741810;
    Endpoint_Disable(*(__int64 **)(v3 + 176), v8);
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
  v11 = *(_DWORD *)(v3 + 476) & 0xFFFF27FF;
  *(_QWORD *)(v3 + 488) = v3;
  *(_DWORD *)(v3 + 476) = v11 | 0x2400;
  return Command_SendCommand(v4, v3 + 440);
}
