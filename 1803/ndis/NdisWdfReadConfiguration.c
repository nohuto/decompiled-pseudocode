/*
 * XREFs of NdisWdfReadConfiguration @ 0x1C00E51B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Z @ 0x1C0041C64 (WPP_SF_Z.c)
 *     NdisReadConfiguration @ 0x1C00B9A70 (NdisReadConfiguration.c)
 */

void __fastcall NdisWdfReadConfiguration(
        PNDIS_STATUS Status,
        PNDIS_CONFIGURATION_PARAMETER *ParameterValue,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING Keyword,
        NDIS_PARAMETER_TYPE ParameterType)
{
  const UNICODE_STRING *v6; // rbx

  v6 = &stru_1C0080DE0;
  while ( !RtlEqualUnicodeString(Keyword, v6, 1u) )
  {
    if ( ++v6 == (const UNICODE_STRING *)&unk_1C0080ED0 )
    {
      NdisReadConfiguration(Status, ParameterValue, ConfigurationHandle, Keyword, ParameterType);
      return;
    }
  }
  if ( (unsigned __int8)byte_1C009960F >= 2u )
    WPP_SF_Z(0x11u, &WPP_7638764ccf46397224acdca5d7787036_Traceguids, &Keyword->Length);
  *Status = -1073741823;
}
