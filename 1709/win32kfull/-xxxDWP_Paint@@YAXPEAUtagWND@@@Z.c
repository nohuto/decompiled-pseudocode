/*
 * XREFs of ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C007DCE0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxEndPaint @ 0x1C007DE24 (xxxEndPaint.c)
 *     xxxBeginPaint @ 0x1C007F174 (xxxBeginPaint.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall xxxDWP_Paint(struct tagWND *a1)
{
  if ( (*((_BYTE *)a1 + 60) & 4) == 0 || IsRectEmptyInl((const struct tagRECT *)a1 + 9) )
  {
    if ( xxxBeginPaint(a1) )
      xxxEndPaint(a1);
  }
}
