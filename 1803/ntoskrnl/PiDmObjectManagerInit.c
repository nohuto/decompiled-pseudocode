/*
 * XREFs of PiDmObjectManagerInit @ 0x1406312A8
 * Callers:
 *     PiDmInit @ 0x1408B1FB0 (PiDmInit.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x14006E4D0 (RtlInitializeGenericTableAvl.c)
 *     ExInitializeResourceLite @ 0x1400F3430 (ExInitializeResourceLite.c)
 */

void __fastcall PiDmObjectManagerInit(__int64 a1, int a2)
{
  ExInitializeResourceLite((PERESOURCE)a1);
  RtlInitializeGenericTableAvl(
    (PRTL_AVL_TABLE)(a1 + 104),
    (PRTL_AVL_COMPARE_ROUTINE)PiDmCompareObjects,
    (PRTL_AVL_ALLOCATE_ROUTINE)PiDmAllocateGenericTableEntry,
    PiDmFreeGenericTableEntry,
    0LL);
  *(_DWORD *)(a1 + 208) = a2;
}
