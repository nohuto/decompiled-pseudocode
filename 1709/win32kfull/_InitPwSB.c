/*
 * XREFs of _InitPwSB @ 0x1C0077F80
 * Callers:
 *     CalcSBStuff @ 0x1C0077264 (CalcSBStuff.c)
 *     xxxSetScrollBar @ 0x1C0083690 (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C0083CA0 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     xxxShowScrollBar @ 0x1C010A558 (xxxShowScrollBar.c)
 * Callees:
 *     DesktopAlloc @ 0x1C0097C60 (DesktopAlloc.c)
 */

__int64 __fastcall InitPwSB(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax

  result = *(_QWORD *)(a1 + 192);
  if ( !result )
  {
    v3 = DesktopAlloc(*(_QWORD *)(a1 + 24), 36LL, 6LL);
    *(_QWORD *)(a1 + 192) = v3;
    if ( v3 )
    {
      *(_DWORD *)(v3 + 24) = 100;
      *(_DWORD *)(*(_QWORD *)(a1 + 192) + 8LL) = 100;
    }
    return *(_QWORD *)(a1 + 192);
  }
  return result;
}
