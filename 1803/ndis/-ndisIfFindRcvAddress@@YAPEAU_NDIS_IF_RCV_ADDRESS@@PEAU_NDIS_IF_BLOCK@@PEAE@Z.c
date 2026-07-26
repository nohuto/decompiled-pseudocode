/*
 * XREFs of ?ndisIfFindRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z @ 0x1C00DC6C4
 * Callers:
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C003FF00 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0040190 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     memcmp @ 0x1C0025D20 (memcmp.c)
 */

struct _NDIS_IF_RCV_ADDRESS *__fastcall ndisIfFindRcvAddress(struct _NDIS_IF_BLOCK *a1, unsigned __int8 *a2)
{
  unsigned int ifRcvAddressCount; // esi
  __int64 v3; // rbx
  int v5; // edi
  _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // r14

  ifRcvAddressCount = a1->ifRcvAddressCount;
  v3 = 0LL;
  v5 = 0;
  if ( ifRcvAddressCount )
  {
    ifRcvAddressTable = a1->ifRcvAddressTable;
    while ( memcmp(a2, ifRcvAddressTable[v5].ifRcvAddress, ifRcvAddressTable[v5].ifRcvAddressLength) )
    {
      if ( ++v5 >= ifRcvAddressCount )
        return (struct _NDIS_IF_RCV_ADDRESS *)v3;
    }
    return &ifRcvAddressTable[v5];
  }
  return (struct _NDIS_IF_RCV_ADDRESS *)v3;
}
