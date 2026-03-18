/*
 * XREFs of UsbDevice_DisableCompletion @ 0x1C0033A70
 * Callers:
 *     UsbDevice_DisableCompletionReturnFailure @ 0x1C0033D60 (UsbDevice_DisableCompletionReturnFailure.c)
 *     UsbDevice_DisableCompletionReturnSuccess @ 0x1C0033D80 (UsbDevice_DisableCompletionReturnSuccess.c)
 *     UsbDevice_OnResetDisableCompletion @ 0x1C0034EF0 (UsbDevice_OnResetDisableCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Command_SendCommand @ 0x1C000D784 (Command_SendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x1C00164A0 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C0016D00 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     Endpoint_Disable_Internal @ 0x1C001849C (Endpoint_Disable_Internal.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C00359BC (UsbDevice_SetDeviceDisabled.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00378F8 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqL @ 0x1C0037C2C (WPP_RECORDER_SF_dqL.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 *     XilCoreDeviceSlot_ClearDeviceContext @ 0x1C0041030 (XilCoreDeviceSlot_ClearDeviceContext.c)
 */

void __fastcall UsbDevice_DisableCompletion(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  char v6; // r13
  int v7; // edx
  __int64 v8; // r8
  char v9; // al
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // r8d
  __int64 v14; // rdi
  __int64 *v15; // r14
  __int64 v16; // r15
  __int64 v17; // rbp
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 XilCoreDeviceSlotData; // rax
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdx
  PWDF_DRIVER_GLOBALS v26; // rcx
  __int64 v27; // [rsp+70h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 48);
  v6 = 1;
  if ( a2 == 3 )
  {
    v7 = *(unsigned __int8 *)(v3 + 135);
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v7,
      12,
      53,
      (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
      *(_BYTE *)(v3 + 135),
      *(_QWORD *)v3);
    UsbDevice_SetDeviceDisabled(v3);
LABEL_3:
    v6 = 0;
    v8 = 3221225473LL;
    goto LABEL_21;
  }
  v9 = *(_BYTE *)(a1 + 60);
  if ( v9 != 1 && v9 != 11 )
  {
    v10 = *(unsigned __int8 *)(a1 + 61);
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_dqL(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v10, a3, 55);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)(v3 + 8),
      *(_QWORD *)v3,
      0LL,
      0x100000LL,
      "Disable Slot Command failed",
      (__int64 *)(a1 + 24),
      0LL);
    Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4120, 0LL, 0LL, 0LL);
    goto LABEL_3;
  }
  v11 = *(unsigned __int8 *)(a1 + 61);
  LOBYTE(v11) = 4;
  WPP_RECORDER_SF_dq(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    v11,
    12,
    54,
    (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
    *(_BYTE *)(a1 + 61),
    *(_QWORD *)v3);
  v27 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 136LL);
  if ( a3 != 2 )
  {
    v14 = *(_QWORD *)(v3 + 176);
    LOBYTE(v12) = 1;
    Endpoint_Disable_Internal(v14, v12, v13);
    ESM_AddEvent((PVOID)(v14 + 288));
  }
  v15 = (__int64 *)(v3 + 184);
  v16 = 30LL;
  do
  {
    v17 = *v15;
    if ( *v15 )
    {
      LOBYTE(v12) = 1;
      Endpoint_Disable_Internal(*v15, v12, v13);
      ESM_AddEvent((PVOID)(v17 + 288));
      *v15 = 0LL;
    }
    ++v15;
    --v16;
  }
  while ( v16 );
  v18 = *(unsigned __int8 *)(v3 + 135);
  if ( *(_BYTE *)(v27 + 80) )
  {
    XilDeviceSlot_SendClearDeviceContextRequest((_QWORD *)(v27 + 16), v3);
    v19 = *(_QWORD *)(v27 + 88);
    if ( *(_BYTE *)(v19 + 80) )
      v20 = *(_QWORD *)(v19 + 24);
    else
      v20 = *(_QWORD *)(v19 + 72);
    *(_QWORD *)(v20 + 8 * v18) = 0LL;
  }
  else
  {
    XilCoreDeviceSlotData = DeviceSlot_GetXilCoreDeviceSlotData(*(_QWORD *)(v27 + 88));
    XilCoreDeviceSlot_ClearDeviceContext(XilCoreDeviceSlotData, v3, (unsigned int)v18);
  }
  *(_WORD *)(v3 + 134) = 0;
  v8 = 0LL;
  *(_QWORD *)(v3 + 160) = 0LL;
  if ( a3 == 2 )
  {
    memset((void *)(v3 + 440), 0, 0x60uLL);
    v22 = *(_QWORD *)(v3 + 8);
    *(_QWORD *)(v3 + 480) = UsbDevice_EnableCompletion;
    v23 = *(_DWORD *)(v3 + 476) & 0xFFFF27FF;
    *(_QWORD *)(v3 + 488) = v3;
    *(_QWORD *)(v3 + 512) = 0LL;
    *(_DWORD *)(v3 + 476) = v23 | 0x2400;
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_QWORD *)(v3 + 528) = 0LL;
    Command_SendCommand(*(_QWORD *)(v22 + 144), v3 + 440);
    return;
  }
LABEL_21:
  if ( a3 == 1 )
    v8 = 3221225473LL;
  if ( v6 )
  {
    v24 = WdfFunctions_01015;
    v25 = *(_QWORD *)(v3 + 424);
    v26 = WdfDriverGlobals;
    *(_QWORD *)(v3 + 424) = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v24 + 2104))(v26, v25, v8);
  }
}
