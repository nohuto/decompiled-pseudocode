/*
 * XREFs of ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1C001A584
 * Callers:
 *     ndisIfReadNetworkGuidFromKey @ 0x1C001A680 (ndisIfReadNetworkGuidFromKey.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C00C14A8 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ndisIfFindCompartmentBlock @ 0x1C0009198 (ndisIfFindCompartmentBlock.c)
 */

struct _GUID *__fastcall ndisIfGetDefaultNetworkGuid(struct _GUID *__return_ptr retstr)
{
  _LIST_ENTRY *CompartmentBlock; // rax
  KIRQL v3; // r10
  struct _GUID v4; // xmm6

  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(1u);
  if ( CompartmentBlock )
  {
    v4 = (struct _GUID)CompartmentBlock[3].Blink[2];
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
