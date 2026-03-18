/*
 * XREFs of MiIncludeSharedCommit @ 0x1400A26D0
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x1400A2C24 (MiReleaseControlAreaCharges.c)
 *     MiUpdateProcessSharedCommit @ 0x140460128 (MiUpdateProcessSharedCommit.c)
 *     MiInsertSharedCommitNode @ 0x1404D0A10 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1404D0D00 (MiRemoveSharedCommitNode.c)
 *     MiVadHasSharedCommit @ 0x14057AFC0 (MiVadHasSharedCommit.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIncludeSharedCommit(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 56);
  return (v1 & 0x20) != 0
      || (v1 & 0x400) == 0 && a1 != qword_140388318 && a1 != qword_140388308 && !*(_QWORD *)(a1 + 64);
}
