/*
 * XREFs of SmAcquireReleaseCharges @ 0x1400059FC
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140004560 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140004C74 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     SmFpCleanup @ 0x14000653C (SmFpCleanup.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1402689F0 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140269804 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmFpAllocate @ 0x140272DD0 (SmFpAllocate.c)
 *     SmFpFree @ 0x140272EDC (SmFpFree.c)
 *     SmFpPreAllocate @ 0x140272FBC (SmFpPreAllocate.c)
 *     SmKmAllocateMdlForLock @ 0x1402731C0 (SmKmAllocateMdlForLock.c)
 *     SmKmFreeMdlForLock @ 0x14027358C (SmKmFreeMdlForLock.c)
 * Callees:
 *     MmChargeResources @ 0x140005A48 (MmChargeResources.c)
 *     MmReleaseResourceCharge @ 0x140006508 (MmReleaseResourceCharge.c)
 */

__int64 __fastcall SmAcquireReleaseCharges(unsigned __int64 a1, char a2, __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned int v5; // r10d

  v3 = a1 >> 12;
  v4 = 1;
  v5 = a2 & 1 | 2;
  if ( (a2 & 2) == 0 )
    v5 = a2 & 1;
  if ( (_DWORD)a3 )
    MmReleaseResourceCharge(v3, v5, 0LL);
  else
    return (unsigned int)MmChargeResources(v3, v5, a3, 1LL);
  return v4;
}
