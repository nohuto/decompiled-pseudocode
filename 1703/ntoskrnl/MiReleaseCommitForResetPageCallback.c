/*
 * XREFs of MiReleaseCommitForResetPageCallback @ 0x14020C030
 * Callers:
 *     <none>
 * Callees:
 *     KeShouldYieldProcessor @ 0x14000D660 (KeShouldYieldProcessor.c)
 *     MiRelockWorkingSetExclusive @ 0x1400406A4 (MiRelockWorkingSetExclusive.c)
 *     MiWorkingSetIsContended @ 0x14007A1C0 (MiWorkingSetIsContended.c)
 *     MiLockTransitionLeafPage @ 0x14007A494 (MiLockTransitionLeafPage.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiDiscardTransitionPte @ 0x14013B9CC (MiDiscardTransitionPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MiReleaseCommitForResetPageCallback(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  ULONG_PTR i; // rdi
  ULONG_PTR v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  LOGICAL ShouldYieldProcessor; // eax

  for ( i = a2; i <= a3; i += 8LL )
  {
    if ( (MI_READ_PTE_LOCK_FREE(i) & 0xC01) == 0x800 )
    {
      v6 = MiLockTransitionLeafPage(i, 0LL);
      v7 = v6;
      if ( v6 )
      {
        if ( (*(_BYTE *)(v6 + 34) & 0x10) == 0 && (*(_DWORD *)(v6 + 16) & 4) == 0 && !*(_WORD *)(v6 + 32) )
        {
          MiUnlinkPageFromList(v6, 0);
          MiDiscardTransitionPte(v7);
          ++*(_QWORD *)(a1 + 16);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
  }
  if ( (unsigned int)MiWorkingSetIsContended(*(_QWORD *)a1) || (ShouldYieldProcessor = KeShouldYieldProcessor()) != 0 )
  {
    LOBYTE(v8) = *(_BYTE *)(a1 + 8);
    LOBYTE(ShouldYieldProcessor) = MiRelockWorkingSetExclusive(*(_QWORD *)a1, v8);
  }
  return ShouldYieldProcessor;
}
