/*
 * XREFs of RemoteRedrawRectangle @ 0x1C01F3AD8
 * Callers:
 *     NtUserRemoteRedrawRectangle @ 0x1C01EAA80 (NtUserRemoteRedrawRectangle.c)
 *     CtxDisplayIOCtl @ 0x1C01F86FC (CtxDisplayIOCtl.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C0069A60 (xxxRedrawWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     vDrvInvalidateRect @ 0x1C0298EF4 (vDrvInvalidateRect.c)
 */

void __fastcall RemoteRedrawRectangle(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !gspdeskShouldBeForeground )
  {
    v5 = gspwndFullScreen;
    if ( gspwndFullScreen )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
      v9[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v9;
      v9[1] = v5;
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      vDrvInvalidateRect(*(_QWORD *)(gpDispInfo + 32LL), a1);
      xxxRedrawWindow((struct tagWND *)gspwndFullScreen, a1, 0LL, 645LL);
      ThreadUnlock1(v8, v7);
    }
  }
}
