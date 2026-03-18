/*
 * XREFs of MiClearPfnImageVerified @ 0x140050290
 * Callers:
 *     MiRestoreTransitionPte @ 0x1400352D0 (MiRestoreTransitionPte.c)
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     MiProbeLeafFrame @ 0x1400BE690 (MiProbeLeafFrame.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiDeleteClusterSection @ 0x1400CB53C (MiDeleteClusterSection.c)
 *     MiGatherMappedPages @ 0x1400EEBD4 (MiGatherMappedPages.c)
 *     MiReferencePageForModifiedWrite @ 0x1400EF550 (MiReferencePageForModifiedWrite.c)
 *     MiFreeLargePageMemory @ 0x1400F43C0 (MiFreeLargePageMemory.c)
 *     MiDeleteClusterPage @ 0x140108CB0 (MiDeleteClusterPage.c)
 *     MiDeletePerSessionProtos @ 0x14022DCD4 (MiDeletePerSessionProtos.c)
 *     MmChangeImageProtection @ 0x140515760 (MmChangeImageProtection.c)
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x14005AE80 (MiGetPagePrivilege.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     KeSetPagePrivilege @ 0x14015130C (KeSetPagePrivilege.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiClearPfnImageVerified(__int64 a1, char a2)
{
  unsigned __int64 result; // rax
  unsigned __int8 v5; // si
  __int64 v6; // r8
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF

  result = a2 & 4;
  if ( ((*(_QWORD *)(a1 + 40) >> 54) & 7) == 3 )
  {
    if ( (a2 & 4) != 0 )
      v5 = 17;
    else
      v5 = MiLockPageInline(a1);
    if ( (a2 & 8) != 0 && (unsigned int)MiGetPagePrivilege(a1, 1LL, v7) )
    {
      v6 = 16LL;
      if ( (a2 & 0x10) != 0 )
        v6 = 32LL;
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
