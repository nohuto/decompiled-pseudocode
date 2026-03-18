/*
 * XREFs of MiPrepareAttachThread @ 0x1400CAFFC
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MmQueryCommitReleaseState @ 0x14012B070 (MmQueryCommitReleaseState.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402137F4 (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPrepareAttachThread(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 result; // rax
  int v4; // [rsp+8h] [rbp+8h]

  v4 = *(_DWORD *)(a2 + 192);
  if ( (*(_DWORD *)(a1 + 772) & 0xC00u) < 0xC00 )
    return 0LL;
  if ( *(_QWORD *)(a2 + 104) )
    return 0LL;
  v2 = *(_DWORD *)(a2 + 192) >> 8;
  if ( (v2 & 0xF0) == 0xF0 || *(_QWORD *)(a2 + 136) <= 1uLL )
    return 0LL;
  result = 1LL;
  BYTE1(v4) = v2 & 0xF | ((v2 & 0xF0) + 16);
  *(_WORD *)(a2 + 192) = v4;
  return result;
}
