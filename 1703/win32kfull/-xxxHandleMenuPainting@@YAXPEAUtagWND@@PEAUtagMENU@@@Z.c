/*
 * XREFs of ?xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z @ 0x1C0203198
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxMenuDraw @ 0x1C000D438 (xxxMenuDraw.c)
 *     xxxEndPaint @ 0x1C003BF60 (xxxEndPaint.c)
 *     xxxBeginPaint @ 0x1C005DAD0 (xxxBeginPaint.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall xxxHandleMenuPainting(struct tagWND *a1, struct tagMENU *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD v6[4]; // [rsp+20h] [rbp-88h] BYREF
  HDC v7[10]; // [rsp+40h] [rbp-68h] BYREF

  v6[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v6;
  v6[1] = a2;
  if ( a2 )
    ++*((_DWORD *)a2 + 2);
  xxxBeginPaint(a1, (__int64)v7);
  xxxMenuDraw(v7[0], (__int64)a2, (__int64)a1);
  xxxEndPaint(a1, v7);
  ThreadUnlock1(v5, v4);
}
