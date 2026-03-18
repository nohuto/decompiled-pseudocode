/*
 * XREFs of PopFxFreeUniqueId @ 0x1405C82C4
 * Callers:
 *     PoFxAbandonDevice @ 0x1405C8D04 (PoFxAbandonDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxFreeUniqueId(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 288);
  if ( *(void **)(a1 + 48) != v2 && v2 && (*(_DWORD *)(a1 + 296) & 0x2000) == 0 )
    ExFreePoolWithTag(v2, 0x4D584650u);
  *(_DWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 288) = 0LL;
}
