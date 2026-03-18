/*
 * XREFs of PiDmObjectManagerInit @ 0x1405BDD24
 * Callers:
 *     PiDmInit @ 0x14081929C (PiDmInit.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x14004D3E0 (RtlInitializeGenericTableAvl.c)
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 */

void __fastcall PiDmObjectManagerInit(__int64 a1, int a2)
{
  ExInitializeResourceLite((PERESOURCE)a1);
  RtlInitializeGenericTableAvl(
    (PRTL_AVL_TABLE)(a1 + 104),
    (PRTL_AVL_COMPARE_ROUTINE)PiDmCompareObjects,
    PiDmAllocateGenericTableEntry,
    PiDmFreeGenericTableEntry,
    0LL);
  *(_DWORD *)(a1 + 208) = a2;
}
