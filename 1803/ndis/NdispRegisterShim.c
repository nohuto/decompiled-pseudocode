/*
 * XREFs of NdispRegisterShim @ 0x1C00B4630
 * Callers:
 *     NdisDllInitialize @ 0x1C011C0B0 (NdisDllInitialize.c)
 * Callees:
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 */

void NdispRegisterShim()
{
  int v0; // eax

  v0 = KseRegisterShim(&NdisShim, 0LL, 0LL);
  if ( v0 < 0 && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
    WPP_SF_d(0xAu, &WPP_38e351531fd3379a277386d5a19dba54_Traceguids, v0);
}
