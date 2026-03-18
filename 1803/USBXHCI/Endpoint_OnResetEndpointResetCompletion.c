/*
 * XREFs of Endpoint_OnResetEndpointResetCompletion @ 0x1C0013190
 * Callers:
 *     <none>
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0008150 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     XilEndpoint_FetchStreamContextArray @ 0x1C0010488 (XilEndpoint_FetchStreamContextArray.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C0013388 (Endpoint_OnResetSetDequeuePointer.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     UsbDevice_GetEndpointState @ 0x1C0032668 (UsbDevice_GetEndpointState.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnResetEndpointResetCompletion(__int64 a1, int a2, _QWORD *a3)
{
  __int64 *v3; // rsi
  __int64 v6; // rbx
  int StreamContextArray; // eax
  __int64 result; // rax
  char v9; // al
  __int64 v10; // rcx
  char EndpointState; // al
  int v12; // edx
  __int64 v13; // rdx
  int v14; // r8d
  __int64 v15; // rcx
  unsigned int i; // edi
  int v17; // [rsp+28h] [rbp-20h]
  int v18; // [rsp+30h] [rbp-18h]

  v3 = *(__int64 **)(a1 + 48);
  v6 = *v3;
  if ( a2 == 3 )
  {
    v18 = *(_DWORD *)(v6 + 144);
    v17 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v6 + 80),
      4u,
      0xDu,
      0x2Cu,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      v17,
      v18);
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
  v10 = *(_QWORD *)(v6 + 16);
  if ( v9 != 1 )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v6 + 80),
      a2,
      13,
      45,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      *(_BYTE *)(v10 + 135),
      *(_DWORD *)(v6 + 144),
      v9);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v6,
      *(_QWORD *)(v6 + 8),
      *(_QWORD *)(v6 + 24),
      256LL,
      "Endpoint Reset Command failed",
      (_QWORD *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v6, 2, 4123, *(_QWORD *)(v6 + 16), v6, 0LL);
    goto LABEL_3;
  }
  EndpointState = UsbDevice_GetEndpointState(v10, *(unsigned int *)(v6 + 144));
  v12 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
  LOBYTE(v12) = 4;
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(v6 + 80),
    v12,
    13,
    46,
    (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
    *(_BYTE *)(*(_QWORD *)(v6 + 16) + 135LL),
    *(_DWORD *)(v6 + 144),
    EndpointState);
  if ( !*(_BYTE *)(v6 + 37) )
    return Endpoint_OnResetSetDequeuePointer(v3, 0LL);
  v15 = *(_QWORD *)(v6 + 136);
  *(_DWORD *)(v15 + 20) = 0;
  StreamContextArray = XilEndpoint_FetchStreamContextArray(v15, v13, v14);
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
