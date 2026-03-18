/*
 * XREFs of MiZeroPhysicalPage @ 0x14010F800
 * Callers:
 *     MiGetPageChain @ 0x140017C10 (MiGetPageChain.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     MiWaitForInPageComplete @ 0x1400583A0 (MiWaitForInPageComplete.c)
 *     MiIssueHardFault @ 0x140059D80 (MiIssueHardFault.c)
 *     MiMakePageAvoidRead @ 0x140110E10 (MiMakePageAvoidRead.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     MiZeroLargePage @ 0x140138310 (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x1401386E0 (MiZeroInParallelWorker.c)
 *     MiPerformFinalZeroing @ 0x1402652E4 (MiPerformFinalZeroing.c)
 *     MiComputeOptimalZeroPath @ 0x14089CFE8 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x14089D23C (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiUserPdeOrAbove @ 0x14009DC68 (MiUserPdeOrAbove.c)
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     KeZeroPages @ 0x1401AE9B0 (KeZeroPages.c)
 *     MxFillPhysicalPage @ 0x14089BA60 (MxFillPhysicalPage.c)
 */

char __fastcall MiZeroPhysicalPage(ULONG_PTR BugCheckParameter2, char a2, int a3, __int64 a4)
{
  int v6; // edi
  __int64 v7; // r13
  __int64 v8; // r15
  int v9; // r12d
  ULONG_PTR v10; // r14
  char v11; // al
  int v12; // ebp
  unsigned __int64 v13; // r10
  signed int v14; // ebp
  ULONG_PTR v15; // rbx
  unsigned __int64 v16; // rsi
  int v17; // eax
  unsigned __int64 v18; // rdx
  char result; // al
  unsigned __int64 v20; // rbx
  int v21; // eax
  unsigned __int8 v22; // [rsp+68h] [rbp+10h] BYREF
  int v23; // [rsp+70h] [rbp+18h]

  v23 = a3;
  v6 = a3;
  v7 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v8 = *(unsigned __int8 *)(v7 + 34) >> 6;
  v9 = *(unsigned __int8 *)(v7 + 34) >> 6;
  if ( (a2 & 2) == 0 )
  {
    v9 = dword_1403CB710[4 * v8 + a3];
    if ( v9 != (_DWORD)v8 )
      MiChangePageAttribute(48 * BugCheckParameter2 - 0x58000000000LL, v9, 0);
  }
  v10 = 0LL;
  if ( (a2 & 1) == 0 || (v10 = MiReservePtes((__int64)&qword_1403CC5E0, 1u)) == 0 )
  {
    if ( KeGetCurrentPrcb()->HyperPte )
    {
      v20 = MiMapPageInHyperSpaceWorker(BugCheckParameter2, &v22, 0x80000000, a4);
      KeZeroPages(v20, 4096LL);
      result = MiUnmapPageInHyperSpaceWorker(v20, v22, 0x80000000);
      v10 = 1LL;
    }
    else
    {
      result = MxFillPhysicalPage(BugCheckParameter2);
    }
    goto LABEL_24;
  }
  v11 = *(_BYTE *)(v7 + 34) >> 6;
  v12 = 4;
  if ( v11 )
  {
    if ( v11 == 2 )
      v12 = 28;
  }
  else
  {
    v12 = 12;
  }
  v13 = 0xFFFFF68000000000uLL;
  v14 = v12 | 0xA0000000;
  v15 = ((BugCheckParameter2 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v14 & 0x1F] & 0xFFFF000000000E7FuLL | 0x21;
  if ( v10 < 0xFFFFF68000000000uLL || v10 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_34;
  v16 = (__int64)(v10 << 25) >> 16;
  if ( v10 >= 0xFFFFF6FB40000000uLL && v10 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v10 == 0xFFFFF6FB7DBEDF68uLL )
      v15 |= 0x8000000000000000uLL;
    else
      v15 &= ~0x8000000000000000uLL;
    v21 = MiUserPdeOrAbove(v10);
    v13 = 0xFFFFF68000000000uLL;
    if ( v21 )
      v15 |= 4uLL;
  }
  if ( v10 <= 0xFFFFF6BFFFFFFF78uLL )
    v15 |= 4uLL;
  if ( v16 < 0xFFFF800000000000uLL )
  {
    v17 = HIBYTE(word_1403CB7D0);
  }
  else
  {
    if ( byte_1403CCF90[((v16 >> 39) & 0x1FF) - 256] == 1
      || v16 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      goto LABEL_20;
    }
    v17 = v16 > qword_1403CBB70 || v16 < qword_1403CD100 ? (unsigned __int8)word_1403CB7D0 : HIBYTE(word_1403CB7D0);
  }
  if ( v17 )
LABEL_34:
    v15 |= 0x100uLL;
LABEL_20:
  if ( (v14 & 5) == 4 && v14 < 0 )
    v15 |= 0x42uLL;
  v18 = v15 & 0xFAFFFFFFFFFFFEFFuLL | ((word_1403CB7D0 & 1 | 0xA000000000000LL) << 8);
  *(_QWORD *)v10 = v18;
  if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v10, v18, 0x140000000LL);
  KeZeroPages((__int64)((v10 << 25) - (v13 << 25)) >> 16, 4096LL);
  result = MiReleasePtes(&qword_1403CC5E0, v10, 1LL);
  v6 = v23;
LABEL_24:
  if ( v9 != (_DWORD)v8 && v9 != v6 )
  {
    if ( v10 )
      return MiChangePageAttribute(v7, v8, 0);
  }
  return result;
}
