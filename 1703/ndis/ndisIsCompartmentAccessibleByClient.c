/*
 * XREFs of ndisIsCompartmentAccessibleByClient @ 0x1C000D34C
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0006B60 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000CFF0 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00418F0 (-ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00420A0 (-ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00427D0 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0042C00 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0043050 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0043260 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisEnumerateInterfaces @ 0x1C00F6F00 (ndisEnumerateInterfaces.c)
 *     ndisEnumerateInterfaces32 @ 0x1C0101F14 (ndisEnumerateInterfaces32.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsCompartmentAccessibleByClient(__int64 a1, __int64 a2, char a3)
{
  int v3; // r10d
  __int64 v6; // rcx

  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 == *(_DWORD *)(a1 + 16) )
    return 1;
  if ( a3 || *(_DWORD *)a2 == -1 )
  {
    v6 = *(_QWORD *)(a2 + 8) - *(_QWORD *)(a1 + 1684);
    if ( !v6 )
      v6 = *(_QWORD *)(a2 + 16) - *(_QWORD *)(a1 + 1692);
    if ( !v6 )
      return 1;
  }
  if ( (*(_DWORD *)(a1 + 1680) & 2) != 0 )
    return 0;
  return v3 == 1;
}
