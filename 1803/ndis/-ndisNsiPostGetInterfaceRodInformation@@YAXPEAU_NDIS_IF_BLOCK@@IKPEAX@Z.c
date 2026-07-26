/*
 * XREFs of ?ndisNsiPostGetInterfaceRodInformation@@YAXPEAU_NDIS_IF_BLOCK@@IKPEAX@Z @ 0x1C00DD290
 * Callers:
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00AE350 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     WPP_SF_qDqL @ 0x1C0042180 (WPP_SF_qDqL.c)
 */

void __fastcall ndisNsiPostGetInterfaceRodInformation(struct _NDIS_IF_BLOCK *a1, int a2, unsigned int a3, _DWORD *a4)
{
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qDqL(0xD3u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, (__int64)a1, a2);
  if ( a2 == 66183 && a3 >= 0xD8 && !a4[52] )
    a4[52] = a1->CompartmentId;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qDqL(0xD4u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, (__int64)a1, a2);
}
