/*
 * XREFs of NdisWdfReadConfiguration @ 0x1C00E3A50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Z @ 0x1C0040B38 (WPP_SF_Z.c)
 *     NdisReadConfiguration @ 0x1C00B30F0 (NdisReadConfiguration.c)
 */

void __fastcall NdisWdfReadConfiguration(
        PNDIS_STATUS Status,
        PNDIS_CONFIGURATION_PARAMETER *ParameterValue,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING Keyword,
        NDIS_PARAMETER_TYPE ParameterType)
{
  const UNICODE_STRING *v6; // rbx

  v6 = &stru_1C007FCA0;
  while ( !RtlEqualUnicodeString(Keyword, v6, 1u) )
  {
    if ( ++v6 == (const UNICODE_STRING *)&unk_1C007FD90 )
    {
      NdisReadConfiguration(Status, ParameterValue, ConfigurationHandle, Keyword, ParameterType);
      return;
    }
  }
  if ( (unsigned __int8)byte_1C009874F >= 2u )
    WPP_SF_Z(0x11u, &WPP_fb5e2801bcb8364427405c45392b258b_Traceguids, &Keyword->Length);
  *Status = -1073741823;
}
