/*
 * XREFs of PiDqActionDataFree @ 0x14050D648
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x14050D2A0 (PiDqQuerySerializeActionQueue.c)
 *     PiDqActionDataCreate @ 0x14050D69C (PiDqActionDataCreate.c)
 *     PiDqQueryFreeActiveData @ 0x140573470 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x14050AC0C (PnpFreeDevPropertyArray.c)
 */

void __fastcall PiDqActionDataFree(PVOID P)
{
  void *v2; // rcx
  char *v3; // rdx

  if ( *(_DWORD *)P )
  {
    v2 = (void *)*((_QWORD *)P + 2);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x58706E50u);
    v3 = (char *)*((_QWORD *)P + 4);
    if ( v3 )
      PnpFreeDevPropertyArray(*((_DWORD *)P + 6), v3, 0x58706E50u);
  }
  ExFreePoolWithTag(P, 0x58706E50u);
}
