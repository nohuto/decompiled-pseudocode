/*
 * XREFs of Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C00123D0
 * Callers:
 *     <none>
 * Callees:
 *     Command_SendCommand @ 0x1C0004578 (Command_SendCommand.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C00068AC (CommonBuffer_ReleaseBuffer.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0011EBC (Endpoint_GetDequeuePointer.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C0014088 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnCancelEndpointConfigureCompletion_EpDropped(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  char v4; // al
  int v5; // edx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 DequeuePointer; // rax
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(*(_QWORD *)v2 + 144LL);
  if ( a2 == 3 )
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v2 + 80),
      4u,
      0xDu,
      0x45u,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 135LL),
      *(_DWORD *)(v2 + 144));
  }
  else
  {
    v4 = *(_BYTE *)(a1 + 60);
    v5 = *(_DWORD *)(v2 + 144);
    v6 = *(_QWORD *)(v2 + 16);
    if ( v4 == 1 )
    {
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v2 + 80),
        4u,
        0xDu,
        0x47u,
        (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
        *(unsigned __int8 *)(v6 + 135),
        *(_DWORD *)(v2 + 144));
      Endpoint_SetUpConfigureEndpointCommand(
        v2,
        0,
        (int)Endpoint_OnCancelEndpointConfigureCompletion,
        v2,
        *(_QWORD *)(v2 + 256),
        0LL,
        (__int64)&v9,
        (void *)(v2 + 160));
      DequeuePointer = Endpoint_GetDequeuePointer(v2, 0);
      *(_QWORD *)(v9 + 8) = DequeuePointer;
      return Command_SendCommand(v3, v2 + 160);
    }
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v2 + 80),
      v5,
      13,
      70,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      *(_BYTE *)(v6 + 135),
      *(_DWORD *)(v2 + 144),
      v4);
    Controller_ReportFatalError(*(_QWORD *)v2, 2, 4119, *(_QWORD *)(v2 + 16), v2, 0LL);
  }
  CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)v2 + 120LL), *(_DWORD **)(v2 + 256));
  *(_QWORD *)(v2 + 256) = 0LL;
  _m_prefetchw((const void *)(v2 + 32));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v2 + 32), 2u);
  if ( (result & 2) == 0 )
    return ESM_AddEvent((PVOID)(v2 + 288));
  return result;
}
