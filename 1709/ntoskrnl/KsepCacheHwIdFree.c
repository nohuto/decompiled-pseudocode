/*
 * XREFs of KsepCacheHwIdFree @ 0x14020EFE0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     KsepStringFree @ 0x140546878 (KsepStringFree.c)
 */

void __fastcall KsepCacheHwIdFree(char *P)
{
  if ( P )
  {
    KsepStringFree(P + 40);
    ExFreePoolWithTag(P, 0x6145534Bu);
    _InterlockedIncrement(&dword_14036A244);
  }
}
