/*
 * XREFs of MiWalkResetCommitPte @ 0x140251AD0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockTransitionLeafPage @ 0x14005253C (MiLockTransitionLeafPage.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiDiscardTransitionPte @ 0x140154D68 (MiDiscardTransitionPte.c)
 */

__int64 __fastcall MiWalkResetCommitPte(__int64 a1, unsigned __int64 a2, int a3)
{
  ULONG_PTR v4; // r9
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rbx

  if ( !a3 && (MI_READ_PTE_LOCK_FREE(a2) & 0xC01) == 0x800 )
  {
    v5 = MiLockTransitionLeafPage(v4, 0LL);
    v6 = v5;
    if ( v5 )
    {
      if ( (*(_BYTE *)(v5 + 34) & 0x10) == 0 && (*(_DWORD *)(v5 + 16) & 4) == 0 && !*(_WORD *)(v5 + 32) )
      {
        MiUnlinkPageFromList(v5, 0LL);
        MiDiscardTransitionPte(v6);
        ++**(_QWORD **)(a1 + 168);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return 0LL;
}
