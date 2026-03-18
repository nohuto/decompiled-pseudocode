/*
 * XREFs of UsbDevice_SetDeviceDisabled @ 0x1C00359BC
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005680 (Controller_WdfEvtDeviceD0Entry.c)
 *     DeviceSlot_DisableAllDeviceSlots @ 0x1C0016450 (DeviceSlot_DisableAllDeviceSlots.c)
 *     UsbDevice_DisableCompletion @ 0x1C0033A70 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C00356A0 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0035E30 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0005F70 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x1C00164A0 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C0016D00 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     Endpoint_Disable_Internal @ 0x1C001849C (Endpoint_Disable_Internal.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00378F8 (WPP_RECORDER_SF_dq.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

char __fastcall UsbDevice_SetDeviceDisabled(__int64 a1)
{
  int v2; // edx
  int v3; // edx
  __int64 v4; // rdi
  __int64 v5; // r15
  int v6; // r8d
  int v7; // edx
  int v8; // r8d
  __int64 *v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *XilCoreDeviceSlotData; // rax
  __int64 v16; // r9
  __int64 v17; // rdx
  char result; // al
  __int64 v19; // [rsp+30h] [rbp-28h]

  v2 = *(unsigned __int8 *)(a1 + 135);
  LOBYTE(v2) = 4;
  WPP_RECORDER_SF_dq(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    v2,
    12,
    56,
    (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
    *(_BYTE *)(a1 + 135),
    *(_QWORD *)a1);
  LOBYTE(v3) = 1;
  v4 = *(_QWORD *)(a1 + 176);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL);
  Endpoint_Disable_Internal(v4, v3, v6);
  ESM_AddEvent((PVOID)(v4 + 288));
  v9 = (__int64 *)(a1 + 184);
  v10 = 30LL;
  do
  {
    v11 = *v9;
    if ( *v9 )
    {
      LOBYTE(v7) = 1;
      Endpoint_Disable_Internal(*v9, v7, v8);
      ESM_AddEvent((PVOID)(v11 + 288));
      *v9 = 0LL;
    }
    ++v9;
    --v10;
  }
  while ( v10 );
  v12 = *(unsigned __int8 *)(a1 + 135);
  if ( *(_BYTE *)(v5 + 80) )
  {
    XilDeviceSlot_SendClearDeviceContextRequest((_QWORD *)(v5 + 16), a1);
    v13 = *(_QWORD *)(v5 + 88);
    if ( *(_BYTE *)(v13 + 80) )
      v14 = *(_QWORD *)(v13 + 24);
    else
      v14 = *(_QWORD *)(v13 + 72);
    *(_QWORD *)(v14 + 8 * v12) = 0LL;
  }
  else
  {
    XilCoreDeviceSlotData = (_QWORD *)DeviceSlot_GetXilCoreDeviceSlotData(*(_QWORD *)(v5 + 88));
    v16 = *(_QWORD *)(XilCoreDeviceSlotData[3] + 16LL);
    *(_QWORD *)(XilCoreDeviceSlotData[7] + 8 * v12) = 0LL;
    *(_QWORD *)(v16 + 8 * v12) = 0LL;
    LODWORD(v19) = v12;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(XilCoreDeviceSlotData[1] + 72LL),
      4u,
      0xAu,
      0xAu,
      (__int64)&WPP_24817aee2eb83995db756ab8f8e1954d_Traceguids,
      a1,
      v19);
  }
  v17 = *(_QWORD *)(a1 + 424);
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_WORD *)(a1 + 134) = 0;
  *(_QWORD *)(a1 + 160) = 0LL;
  result = *(_BYTE *)(a1 + 432);
  if ( v17 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             v17,
             result != 0 ? 0 : 0xC0000001);
  return result;
}
