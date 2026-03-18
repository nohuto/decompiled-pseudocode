/*
 * XREFs of Endpoint_OnResetEndpointResetCompletion @ 0x1C001A4A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000E154 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 *     XilEndpoint_FetchStreamContextArray @ 0x1C0017820 (XilEndpoint_FetchStreamContextArray.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C001A69C (Endpoint_OnResetSetDequeuePointer.c)
 *     UsbDevice_GetEndpointState @ 0x1C0034B64 (UsbDevice_GetEndpointState.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnResetEndpointResetCompletion(__int64 a1, int a2, __int64 *a3)
{
  __int64 *v3; // rsi
  __int64 v6; // rbx
  int StreamContextArray; // eax
  __int64 result; // rax
  unsigned __int8 v9; // al
  __int64 v10; // rdx
  int v11; // r8d
  __int64 v12; // rcx
  unsigned int i; // edi
  int v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+28h] [rbp-20h]
  int v16; // [rsp+28h] [rbp-20h]
  int v17; // [rsp+30h] [rbp-18h]
  int v18; // [rsp+30h] [rbp-18h]
  int v19; // [rsp+30h] [rbp-18h]
  int v20; // [rsp+38h] [rbp-10h]
  int EndpointState; // [rsp+38h] [rbp-10h]

  v3 = *(__int64 **)(a1 + 48);
  v6 = *v3;
  if ( a2 == 3 )
  {
    v17 = *(_DWORD *)(v6 + 144);
    v14 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v6 + 80),
      4u,
      0xDu,
      0x2Cu,
      (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
      v14,
      v17);
LABEL_3:
    StreamContextArray = -1073741823;
LABEL_4:
    *(_DWORD *)(v6 + 280) = StreamContextArray;
    _m_prefetchw((const void *)(v6 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v6 + 32), 2u);
    if ( (result & 2) == 0 )
      return ESM_AddEvent((PVOID)(v6 + 288));
    return result;
  }
  v9 = *(_BYTE *)(a1 + 60);
  if ( v9 != 1 )
  {
    v20 = v9;
    v18 = *(_DWORD *)(v6 + 144);
    v15 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v6 + 80),
      2u,
      0xDu,
      0x2Du,
      (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
      v15,
      v18,
      v20);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v6,
      *(_QWORD *)(v6 + 8),
      *(_QWORD *)(v6 + 24),
      256LL,
      "Endpoint Reset Command failed",
      (__int64 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v6, 2, 4123, *(_QWORD *)(v6 + 16), v6, 0LL);
    goto LABEL_3;
  }
  EndpointState = UsbDevice_GetEndpointState(*(_QWORD *)(v6 + 16), *(unsigned int *)(v6 + 144));
  v19 = *(_DWORD *)(v6 + 144);
  v16 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(v6 + 80),
    4u,
    0xDu,
    0x2Eu,
    (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
    v16,
    v19,
    EndpointState);
  if ( !*(_BYTE *)(v6 + 37) )
    return Endpoint_OnResetSetDequeuePointer(v3, 0LL);
  v12 = *(_QWORD *)(v6 + 136);
  *(_DWORD *)(v12 + 20) = 0;
  StreamContextArray = XilEndpoint_FetchStreamContextArray(v12, v10, v11);
  if ( StreamContextArray < 0 )
    goto LABEL_4;
  result = *(_QWORD *)(v6 + 136);
  for ( i = 1; i <= *(_DWORD *)(result + 8); ++i )
  {
    Endpoint_OnResetSetDequeuePointer(v3, i);
    result = *(_QWORD *)(v6 + 136);
  }
  return result;
}
