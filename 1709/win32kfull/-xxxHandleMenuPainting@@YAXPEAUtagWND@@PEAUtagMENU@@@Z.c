/*
 * XREFs of ?xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z @ 0x1C0204B8C
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxMenuDraw @ 0x1C007D26C (xxxMenuDraw.c)
 *     xxxEndPaint @ 0x1C007DE24 (xxxEndPaint.c)
 *     xxxBeginPaint @ 0x1C007F174 (xxxBeginPaint.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall xxxHandleMenuPainting(struct tagWND *a1, struct tagMENU *a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[4]; // [rsp+20h] [rbp-88h] BYREF
  HDC v10[10]; // [rsp+40h] [rbp-68h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  v9[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v9;
  v9[1] = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  xxxBeginPaint(a1, (__int64)v10);
  xxxMenuDraw(v10[0], (__int64)a2, (__int64)a1);
  xxxEndPaint(a1, v10);
  ThreadUnlock1(v8, v7);
}
