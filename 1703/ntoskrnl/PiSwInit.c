/*
 * XREFs of PiSwInit @ 0x140825FEC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x14004D3E0 (RtlInitializeGenericTableAvl.c)
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 *     IoCreateDriver @ 0x14059F550 (IoCreateDriver.c)
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
