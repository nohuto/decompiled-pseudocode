/*
 * XREFs of PiSwInit @ 0x14083E730
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140089610 (ExInitializeResourceLite.c)
 *     RtlInitializeGenericTableAvl @ 0x1400DF9E0 (RtlInitializeGenericTableAvl.c)
 *     IoCreateDriver @ 0x1405C7780 (IoCreateDriver.c)
 */

NTSTATUS PiSwInit()
{
  NTSTATUS result; // eax
  __int128 v1; // [rsp+30h] [rbp-18h] BYREF

  RtlInitializeGenericTableAvl(
    &PiSwDeviceInstanceTable,
    (PRTL_AVL_COMPARE_ROUTINE)PiSwDeviceCompareObjects,
    (PRTL_AVL_ALLOCATE_ROUTINE)PiSwAllocateGenericTableEntry,
    (PRTL_AVL_FREE_ROUTINE)PiSwFreeGenericTableEntry,
    0LL);
  RtlInitializeGenericTableAvl(
    &PiSwBusRelationsTable,
    (PRTL_AVL_COMPARE_ROUTINE)PiSwBusRelationsCompareInstancePath,
    (PRTL_AVL_ALLOCATE_ROUTINE)PiSwAllocateGenericTableEntry,
    (PRTL_AVL_FREE_ROUTINE)PiSwFreeGenericTableEntry,
    0LL);
  result = ExInitializeResourceLite(&PiSwLockObj);
  if ( result >= 0 )
  {
    LODWORD(v1) = 3014700;
    *((_QWORD *)&v1 + 1) = L"\\Driver\\SoftwareDevice";
    return IoCreateDriver(&v1, (__int64 (__fastcall *)(PVOID, _QWORD))PiSwPdoDriverEntry);
  }
  return result;
}
