/*
 * XREFs of ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01E5184
 * Callers:
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01E4CA4 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01E59D0 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C01E5BD0 (xxxDDETrackPostHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01E5FCC (xxxDDETrackWindowDying.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     xxxClientFreeDDEHandle @ 0x1C0200900 (xxxClientFreeDDEHandle.c)
 */

void __fastcall xxxFreeListFree(struct tagFREELIST *a1)
{
  struct tagFREELIST *v1; // rbx
  int v2; // edi
  __int64 ThreadWin32Thread; // rax
  struct tagFREELIST *v4; // rcx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    v1 = a1;
    v2 = *(_DWORD *)(gptiCurrent + 440LL) & 1;
    do
    {
      PushW32ThreadLock((__int64)v1, v5, (__int64)FreeListFree);
      if ( !v2 )
        xxxClientFreeDDEHandle(*((_QWORD *)v1 + 1), *((unsigned int *)v1 + 4));
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v5[0];
      v4 = v1;
      v1 = *(struct tagFREELIST **)v1;
      Win32FreePool(v4);
    }
    while ( v1 );
  }
}
