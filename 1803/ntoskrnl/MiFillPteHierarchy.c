/*
 * XREFs of MiFillPteHierarchy @ 0x14003E540
 * Callers:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiGetPhysicalAddress @ 0x14003C3F8 (MiGetPhysicalAddress.c)
 *     MiVaToPfn @ 0x14003C4FC (MiVaToPfn.c)
 *     MiBitmapRangeZero @ 0x14003C6C0 (MiBitmapRangeZero.c)
 *     MiInPagePageTable @ 0x14003D3E0 (MiInPagePageTable.c)
 *     MiPfCompleteInPageSupport @ 0x14003F1DC (MiPfCompleteInPageSupport.c)
 *     MiSynchronizeSystemVa @ 0x14003F344 (MiSynchronizeSystemVa.c)
 *     MiFindActualFaultingPte @ 0x140059BC4 (MiFindActualFaultingPte.c)
 *     MmFreeContiguousMemory @ 0x1400C9790 (MmFreeContiguousMemory.c)
 *     MiSmallVaStillMapsFrame @ 0x1400CD0D0 (MiSmallVaStillMapsFrame.c)
 *     MiLockStealUserVm @ 0x1400D5854 (MiLockStealUserVm.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     MiUpdateForkMaps @ 0x140141F94 (MiUpdateForkMaps.c)
 *     MiTranslatePageForCopy @ 0x14015B6C0 (MiTranslatePageForCopy.c)
 *     MiDbgCopyMemoryTarget @ 0x140260A00 (MiDbgCopyMemoryTarget.c)
 *     MiMapProcessExecutable @ 0x1404E94B0 (MiMapProcessExecutable.c)
 *     MiMapNewSession @ 0x14060B454 (MiMapNewSession.c)
 *     MxMapVa @ 0x14089ABC4 (MxMapVa.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiFillPteHierarchy(unsigned __int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rcx

  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a2 = v2;
  v3 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  a2[1] = v3;
  result = 0xFFFFF68000000000uLL;
  v5 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  a2[2] = v5;
  a2[3] = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  return result;
}
