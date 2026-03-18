/*
 * XREFs of ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01F11C4
 * Callers:
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01F0CE4 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01F19F0 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C01F1BFC (xxxDDETrackPostHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01F2000 (xxxDDETrackWindowDying.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxClientFreeDDEHandle @ 0x1C0202140 (xxxClientFreeDDEHandle.c)
 */

void __fastcall xxxFreeListFree(struct tagFREELIST *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagFREELIST *v4; // rbx
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 ThreadWin32Thread; // rax
  struct tagFREELIST *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    v4 = a1;
    v5 = *(_DWORD *)(gptiCurrent + 464LL) & 1;
    do
    {
      PushW32ThreadLock((__int64)v4, v13, (__int64)FreeListFree, a4);
      if ( !v5 )
        xxxClientFreeDDEHandle(*((_QWORD *)v4 + 1), *((unsigned int *)v4 + 4));
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7, v8);
      *(_QWORD *)(ThreadWin32Thread + 16) = v13[0];
      v10 = v4;
      v4 = *(struct tagFREELIST **)v4;
      Win32FreePool(v10, v11, v12);
    }
    while ( v4 );
  }
}
