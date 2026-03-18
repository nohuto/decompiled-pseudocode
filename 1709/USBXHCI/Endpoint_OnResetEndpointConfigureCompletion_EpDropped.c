/*
 * XREFs of Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C001A260
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     Command_SendCommand @ 0x1C000D784 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000E154 (WPP_RECORDER_SF_ddL.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C000FA0C (CommonBuffer_ReleaseBuffer.c)
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0017504 (XilEndpoint_CommitStreamContextArrayUpdates.c)
 *     XilEndpoint_FetchStreamContextArray @ 0x1C0017820 (XilEndpoint_FetchStreamContextArray.c)
 *     Endpoint_GetDequeuePointer @ 0x1C001917C (Endpoint_GetDequeuePointer.c)
 *     Endpoint_InitializeTransferRing @ 0x1C0019248 (Endpoint_InitializeTransferRing.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C001B308 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnResetEndpointConfigureCompletion_EpDropped(__int64 a1, int a2)
{
  __int64 *v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 result; // rax
  unsigned __int8 v6; // al
  __int64 v7; // rdx
  int v8; // r8d
  __int64 v9; // rdx
  int v10; // r8d
  unsigned int i; // ebx
  __int64 DequeuePointer; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // [rsp+28h] [rbp-20h]
  int v16; // [rsp+28h] [rbp-20h]
  int v17; // [rsp+28h] [rbp-20h]
  int v18; // [rsp+30h] [rbp-18h]
  int v19; // [rsp+30h] [rbp-18h]
  int v20; // [rsp+30h] [rbp-18h]
  int v21; // [rsp+38h] [rbp-10h]
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(__int64 **)(a1 + 48);
  v3 = *v2;
  v4 = *(_QWORD *)(*(_QWORD *)*v2 + 144LL);
  if ( a2 == 3 )
  {
    v18 = *(_DWORD *)(v3 + 144);
    v15 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v3 + 80),
      4u,
      0xDu,
      0x32u,
      (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
      v15,
      v18);
  }
  else
  {
    v6 = *(_BYTE *)(a1 + 60);
    if ( v6 == 1 )
    {
      v20 = *(_DWORD *)(v3 + 144);
      v17 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL);
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v3 + 80),
        4u,
        0xDu,
        0x34u,
        (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
        v17,
        v20);
      if ( (int)XilEndpoint_FetchStreamContextArray(*(_QWORD *)(v3 + 136), v7, v8) >= 0 )
      {
        for ( i = 1;
              i <= *(_DWORD *)(*(_QWORD *)(v3 + 136) + 8LL);
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 136) + 32LL) + 16LL) + 8 * v9) = DequeuePointer )
        {
          Endpoint_InitializeTransferRing((__int64 *)v3, i);
          DequeuePointer = Endpoint_GetDequeuePointer(v3, i);
          v13 = i++;
          v9 = 2 * v13;
        }
        if ( (int)XilEndpoint_CommitStreamContextArrayUpdates(*(_QWORD *)(v3 + 136), v9, v10) >= 0 )
        {
          Endpoint_SetUpConfigureEndpointCommand(
            v3,
            0,
            (int)Endpoint_OnResetEndpointConfigureCompletion,
            (int)v2,
            v2[1],
            0LL,
            (__int64)&v22,
            v2 + 2);
          v14 = Endpoint_GetDequeuePointer(v3, 0);
          *(_QWORD *)(v22 + 8) = v14;
          return Command_SendCommand(v4, (__int64)(v2 + 2));
        }
      }
    }
    else
    {
      v21 = v6;
      v19 = *(_DWORD *)(v3 + 144);
      v16 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL);
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v3 + 80),
        2u,
        0xDu,
        0x33u,
        (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
        v16,
        v19,
        v21);
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
