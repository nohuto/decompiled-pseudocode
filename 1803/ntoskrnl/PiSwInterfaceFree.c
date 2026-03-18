/*
 * XREFs of PiSwInterfaceFree @ 0x140735460
 * Callers:
 *     PiSwFreeInterfaceList @ 0x1405C5D5C (PiSwFreeInterfaceList.c)
 *     PiSwIrpInterfaceRegister @ 0x14064675C (PiSwIrpInterfaceRegister.c)
 *     PiSwInterfaceCreate @ 0x140646B8C (PiSwInterfaceCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x14050AC0C (PnpFreeDevPropertyArray.c)
 */

void __fastcall PiSwInterfaceFree(PVOID P)
{
  void *v2; // rcx
  char *v3; // rdx

  v2 = (void *)*((_QWORD *)P + 2);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x57706E50u);
  v3 = (char *)*((_QWORD *)P + 3);
  if ( v3 )
    PnpFreeDevPropertyArray(*((_DWORD *)P + 8), v3, 0x57706E50u);
  ExFreePoolWithTag(P, 0x57706E50u);
}
