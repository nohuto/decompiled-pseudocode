/*
 * XREFs of GetAnimatedCursorFrame @ 0x1C0089978
 * Callers:
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0047434 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C0089310 (zzzUpdateCursorImage.c)
 *     NtUserDrawIconEx @ 0x1C009AE70 (NtUserDrawIconEx.c)
 *     _DrawIconEx @ 0x1C009B010 (_DrawIconEx.c)
 *     NtUserGetIconSize @ 0x1C009CA30 (NtUserGetIconSize.c)
 *     NtUserGetCursorFrameInfo @ 0x1C0114D60 (NtUserGetCursorFrameInfo.c)
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
