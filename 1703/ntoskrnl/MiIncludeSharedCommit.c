/*
 * XREFs of MiIncludeSharedCommit @ 0x140099540
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x1400990E0 (MiReleaseControlAreaCharges.c)
 *     MiAllocateChildVads @ 0x14041E31C (MiAllocateChildVads.c)
 *     MiInsertSharedCommitNode @ 0x140512070 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x140512380 (MiRemoveSharedCommitNode.c)
 *     MiUpdateProcessSharedCommit @ 0x140549F48 (MiUpdateProcessSharedCommit.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIncludeSharedCommit(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 56);
  return (v1 & 0x20) != 0
      || (v1 & 0x400) == 0 && a1 != qword_14036BFF8 && a1 != qword_14036BFE8 && !*(_QWORD *)(a1 + 64);
}
