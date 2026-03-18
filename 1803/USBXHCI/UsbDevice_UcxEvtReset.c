/*
 * XREFs of UsbDevice_UcxEvtReset @ 0x1C00348F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     Command_SendCommand @ 0x1C0004578 (Command_SendCommand.c)
 *     Controller_IsControllerAccessible @ 0x1C0008A48 (Controller_IsControllerAccessible.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C000FB04 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     Endpoint_Disable @ 0x1C00110F8 (Endpoint_Disable.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00354D8 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqL @ 0x1C003580C (WPP_RECORDER_SF_dqL.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1C003FC54 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 */

__int64 __fastcall UsbDevice_UcxEvtReset(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // rbx
  _QWORD *v6; // r10
  __int64 v7; // rsi
  int v8; // r9d
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r10
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 **v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rax
  char v20; // r8
  int v21; // ecx
  __int64 v22; // rdx
  unsigned int v23; // ecx
  void *v24; // rax
  char v26; // [rsp+28h] [rbp-60h]
  __int64 v27; // [rsp+30h] [rbp-58h]
  unsigned int v28; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v29[5]; // [rsp+48h] [rbp-40h] BYREF

  memset(v29, 0, sizeof(v29));
  LOWORD(v29[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v29);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(v29[1] + 16LL),
         off_1C004B2F0);
  v5 = v3;
  v6 = *(_QWORD **)(v3 + 8);
  v7 = v6[18];
  if ( !*(_BYTE *)(v3 + 134) )
  {
    v8 = 59;
    v27 = *(_QWORD *)v3;
    v26 = *(_BYTE *)(v3 + 135);
    v9 = v6[9];
LABEL_25:
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_dq(v9, v4, 12, v8, (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids, v26, v27);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             0LL);
  }
  v10 = *(_QWORD *)(*(_QWORD *)(v6[17] + 88LL) + 8LL);
  if ( *(_BYTE *)(v6[17] + 80LL) && (*(_BYTE *)(v3 + 608) && *(_DWORD *)(v10 + 444) == 2 || *(_DWORD *)(v10 + 444) == 1) )
  {
    XilDeviceSlot_SendQuerySlotContextInfoRequest((_QWORD *)(v6[17] + 16LL), v3, 0LL, &v28);
    v13 = *(_QWORD *)(v5 + 8);
    v14 = v28;
  }
  else
  {
    v15 = v3 + 568;
    if ( !*(_BYTE *)(v3 + 609) )
      v15 = v3 + 560;
    v14 = *(_DWORD *)(XilCoreUsbDevice_GetDeviceContextBufferVA(v15) + 12) >> 27;
  }
  LOBYTE(v11) = 4;
  WPP_RECORDER_SF_dqL(*(_QWORD *)(v13 + 72), v11, v12, 60);
  v16 = *(_QWORD *)(v5 + 8);
  if ( v14 < 2 )
  {
    v8 = 61;
    v4 = *(unsigned __int8 *)(v5 + 135);
    v9 = *(_QWORD *)(v16 + 72);
    v27 = *(_QWORD *)v5;
    v26 = *(_BYTE *)(v5 + 135);
    goto LABEL_25;
  }
  if ( !Controller_IsControllerAccessible(v16) )
  {
    v17 = (__int64 **)(v5 + 184);
    v18 = 30LL;
    do
    {
      if ( *v17 )
        Endpoint_Disable(*v17, 0LL);
      ++v17;
      --v18;
    }
    while ( v18 );
    *(_DWORD *)(v5 + 152) = 3;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             0LL);
  }
  v19 = *(_QWORD *)(v5 + 8);
  v20 = *(_BYTE *)(v5 + 135);
  v21 = *(_DWORD *)(v5 + 476);
  *(_QWORD *)(v5 + 424) = a2;
  *(_BYTE *)(v5 + 432) = 1;
  v22 = *(_QWORD *)(v19 + 272) & 0x8000LL;
  if ( (*(_QWORD *)(v19 + 272) & 0x8000) != 0 )
    v23 = v21 & 0xFFFF03FF | 0x2800;
  else
    v23 = v21 & 0xFFFF03FF | 0x4400;
  v24 = UsbDevice_OnResetDisableCompletion;
  if ( !v22 )
    v24 = UsbDevice_DeviceResetCompletion;
  *(_QWORD *)(v5 + 480) = v24;
  *(_QWORD *)(v5 + 488) = v5;
  *(_DWORD *)(v5 + 476) = v23;
  *(_BYTE *)(v5 + 479) = v20;
  *(_QWORD *)(v5 + 512) = 0LL;
  *(_DWORD *)(v5 + 520) = 0;
  *(_DWORD *)(v5 + 524) = 0;
  *(_QWORD *)(v5 + 528) = 0LL;
  return Command_SendCommand(v7, v5 + 440);
}
