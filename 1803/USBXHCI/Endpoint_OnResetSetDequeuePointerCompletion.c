/*
 * XREFs of Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C00134A0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0008150 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x1C0014410 (Endpoint_StreamsOnResetSetDequeuePointerComplete.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnResetSetDequeuePointerCompletion(__int64 a1, int a2, _QWORD *a3)
{
  __int64 *v3; // rsi
  __int64 v6; // rbx
  char v7; // al
  int v8; // edx
  __int64 result; // rax
  int v10; // edx
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]

  v3 = *(__int64 **)(a1 + 48);
  v6 = *v3;
  if ( a2 == 3 )
  {
    v12 = *(_DWORD *)(v6 + 144);
    v11 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v6 + 80),
      4u,
      0xDu,
      0x29u,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      v11,
      v12);
    goto LABEL_5;
  }
  v7 = *(_BYTE *)(a1 + 60);
  if ( v7 != 1 )
  {
    v8 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v6 + 80),
      v8,
      13,
      42,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v6 + 16) + 135LL),
      *(_DWORD *)(v6 + 144),
      v7);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v6,
      *(_QWORD *)(v6 + 8),
      *(_QWORD *)(v6 + 24),
      128LL,
      "Set Dequeue pointer command following a Reset Endpoint command failed",
      (_QWORD *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v6, 2, 4122, *(_QWORD *)(v6 + 16), v6, (__int64)a3);
LABEL_5:
    *(_DWORD *)(v6 + 280) = -1073741823;
    _m_prefetchw((const void *)(v6 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v6 + 32), 2u);
    if ( (result & 2) != 0 )
      return result;
    return ESM_AddEvent((PVOID)(v6 + 288));
  }
  v10 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
  LOBYTE(v10) = 4;
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(v6 + 80),
    v10,
    13,
    43,
    (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
    *(_BYTE *)(*(_QWORD *)(v6 + 16) + 135LL),
    *(_DWORD *)(v6 + 144),
    *(_WORD *)(a1 + 34));
  if ( *(_BYTE *)(v6 + 37) )
    return Endpoint_StreamsOnResetSetDequeuePointerComplete(v3, *(unsigned __int16 *)(a1 + 34));
  *(_DWORD *)(v6 + 280) = 0;
  return ESM_AddEvent((PVOID)(v6 + 288));
}
