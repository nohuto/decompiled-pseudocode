/*
 * XREFs of MiSectionOpen @ 0x1405958D0
 * Callers:
 *     <none>
 * Callees:
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     MiInsertSharedCommitNode @ 0x140595350 (MiInsertSharedCommitNode.c)
 */

__int64 __fastcall MiSectionOpen(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rax
  unsigned __int64 v5; // r10

  v4 = (__int64 *)MiSectionControlArea(a4);
  return MiInsertSharedCommitNode(v4, v5, 0);
}
