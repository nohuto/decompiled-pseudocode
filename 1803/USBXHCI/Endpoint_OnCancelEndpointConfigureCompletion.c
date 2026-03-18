/*
 * XREFs of Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C0012270
 * Callers:
 *     <none>
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C00068AC (CommonBuffer_ReleaseBuffer.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     Endpoint_SendClearStallTransfer @ 0x1C0013D2C (Endpoint_SendClearStallTransfer.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnCancelEndpointConfigureCompletion(__int64 a1, int a2)
{
  __int64 v2; // rdi
  char v5; // al
  int v6; // edx
  __int64 v7; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 48);
  CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)v2 + 120LL), *(_DWORD **)(v2 + 256));
  *(_QWORD *)(v2 + 256) = 0LL;
  if ( a2 == 3 )
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v2 + 80),
      4u,
      0xDu,
      0x48u,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 135LL),
      *(_DWORD *)(v2 + 144));
  }
  else
  {
    v5 = *(_BYTE *)(a1 + 60);
    v6 = *(_DWORD *)(v2 + 144);
    v7 = *(_QWORD *)(v2 + 16);
    if ( v5 == 1 )
    {
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v2 + 80),
        4u,
        0xDu,
        0x49u,
        (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
        *(unsigned __int8 *)(v7 + 135),
        *(_DWORD *)(v2 + 144));
      return Endpoint_SendClearStallTransfer((PVOID)v2);
    }
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v2 + 80),
      v6,
      13,
      74,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      *(_BYTE *)(v7 + 135),
      *(_DWORD *)(v2 + 144),
      v5);
    Controller_ReportFatalError(*(_QWORD *)v2, 2, 4125, *(_QWORD *)(v2 + 16), v2, 0LL);
  }
  _m_prefetchw((const void *)(v2 + 32));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v2 + 32), 2u);
  if ( (result & 2) == 0 )
    return ESM_AddEvent((PVOID)(v2 + 288));
  return result;
}
