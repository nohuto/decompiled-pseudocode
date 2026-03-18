/*
 * XREFs of Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C0010E40
 * Callers:
 *     <none>
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0008150 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_ControlEndpointResetSetDequeuePointerCompletion(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rbx
  char v6; // al
  __int64 v7; // rcx
  __int64 result; // rax
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 48);
  if ( a2 == 3 )
  {
    v10 = *(_DWORD *)(v3 + 144);
    v9 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v3 + 80),
      4u,
      0xDu,
      0x4Fu,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      v9,
      v10);
    goto LABEL_6;
  }
  v6 = *(_BYTE *)(a1 + 60);
  v7 = *(_QWORD *)(v3 + 16);
  if ( v6 != 1 )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v3 + 80),
      a2,
      13,
      81,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      *(_BYTE *)(v7 + 135),
      *(_DWORD *)(v3 + 144),
      v6);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v3,
      *(_QWORD *)(v3 + 8),
      *(_QWORD *)(v3 + 24),
      128LL,
      "Set Dequeue pointer command following a Reset Endpoint command failed",
      (_QWORD *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v3, 2, 4101, *(_QWORD *)(v3 + 16), v3, 0LL);
LABEL_6:
    _m_prefetchw((const void *)(v3 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u);
    if ( (result & 2) != 0 )
      return result;
    return ESM_AddEvent((PVOID)(v3 + 288));
  }
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(v3 + 80),
    a2,
    13,
    80,
    (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
    1,
    *(_BYTE *)(v7 + 135),
    *(_DWORD *)(v3 + 144));
  *(_DWORD *)(v3 + 280) = 0;
  return ESM_AddEvent((PVOID)(v3 + 288));
}
