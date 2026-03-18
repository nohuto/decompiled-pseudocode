/*
 * XREFs of Endpoint_OnResetEndpointConfigure @ 0x1C0019E64
 * Callers:
 *     ESM_ReconfiguringEndpointOnReset @ 0x1C003EFF0 (ESM_ReconfiguringEndpointOnReset.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Command_SendCommand @ 0x1C000D784 (Command_SendCommand.c)
 *     XilEndpoint_AcquireBuffer @ 0x1C0017374 (XilEndpoint_AcquireBuffer.c)
 *     Endpoint_GetDequeuePointer @ 0x1C001917C (Endpoint_GetDequeuePointer.c)
 *     Endpoint_InitializeTransferRing @ 0x1C0019248 (Endpoint_InitializeTransferRing.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C001B308 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C00333D0 (XilUsbDevice_GetDeviceContextBufferVA.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnResetEndpointConfigure(__int64 a1)
{
  __int64 v2; // r15
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // r14d
  __int64 v6; // rbp
  __int64 v7; // rsi
  int v8; // edx
  _DWORD *v9; // rax
  __int64 v11; // r14
  __int64 DequeuePointer; // rax
  int v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+30h] [rbp-28h]
  int v16; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 272),
         off_1C004E098);
  v5 = *(_DWORD *)(a1 + 144);
  v6 = v4;
  if ( (*(_DWORD *)(v3 + 104) & 4) != 0 )
  {
    if ( *(_BYTE *)(a1 + 1336) )
      v7 = 0LL;
    else
      v7 = XilUsbDevice_GetDeviceContextBufferVA(*(_QWORD *)(a1 + 16)) + (((unsigned int)(v5 - 1) + 1LL) << 6);
    v8 = 2112;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 1336) )
      v7 = 0LL;
    else
      v7 = XilUsbDevice_GetDeviceContextBufferVA(*(_QWORD *)(a1 + 16)) + 32 * ((unsigned int)(v5 - 1) + 1LL);
    v8 = 1056;
  }
  v9 = XilEndpoint_AcquireBuffer((_BYTE *)a1, v8, a1, 846491717);
  *(_QWORD *)(v6 + 8) = v9;
  if ( v9 )
  {
    v16 = *(_DWORD *)(a1 + 144);
    v14 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL);
    if ( *(_BYTE *)(a1 + 37) )
    {
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1 + 80),
        4u,
        0xDu,
        0x30u,
        (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
        v14,
        v16);
      v11 = v6 + 16;
      Endpoint_SetUpConfigureEndpointCommand(
        a1,
        1,
        (int)Endpoint_OnResetEndpointConfigureCompletion_EpDropped,
        v6,
        *(_QWORD *)(v6 + 8),
        v7,
        0LL,
        (void *)(v6 + 16));
    }
    else
    {
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1 + 80),
        4u,
        0xDu,
        0x31u,
        (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
        v14,
        v16);
      v11 = v6 + 16;
      Endpoint_SetUpConfigureEndpointCommand(
        a1,
        2,
        (int)Endpoint_OnResetEndpointConfigureCompletion,
        v6,
        *(_QWORD *)(v6 + 8),
        v7,
        (__int64)&v17,
        (void *)(v6 + 16));
      Endpoint_InitializeTransferRing((__int64 *)a1, 0);
      DequeuePointer = Endpoint_GetDequeuePointer(a1, 0);
      *(_QWORD *)(v17 + 8) = DequeuePointer;
    }
    return Command_SendCommand(v2, v11);
  }
  else
  {
    v15 = *(_DWORD *)(a1 + 144);
    v13 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(a1 + 80),
      2u,
      0xDu,
      0x2Fu,
      (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
      v13,
      v15);
    *(_DWORD *)(a1 + 280) = -1073741670;
    return ESM_AddEvent((PVOID)(a1 + 288));
  }
}
