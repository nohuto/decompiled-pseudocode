/*
 * XREFs of _InitPwSB @ 0x1C00D79B4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxShowScrollBar @ 0x1C00D5F08 (xxxShowScrollBar.c)
 *     xxxSetScrollBar @ 0x1C00D6A78 (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00D708C (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     CalcSBStuff @ 0x1C00D7700 (CalcSBStuff.c)
 * Callees:
 *     DesktopAlloc @ 0x1C0042C20 (DesktopAlloc.c)
 */

__int64 __fastcall InitPwSB(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v3; // rax

  result = *(_QWORD *)(a1 + 192);
  if ( !result )
  {
    v3 = DesktopAlloc(*(_QWORD *)(a1 + 24), 0x24u);
    *(_QWORD *)(a1 + 192) = v3;
    if ( v3 )
    {
      v3[6] = 100;
      *(_DWORD *)(*(_QWORD *)(a1 + 192) + 8LL) = 100;
    }
    return *(_QWORD *)(a1 + 192);
  }
  return result;
}
