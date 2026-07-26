/*
 * XREFs of ?ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C007BC08
 * Callers:
 *     ndisOidPreRSSv2Parameters @ 0x1C007D020 (ndisOidPreRSSv2Parameters.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C007BD14 (-ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z.c)
 */

__int64 __fastcall ndisQueryMiniportRSSv2Parameters(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  int RSSv2ParametersHelper; // eax
  unsigned int v5; // edi

  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0x14u, &WPP_4fecf6d36e163aabb9bd41260a763457_Traceguids, a1, a2);
  RSSv2ParametersHelper = ndisQueryRSSv2ParametersHelper(a1, a2, 0);
  v5 = RSSv2ParametersHelper;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qD(0x15u, &WPP_4fecf6d36e163aabb9bd41260a763457_Traceguids, (__int64)a1, RSSv2ParametersHelper);
  return v5;
}
