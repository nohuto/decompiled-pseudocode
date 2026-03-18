/*
 * XREFs of Endpoint_OnCancelEndpointConfigure @ 0x1C001209C
 * Callers:
 *     ESM_ReconfiguringEndpointAfterStop @ 0x1C003D660 (ESM_ReconfiguringEndpointAfterStop.c)
 * Callees:
 *     Command_SendCommand @ 0x1C0004578 (Command_SendCommand.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     XilEndpoint_AcquireBuffer @ 0x1C000FF24 (XilEndpoint_AcquireBuffer.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C0014088 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1C003FC54 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 */

__int64 __fastcall Endpoint_OnCancelEndpointConfigure(_QWORD *a1)
{
  int v2; // ebp
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rdx
  char v6; // cl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rcx
  char *v13; // rax
  __int64 result; // rax
  __int64 v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-28h]

  v2 = *((_DWORD *)a1 + 36);
  v3 = *(_QWORD *)(*a1 + 144LL);
  v4 = *(_QWORD *)(*a1 + 88LL);
  WPP_RECORDER_SF_dd(
    a1[10],
    4u,
    0xDu,
    0x43u,
    (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
    *(unsigned __int8 *)(a1[2] + 135LL),
    v2);
  v5 = a1[2];
  v6 = *(_BYTE *)(v5 + 610);
  if ( (*(_DWORD *)(v4 + 104) & 4) != 0 )
  {
    if ( v6 )
    {
      v7 = v5 + 560;
      v8 = v7 + 8;
      if ( !*(_BYTE *)(v7 + 49) )
        v8 = v7;
      v9 = XilCoreUsbDevice_GetDeviceContextBufferVA(v8) + (((unsigned int)(v2 - 1) + 1LL) << 6);
    }
    else
    {
      v9 = 0LL;
    }
    v10 = 2112;
  }
  else
  {
    if ( v6 )
    {
      v11 = v5 + 560;
      v12 = v11 + 8;
      if ( !*(_BYTE *)(v11 + 49) )
        v12 = v11;
      v9 = XilCoreUsbDevice_GetDeviceContextBufferVA(v12) + 32 * ((unsigned int)(v2 - 1) + 1LL);
    }
    else
    {
      v9 = 0LL;
    }
    v10 = 1056;
  }
  v13 = XilEndpoint_AcquireBuffer(a1, v10, (__int64)a1, 846491717);
  a1[32] = v13;
  if ( v13 )
  {
    Endpoint_SetUpConfigureEndpointCommand(
      (int)a1,
      1,
      (int)Endpoint_OnCancelEndpointConfigureCompletion_EpDropped,
      (int)a1,
      (__int64)v13,
      v9,
      0LL,
      a1 + 20);
    return Command_SendCommand(v3, (__int64)(a1 + 20));
  }
  else
  {
    LODWORD(v16) = *((_DWORD *)a1 + 36);
    LODWORD(v15) = *(unsigned __int8 *)(a1[2] + 135LL);
    WPP_RECORDER_SF_dd(a1[10], 2u, 0xDu, 0x44u, (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids, v15, v16);
    Controller_ReportFatalError(*a1, 2, 0, a1[2], (__int64)a1, 0LL);
    _m_prefetchw(a1 + 4);
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)a1 + 8, 2u);
    if ( (result & 2) == 0 )
      return ESM_AddEvent(a1 + 36);
  }
  return result;
}
