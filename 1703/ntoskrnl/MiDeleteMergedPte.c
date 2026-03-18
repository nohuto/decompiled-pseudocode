/*
 * XREFs of MiDeleteMergedPte @ 0x140079374
 * Callers:
 *     MiDecrementCloneBlockReference @ 0x1400036F4 (MiDecrementCloneBlockReference.c)
 *     MiDecrementCombinedPte @ 0x140078BE8 (MiDecrementCombinedPte.c)
 * Callees:
 *     MiTryDeleteTransitionPte @ 0x14007A1EC (MiTryDeleteTransitionPte.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiReleasePageFileSpace @ 0x14010AE90 (MiReleasePageFileSpace.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDeleteMergedPte(__int64 a1, ULONG_PTR a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // rax
  char v9; // [rsp+40h] [rbp+18h] BYREF

  result = MI_READ_PTE_LOCK_FREE(a2);
  if ( result )
  {
    v5 = MiLockProtoPoolPage(a2, &v9);
    v7 = MiTryDeleteTransitionPte(a2);
    if ( v7 == 1 )
    {
      v8 = MI_READ_PTE_LOCK_FREE(a2);
      MiReleasePageFileSpace(a1, v8, 1LL);
    }
    LOBYTE(v6) = v9;
    MiUnlockProtoPoolPage(v5, v6);
    return v7;
  }
  return result;
}
