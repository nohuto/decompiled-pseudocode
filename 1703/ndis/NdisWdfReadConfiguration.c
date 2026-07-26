/*
 * XREFs of NdisWdfReadConfiguration @ 0x1C00D98C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Z @ 0x1C0044008 (WPP_SF_Z.c)
 *     NdisReadConfiguration @ 0x1C00AE8B0 (NdisReadConfiguration.c)
 */

void __fastcall NdisWdfReadConfiguration(
        PNDIS_STATUS Status,
        PNDIS_CONFIGURATION_PARAMETER *ParameterValue,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING Keyword,
        NDIS_PARAMETER_TYPE ParameterType)
{
  const UNICODE_STRING *v6; // rbx

  v6 = &stru_1C007BC80;
  while ( !RtlEqualUnicodeString(Keyword, v6, 1u) )
  {
    if ( ++v6 == (const UNICODE_STRING *)&unk_1C007BD70 )
    {
      NdisReadConfiguration(Status, ParameterValue, ConfigurationHandle, Keyword, ParameterType);
      return;
    }
  }
  if ( (unsigned __int8)byte_1C009260F >= 2u )
    WPP_SF_Z(0x11u, &WPP_99a60aa0491337cae2647d317c30bcf5_Traceguids, &Keyword->Length);
  *Status = -1073741823;
}
