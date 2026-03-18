/*
 * XREFs of HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset @ 0x1C00054C4
 * Callers:
 *     HUBPSM20_ErrorOnResettingPort @ 0x1C000E980 (HUBPSM20_ErrorOnResettingPort.c)
 * Callees:
 *     WPP_RECORDER_SF_dDD @ 0x1C00026D8 (WPP_RECORDER_SF_dDD.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002B5EC (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C002CC40 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 */

__int64 __fastcall HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int16 v4; // di
  unsigned __int16 v6; // bx
  unsigned int v7; // esi
  __int64 v8; // rax
  int v10; // [rsp+20h] [rbp-28h]

  v4 = *((_WORD *)a1 + 97);
  v6 = *((_WORD *)a1 + 92);
  v7 = 3049;
  if ( (v4 & 1) != 0 )
  {
    v7 = (v6 & 1) != 0 ? 3049 : 3021;
  }
  else
  {
    if ( (v4 & 0x10) == 0 )
      goto LABEL_11;
    if ( (v6 & 1) == 0 )
    {
      v7 = (v6 & 2) != 0 ? 3021 : 3077;
      goto LABEL_13;
    }
    if ( (v6 & 4) != 0 )
    {
      v7 = 3021;
      goto LABEL_13;
    }
    if ( (v6 & 8) != 0 )
    {
      HUBREG_UpdateSqmHubOvercurrentDetected(*a1, a2);
      v8 = *a1;
      v7 = 3065;
      *((_DWORD *)a1 + 356) = 4;
      if ( (*(_DWORD *)(v8 + 2584) & 0x200) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", a1 + 34);
    }
    else
    {
LABEL_11:
      if ( ((unsigned __int8)v6 & (unsigned __int8)v4 & 2) != 0 )
        v7 = 3037;
    }
  }
LABEL_13:
  WPP_RECORDER_SF_dDD(a1[179], v6, *((unsigned __int16 *)a1 + 100), a4, v10);
  return v7;
}
