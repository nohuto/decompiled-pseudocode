/*
 * XREFs of Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C0012F60
 * Callers:
 *     <none>
 * Callees:
 *     Command_SendCommand @ 0x1C0004578 (Command_SendCommand.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C00068AC (CommonBuffer_ReleaseBuffer.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0010134 (XilEndpoint_CommitStreamContextArrayUpdates.c)
 *     XilEndpoint_FetchStreamContextArray @ 0x1C0010488 (XilEndpoint_FetchStreamContextArray.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0011EBC (Endpoint_GetDequeuePointer.c)
 *     Endpoint_InitializeTransferRing @ 0x1C0011F7C (Endpoint_InitializeTransferRing.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C0014088 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnResetEndpointConfigureCompletion_EpDropped(__int64 a1, int a2)
{
  __int64 *v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 result; // rax
  char v6; // al
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v13; // rcx
  unsigned int i; // ebx
  __int64 DequeuePointer; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(__int64 **)(a1 + 48);
  v3 = *v2;
  v4 = *(_QWORD *)(*(_QWORD *)*v2 + 144LL);
  if ( a2 == 3 )
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v3 + 80),
      4u,
      0xDu,
      0x32u,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL),
      *(_DWORD *)(v3 + 144));
  }
  else
  {
    v6 = *(_BYTE *)(a1 + 60);
    v7 = *(_DWORD *)(v3 + 144);
    v8 = *(_QWORD *)(v3 + 16);
    if ( v6 == 1 )
    {
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v3 + 80),
        4u,
        0xDu,
        0x34u,
        (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
        *(unsigned __int8 *)(v8 + 135),
        *(_DWORD *)(v3 + 144));
      if ( (int)XilEndpoint_FetchStreamContextArray(*(_QWORD *)(v3 + 136), v9, v10) >= 0 )
      {
        v13 = *(_QWORD *)(v3 + 136);
        for ( i = 1; i <= *(_DWORD *)(v13 + 8); v13 = *(_QWORD *)(v3 + 136) )
        {
          Endpoint_InitializeTransferRing((__int64 *)v3, i);
          DequeuePointer = Endpoint_GetDequeuePointer(v3, i);
          v16 = i++;
          v11 = 2 * v16;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 136) + 32LL) + 16LL) + 8 * v11) = DequeuePointer;
        }
        if ( (int)XilEndpoint_CommitStreamContextArrayUpdates(v13, v11, v12) >= 0 )
        {
          Endpoint_SetUpConfigureEndpointCommand(
            v3,
            0,
            (int)Endpoint_OnResetEndpointConfigureCompletion,
            (int)v2,
            v2[1],
            0LL,
            (__int64)&v18,
            v2 + 2);
          v17 = Endpoint_GetDequeuePointer(v3, 0);
          *(_QWORD *)(v18 + 8) = v17;
          return Command_SendCommand(v4, (__int64)(v2 + 2));
        }
      }
    }
    else
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v3 + 80),
        v7,
        13,
        51,
        (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
        *(_BYTE *)(v8 + 135),
        *(_DWORD *)(v3 + 144),
        v6);
      Controller_ReportFatalError(*(_QWORD *)v3, 2, 4119, *(_QWORD *)(v3 + 16), v3, 0LL);
    }
  }
  CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)v3 + 120LL), (_DWORD *)v2[1]);
  v2[1] = 0LL;
  *(_DWORD *)(v3 + 280) = 0;
  _m_prefetchw((const void *)(v3 + 32));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u);
  if ( (result & 2) == 0 )
    return ESM_AddEvent((PVOID)(v3 + 288));
  return result;
}
