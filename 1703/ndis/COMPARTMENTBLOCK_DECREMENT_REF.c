/*
 * XREFs of COMPARTMENTBLOCK_DECREMENT_REF @ 0x1C000D334
 * Callers:
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000CFF0 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0012D10 (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0040768 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C0040B10 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     ?ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z @ 0x1C00415F4 (-ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0042C00 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0043260 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

LONG __fastcall COMPARTMENTBLOCK_DECREMENT_REF(__int64 a1)
{
  LONG result; // eax
  struct _KEVENT *v2; // rcx

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 44), 0xFFFFFFFF);
  if ( result == 1 )
  {
    v2 = *(struct _KEVENT **)(a1 + 1712);
    if ( v2 )
      return KeSetEvent(v2, 0, 0);
  }
  return result;
}
