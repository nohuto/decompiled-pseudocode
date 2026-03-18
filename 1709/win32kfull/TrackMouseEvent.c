/*
 * XREFs of TrackMouseEvent @ 0x1C0084C04
 * Callers:
 *     NtUserTrackMouseEvent @ 0x1C0084A90 (NtUserTrackMouseEvent.c)
 *     xxxMNMouseMove @ 0x1C0207FA4 (xxxMNMouseMove.c)
 * Callees:
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C0084FA4 (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 */

__int64 __fastcall TrackMouseEvent(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int v4; // edx
  int v5; // edx

  v2 = *(_QWORD *)(gptiCurrent + 432LL);
  result = ValidateHwnd(*(_QWORD *)(a1 + 8));
  if ( result )
  {
    if ( result == *(_QWORD *)(v2 + 184)
      && (v4 = *(_DWORD *)(a1 + 4), (*(_DWORD *)(v2 + 192) != 1) == (((unsigned int)v4 >> 4) & 1)) )
    {
      if ( v4 < 0 )
      {
        if ( (v4 & 2) != 0 )
          *(_DWORD *)(v2 + 48) &= ~0x80u;
        if ( (*(_DWORD *)(a1 + 4) & 1) != 0 && (*(_DWORD *)(v2 + 48) & 0x40) != 0 )
        {
          FindTimer(result, 65530, 2, 1, 0LL);
          *(_DWORD *)(v2 + 48) &= ~0x40u;
        }
      }
      else
      {
        if ( (v4 & 2) != 0 )
          *(_DWORD *)(v2 + 48) |= 0x80u;
        if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
        {
          *(_DWORD *)(v2 + 48) |= 0x40u;
          v5 = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(v2 + 212) = v5;
          if ( ((v5 + 1) & 0xFFFFFFFE) == 0 )
            v5 = gdtMouseHover;
          *(_DWORD *)(v2 + 212) = v5;
          ResetMouseHover((struct tagDESKTOP *)v2, *(struct tagPOINT *)(*(_QWORD *)(result + 16) + 732LL));
        }
      }
    }
    else if ( (*(_DWORD *)(a1 + 4) & 0x80000002) == 2 )
    {
      PostMessage(result, (((*(_DWORD *)(a1 + 4) >> 4) & 1) == 0) | 0x2A2u, 0LL, 0LL);
    }
    return 1LL;
  }
  return result;
}
