/*
 * XREFs of UsbDevice_EnableCompletion @ 0x1C0031890
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     Command_SendCommand @ 0x1C0004578 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_q @ 0x1C0004F28 (WPP_RECORDER_SF_q.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0008150 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C000FD78 (XilDeviceSlot_SetDeviceContext.c)
 *     Endpoint_Disable @ 0x1C00110F8 (Endpoint_Disable.c)
 *     Endpoint_SetLogIdentifier @ 0x1C0014000 (Endpoint_SetLogIdentifier.c)
 *     UsbDevice_SetAddress @ 0x1C0032E78 (UsbDevice_SetAddress.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00354D8 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall UsbDevice_EnableCompletion(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 *v6; // r10
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rdx
  char v10; // si
  unsigned int v11; // edi
  unsigned __int8 v12; // al
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  PWDF_DRIVER_GLOBALS v22; // rcx
  __int64 v23; // [rsp+28h] [rbp-70h]
  __int64 v24; // [rsp+30h] [rbp-68h]
  _QWORD v25[5]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  v6 = *(__int64 **)(v3 + 8);
  v7 = v6[11];
  v8 = v6[17];
  if ( a2 == 3 )
  {
    WPP_RECORDER_SF_q(v6[9], 4u, 0xCu, 0xFu, (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids, *(_QWORD *)v3);
    v10 = 1;
    v11 = *(_BYTE *)(v3 + 432) == 0 ? 0xC0000001 : 0;
    goto LABEL_19;
  }
  v12 = *(_BYTE *)(a1 + 60);
  if ( v12 != 1 )
  {
    WPP_RECORDER_SF_d(v6[9], 3u, 0xCu, 0x13u, (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids, v12);
    if ( *(_BYTE *)(a1 + 60) == 9 )
    {
      memset(v25, 0, sizeof(v25));
      v19 = *(_QWORD *)(v3 + 424);
      LOWORD(v25[0]) = 40;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
        WdfDriverGlobals,
        v19,
        v25);
      *(_DWORD *)(v25[1] + 32LL) |= 2u;
    }
    if ( *(_BYTE *)(v3 + 432) )
    {
      Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4118, 0LL, 0LL, 0LL);
      v10 = 0;
    }
    else
    {
      v10 = 1;
    }
    v11 = -1073741823;
    goto LABEL_19;
  }
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_dq(
    v6[9],
    a2,
    12,
    16,
    (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids,
    *(_BYTE *)(a1 + 61),
    *(_QWORD *)v3);
  *(_BYTE *)(v3 + 134) = 1;
  *(_BYTE *)(v3 + 135) = *(_BYTE *)(a1 + 61);
  Endpoint_SetLogIdentifier(*(_QWORD *)(v3 + 176));
  v13 = XilDeviceSlot_SetDeviceContext(v8, v3, *(unsigned __int8 *)(v3 + 135));
  v11 = v13;
  if ( v13 < 0 )
  {
    LODWORD(v24) = v13;
    LODWORD(v23) = *(unsigned __int8 *)(v3 + 135);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2u,
      0xCu,
      0x11u,
      (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids,
      v23,
      v24);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)(v3 + 8),
      *(_QWORD *)v3,
      0,
      0x20000LL,
      "Enable Slot command returned a SlotId value that is already in use",
      (_QWORD *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4116, 0LL, 0LL, 0LL);
    v10 = 1;
LABEL_19:
    LOBYTE(v9) = 1;
    Endpoint_Disable(*(__int64 **)(v3 + 176), v9);
    if ( v10 )
    {
      v20 = WdfFunctions_01023;
      v21 = *(_QWORD *)(v3 + 424);
      v22 = WdfDriverGlobals;
      *(_QWORD *)(v3 + 424) = 0LL;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v20 + 2104))(v22, v21, v11);
    }
    return;
  }
  v14 = *(_QWORD *)(v7 + 48);
  if ( v14 )
    v15 = v14 + 4LL * *(unsigned __int8 *)(v3 + 135);
  else
    v15 = 0LL;
  *(_QWORD *)(v3 + 160) = v15;
  LOBYTE(v15) = 1;
  v16 = UsbDevice_SetAddress(v3, v15);
  if ( v16 < 0 )
  {
    LODWORD(v24) = v16;
    LODWORD(v23) = *(unsigned __int8 *)(v3 + 135);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2u,
      0xCu,
      0x12u,
      (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids,
      v23,
      v24);
    v17 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 144LL);
    memset((void *)(v3 + 440), 0, 0x60uLL);
    if ( *(_BYTE *)(v3 + 432) )
    {
      Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4117, 0LL, 0LL, 0LL);
    }
    else
    {
      *(_QWORD *)(v3 + 488) = v3;
      *(_QWORD *)(v3 + 480) = UsbDevice_DisableCompletionReturnFailure;
      v18 = *(_DWORD *)(v3 + 476) & 0xFFFF2BFF;
      *(_QWORD *)(v3 + 512) = 0LL;
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 476) = v18 | 0x2800;
      *(_BYTE *)(v3 + 479) = *(_BYTE *)(v3 + 135);
      *(_QWORD *)(v3 + 528) = 0LL;
      Command_SendCommand(v17, v3 + 440);
    }
  }
}
