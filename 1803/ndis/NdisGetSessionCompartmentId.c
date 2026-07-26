/*
 * XREFs of NdisGetSessionCompartmentId @ 0x1C0009160
 * Callers:
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0008D00 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     NdisGetProcessObjectCompartmentId @ 0x1C0014120 (NdisGetProcessObjectCompartmentId.c)
 *     NdisGetJobObjectCompartmentId @ 0x1C0014150 (NdisGetJobObjectCompartmentId.c)
 *     NdisSetSessionCompartmentId @ 0x1C00687B0 (NdisSetSessionCompartmentId.c)
 *     ndisNsiGetAllSessionInformation @ 0x1C00AC200 (ndisNsiGetAllSessionInformation.c)
 * Callees:
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C00686C4 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 */

__int64 __fastcall NdisGetSessionCompartmentId(unsigned int a1)
{
  unsigned int ThreadSessionId; // ebx
  unsigned int v3; // edi
  KIRQL v4; // r8

  ThreadSessionId = a1;
  if ( a1 == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( ThreadSessionId >= ndisCmSessionCount )
    return 1LL;
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
  if ( ThreadSessionId < ndisCmSessionCount )
    v3 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
  KeReleaseSpinLock(&ndisCmSessionLock, v4);
  if ( !v3 )
    return 1;
  return v3;
}
