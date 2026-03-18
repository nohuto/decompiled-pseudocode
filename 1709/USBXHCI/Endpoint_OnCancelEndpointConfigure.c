/*
 * XREFs of Endpoint_OnCancelEndpointConfigure @ 0x1C0019368
 * Callers:
 *     ESM_ReconfiguringEndpointAfterStop @ 0x1C003EFD0 (ESM_ReconfiguringEndpointAfterStop.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     Command_SendCommand @ 0x1C000D784 (Command_SendCommand.c)
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 *     XilEndpoint_AcquireBuffer @ 0x1C0017374 (XilEndpoint_AcquireBuffer.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C001B308 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C00333D0 (XilUsbDevice_GetDeviceContextBufferVA.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnCancelEndpointConfigure(__int64 *a1)
{
  int v2; // ebp
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rsi
  int v6; // edx
  _DWORD *v7; // rax
  __int64 result; // rax
  __int64 v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+30h] [rbp-28h]

  v2 = *((_DWORD *)a1 + 36);
  v3 = *(_QWORD *)(*a1 + 144);
  v4 = *(_QWORD *)(*a1 + 88);
  WPP_RECORDER_SF_dd(
    a1[10],
    4u,
    0xDu,
    0x43u,
    (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
    *(unsigned __int8 *)(a1[2] + 135),
    v2);
  if ( (*(_DWORD *)(v4 + 104) & 4) != 0 )
  {
    if ( *((_BYTE *)a1 + 1336) )
      v5 = 0LL;
    else
      v5 = XilUsbDevice_GetDeviceContextBufferVA(a1[2]) + (((unsigned int)(v2 - 1) + 1LL) << 6);
    v6 = 2112;
  }
  else
  {
    if ( *((_BYTE *)a1 + 1336) )
      v5 = 0LL;
    else
      v5 = XilUsbDevice_GetDeviceContextBufferVA(a1[2]) + 32 * ((unsigned int)(v2 - 1) + 1LL);
    v6 = 1056;
  }
  v7 = XilEndpoint_AcquireBuffer(a1, v6, (__int64)a1, 846491717);
  a1[32] = (__int64)v7;
  if ( v7 )
  {
    Endpoint_SetUpConfigureEndpointCommand(
      (int)a1,
      1,
      (int)Endpoint_OnCancelEndpointConfigureCompletion_EpDropped,
      (int)a1,
      (__int64)v7,
      v5,
      0LL,
      a1 + 20);
    return Command_SendCommand(v3, (__int64)(a1 + 20));
  }
  else
  {
    LODWORD(v10) = *((_DWORD *)a1 + 36);
    LODWORD(v9) = *(unsigned __int8 *)(a1[2] + 135);
    WPP_RECORDER_SF_dd(a1[10], 2u, 0xDu, 0x44u, (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids, v9, v10);
    Controller_ReportFatalError(*a1, 2, 0, a1[2], (__int64)a1, 0LL);
    _m_prefetchw(a1 + 4);
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)a1 + 8, 2u);
    if ( (result & 2) == 0 )
      return ESM_AddEvent(a1 + 36);
  }
  return result;
}
