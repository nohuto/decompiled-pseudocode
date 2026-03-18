/*
 * XREFs of MiTryDeleteTransitionPte @ 0x1400E4FE4
 * Callers:
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiDeletePteRun @ 0x14004E1C0 (MiDeletePteRun.c)
 *     MiRemoveMappedPtes @ 0x14005C210 (MiRemoveMappedPtes.c)
 *     MiDeleteMergedPte @ 0x1400E4F14 (MiDeleteMergedPte.c)
 *     MiDeleteSystemPte @ 0x140221900 (MiDeleteSystemPte.c)
 * Callees:
 *     MiDeleteTransitionPte @ 0x1400317D0 (MiDeleteTransitionPte.c)
 *     MiLockTransitionLeafPage @ 0x1400E5058 (MiLockTransitionLeafPage.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int64 __fastcall MiTryDeleteTransitionPte(ULONG_PTR *BugCheckParameter2)
{
  ULONG_PTR v1; // rax
  ULONG_PTR v4; // rax

  v1 = *BugCheckParameter2;
  if ( (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    LOWORD(v1) = MiReadPteShadow(BugCheckParameter2, v1);
  }
  if ( (v1 & 0x400) != 0 )
    return 1LL;
  v4 = MiLockTransitionLeafPage((ULONG_PTR)BugCheckParameter2);
  if ( !v4 )
    return 1LL;
  else
    return MiDeleteTransitionPte(BugCheckParameter2, v4, 0x11u, 1);
}
