/*
 * XREFs of ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C020CEA0
 * Callers:
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C020CEA0 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 *     xxxCompositedPaint @ 0x1C020D040 (xxxCompositedPaint.c)
 * Callees:
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ThreadLockExchange @ 0x1C01242F4 (ThreadLockExchange.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C020CEA0 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxCompositedTraverse(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 ThreadWin32Thread; // rcx
  int v10; // eax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  if ( *((_QWORD *)a1 + 22) || (*((_BYTE *)a1 + 57) & 0x10) != 0 )
  {
    xxxSendMessage((ULONG_PTR)a1);
    v4 = 1;
  }
  v6 = *((_QWORD *)a1 + 14);
  v7 = v6;
  while ( v6 )
  {
    v7 = v6;
    v6 = *(_QWORD *)(v6 + 88);
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v12[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v12;
  v12[1] = v7;
  if ( v7 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
    do
    {
      v10 = xxxCompositedTraverse((struct tagWND *)v7);
      v7 = *(_QWORD *)(v7 + 96);
      if ( v10 )
        v4 = 1;
    }
    while ( ThreadLockExchange(v7, (__int64)v12) && v7 );
  }
  ThreadUnlock1(ThreadWin32Thread, v8);
  return v4;
}
