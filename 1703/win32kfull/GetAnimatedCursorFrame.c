/*
 * XREFs of GetAnimatedCursorFrame @ 0x1C00465D8
 * Callers:
 *     _DrawIconEx @ 0x1C0044444 (_DrawIconEx.c)
 *     NtUserDrawIconEx @ 0x1C0044B50 (NtUserDrawIconEx.c)
 *     zzzUpdateCursorImage @ 0x1C0049A60 (zzzUpdateCursorImage.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00B9818 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     NtUserGetIconSize @ 0x1C00F47F0 (NtUserGetIconSize.c)
 *     NtUserGetCursorFrameInfo @ 0x1C010B080 (NtUserGetCursorFrameInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetAnimatedCursorFrame(__int64 a1, int a2)
{
  __int64 v2; // rdx

  if ( *(_QWORD *)(a1 + 104)
    && *(_QWORD *)(a1 + 96)
    && a2 >= 0
    && a2 < *(_DWORD *)(a1 + 92)
    && (_mm_lfence(), v2 = *(int *)(*(_QWORD *)(a1 + 104) + 4LL * a2), (int)v2 >= 0)
    && (int)v2 < *(_DWORD *)(a1 + 88) )
  {
    return *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * v2);
  }
  else
  {
    return 0LL;
  }
}
