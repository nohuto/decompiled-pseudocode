/*
 * XREFs of ?ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C007AE84
 * Callers:
 *     ndisOidPreRSSv2Parameters @ 0x1C007C0D0 (ndisOidPreRSSv2Parameters.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C007AF1C (-ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z.c)
 */

__int64 __fastcall ndisQueryOpenRSSv2Parameters(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  struct _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rcx
  unsigned int v6; // eax
  int RSSv2ParametersHelper; // eax
  unsigned int v8; // ebx

  MiniportHandle = a1->MiniportHandle;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x13u, &WPP_f2ba63df2d4e3a1d5681283389008951_Traceguids, MiniportHandle, a2);
  NdisRSSParameters = a1->NdisRSSParameters;
  v6 = 0;
  if ( NdisRSSParameters )
    v6 = NdisRSSParameters->HashInformation & 0xFFFF00;
  RSSv2ParametersHelper = ndisQueryRSSv2ParametersHelper(MiniportHandle, a2, v6);
  v8 = RSSv2ParametersHelper;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(0x14u, &WPP_f2ba63df2d4e3a1d5681283389008951_Traceguids, (__int64)MiniportHandle, RSSv2ParametersHelper);
  return v8;
}
