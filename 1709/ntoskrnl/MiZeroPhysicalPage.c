/*
 * XREFs of MiZeroPhysicalPage @ 0x140075D00
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140025FD0 (MiPfPutPagesInTransition.c)
 *     MiIssueHardFault @ 0x14002C7B0 (MiIssueHardFault.c)
 *     MiWaitForInPageComplete @ 0x14002D860 (MiWaitForInPageComplete.c)
 *     MiGetPageChain @ 0x1400484F0 (MiGetPageChain.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 *     MiZeroInParallelWorker @ 0x1400CC570 (MiZeroInParallelWorker.c)
 *     MiZeroLargePage @ 0x1400CFBFC (MiZeroLargePage.c)
 *     MiPerformFinalZeroing @ 0x14022A6E0 (MiPerformFinalZeroing.c)
 *     MiComputeOptimalZeroPath @ 0x140829810 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x140829A64 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUserPdeOrAbove @ 0x1401155A0 (MiUserPdeOrAbove.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     KeZeroPages @ 0x140184D60 (KeZeroPages.c)
 *     MxFillPhysicalPage @ 0x14082C5B4 (MxFillPhysicalPage.c)
 */

__int64 __fastcall MiZeroPhysicalPage(ULONG_PTR BugCheckParameter2, char a2, int a3)
{
  ULONG_PTR v6; // r14
  __int64 v7; // r15
  unsigned int v8; // r12d
  unsigned __int64 v9; // rdi
  char v10; // al
  char v11; // bp
  unsigned __int64 v12; // r10
  __int64 v13; // rbp
  ULONG_PTR v14; // rbx
  unsigned __int64 v15; // rsi
  int v16; // eax
  int v17; // eax
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r9
  __int64 result; // rax
  __int64 v21; // rbx
  unsigned __int8 v22; // [rsp+58h] [rbp+10h] BYREF

  v6 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v7 = *(unsigned __int8 *)(v6 + 34) >> 6;
  v8 = *(unsigned __int8 *)(v6 + 34) >> 6;
  if ( (a2 & 2) == 0 )
  {
    v8 = dword_140388570[4 * v7 + a3];
    if ( v8 != (_DWORD)v7 )
      MiChangePageAttribute(48 * BugCheckParameter2 - 0x58000000000LL, v8, 0LL);
  }
  v9 = 0LL;
  if ( (a2 & 1) == 0 || (v9 = MiReservePtes(&qword_140389360, 1LL)) == 0 )
  {
    if ( KeGetCurrentPrcb()->HyperPte )
    {
      v21 = MiMapPageInHyperSpaceWorker(BugCheckParameter2, &v22, 0x80000000LL);
      KeZeroPages(v21, 4096LL);
      result = MiUnmapPageInHyperSpaceWorker(v21, v22, 0x80000000LL);
      v9 = 1LL;
    }
    else
    {
      result = MxFillPhysicalPage(BugCheckParameter2);
    }
    goto LABEL_40;
  }
  v10 = *(_BYTE *)(v6 + 34) >> 6;
  v11 = 4;
  if ( v10 )
  {
    if ( v10 == 2 )
      v11 = 28;
  }
  else
  {
    v11 = 12;
  }
  v12 = 0xFFFFF68000000000uLL;
  v13 = v11 & 0x1F;
  v14 = ((BugCheckParameter2 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v13] & 0xFFFF000000000E7FuLL | 0x21;
  if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_30;
  v15 = (__int64)(v9 << 25) >> 16;
  if ( v9 >= 0xFFFFF6FB40000000uLL && v9 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v9 == 0xFFFFF6FB7DBEDF68uLL )
      v14 |= 0x8000000000000000uLL;
    else
      v14 &= ~0x8000000000000000uLL;
    v16 = MiUserPdeOrAbove(v9);
    v12 = 0xFFFFF68000000000uLL;
    if ( v16 )
      v14 |= 4uLL;
  }
  if ( v9 <= 0xFFFFF6BFFFFFFF78uLL )
    v14 |= 4uLL;
  if ( v15 >= 0xFFFF800000000000uLL )
  {
    if ( byte_1403899D0[((v15 >> 39) & 0x1FF) - 256] == 1
      || v15 >= 0xFFFFF68000000000uLL && v15 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      goto LABEL_31;
    }
    if ( v15 < qword_140389B40 || (v17 = HIBYTE(word_1403885F8), v15 > qword_140388958) )
      v17 = (unsigned __int8)word_1403885F8;
  }
  else
  {
    v17 = HIBYTE(word_1403885F8);
  }
  if ( v17 )
LABEL_30:
    v14 |= 0x100uLL;
LABEL_31:
  if ( (v13 & 5) == 4 )
    v14 |= 0x42uLL;
  v18 = (((unsigned __int16)v14 ^ (unsigned __int16)((unsigned __int8)word_1403885F8 << 8)) & 0x100 ^ v14) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  *(_QWORD *)v9 = v18;
  if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v9, v18);
  KeZeroPages((__int64)((v9 << 25) - (v12 << 25)) >> 16, 4096LL);
  result = MiReleasePtes((__int64)&qword_140389360, v9, 1u, v19);
LABEL_40:
  if ( v8 != (_DWORD)v7 && v8 != a3 )
  {
    if ( v9 )
      return MiChangePageAttribute(v6, (unsigned int)v7, 0LL);
  }
  return result;
}
