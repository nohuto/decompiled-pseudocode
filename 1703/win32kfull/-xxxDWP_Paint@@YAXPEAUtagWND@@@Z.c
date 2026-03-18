/*
 * XREFs of ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C003BE18
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxEndPaint @ 0x1C003BF60 (xxxEndPaint.c)
 *     xxxBeginPaint @ 0x1C005DAD0 (xxxBeginPaint.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall xxxDWP_Paint(struct tagWND *a1)
{
  if ( (*((_BYTE *)a1 + 60) & 4) == 0 || (unsigned int)IsRectEmptyInl((const struct tagRECT *)a1 + 9) )
  {
    if ( xxxBeginPaint(a1) )
      xxxEndPaint(a1);
  }
}
