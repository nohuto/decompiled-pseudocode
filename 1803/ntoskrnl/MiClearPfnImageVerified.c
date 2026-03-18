/*
 * XREFs of MiClearPfnImageVerified @ 0x140054A44
 * Callers:
 *     MiProbeLeafPteAccess @ 0x140021D80 (MiProbeLeafPteAccess.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MiDeleteClusterSection @ 0x1400512C0 (MiDeleteClusterSection.c)
 *     MiRestoreTransitionPte @ 0x140053D40 (MiRestoreTransitionPte.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     MiReferencePageForModifiedWrite @ 0x140131E00 (MiReferencePageForModifiedWrite.c)
 *     MiGatherMappedPages @ 0x140133168 (MiGatherMappedPages.c)
 *     MiFreeLargePageMemory @ 0x1401363B0 (MiFreeLargePageMemory.c)
 *     MiDeletePerSessionProtos @ 0x140267E68 (MiDeletePerSessionProtos.c)
 *     MiDeleteClusterPage @ 0x1402694A8 (MiDeleteClusterPage.c)
 *     MmChangeImageProtection @ 0x1405BC4E0 (MmChangeImageProtection.c)
 *     MiTradeBootImagePage @ 0x1408AE0E0 (MiTradeBootImagePage.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x1400303C0 (MiGetPagePrivilege.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KeSetPagePrivilege @ 0x14023FCB0 (KeSetPagePrivilege.c)
 */

char __fastcall MiClearPfnImageVerified(ULONG_PTR BugCheckParameter2, char a2)
{
  char result; // al
  unsigned __int8 v5; // di
  unsigned __int64 v6[3]; // [rsp+30h] [rbp-18h] BYREF

  result = (*(_QWORD *)(BugCheckParameter2 + 40) >> 54) & 7;
  if ( result == 3 )
  {
    if ( (a2 & 4) != 0 )
      v5 = 17;
    else
      v5 = MiLockPageInline(BugCheckParameter2);
    if ( (a2 & 8) != 0
      && (unsigned int)MiGetPagePrivilege(BugCheckParameter2, 1, v6)
      && (int)KeSetPagePrivilege((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, v6, (a2 & 0x10) != 0 ? 32 : 16) < 0 )
    {
      KeBugCheckEx(0x1Au, 0x5150BuLL, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, 0LL, 0LL);
    }
    result = -1;
    *(_QWORD *)(BugCheckParameter2 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    if ( v5 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      result = v5;
      __writecr8(v5);
    }
  }
  return result;
}
