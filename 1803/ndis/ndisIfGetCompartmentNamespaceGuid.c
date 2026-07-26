/*
 * XREFs of ndisIfGetCompartmentNamespaceGuid @ 0x1C0042AD4
 * Callers:
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C0014088 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 * Callees:
 *     ndisIfFindCompartmentBlock @ 0x1C0009198 (ndisIfFindCompartmentBlock.c)
 */

__int64 __fastcall ndisIfGetCompartmentNamespaceGuid(unsigned int a1, _OWORD *a2)
{
  _LIST_ENTRY *CompartmentBlock; // rax
  KIRQL v5; // r10
  unsigned int v6; // ebx

  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(a1);
  v6 = 0;
  if ( CompartmentBlock )
    *a2 = *(_LIST_ENTRY *)((char *)&CompartmentBlock[105] + 4);
  else
    v6 = -1073741275;
  KeReleaseSpinLock(&ndisIfListLock, v5);
  return v6;
}
