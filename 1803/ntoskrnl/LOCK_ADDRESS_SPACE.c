/*
 * XREFs of LOCK_ADDRESS_SPACE @ 0x1400E5518
 * Callers:
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 *     MiLockVadRange @ 0x1404C010C (MiLockVadRange.c)
 *     MiInitializeVadBitMap @ 0x1404ED24C (MiInitializeVadBitMap.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140592B34 (MiAllocateFromSubAllocatedRegion.c)
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x140595928 (MmCleanProcessAddressSpace.c)
 *     MmCopyVirtualMemory @ 0x14059CD40 (MmCopyVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x1405BA250 (MiMapLockedPagesInUserSpace.c)
 *     MmCreateShadowMapping @ 0x14062B744 (MmCreateShadowMapping.c)
 *     MiMapViewOfPhysicalSection @ 0x140646C40 (MiMapViewOfPhysicalSection.c)
 *     MmDeleteShadowMapping @ 0x14074F478 (MmDeleteShadowMapping.c)
 *     MiResizeAweBitMap @ 0x14074FBC0 (MiResizeAweBitMap.c)
 *     MiAllocateEnclaveVad @ 0x1407511B4 (MiAllocateEnclaveVad.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockExclusiveEx(a2 + 872, 0LL);
  *(_BYTE *)(a1 + 1752) |= 1u;
  return result;
}
