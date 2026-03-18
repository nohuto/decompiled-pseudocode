/*
 * XREFs of PiSwInterfaceFree @ 0x1406CDD60
 * Callers:
 *     PiSwFreeInterfaceList @ 0x1405BB1F4 (PiSwFreeInterfaceList.c)
 *     PiSwIrpInterfaceRegister @ 0x1405E2314 (PiSwIrpInterfaceRegister.c)
 *     PiSwInterfaceCreate @ 0x1405E26E4 (PiSwInterfaceCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x140526CC4 (PnpFreeDevPropertyArray.c)
 */

void __fastcall PiSwInterfaceFree(PVOID P)
{
  void *v2; // rcx
  void *v3; // rdx

  v2 = (void *)*((_QWORD *)P + 2);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x57706E50u);
  v3 = (void *)*((_QWORD *)P + 3);
  if ( v3 )
    PnpFreeDevPropertyArray(*((_DWORD *)P + 8), v3, 0x57706E50u);
  ExFreePoolWithTag(P, 0x57706E50u);
}
