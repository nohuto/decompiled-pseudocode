/*
 * XREFs of ?ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C007AE10
 * Callers:
 *     ndisOidPreRSSv2Parameters @ 0x1C007C0D0 (ndisOidPreRSSv2Parameters.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C007AF1C (-ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z.c)
 */

__int64 __fastcall ndisQueryMiniportRSSv2Parameters(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  int RSSv2ParametersHelper; // eax
  unsigned int v5; // edi

  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x11u, &WPP_f2ba63df2d4e3a1d5681283389008951_Traceguids, a1, a2);
  RSSv2ParametersHelper = ndisQueryRSSv2ParametersHelper(a1, a2, 0);
  v5 = RSSv2ParametersHelper;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(0x12u, &WPP_f2ba63df2d4e3a1d5681283389008951_Traceguids, (__int64)a1, RSSv2ParametersHelper);
  return v5;
}
