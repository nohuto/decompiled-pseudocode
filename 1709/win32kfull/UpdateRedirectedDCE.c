/*
 * XREFs of UpdateRedirectedDCE @ 0x1C00FAEE0
 * Callers:
 *     ChangeRedirectionParentInDCEs @ 0x1C008FF10 (ChangeRedirectionParentInDCEs.c)
 *     UnredirectDCEs @ 0x1C008FFB4 (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x1C0090070 (RedirectDCEs.c)
 * Callees:
 *     GreSelectRedirectionBitmap @ 0x1C0029120 (GreSelectRedirectionBitmap.c)
 *     GreHintDCWnd @ 0x1C002A080 (GreHintDCWnd.c)
 *     GetStyleWindow @ 0x1C006B4B0 (GetStyleWindow.c)
 *     GetRedirectionBitmap @ 0x1C00902B0 (GetRedirectionBitmap.c)
 *     RevalidateDCE @ 0x1C00FB000 (RevalidateDCE.c)
 */

__int64 __fastcall UpdateRedirectedDCE(__int64 a1, int a2)
{
  __int64 RedirectionBitmap; // rsi
  __int64 StyleWindow; // rax
  int v6; // r8d
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 result; // rax
  __int64 *v11; // rdx
  HDC v12; // rcx
  unsigned int v13; // r9d

  RedirectionBitmap = 0LL;
  StyleWindow = GetStyleWindow(*(_QWORD *)(a1 + 16), 2848);
  v7 = StyleWindow;
  if ( StyleWindow )
    RedirectionBitmap = GetRedirectionBitmap(StyleWindow);
  if ( !(unsigned int)GreSelectRedirectionBitmap(*(HDC *)(a1 + 8), RedirectionBitmap, v6) )
    GreSelectVisRgn(*(_QWORD *)(a1 + 8), 0LL, 1LL);
  v8 = *(_QWORD *)(a1 + 8);
  if ( v7 )
  {
    *(_DWORD *)(a1 + 64) |= 0x4000u;
    v9 = 5LL;
  }
  else
  {
    *(_DWORD *)(a1 + 64) &= ~0x4000u;
    v9 = 6LL;
  }
  result = GreGetBounds(v8, 0LL, v9);
  if ( *(_QWORD *)(a1 + 32) != v7 )
  {
    v11 = *(__int64 **)(a1 + 16);
    v12 = *(HDC *)(a1 + 8);
    a2 = 1;
    *(_QWORD *)(a1 + 32) = v7;
    GreHintDCWnd(v12, *v11, 0LL, 0, 0);
    if ( !v7 || (*(_BYTE *)(v7 + 66) & 8) == 0 )
      return RevalidateDCE(a1);
    LOBYTE(v13) = ~*(_BYTE *)(v7 + 67);
    result = GreHintDCWnd(
               *(HDC *)(a1 + 8),
               **(_QWORD **)(a1 + 16),
               *(_QWORD *)v7,
               (v13 >> 1) & 1,
               (*(_WORD *)(v7 + 82) & 0x3FFF) == 669);
  }
  if ( a2 )
    return RevalidateDCE(a1);
  return result;
}
