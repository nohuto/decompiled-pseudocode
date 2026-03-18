/*
 * XREFs of HUBHSM_CheckIfThereIsAValidHubChange @ 0x1C00072B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002B5EC (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C002CC40 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 */

__int64 __fastcall HUBHSM_CheckIfThereIsAValidHubChange(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int16 v3; // ax
  __int16 v4; // bx
  int v5; // ecx
  int v6; // eax
  unsigned int v7; // ebx

  v2 = *(_QWORD *)(a1 + 960);
  v3 = *(_WORD *)(v2 + 774);
  v4 = *(_WORD *)(v2 + 772);
  if ( (v3 & 2) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*(_QWORD *)(a1 + 960), a2);
    v5 = 1;
    v6 = (2 * (~(_BYTE)v4 & 2)) | 0x7F1;
LABEL_5:
    *(_DWORD *)(v2 + 780) = v5;
    v7 = 2057;
    *(_DWORD *)(v2 + 784) = v6;
    return v7;
  }
  if ( (v3 & 1) != 0 )
  {
    v5 = 0;
    v6 = 4 * (v4 & 1) + 2025;
    goto LABEL_5;
  }
  if ( v3 )
  {
    v7 = 2026;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v2 + 2512),
      2u,
      3u,
      0x54u,
      (__int64)&WPP_657f02cd6e64326733be7ab9e49a31de_Traceguids,
      v3);
    if ( (*(_DWORD *)(v2 + 2584) & 0x10) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierInvalidPortStatus", v2 + 1256);
  }
  else
  {
    return 2041;
  }
  return v7;
}
