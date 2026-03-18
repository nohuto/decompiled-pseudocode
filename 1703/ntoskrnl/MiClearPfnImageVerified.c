/*
 * XREFs of MiClearPfnImageVerified @ 0x1400C7700
 * Callers:
 *     MiDeleteClusterPage @ 0x14000D020 (MiDeleteClusterPage.c)
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MiGatherMappedPages @ 0x1400AFB14 (MiGatherMappedPages.c)
 *     MiProbeLeafFrame @ 0x1400B44D0 (MiProbeLeafFrame.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 *     MiRestoreTransitionPte @ 0x140104D70 (MiRestoreTransitionPte.c)
 *     MiDeleteClusterSection @ 0x14010A950 (MiDeleteClusterSection.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiReferencePageForModifiedWrite @ 0x14010EC0C (MiReferencePageForModifiedWrite.c)
 *     MiFreeLargePageMemory @ 0x140126770 (MiFreeLargePageMemory.c)
 *     MiDeletePerSessionProtos @ 0x140221048 (MiDeletePerSessionProtos.c)
 *     MmChangeImageProtection @ 0x1404B2670 (MmChangeImageProtection.c)
 *     MiReleasePrivilegedDriverState @ 0x140585D78 (MiReleasePrivilegedDriverState.c)
 *     MiReloadBootLoadedDrivers @ 0x140815898 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiGetPagePrivilege @ 0x1400A3660 (MiGetPagePrivilege.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KeSetPagePrivilege @ 0x1401FC9E8 (KeSetPagePrivilege.c)
 */

unsigned __int64 __fastcall MiClearPfnImageVerified(__int64 a1, char a2)
{
  unsigned __int64 result; // rax
  unsigned __int8 v5; // si
  __int64 v6; // r8
  unsigned __int64 v7[3]; // [rsp+30h] [rbp-18h] BYREF

  result = a2 & 4;
  if ( ((*(_QWORD *)(a1 + 40) >> 54) & 7) == 3 )
  {
    if ( (a2 & 4) != 0 )
      v5 = 17;
    else
      v5 = MiLockPageInline(a1);
    if ( (a2 & 8) != 0 && (unsigned int)MiGetPagePrivilege(a1, 1, v7) )
    {
      v6 = 32LL;
      if ( (a2 & 0x10) == 0 )
        v6 = 16LL;
      if ( (int)KeSetPagePrivilege((a1 + 0x58000000000LL) / 48, v7, v6) < 0 )
        KeBugCheckEx(0x1Au, 0x5150BuLL, (a1 + 0x58000000000LL) / 48, 0LL, 0LL);
    }
    result = 0xFE3FFFFFFFFFFFFFuLL;
    *(_QWORD *)(a1 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    if ( v5 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      result = v5;
      __writecr8(v5);
    }
  }
  return result;
}
