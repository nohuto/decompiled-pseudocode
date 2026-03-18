/*
 * XREFs of MiPrepareAttachThread @ 0x1400D4D68
 * Callers:
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MmQueryCommitReleaseState @ 0x1400C6588 (MmQueryCommitReleaseState.c)
 *     MiLockStealUserVm @ 0x1400D5854 (MiLockStealUserVm.c)
 *     MmReleaseCommitForMemResetPages @ 0x140251BF0 (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPrepareAttachThread(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 result; // rax
  int v4; // [rsp+8h] [rbp+8h]

  v4 = *(_DWORD *)(a2 + 184);
  if ( (*(_DWORD *)(a1 + 772) & 0xC00u) < 0xC00 )
    return 0LL;
  if ( *(_QWORD *)(a2 + 104) )
    return 0LL;
  v2 = *(_DWORD *)(a2 + 184) >> 8;
  if ( (v2 & 0xF0) == 0xF0 || *(_QWORD *)(a2 + 136) <= 1uLL )
    return 0LL;
  result = 1LL;
  BYTE1(v4) = v2 + 16;
  *(_WORD *)(a2 + 184) = v4;
  return result;
}
