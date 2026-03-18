/*
 * XREFs of KsepPoolFreeNonPaged @ 0x1401618E4
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x1405FB47C (KseShimDriverIoCallbacks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreeNonPaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6245534Bu);
    _InterlockedIncrement(&dword_1403AD32C);
  }
}
