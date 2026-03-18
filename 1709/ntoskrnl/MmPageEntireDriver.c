/*
 * XREFs of MmPageEntireDriver @ 0x140516A90
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLookupDataTableEntry @ 0x1400DCDF4 (MiLookupDataTableEntry.c)
 *     MiSetPagingOfDriver @ 0x1400DDBDC (MiSetPagingOfDriver.c)
 *     KeFlushQueuedDpcs @ 0x1400DE0B0 (KeFlushQueuedDpcs.c)
 *     MiCancelPhase0Locking @ 0x140516B34 (MiCancelPhase0Locking.c)
 */

PVOID __stdcall MmPageEntireDriver(PVOID AddressWithinSection)
{
  PVOID *v2; // rax
  __int64 v3; // rbp
  PVOID v4; // rsi
  __int64 *PteAddress; // rdi
  __int64 *v6; // rbx

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)AddressWithinSection) )
    return 0LL;
  v2 = MiLookupDataTableEntry((unsigned __int64)AddressWithinSection, 0);
  v3 = (__int64)v2;
  if ( !v2 )
    return 0LL;
  v4 = v2[6];
  if ( (dword_140400104 & 1) == 0 && (unsigned int)MiGetSystemRegionType((unsigned __int64)AddressWithinSection) != 1 )
  {
    KeFlushQueuedDpcs();
    PteAddress = (__int64 *)MiGetPteAddress((unsigned __int64)v4);
    v6 = &PteAddress[(unsigned __int64)*(unsigned int *)(v3 + 64) >> 12];
    MiCancelPhase0Locking(v3);
    MiSetPagingOfDriver(v3, PteAddress, (unsigned __int64)(v6 - 1));
  }
  return v4;
}
