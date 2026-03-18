/*
 * XREFs of MiReturnPartitionResidentAvailable @ 0x14021F5AC
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14047ABC0 (MmCleanProcessAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x1404998CC (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x14049C77C (MmCreateProcessAddressSpace.c)
 *     MiFreeInitializationCode @ 0x1404B1698 (MiFreeInitializationCode.c)
 *     MiInsertVadCharges @ 0x1405136C0 (MiInsertVadCharges.c)
 *     MiRemoveVadCharges @ 0x14051D900 (MiRemoveVadCharges.c)
 *     MiCreatePagingFileMap @ 0x14054A5D0 (MiCreatePagingFileMap.c)
 *     MiDereferenceSessionFinal @ 0x14057A664 (MiDereferenceSessionFinal.c)
 *     MiMarkBootGuardPage @ 0x1405A7878 (MiMarkBootGuardPage.c)
 *     MiCleanPhysicalProcessPages @ 0x1406B87E4 (MiCleanPhysicalProcessPages.c)
 *     MiMapUserLargePages @ 0x1406BEE28 (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnPartitionResidentAvailable(__int64 a1, unsigned __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5824), a2);
}
