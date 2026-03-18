/*
 * XREFs of CmpUnblockTwoHiveWrites @ 0x1404D3938
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1404D37D0 (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x140667F7C (CmpVirtualPathPresent.c)
 * Callees:
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 */

void __fastcall CmpUnblockTwoHiveWrites(__int64 a1, __int64 a2)
{
  if ( a1 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
  if ( a2 )
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 2848));
  if ( a1 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5496), 0xFFFFFFFF) == 1 )
    CmpDeleteHive(a1);
  if ( a2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 5496), 0xFFFFFFFF) == 1 )
      CmpDeleteHive(a2);
  }
}
