/*
 * XREFs of UsbDevice_UcxEvtReset @ 0x1C0036D50
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C0005F34 (Controller_IsControllerAccessible.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Command_SendCommand @ 0x1C000D784 (Command_SendCommand.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0016F60 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     Endpoint_Disable_Internal @ 0x1C001849C (Endpoint_Disable_Internal.c)
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C00333D0 (XilUsbDevice_GetDeviceContextBufferVA.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00378F8 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqL @ 0x1C0037C2C (WPP_RECORDER_SF_dqL.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

__int64 __fastcall UsbDevice_UcxEvtReset(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rsi
  int v8; // r9d
  __int64 v9; // rcx
  int v10; // r8d
  unsigned int v11; // edi
  int v12; // edx
  int v13; // r8d
  __int64 *v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // eax
  char v21; // [rsp+28h] [rbp-70h]
  __int64 v22; // [rsp+30h] [rbp-68h]
  unsigned int v23; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v24[5]; // [rsp+48h] [rbp-50h] BYREF

  memset(v24, 0, sizeof(v24));
  LOWORD(v24[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v24);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(v24[1] + 16LL),
         off_1C004E2F0);
  v5 = v3;
  v6 = *(_QWORD **)(v3 + 8);
  v7 = v6[18];
  if ( !*(_BYTE *)(v3 + 134) )
  {
    v8 = 57;
    v22 = *(_QWORD *)v3;
    v21 = *(_BYTE *)(v3 + 135);
LABEL_18:
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_dq(v6[9], v4, 12, v8, (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids, v21, v22);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             0LL);
  }
  v9 = v6[17] + 16LL;
  if ( *(_BYTE *)(v9 + 64) )
  {
    XilDeviceSlot_SendQuerySlotContextInfoRequest((_QWORD *)v9, v3, 0LL, &v23);
    v11 = v23;
  }
  else
  {
    v11 = *(_DWORD *)(XilUsbDevice_GetDeviceContextBufferVA(v3) + 12) >> 27;
  }
  v12 = *(unsigned __int8 *)(v5 + 135);
  LOBYTE(v12) = 4;
  WPP_RECORDER_SF_dqL(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL), v12, v10, 58);
  v6 = *(_QWORD **)(v5 + 8);
  if ( v11 < 2 )
  {
    v8 = 59;
    v4 = *(unsigned __int8 *)(v5 + 135);
    v22 = *(_QWORD *)v5;
    v21 = *(_BYTE *)(v5 + 135);
    goto LABEL_18;
  }
  if ( !Controller_IsControllerAccessible((__int64)v6) )
  {
    v14 = (__int64 *)(v5 + 184);
    v15 = 30LL;
    do
    {
      v16 = *v14;
      if ( *v14 )
      {
        Endpoint_Disable_Internal(*v14, 0, v13);
        ESM_AddEvent((PVOID)(v16 + 288));
      }
      ++v14;
      --v15;
    }
    while ( v15 );
    *(_DWORD *)(v5 + 152) = 3;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             0LL);
  }
  v17 = *(_QWORD *)(v5 + 8);
  *(_QWORD *)(v5 + 424) = a2;
  *(_BYTE *)(v5 + 432) = 1;
  v18 = *(_QWORD *)(v17 + 272);
  *(_QWORD *)(v5 + 512) = 0LL;
  *(_DWORD *)(v5 + 520) = 0;
  *(_DWORD *)(v5 + 524) = 0;
  *(_QWORD *)(v5 + 488) = v5;
  if ( (v18 & 0x8000) != 0 )
  {
    *(_QWORD *)(v5 + 480) = UsbDevice_OnResetDisableCompletion;
    v19 = *(_DWORD *)(v5 + 476) & 0xFFFF03FF | 0x2800;
  }
  else
  {
    *(_QWORD *)(v5 + 480) = UsbDevice_DeviceResetCompletion;
    v19 = *(_DWORD *)(v5 + 476) & 0xFFFF03FF | 0x4400;
  }
  *(_QWORD *)(v5 + 528) = 0LL;
  *(_DWORD *)(v5 + 476) = v19;
  *(_BYTE *)(v5 + 479) = *(_BYTE *)(v5 + 135);
  return Command_SendCommand(v7, v5 + 440);
}
