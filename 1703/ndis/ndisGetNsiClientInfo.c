/*
 * XREFs of ndisGetNsiClientInfo @ 0x1C000CE98
 * Callers:
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
 *     NdisGetSessionCompartmentId @ 0x1C000CE40 (NdisGetSessionCompartmentId.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C000CF38 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     ndisIfFindCompartmentBlock @ 0x1C000CFB0 (ndisIfFindCompartmentBlock.c)
 */

void __fastcall ndisGetNsiClientInfo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  _DWORD *ThreadProperty; // rax
  unsigned int ThreadSessionId; // eax
  KIRQL v5; // r10

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  CurrentThread = KeGetCurrentThread();
  ThreadProperty = PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    *(_DWORD *)(a1 + 4) = *ThreadProperty;
    *(_DWORD *)a1 = ThreadProperty[1];
    ObfDereferenceObject(ThreadProperty);
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)a1 = 0;
  }
  if ( !*(_DWORD *)(a1 + 4) )
  {
    ThreadSessionId = ndisCmGetThreadSessionId(CurrentThread);
    *(_DWORD *)(a1 + 4) = NdisGetSessionCompartmentId(ThreadSessionId);
  }
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  *(_OWORD *)(a1 + 8) = *(_OWORD *)(ndisIfFindCompartmentBlock(*(unsigned int *)(a1 + 4)) + 1684);
  KeReleaseSpinLock(&ndisIfListLock, v5);
}
