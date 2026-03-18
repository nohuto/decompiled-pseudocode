/*
 * XREFs of MiLockTransitionLeafPage @ 0x1400E5058
 * Callers:
 *     MiOutSwapWorkingSetCallback @ 0x140002340 (MiOutSwapWorkingSetCallback.c)
 *     MiHandleForkTransitionPte @ 0x14000E3C0 (MiHandleForkTransitionPte.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiReservePageFileSpaceForPage @ 0x14005CFD0 (MiReservePageFileSpaceForPage.c)
 *     MiProtectPool @ 0x140065070 (MiProtectPool.c)
 *     MiReplacePageTablePage @ 0x1400D0B4C (MiReplacePageTablePage.c)
 *     MiSetSystemCodeProtection @ 0x1400DC208 (MiSetSystemCodeProtection.c)
 *     MiSetProtectionOnTransitionPte @ 0x1400E4CF4 (MiSetProtectionOnTransitionPte.c)
 *     MiTryDeleteTransitionPte @ 0x1400E4FE4 (MiTryDeleteTransitionPte.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiActOnPte @ 0x1400EC4F0 (MiActOnPte.c)
 *     MiGetWorkingSetInfoList @ 0x14010B360 (MiGetWorkingSetInfoList.c)
 *     MiUpdatePrefetchPriority @ 0x140113880 (MiUpdatePrefetchPriority.c)
 *     MiCheckCommitReleaseFromVad @ 0x140211C90 (MiCheckCommitReleaseFromVad.c)
 *     MiReleaseCommitForResetPageCallback @ 0x140212FA0 (MiReleaseCommitForResetPageCallback.c)
 *     MiTranslatePageForCopy @ 0x140217C58 (MiTranslatePageForCopy.c)
 *     MiGetPageForWriteCluster @ 0x140226540 (MiGetPageForWriteCluster.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiInvalidPteConforms @ 0x14017C70C (MiInvalidPteConforms.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiLockTransitionLeafPage(ULONG_PTR *BugCheckParameter2, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR PteShadow; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  ULONG_PTR v12; // [rsp+60h] [rbp+8h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      PteShadow = *BugCheckParameter2;
      if ( (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        PteShadow = MiReadPteShadow(BugCheckParameter2, *BugCheckParameter2);
      }
      v12 = PteShadow;
      if ( a2 > 1 && ((PteShadow & 1) != 0 || (PteShadow & 0x400) != 0) || (PteShadow & 0x800) == 0 )
        return 0LL;
      if ( (unsigned int)MiInvalidPteConforms(PteShadow, a2, a3, a4) )
      {
        v7 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v12);
        if ( (unsigned int)MiIsPfnInline(v7) )
          break;
      }
    }
    v8 = 48 * a2 - 0x58000000000LL;
    if ( a2 <= 1 )
    {
      if ( a2 == 1 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
          return 0LL;
      }
      else
      {
        MiLockPageAtDpcInline(48 * a2 - 0x58000000000LL);
      }
    }
    else
    {
      *(_BYTE *)a2 = MiLockPageInline(48 * a2 - 0x58000000000LL);
    }
    v10 = *BugCheckParameter2;
    if ( (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v10 = MiReadPteShadow(BugCheckParameter2, *BugCheckParameter2);
    }
    if ( v10 == PteShadow )
      break;
    if ( a2 <= 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v11 = *(unsigned __int8 *)a2;
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v11);
    }
  }
  if ( a2 <= 1 && (ULONG_PTR *)(*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
    KeBugCheckEx(0x1Au, 0x411uLL, (ULONG_PTR)BugCheckParameter2, PteShadow, *(_QWORD *)(v8 + 8));
  return v8;
}
