/*
 * XREFs of MmPageEntireDriver @ 0x1404B24D0
 * Callers:
 *     <none>
 * Callees:
 *     MiLookupDataTableEntry @ 0x14006CE70 (MiLookupDataTableEntry.c)
 *     MiSetPagingOfDriver @ 0x14006D120 (MiSetPagingOfDriver.c)
 *     KeFlushQueuedDpcs @ 0x14006D5B0 (KeFlushQueuedDpcs.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiCancelPhase0Locking @ 0x1404B2F94 (MiCancelPhase0Locking.c)
 */

PVOID __stdcall MmPageEntireDriver(PVOID AddressWithinSection)
{
  PVOID *v2; // rax
  __int64 v3; // rbp
  PVOID v4; // rsi
  unsigned __int64 *PteAddress; // rdi
  unsigned __int64 *v6; // rbx

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)AddressWithinSection) )
    return 0LL;
  v2 = MiLookupDataTableEntry((unsigned __int64)AddressWithinSection, 0);
  v3 = (__int64)v2;
  if ( !v2 )
    return 0LL;
  v4 = v2[6];
  if ( (dword_1403E3104 & 1) == 0 && (unsigned int)MiGetSystemRegionType((unsigned __int64)AddressWithinSection) != 1 )
  {
    KeFlushQueuedDpcs();
    PteAddress = (unsigned __int64 *)MiGetPteAddress((unsigned __int64)v4);
    v6 = &PteAddress[(unsigned __int64)*(unsigned int *)(v3 + 64) >> 12];
    MiCancelPhase0Locking(v3);
    MiSetPagingOfDriver(v3, PteAddress, (unsigned __int64)(v6 - 1));
  }
  return v4;
}
