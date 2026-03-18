/*
 * XREFs of UsbDevice_DisableCompletion @ 0x1C0031580
 * Callers:
 *     UsbDevice_DisableCompletionReturnFailure @ 0x1C0031850 (UsbDevice_DisableCompletionReturnFailure.c)
 *     UsbDevice_DisableCompletionReturnSuccess @ 0x1C0031870 (UsbDevice_DisableCompletionReturnSuccess.c)
 *     UsbDevice_OnResetDisableCompletion @ 0x1C0032AB0 (UsbDevice_OnResetDisableCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     Command_SendCommand @ 0x1C0004578 (Command_SendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0008150 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x1C000F044 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C000F8A4 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     Endpoint_Disable @ 0x1C00110F8 (Endpoint_Disable.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C0033598 (UsbDevice_SetDeviceDisabled.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00354D8 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqL @ 0x1C003580C (WPP_RECORDER_SF_dqL.c)
 *     XilCoreDeviceSlot_ClearDeviceContext @ 0x1C003F72C (XilCoreDeviceSlot_ClearDeviceContext.c)
 */

void __fastcall UsbDevice_DisableCompletion(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  char v6; // r15
  int v7; // edx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  char v11; // al
  int v12; // edx
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 **v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 XilCoreDeviceSlotData; // rax
  __int64 v22; // rcx
  unsigned int v23; // eax

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
      55,
      (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids,
      *(_BYTE *)(v3 + 135),
      *(_QWORD *)v3);
    UsbDevice_SetDeviceDisabled(v3);
LABEL_3:
    v6 = 0;
    v8 = 3221225473LL;
    goto LABEL_4;
  }
  v11 = *(_BYTE *)(a1 + 60);
  if ( v11 != 1 && v11 != 11 )
  {
    v12 = *(unsigned __int8 *)(a1 + 61);
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_dqL(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v12, a3, 57);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)(v3 + 8),
      *(_QWORD *)v3,
      0,
      0x100000LL,
      "Disable Slot Command failed",
      (_QWORD *)(a1 + 24),
      0LL);
    Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4120, 0LL, 0LL, 0LL);
    goto LABEL_3;
  }
  v13 = *(unsigned __int8 *)(a1 + 61);
  LOBYTE(v13) = 4;
  WPP_RECORDER_SF_dq(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    v13,
    12,
    56,
    (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids,
    *(_BYTE *)(a1 + 61),
    *(_QWORD *)v3);
  v15 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 136LL);
  if ( a3 != 2 )
  {
    LOBYTE(v14) = 1;
    Endpoint_Disable(*(__int64 **)(v3 + 176), v14);
  }
  v16 = (__int64 **)(v3 + 184);
  v17 = 30LL;
  do
  {
    if ( *v16 )
    {
      LOBYTE(v14) = 1;
      Endpoint_Disable(*v16, v14);
      *v16 = 0LL;
    }
    ++v16;
    --v17;
  }
  while ( v17 );
  v18 = *(unsigned __int8 *)(v3 + 135);
  if ( *(_BYTE *)(v15 + 80) )
  {
    XilDeviceSlot_SendClearDeviceContextRequest((_QWORD *)(v15 + 16), v3);
    v19 = *(_QWORD *)(v15 + 88);
    if ( *(_BYTE *)(v19 + 80) )
      v20 = *(_QWORD *)(v19 + 24);
    else
      v20 = *(_QWORD *)(v19 + 72);
    *(_QWORD *)(v20 + 8 * v18) = 0LL;
  }
  else
  {
    XilCoreDeviceSlotData = DeviceSlot_GetXilCoreDeviceSlotData(*(_QWORD *)(v15 + 88));
    XilCoreDeviceSlot_ClearDeviceContext(XilCoreDeviceSlotData, v3, (unsigned int)v18);
  }
  *(_WORD *)(v3 + 134) = 0;
  *(_QWORD *)(v3 + 160) = 0LL;
  v8 = 0LL;
  if ( a3 == 2 )
  {
    memset((void *)(v3 + 440), 0, 0x60uLL);
    v22 = *(_QWORD *)(v3 + 8);
    *(_QWORD *)(v3 + 512) = 0LL;
    *(_DWORD *)(v3 + 520) = 0;
    *(_DWORD *)(v3 + 524) = 0;
    *(_QWORD *)(v3 + 528) = 0LL;
    *(_QWORD *)(v3 + 480) = UsbDevice_EnableCompletion;
    v23 = *(_DWORD *)(v3 + 476) & 0xFFFF27FF;
    *(_QWORD *)(v3 + 488) = v3;
    *(_DWORD *)(v3 + 476) = v23 | 0x2400;
    Command_SendCommand(*(_QWORD *)(v22 + 144), v3 + 440);
    return;
  }
LABEL_4:
  if ( a3 == 1 )
    v8 = 3221225473LL;
  if ( v6 )
  {
    v9 = WdfFunctions_01023;
    v10 = *(_QWORD *)(v3 + 424);
    *(_QWORD *)(v3 + 424) = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v9 + 2104))(WdfDriverGlobals, v10, v8);
  }
}
