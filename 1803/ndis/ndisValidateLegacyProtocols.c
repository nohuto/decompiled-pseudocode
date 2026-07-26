/*
 * XREFs of ndisValidateLegacyProtocols @ 0x1C00E8140
 * Callers:
 *     NdisRegisterProtocol @ 0x1C00E79E0 (NdisRegisterProtocol.c)
 * Callees:
 *     WPP_SF_Z @ 0x1C0041C64 (WPP_SF_Z.c)
 *     WPP_SF_ZL @ 0x1C005C7F0 (WPP_SF_ZL.c)
 */

unsigned __int8 __fastcall ndisValidateLegacyProtocols(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // di

  v3 = 1;
  if ( (unsigned __int8)byte_1C009960C >= 4u )
    WPP_SF_Z(0x10u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, (const wchar_t *)(a1 + 88));
  if ( !*(_QWORD *)(a1 + 112) || !*(_QWORD *)(a1 + 120) || !*(_QWORD *)(a1 + 8) || !*(_QWORD *)(a1 + 16) )
  {
    DbgPrint("ndisValidateLegacyProtocols: protocol does not have Bind/UnbindAdapterHandler and it is not supported.\n");
    v3 = 0;
  }
  if ( (unsigned __int8)byte_1C009960C >= 4u )
    WPP_SF_ZL(0x11u, a2, (const wchar_t *)(a1 + 88), v3);
  return v3;
}
