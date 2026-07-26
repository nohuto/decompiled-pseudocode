/*
 * XREFs of ndisGetNsiClientInfo @ 0x1C002030C
 * Callers:
 *     ?ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C003E430 (-ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C003EBE0 (-ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C003F310 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C003F740 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C003FB90 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C003FDA0 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisEnumerateInterfaces @ 0x1C0105F2C (ndisEnumerateInterfaces.c)
 *     ndisEnumerateInterfaces32 @ 0x1C010AEB4 (ndisEnumerateInterfaces32.c)
 * Callees:
 *     ?ndisCmGetThreadState@@YAXPEAU_ETHREAD@@PEAI1@Z @ 0x1C0019BC4 (-ndisCmGetThreadState@@YAXPEAU_ETHREAD@@PEAI1@Z.c)
 *     ndisIfFindCompartmentBlock @ 0x1C00205BC (ndisIfFindCompartmentBlock.c)
 */

void __fastcall ndisGetNsiClientInfo(unsigned int *a1)
{
  KIRQL v2; // r10

  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  ndisCmGetThreadState(KeGetCurrentThread(), a1 + 1, a1);
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  *(_OWORD *)(a1 + 2) = *(_OWORD *)(ndisIfFindCompartmentBlock(a1[1]) + 1684);
  KeReleaseSpinLock(&ndisIfListLock, v2);
}
