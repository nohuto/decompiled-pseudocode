/*
 * XREFs of KsepCacheHwIdFree @ 0x1402084C0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     KsepStringFree @ 0x1404B4E70 (KsepStringFree.c)
 */

void __fastcall KsepCacheHwIdFree(char *P)
{
  if ( P )
  {
    KsepStringFree(P + 40);
    ExFreePoolWithTag(P, 0x6145534Bu);
    _InterlockedIncrement(&dword_14034F7E4);
  }
}
