/*
 * XREFs of LOCK_ADDRESS_SPACE @ 0x1400A0BBC
 * Callers:
 *     MmCreateShadowMapping @ 0x14043D3A4 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x14043D51C (MmDeleteShadowMapping.c)
 *     MiMapLockedPagesInUserSpace @ 0x140448658 (MiMapLockedPagesInUserSpace.c)
 *     MiInitializeVadBitMap @ 0x14045E85C (MiInitializeVadBitMap.c)
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 *     MmCleanProcessAddressSpace @ 0x1404D2F70 (MmCleanProcessAddressSpace.c)
 *     MmCopyVirtualMemory @ 0x1405084C0 (MmCopyVirtualMemory.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x14050946C (MiAllocateFromSubAllocatedRegion.c)
 *     MiMapViewOfPhysicalSection @ 0x1405D96D4 (MiMapViewOfPhysicalSection.c)
 *     MiResizeAweBitMap @ 0x1406E5A4C (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x1406E649C (NtFreeUserPhysicalPages.c)
 *     MiAllocateEnclaveVad @ 0x1406E77E0 (MiAllocateEnclaveVad.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall LOCK_ADDRESS_SPACE(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 872, 0LL);
  *(_BYTE *)(a1 + 1752) |= 1u;
}
