/*
 * XREFs of ndisValidateLegacyProtocols @ 0x1C00DC8AC
 * Callers:
 *     NdisRegisterProtocol @ 0x1C00DC150 (NdisRegisterProtocol.c)
 * Callees:
 *     WPP_SF_Z @ 0x1C0044008 (WPP_SF_Z.c)
 *     WPP_SF_ZL @ 0x1C005C528 (WPP_SF_ZL.c)
 */

unsigned __int8 __fastcall ndisValidateLegacyProtocols(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // di

  v3 = 1;
  if ( (unsigned __int8)byte_1C009260C >= 4u )
    WPP_SF_Z(0x10u, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, (const wchar_t *)(a1 + 88));
  if ( !*(_QWORD *)(a1 + 112) || !*(_QWORD *)(a1 + 120) || !*(_QWORD *)(a1 + 8) || !*(_QWORD *)(a1 + 16) )
  {
    DbgPrint("ndisValidateLegacyProtocols: protocol does not have Bind/UnbindAdapterHandler and it is not supported.\n");
    v3 = 0;
  }
  if ( (unsigned __int8)byte_1C009260C >= 4u )
    WPP_SF_ZL(0x11u, a2, (const wchar_t *)(a1 + 88), v3);
  return v3;
}
