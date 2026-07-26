/*
 * XREFs of NdispRegisterShim @ 0x1C00C8ECC
 * Callers:
 *     NdisDllInitialize @ 0x1C011C750 (NdisDllInitialize.c)
 * Callees:
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 */

void NdispRegisterShim()
{
  int v0; // eax

  v0 = KseRegisterShim(&NdisShim, 0LL, 0LL);
  if ( v0 < 0 && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
    WPP_SF_d(0xAu, &WPP_91f8585fcc3433c74d76eb2b49629ef4_Traceguids, v0);
}
