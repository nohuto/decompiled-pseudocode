/*
 * XREFs of _GetIconSize @ 0x1C009B6FC
 * Callers:
 *     _InternalGetIconInfo @ 0x1C001D404 (_InternalGetIconInfo.c)
 *     NtUserDrawIconEx @ 0x1C009AE70 (NtUserDrawIconEx.c)
 *     _DrawIconEx @ 0x1C009B010 (_DrawIconEx.c)
 *     NtUserGetIconSize @ 0x1C009CA30 (NtUserGetIconSize.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetIconSize(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax

  *a2 = *(_DWORD *)(a1 + 140);
  *a3 = *(_DWORD *)(a1 + 144);
  result = W32GetCurrentThreadDpiAwarenessContext(a1, a2);
  if ( (result & 0xF) == 0 )
  {
    result = atomUSER32;
    if ( *(_WORD *)(a1 + 72) == atomUSER32 )
    {
      result = *(unsigned int *)(gpsi + 2288LL);
      if ( *a2 == (_DWORD)result )
      {
        result = (unsigned int)(2 * *(_DWORD *)(gpsi + 2292LL));
        if ( *a3 == (_DWORD)result )
        {
          *a2 = *(_DWORD *)(gpsi + 2408LL);
          result = gpsi;
          *a3 = 2 * *(_DWORD *)(gpsi + 2412LL);
        }
      }
    }
  }
  return result;
}
