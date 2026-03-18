/*
 * XREFs of MiLockTransitionLeafPage @ 0x14005253C
 * Callers:
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiOutSwapWorkingSetPte @ 0x14000E4B0 (MiOutSwapWorkingSetPte.c)
 *     MiAccessCheck @ 0x14001F4F0 (MiAccessCheck.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     MiActOnPte @ 0x140050360 (MiActOnPte.c)
 *     MiTryDeleteTransitionPte @ 0x1400524F0 (MiTryDeleteTransitionPte.c)
 *     MiReservePageFileSpaceForPage @ 0x140053840 (MiReservePageFileSpaceForPage.c)
 *     MiUpdatePrefetchPriority @ 0x1400AE9F0 (MiUpdatePrefetchPriority.c)
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 *     MiReplacePageTablePage @ 0x1400B97E0 (MiReplacePageTablePage.c)
 *     MiSetProtectionOnTransitionPte @ 0x1400C06B0 (MiSetProtectionOnTransitionPte.c)
 *     MiSetSystemCodeProtection @ 0x14013EB40 (MiSetSystemCodeProtection.c)
 *     MiGetPageForWriteCluster @ 0x140150850 (MiGetPageForWriteCluster.c)
 *     MiTranslatePageForCopy @ 0x14015B6C0 (MiTranslatePageForCopy.c)
 *     MiCheckCommitReleaseFromVad @ 0x14025018C (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPte @ 0x140251AD0 (MiWalkResetCommitPte.c)
 *     MiMakeTransitionHeatBatch @ 0x140258D38 (MiMakeTransitionHeatBatch.c)
 *     MiHandleForkTransitionPte @ 0x14026AEC0 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiInvalidPteConforms @ 0x1401A6560 (MiInvalidPteConforms.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiLockTransitionLeafPage(ULONG_PTR BugCheckParameter2, _BYTE *a2)
{
  __int64 v4; // rax
  ULONG_PTR v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  ULONG_PTR v11; // [rsp+58h] [rbp+10h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      v4 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
      v11 = v4;
      v5 = v4;
      if ( (unsigned __int64)a2 > 1 && ((v4 & 1) != 0 || (v4 & 0x400) != 0) || (v4 & 0x800) == 0 )
        return 0LL;
      if ( (unsigned int)MiInvalidPteConforms(v4) )
      {
        v6 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v11);
        if ( (unsigned int)MiIsPfnInline(v6) )
          break;
      }
    }
    v8 = 48 * v7 - 0x58000000000LL;
    if ( (unsigned __int64)a2 <= 1 )
    {
      if ( a2 == (_BYTE *)1 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
          return 0LL;
        v5 = v11;
      }
      else
      {
        MiLockPageAtDpcInline(48 * v7 - 0x58000000000LL);
      }
    }
    else
    {
      *a2 = MiLockPageInline(48 * v7 - 0x58000000000LL);
    }
    if ( MI_READ_PTE_LOCK_FREE(BugCheckParameter2) == v5 )
      break;
    if ( (unsigned __int64)a2 <= 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v9 = (unsigned __int8)*a2;
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v9);
    }
  }
  if ( (unsigned __int64)a2 <= 1 && (*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
    KeBugCheckEx(0x1Au, 0x411uLL, BugCheckParameter2, v5, *(_QWORD *)(v8 + 8));
  return v8;
}
