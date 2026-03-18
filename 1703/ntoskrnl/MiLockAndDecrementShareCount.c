/*
 * XREFs of MiLockAndDecrementShareCount @ 0x140102090
 * Callers:
 *     MiMakeSystemCachePteValid @ 0x140026388 (MiMakeSystemCachePteValid.c)
 *     MiReleaseInPageRefs @ 0x1400387AC (MiReleaseInPageRefs.c)
 *     MmOutSwapProcess @ 0x140040CE4 (MmOutSwapProcess.c)
 *     MiOutPageSingleKernelStack @ 0x14007C8D0 (MiOutPageSingleKernelStack.c)
 *     MiIssueHardFault @ 0x140096E10 (MiIssueHardFault.c)
 *     MiCreateSharedZeroPages @ 0x1400B79A0 (MiCreateSharedZeroPages.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     MiCompletePrivateZeroFault @ 0x1400BC2F0 (MiCompletePrivateZeroFault.c)
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 *     MiDemoteCombinedPte @ 0x1400D7830 (MiDemoteCombinedPte.c)
 *     MiResolveProtoCombine @ 0x140105DB0 (MiResolveProtoCombine.c)
 *     MiHandleForkTransitionPte @ 0x1402232C0 (MiHandleForkTransitionPte.c)
 *     MmFreeIndependentPages @ 0x14056B860 (MmFreeIndependentPages.c)
 *     MiMarkBootGuardPage @ 0x1405A7878 (MiMarkBootGuardPage.c)
 *     MiDeleteLargePfnBitMap @ 0x1406BFB38 (MiDeleteLargePfnBitMap.c)
 *     MiFreeBootDriverPage @ 0x140816020 (MiFreeBootDriverPage.c)
 *     MiReturnDriverLoadPages @ 0x140834DD4 (MiReturnDriverLoadPages.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 */

__int64 __fastcall MiLockAndDecrementShareCount(__int64 a1, char a2)
{
  unsigned __int8 v4; // si
  __int64 result; // rax

  v4 = MiLockPageInline(a1);
  if ( (a2 & 1) != 0 )
    *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  result = MiDecrementShareCount(a1);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v4);
  return result;
}
