/*
 * XREFs of BmlGetMonitorModeVSyncPreference @ 0x1C0225F00
 * Callers:
 *     BmlGetMonitorModePreference @ 0x1C00B7D30 (BmlGetMonitorModePreference.c)
 * Callees:
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C0007CB0 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 */

__int64 __fastcall BmlGetMonitorModeVSyncPreference(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // r9

  v1 = DMMVIDEOSIGNALMODE::DivideAndRound(*(unsigned int *)(a1 + 28), *(unsigned int *)(a1 + 32));
  if ( v1 - 24 > 0x33 )
    return 0LL;
  if ( v1 > 0x46 || v1 < 0x32 )
    return 1LL;
  if ( v1 != 60 )
    return 2LL;
  if ( *(_DWORD *)(v2 + 20) == 1024 && *(_DWORD *)(v2 + 24) == 768 )
    return 4LL;
  return 3LL;
}
