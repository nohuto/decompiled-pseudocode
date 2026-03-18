/*
 * XREFs of Endpoint_OnResetEndpointConfigure @ 0x1C0012B88
 * Callers:
 *     ESM_ReconfiguringEndpointOnReset @ 0x1C003D680 (ESM_ReconfiguringEndpointOnReset.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Command_SendCommand @ 0x1C0004578 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     XilEndpoint_AcquireBuffer @ 0x1C000FF24 (XilEndpoint_AcquireBuffer.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0011EBC (Endpoint_GetDequeuePointer.c)
 *     Endpoint_InitializeTransferRing @ 0x1C0011F7C (Endpoint_InitializeTransferRing.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C0014088 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1C003FC54 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 */

__int64 __fastcall Endpoint_OnResetEndpointConfigure(int *a1)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp
  char v7; // cl
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 DeviceContextBufferVA; // rax
  int v11; // r8d
  __int64 v12; // rbx
  unsigned int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // r8d
  char *v18; // rax
  __int64 v19; // rcx
  __int64 v21; // r10
  __int64 DequeuePointer; // rax
  int v23; // [rsp+28h] [rbp-30h]
  int v24; // [rsp+30h] [rbp-28h]
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         *((_QWORD *)a1 + 34),
         off_1C004B098);
  v5 = *((_QWORD *)a1 + 2);
  v6 = v4;
  v7 = *(_BYTE *)(v5 + 610);
  if ( (*(_DWORD *)(v3 + 104) & 4) != 0 )
  {
    if ( v7 )
    {
      v8 = v5 + 560;
      v9 = v8 + 8;
      if ( !*(_BYTE *)(v8 + 49) )
        v9 = v8;
      DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(v9);
      v12 = DeviceContextBufferVA + (((unsigned int)(v11 - 1) + 1LL) << 6);
    }
    else
    {
      v12 = 0LL;
    }
    v13 = 2112;
  }
  else
  {
    if ( v7 )
    {
      v14 = v5 + 560;
      v15 = v14 + 8;
      if ( !*(_BYTE *)(v14 + 49) )
        v15 = v14;
      v16 = XilCoreUsbDevice_GetDeviceContextBufferVA(v15);
      v12 = v16 + 32 * ((unsigned int)(v17 - 1) + 1LL);
    }
    else
    {
      v12 = 0LL;
    }
    v13 = 1056;
  }
  v18 = XilEndpoint_AcquireBuffer(a1, v13, (__int64)a1, 846491717);
  *(_QWORD *)(v6 + 8) = v18;
  v19 = *((_QWORD *)a1 + 2);
  if ( v18 )
  {
    v21 = *((_QWORD *)a1 + 10);
    v24 = a1[36];
    v23 = *(unsigned __int8 *)(v19 + 135);
    if ( *((_BYTE *)a1 + 37) )
    {
      WPP_RECORDER_SF_dd(v21, 4u, 0xDu, 0x30u, (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids, v23, v24);
      Endpoint_SetUpConfigureEndpointCommand(
        (int)a1,
        1,
        (int)Endpoint_OnResetEndpointConfigureCompletion_EpDropped,
        v6,
        *(_QWORD *)(v6 + 8),
        v12,
        0LL,
        (void *)(v6 + 16));
    }
    else
    {
      WPP_RECORDER_SF_dd(v21, 4u, 0xDu, 0x31u, (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids, v23, v24);
      Endpoint_SetUpConfigureEndpointCommand(
        (int)a1,
        2,
        (int)Endpoint_OnResetEndpointConfigureCompletion,
        v6,
        *(_QWORD *)(v6 + 8),
        v12,
        (__int64)&v25,
        (void *)(v6 + 16));
      Endpoint_InitializeTransferRing((__int64 *)a1, 0);
      DequeuePointer = Endpoint_GetDequeuePointer((__int64)a1, 0);
      *(_QWORD *)(v25 + 8) = DequeuePointer;
    }
    return Command_SendCommand(v2, v6 + 16);
  }
  else
  {
    WPP_RECORDER_SF_dd(
      *((_QWORD *)a1 + 10),
      2u,
      0xDu,
      0x2Fu,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      *(unsigned __int8 *)(v19 + 135),
      a1[36]);
    a1[70] = -1073741670;
    return ESM_AddEvent(a1 + 72);
  }
}
