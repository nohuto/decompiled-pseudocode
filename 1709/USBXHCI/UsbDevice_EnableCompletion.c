/*
 * XREFs of UsbDevice_EnableCompletion @ 0x1C0033DA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_L @ 0x1C0006858 (WPP_RECORDER_SF_L.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Command_SendCommand @ 0x1C000D784 (Command_SendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C00171C0 (XilDeviceSlot_SetDeviceContext.c)
 *     Endpoint_Disable_Internal @ 0x1C001849C (Endpoint_Disable_Internal.c)
 *     Endpoint_SetLogIdentifier @ 0x1C001B280 (Endpoint_SetLogIdentifier.c)
 *     UsbDevice_SetAddress @ 0x1C00352C0 (UsbDevice_SetAddress.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00378F8 (WPP_RECORDER_SF_dq.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

void __fastcall UsbDevice_EnableCompletion(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3; // rdi
  __int64 *v6; // r10
  __int64 v7; // r14
  __int64 v8; // r15
  int v9; // edx
  int v10; // r8d
  char v11; // r14
  unsigned int v12; // ebp
  unsigned __int8 v13; // al
  int v14; // eax
  __int64 v15; // rdx
  int v16; // r8d
  int v17; // eax
  __int64 v18; // rbp
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // [rsp+28h] [rbp-70h]
  __int64 v25; // [rsp+30h] [rbp-68h]
  _QWORD v26[5]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  v6 = *(__int64 **)(v3 + 8);
  v7 = v6[11];
  v8 = v6[17];
  if ( a2 == 3 )
  {
    WPP_RECORDER_SF_q(v6[9], 4u, 0xCu, 0xFu, (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids, *(_QWORD *)v3);
    v11 = 1;
    v12 = *(_BYTE *)(v3 + 432) == 0 ? 0xC0000001 : 0;
  }
  else
  {
    v13 = *(_BYTE *)(a1 + 60);
    if ( v13 == 1 )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_dq(
        v6[9],
        a2,
        12,
        16,
        (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
        *(_BYTE *)(a1 + 61),
        *(_QWORD *)v3);
      *(_BYTE *)(v3 + 134) = 1;
      *(_BYTE *)(v3 + 135) = *(_BYTE *)(a1 + 61);
      Endpoint_SetLogIdentifier(*(_QWORD *)(v3 + 176));
      v14 = XilDeviceSlot_SetDeviceContext(v8, v3, *(unsigned __int8 *)(v3 + 135));
      if ( v14 >= 0 )
      {
        LOBYTE(v15) = 1;
        *(_QWORD *)(v3 + 160) = *(_QWORD *)(v7 + 48) + 4LL * *(unsigned __int8 *)(v3 + 135);
        v17 = UsbDevice_SetAddress(v3, v15);
        if ( v17 >= 0 )
          return;
        LODWORD(v25) = v17;
        LODWORD(v24) = *(unsigned __int8 *)(v3 + 135);
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          2u,
          0xCu,
          0x12u,
          (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
          v24,
          v25);
        v18 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 144LL);
        memset((void *)(v3 + 440), 0, 0x60uLL);
        if ( !*(_BYTE *)(v3 + 432) )
        {
          *(_QWORD *)(v3 + 512) = 0LL;
          *(_DWORD *)(v3 + 520) = 0;
          *(_DWORD *)(v3 + 524) = 0;
          *(_QWORD *)(v3 + 528) = 0LL;
          *(_QWORD *)(v3 + 480) = UsbDevice_DisableCompletionReturnFailure;
          v19 = *(_DWORD *)(v3 + 476) & 0xFFFF2BFF;
          *(_QWORD *)(v3 + 488) = v3;
          *(_DWORD *)(v3 + 476) = v19 | 0x2800;
          *(_BYTE *)(v3 + 479) = *(_BYTE *)(v3 + 135);
          Command_SendCommand(v18, v3 + 440);
          return;
        }
        v16 = 4117;
      }
      else
      {
        LODWORD(v25) = v14;
        LODWORD(v24) = *(unsigned __int8 *)(v3 + 135);
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          2u,
          0xCu,
          0x11u,
          (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
          v24,
          v25);
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD **)(v3 + 8),
          *(_QWORD *)v3,
          0LL,
          0x20000LL,
          "Enable Slot command returned a SlotId value that is already in use",
          (__int64 *)(a1 + 24),
          a3);
        v16 = 4116;
      }
      Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, v16, 0LL, 0LL, 0LL);
      return;
    }
    WPP_RECORDER_SF_L(v6[9], 3u, 0xCu, 0x13u, (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids, v13);
    if ( *(_BYTE *)(a1 + 60) == 9 )
    {
      memset(v26, 0, sizeof(v26));
      v20 = *(_QWORD *)(v3 + 424);
      LOWORD(v26[0]) = 40;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
        WdfDriverGlobals,
        v20,
        v26);
      *(_DWORD *)(v26[1] + 32LL) |= 2u;
    }
    if ( *(_BYTE *)(v3 + 432) )
    {
      Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4118, 0LL, 0LL, 0LL);
      v11 = 0;
    }
    else
    {
      v11 = 1;
    }
    v12 = -1073741823;
  }
  v21 = *(_QWORD *)(v3 + 176);
  LOBYTE(v9) = 1;
  Endpoint_Disable_Internal(v21, v9, v10);
  ESM_AddEvent((PVOID)(v21 + 288));
  if ( v11 )
  {
    v22 = WdfFunctions_01015;
    v23 = *(_QWORD *)(v3 + 424);
    *(_QWORD *)(v3 + 424) = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v22 + 2104))(WdfDriverGlobals, v23, v12);
  }
}
