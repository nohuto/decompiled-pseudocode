/*
 * XREFs of HUBHSM_CheckIfThereIsAValidHubChange @ 0x1C00072E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002A814 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C002BCB0 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 */

__int64 __fastcall HUBHSM_CheckIfThereIsAValidHubChange(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int16 v3; // bx
  __int16 v4; // di
  int v5; // eax
  unsigned int v6; // edi

  v2 = *(_QWORD *)(a1 + 960);
  v3 = *(_WORD *)(v2 + 774);
  v4 = *(_WORD *)(v2 + 772);
  if ( (v3 & 2) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*(_QWORD *)(a1 + 960), a2);
    *(_DWORD *)(v2 + 780) = 1;
    v5 = (2 * (~(_BYTE)v4 & 2)) | 0x7F1;
LABEL_5:
    *(_DWORD *)(v2 + 784) = v5;
    return 2057;
  }
  if ( (v3 & 1) != 0 )
  {
    *(_DWORD *)(v2 + 780) = 0;
    v5 = 4 * (v4 & 1) + 2025;
    goto LABEL_5;
  }
  if ( v3 )
  {
    v6 = 2026;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v2 + 2512),
      2u,
      3u,
      0x54u,
      (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids,
      v3);
    if ( (*(_DWORD *)(v2 + 2584) & 0x10) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierInvalidPortStatus", v2 + 1256);
  }
  else
  {
    return 2041;
  }
  return v6;
}
