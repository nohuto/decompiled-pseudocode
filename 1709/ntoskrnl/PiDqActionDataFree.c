/*
 * XREFs of PiDqActionDataFree @ 0x14052E114
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x14052DBC8 (PiDqQuerySerializeActionQueue.c)
 *     PiDqActionDataCreate @ 0x14052DF68 (PiDqActionDataCreate.c)
 *     PiDqQueryFreeActiveData @ 0x14054CF70 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x140526CC4 (PnpFreeDevPropertyArray.c)
 */

void __fastcall PiDqActionDataFree(PVOID P)
{
  void *v2; // rcx
  void *v3; // rdx

  if ( *(_DWORD *)P )
  {
    v2 = (void *)*((_QWORD *)P + 2);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x58706E50u);
    v3 = (void *)*((_QWORD *)P + 4);
    if ( v3 )
      PnpFreeDevPropertyArray(*((_DWORD *)P + 6), v3, 0x58706E50u);
  }
  ExFreePoolWithTag(P, 0x58706E50u);
}
