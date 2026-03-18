/*
 * XREFs of KsepCacheHwIdFree @ 0x14024D3D0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     KsepStringFree @ 0x1405FE3B8 (KsepStringFree.c)
 */

void __fastcall KsepCacheHwIdFree(char *P)
{
  if ( P )
  {
    KsepStringFree(P + 40);
    ExFreePoolWithTag(P, 0x6145534Bu);
    _InterlockedIncrement(&dword_1403AD324);
  }
}
