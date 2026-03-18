/*
 * XREFs of MiReleaseCommitForResetPageCallback @ 0x140212FA0
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiRelockWorkingSetExclusive @ 0x1400661C0 (MiRelockWorkingSetExclusive.c)
 *     MiLockTransitionLeafPage @ 0x1400E5058 (MiLockTransitionLeafPage.c)
 *     MiWorkingSetIsContended @ 0x1400EBDF0 (MiWorkingSetIsContended.c)
 *     KeShouldYieldProcessor @ 0x1401091E0 (KeShouldYieldProcessor.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiDiscardTransitionPte @ 0x14022AE0C (MiDiscardTransitionPte.c)
 */

char __fastcall MiReleaseCommitForResetPageCallback(__int64 a1, ULONG_PTR *a2, unsigned __int64 a3, __int64 a4)
{
  ULONG_PTR *i; // rbx
  ULONG_PTR v7; // rax
  ULONG_PTR v8; // rax
  ULONG_PTR v9; // rdi
  LOGICAL ShouldYieldProcessor; // eax

  for ( i = a2; (unsigned __int64)i <= a3; ++i )
  {
    v7 = *i;
    if ( (unsigned __int64)i >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)i <= 0xFFFFF6FB7DBED7F8uLL )
      LOWORD(v7) = MiReadPteShadow();
    if ( (v7 & 0x401) == 0 && (v7 & 0x800) != 0 )
    {
      v8 = MiLockTransitionLeafPage(i, 0LL, a3, a4);
      v9 = v8;
      if ( v8 )
      {
        if ( (*(_BYTE *)(v8 + 34) & 0x10) == 0 && (*(_DWORD *)(v8 + 16) & 4) == 0 && !*(_WORD *)(v8 + 32) )
        {
          MiUnlinkPageFromList(v8, 0LL);
          MiDiscardTransitionPte(v9);
          ++*(_QWORD *)(a1 + 16);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
  }
  if ( (unsigned int)MiWorkingSetIsContended(*(_QWORD *)a1) || (ShouldYieldProcessor = KeShouldYieldProcessor()) != 0 )
    LOBYTE(ShouldYieldProcessor) = MiRelockWorkingSetExclusive(*(_QWORD *)a1, *(_BYTE *)(a1 + 8));
  return ShouldYieldProcessor;
}
