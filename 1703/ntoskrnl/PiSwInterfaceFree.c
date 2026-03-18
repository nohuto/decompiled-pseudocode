/*
 * XREFs of PiSwInterfaceFree @ 0x1406A3224
 * Callers:
 *     PiSwInterfaceCreate @ 0x14045F13C (PiSwInterfaceCreate.c)
 *     PiSwFreeInterfaceList @ 0x14045FB84 (PiSwFreeInterfaceList.c)
 *     PiSwIrpInterfaceRegister @ 0x140460F78 (PiSwIrpInterfaceRegister.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x1404B9DD0 (PnpFreeDevPropertyArray.c)
 */

void __fastcall PiSwInterfaceFree(__int64 a1)
{
  void *v2; // rcx
  char *v3; // rdx

  v2 = *(void **)(a1 + 16);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x57706E50u);
  v3 = *(char **)(a1 + 24);
  if ( v3 )
    PnpFreeDevPropertyArray(*(_DWORD *)(a1 + 32), v3, 0x57706E50u);
  ExFreePoolWithTag((PVOID)a1, 0x57706E50u);
}
