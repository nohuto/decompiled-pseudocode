/*
 * XREFs of ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1C0020558
 * Callers:
 *     ndisIfReadNetworkGuidFromKey @ 0x1C00205F0 (ndisIfReadNetworkGuidFromKey.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C00C7114 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ndisIfFindCompartmentBlock @ 0x1C00205BC (ndisIfFindCompartmentBlock.c)
 */

struct _GUID *__fastcall ndisIfGetDefaultNetworkGuid(struct _GUID *__return_ptr retstr)
{
  __int64 CompartmentBlock; // rax
  KIRQL v3; // r10
  struct _GUID v4; // xmm6

  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(1LL);
  if ( CompartmentBlock )
  {
    v4 = *(struct _GUID *)(*(_QWORD *)(CompartmentBlock + 56) + 32LL);
    KeReleaseSpinLock(&ndisIfListLock, v3);
    *retstr = v4;
  }
  else
  {
    KeReleaseSpinLock(&ndisIfListLock, v3);
    *retstr = ndisDefaultNetworkGuid;
  }
  return retstr;
}
