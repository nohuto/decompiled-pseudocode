/*
 * XREFs of UsbDevice_SetDeviceDisabled @ 0x1C0033598
 * Callers:
 *     DeviceSlot_DisableAllDeviceSlots @ 0x1C000EFF4 (DeviceSlot_DisableAllDeviceSlots.c)
 *     UsbDevice_DisableCompletion @ 0x1C0031580 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0033250 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C00339E0 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0005024 (WPP_RECORDER_SF_qd.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x1C000F044 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C000F8A4 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     Endpoint_Disable @ 0x1C00110F8 (Endpoint_Disable.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00354D8 (WPP_RECORDER_SF_dq.c)
 */

char __fastcall UsbDevice_SetDeviceDisabled(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rdx
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 **v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *XilCoreDeviceSlotData; // rax
  __int64 v12; // r9
  __int64 v13; // rdx
  char result; // al
  __int64 v15; // [rsp+30h] [rbp-18h]

  v2 = *(unsigned __int8 *)(a1 + 135);
  LOBYTE(v2) = 4;
  WPP_RECORDER_SF_dq(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    v2,
    12,
    58,
    (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids,
    *(_BYTE *)(a1 + 135),
    *(_QWORD *)a1);
  LOBYTE(v3) = 1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL);
  Endpoint_Disable(*(__int64 **)(a1 + 176), v3);
  v6 = (__int64 **)(a1 + 184);
  v7 = 30LL;
  do
  {
    if ( *v6 )
    {
      LOBYTE(v5) = 1;
      Endpoint_Disable(*v6, v5);
      *v6 = 0LL;
    }
    ++v6;
    --v7;
  }
  while ( v7 );
  v8 = *(unsigned __int8 *)(a1 + 135);
  if ( *(_BYTE *)(v4 + 80) )
  {
    XilDeviceSlot_SendClearDeviceContextRequest((_QWORD *)(v4 + 16), a1);
    v9 = *(_QWORD *)(v4 + 88);
    if ( *(_BYTE *)(v9 + 80) )
      v10 = *(_QWORD *)(v9 + 24);
    else
      v10 = *(_QWORD *)(v9 + 72);
    *(_QWORD *)(v10 + 8 * v8) = 0LL;
  }
  else
  {
    XilCoreDeviceSlotData = (_QWORD *)DeviceSlot_GetXilCoreDeviceSlotData(*(_QWORD *)(v4 + 88));
    v12 = *(_QWORD *)(XilCoreDeviceSlotData[3] + 16LL);
    *(_QWORD *)(XilCoreDeviceSlotData[7] + 8 * v8) = 0LL;
    *(_QWORD *)(v12 + 8 * v8) = 0LL;
    LODWORD(v15) = v8;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(XilCoreDeviceSlotData[1] + 72LL),
      4u,
      0xAu,
      0xAu,
      (__int64)&WPP_13340aaa62fe39736047da1387542cf1_Traceguids,
      a1,
      v15);
  }
  v13 = *(_QWORD *)(a1 + 424);
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_WORD *)(a1 + 134) = 0;
  *(_QWORD *)(a1 + 160) = 0LL;
  result = *(_BYTE *)(a1 + 432);
  if ( v13 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             v13,
             result != 0 ? 0 : 0xC0000001);
  return result;
}
