/*
 * XREFs of _GetIconSize @ 0x1C0048BA8
 * Callers:
 *     _DrawIconEx @ 0x1C0044444 (_DrawIconEx.c)
 *     NtUserDrawIconEx @ 0x1C0044B50 (NtUserDrawIconEx.c)
 *     _InternalGetIconInfo @ 0x1C0048770 (_InternalGetIconInfo.c)
 *     NtUserGetIconSize @ 0x1C00F47F0 (NtUserGetIconSize.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetIconSize(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  int v7; // eax
  int v8; // eax

  *a2 = *(_DWORD *)(a1 + 140);
  *a3 = *(_DWORD *)(a1 + 144);
  result = W32GetCurrentThreadDpiAwarenessContext(a1);
  if ( (result & 0xF) == 0 )
  {
    result = atomUSER32;
    if ( *(_WORD *)(a1 + 72) == atomUSER32 )
    {
      result = *(unsigned int *)(gpsi + 1924LL);
      if ( *a2 == (_DWORD)result )
      {
        result = (unsigned int)(2 * *(_DWORD *)(gpsi + 1928LL));
        if ( *a3 == (_DWORD)result )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(gpsi) & 0xF) != 0 )
            v7 = *(_DWORD *)(gpsi + 1924LL);
          else
            v7 = *(_DWORD *)(gpsi + 2312LL);
          *a2 = v7;
          if ( (W32GetCurrentThreadDpiAwarenessContext(gpsi) & 0xF) != 0 )
            v8 = *(_DWORD *)(gpsi + 1928LL);
          else
            v8 = *(_DWORD *)(gpsi + 2316LL);
          result = (unsigned int)(2 * v8);
          *a3 = result;
        }
      }
    }
  }
  return result;
}
