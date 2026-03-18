/*
 * XREFs of xxxSwitchToThisWindow @ 0x1C000BE60
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     IsThreadHung @ 0x1C0085124 (IsThreadHung.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxSetForegroundWindow @ 0x1C00CBA34 (xxxSetForegroundWindow.c)
 *     _GetNextQueueWindow @ 0x1C01D02B4 (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxSwitchToThisWindow(struct tagWND *a1, int a2)
{
  __int64 v5; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF

  if ( gpqForeground )
  {
    if ( !a2 )
    {
      v5 = *(_QWORD *)(gpqForeground + 120LL);
      if ( v5 )
      {
        if ( GetNextQueueWindow(v5, 0LL, 1LL) && (*(_BYTE *)(v5 + 64) & 8) == 0 && (*(_BYTE *)(v5 + 60) & 0x20) == 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v9[0] = *(_QWORD *)(ThreadWin32Thread + 392);
          *(_QWORD *)(ThreadWin32Thread + 392) = v9;
          v9[1] = v5;
          _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
          xxxSetWindowPos((struct tagWND *)v5, 0, 0, 16403);
          ThreadUnlock1(v8, v7);
        }
      }
    }
  }
  xxxSetForegroundWindow(a1);
  if ( a2 && (*((_BYTE *)a1 + 71) & 0x20) != 0 && !(unsigned int)IsThreadHung(*((_QWORD *)a1 + 2), 0LL) )
    PostEventMessageEx(*((struct tagTHREADINFO **)a1 + 2), 274, 61728LL, 0LL, 0LL);
  return 1LL;
}
