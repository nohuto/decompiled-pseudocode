/*
 * XREFs of UpdateRedirectedDCE @ 0x1C00E3320
 * Callers:
 *     ChangeRedirectionParentInDCEs @ 0x1C0021674 (ChangeRedirectionParentInDCEs.c)
 *     UnredirectDCEs @ 0x1C0022A58 (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x1C0022B14 (RedirectDCEs.c)
 * Callees:
 *     GetRedirectionBitmap @ 0x1C0025F80 (GetRedirectionBitmap.c)
 *     GetStyleWindow @ 0x1C0067050 (GetStyleWindow.c)
 *     GreSelectRedirectionBitmap @ 0x1C00716C0 (GreSelectRedirectionBitmap.c)
 *     GreHintDCWnd @ 0x1C0071B30 (GreHintDCWnd.c)
 *     RevalidateDCE @ 0x1C00E3440 (RevalidateDCE.c)
 */

__int64 __fastcall UpdateRedirectedDCE(__int64 a1, int a2)
{
  __int64 RedirectionBitmap; // rsi
  __int64 StyleWindow; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 result; // rax
  __int64 *v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r9d

  RedirectionBitmap = 0LL;
  StyleWindow = GetStyleWindow(*(_QWORD *)(a1 + 16), 2848);
  v6 = StyleWindow;
  if ( StyleWindow )
    RedirectionBitmap = GetRedirectionBitmap(StyleWindow);
  if ( !(unsigned int)GreSelectRedirectionBitmap(*(_QWORD *)(a1 + 8), RedirectionBitmap) )
    GreSelectVisRgn(*(_QWORD *)(a1 + 8), 0LL, 1LL);
  v7 = *(_QWORD *)(a1 + 8);
  if ( v6 )
  {
    *(_DWORD *)(a1 + 64) |= 0x4000u;
    v8 = 5LL;
  }
  else
  {
    *(_DWORD *)(a1 + 64) &= ~0x4000u;
    v8 = 6LL;
  }
  result = GreGetBounds(v7, 0LL, v8);
  if ( *(_QWORD *)(a1 + 32) != v6 )
  {
    v10 = *(__int64 **)(a1 + 16);
    v11 = *(_QWORD *)(a1 + 8);
    a2 = 1;
    *(_QWORD *)(a1 + 32) = v6;
    GreHintDCWnd(v11, *v10, 0LL, 0, 0);
    if ( !v6 || (*(_BYTE *)(v6 + 66) & 8) == 0 )
      return RevalidateDCE(a1);
    LOBYTE(v12) = ~*(_BYTE *)(v6 + 67);
    result = GreHintDCWnd(
               *(_QWORD *)(a1 + 8),
               **(_QWORD **)(a1 + 16),
               *(_QWORD *)v6,
               (v12 >> 1) & 1,
               (*(_WORD *)(v6 + 82) & 0x3FFF) == 669);
  }
  if ( a2 )
    return RevalidateDCE(a1);
  return result;
}
