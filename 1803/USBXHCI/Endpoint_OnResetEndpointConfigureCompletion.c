/*
 * XREFs of Endpoint_OnResetEndpointConfigureCompletion @ 0x1C0012DE0
 * Callers:
 *     <none>
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C00068AC (CommonBuffer_ReleaseBuffer.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnResetEndpointConfigureCompletion(__int64 a1, int a2)
{
  __int64 *v2; // rbx
  __int64 v5; // rsi
  char v6; // al
  int v7; // edx
  __int64 v8; // rcx
  int v9; // eax
  __int64 result; // rax

  v2 = *(__int64 **)(a1 + 48);
  v5 = *v2;
  CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)*v2 + 120LL), (_DWORD *)v2[1]);
  v2[1] = 0LL;
  if ( a2 == 3 )
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v5 + 80),
      4u,
      0xDu,
      0x35u,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL),
      *(_DWORD *)(v5 + 144));
LABEL_6:
    v9 = -1073741823;
    goto LABEL_7;
  }
  v6 = *(_BYTE *)(a1 + 60);
  v7 = *(_DWORD *)(v5 + 144);
  v8 = *(_QWORD *)(v5 + 16);
  if ( v6 != 1 )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v5 + 80),
      v7,
      13,
      55,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      *(_BYTE *)(v8 + 135),
      *(_DWORD *)(v5 + 144),
      v6);
    Controller_ReportFatalError(*(_QWORD *)v5, 2, 4130 - (*(_BYTE *)(v5 + 37) != 0), *(_QWORD *)(v5 + 16), v5, 0LL);
    goto LABEL_6;
  }
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(v5 + 80),
    4u,
    0xDu,
    0x36u,
    (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
    *(unsigned __int8 *)(v8 + 135),
    *(_DWORD *)(v5 + 144));
  v9 = 0;
LABEL_7:
  *(_DWORD *)(v5 + 280) = 0;
  if ( v9 >= 0 )
    return ESM_AddEvent((PVOID)(v5 + 288));
  _m_prefetchw((const void *)(v5 + 32));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v5 + 32), 2u);
  if ( (result & 2) == 0 )
    return ESM_AddEvent((PVOID)(v5 + 288));
  return result;
}
