/*
 * XREFs of ndisGetNsiClientInfo @ 0x1C0022458
 * Callers:
 *     ?ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0013720 (-ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C003F780 (-ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00403F0 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0040820 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0040C70 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0040E80 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisEnumerateInterfaces @ 0x1C010719C (ndisEnumerateInterfaces.c)
 *     ndisEnumerateInterfaces32 @ 0x1C010CE40 (ndisEnumerateInterfaces32.c)
 * Callees:
 *     ?ndisCmGetThreadState@@YAXPEAU_ETHREAD@@PEAI1@Z @ 0x1C00085C0 (-ndisCmGetThreadState@@YAXPEAU_ETHREAD@@PEAI1@Z.c)
 *     ndisIfFindCompartmentBlock @ 0x1C0009198 (ndisIfFindCompartmentBlock.c)
 */

void __fastcall ndisGetNsiClientInfo(unsigned int *a1)
{
  KIRQL v2; // r10

  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  ndisCmGetThreadState(KeGetCurrentThread(), a1 + 1, a1);
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  *(_LIST_ENTRY *)(a1 + 2) = *(_LIST_ENTRY *)((char *)ndisIfFindCompartmentBlock(a1[1]) + 1684);
  KeReleaseSpinLock(&ndisIfListLock, v2);
}
