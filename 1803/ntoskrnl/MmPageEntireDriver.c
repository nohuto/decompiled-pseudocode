/*
 * XREFs of MmPageEntireDriver @ 0x1405BB5B0
 * Callers:
 *     <none>
 * Callees:
 *     KeFlushQueuedDpcs @ 0x140004DD0 (KeFlushQueuedDpcs.c)
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiLookupDataTableEntry @ 0x14013F6A8 (MiLookupDataTableEntry.c)
 *     MiSetPagingOfDriver @ 0x14013F7B4 (MiSetPagingOfDriver.c)
 *     MiCancelPhase0Locking @ 0x1405BB530 (MiCancelPhase0Locking.c)
 */

PVOID __stdcall MmPageEntireDriver(PVOID AddressWithinSection)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  void *v4; // rsi
  unsigned __int64 PteAddress; // rdi
  unsigned __int64 v6; // rbx

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)AddressWithinSection) )
    return 0LL;
  v2 = MiLookupDataTableEntry((unsigned __int64)AddressWithinSection, 1LL);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  v4 = *(void **)(v2 + 48);
  if ( (dword_14044B164 & 1) == 0 && (unsigned int)MiGetSystemRegionType((unsigned __int64)AddressWithinSection) != 1 )
  {
    KeFlushQueuedDpcs();
    PteAddress = MiGetPteAddress((unsigned __int64)v4);
    v6 = PteAddress + 8 * ((unsigned __int64)*(unsigned int *)(v3 + 64) >> 12);
    MiCancelPhase0Locking(v3);
    MiSetPagingOfDriver(v3, PteAddress, v6 - 8);
  }
  return v4;
}
