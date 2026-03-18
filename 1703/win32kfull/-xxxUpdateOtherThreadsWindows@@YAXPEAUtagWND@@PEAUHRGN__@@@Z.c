/*
 * XREFs of ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C01F5984
 * Callers:
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C01F5984 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxUpdateThreadsWindows @ 0x1C01F87FC (xxxUpdateThreadsWindows.c)
 * Callees:
 *     ThreadLockExchangeAlways @ 0x1C00CB9BC (ThreadLockExchangeAlways.c)
 *     xxxRedrawHungWindow @ 0x1C0139BCC (xxxRedrawHungWindow.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C01F5984 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

void __fastcall xxxUpdateOtherThreadsWindows(struct tagWND *a1, HRGN a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  xxxRedrawHungWindow(a1, (__int64)a2);
  if ( (*((_BYTE *)a1 + 71) & 2) != 0 )
  {
    v5 = *((_QWORD *)a1 + 14);
    v6 = gptiCurrent;
    v7[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v7;
    v7[1] = 0LL;
    while ( v5 )
    {
      ThreadLockExchangeAlways(v5, (__int64)v7);
      xxxUpdateOtherThreadsWindows((struct tagWND *)v5, a2);
      v5 = *(_QWORD *)(v5 + 88);
    }
    ThreadUnlock1(v6, v4);
  }
}
