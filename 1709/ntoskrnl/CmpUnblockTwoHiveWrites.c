/*
 * XREFs of CmpUnblockTwoHiveWrites @ 0x14068F3D0
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x140692C3C (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x140692DDC (CmpVirtualPathPresent.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 */

void __fastcall CmpUnblockTwoHiveWrites(PVOID P, PVOID a2)
{
  if ( P )
    ExReleaseResourceLite(*((PERESOURCE *)P + 356));
  if ( a2 )
    ExReleaseResourceLite(*((PERESOURCE *)a2 + 356));
  if ( P && _InterlockedExchangeAdd((volatile signed __int32 *)P + 1374, 0xFFFFFFFF) == 1 )
    CmpDeleteHive((PERESOURCE *)P);
  if ( a2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 1374, 0xFFFFFFFF) == 1 )
      CmpDeleteHive((PERESOURCE *)a2);
  }
}
