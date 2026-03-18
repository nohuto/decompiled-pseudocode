/*
 * XREFs of MiIncludeSharedCommit @ 0x1400E6C10
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x1400E6C48 (MiReleaseControlAreaCharges.c)
 *     MiUpdateProcessSharedCommit @ 0x140567EE0 (MiUpdateProcessSharedCommit.c)
 *     MiInsertSharedCommitNode @ 0x140595350 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x140595640 (MiRemoveSharedCommitNode.c)
 *     MiVadHasSharedCommit @ 0x1405BF9E8 (MiVadHasSharedCommit.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIncludeSharedCommit(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 56);
  return (v1 & 0x20) != 0
      || (v1 & 0x400) == 0 && a1 != qword_1403CB4B8 && a1 != qword_1403CB4A8 && !*(_QWORD *)(a1 + 64);
}
