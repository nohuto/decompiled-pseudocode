/*
 * XREFs of Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C00126E0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0008150 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x1C001436C (Endpoint_StreamsOnCancelSetDequeuePointerComplete.c)
 *     WPP_RECORDER_SF_dddL @ 0x1C0016088 (WPP_RECORDER_SF_dddL.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnCancelSetDequeuePointerCompletion(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rbx
  int v6; // edx
  char v7; // r9
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // edx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 48);
  if ( a2 == 3 )
  {
    v6 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL);
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v3 + 80),
      v6,
      13,
      60,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v3 + 16) + 135LL),
      *(_DWORD *)(v3 + 144),
      *(_WORD *)(a1 + 34));
    goto LABEL_5;
  }
  v7 = *(_BYTE *)(a1 + 60);
  v8 = *(_DWORD *)(v3 + 144);
  v9 = *(_QWORD *)(v3 + 80);
  if ( v7 != 1 )
  {
    v10 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL);
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_dddL(v9, v10, v8, 61);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v3,
      *(_QWORD *)(v3 + 8),
      *(_QWORD *)(v3 + 24),
      512LL,
      "Set Dequeue Pointer command following a Stop Endpoint command failed",
      (_QWORD *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v3, 2, 4106, *(_QWORD *)(v3 + 16), v3, 0LL);
LABEL_5:
    _m_prefetchw((const void *)(v3 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u);
    if ( (result & 2) != 0 )
      return result;
    return ESM_AddEvent((PVOID)(v3 + 288));
  }
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_dddL(v9, a2, v8, 62);
  if ( *(_BYTE *)(v3 + 37) )
    return Endpoint_StreamsOnCancelSetDequeuePointerComplete(v3, *(unsigned __int16 *)(a1 + 34));
  return ESM_AddEvent((PVOID)(v3 + 288));
}
