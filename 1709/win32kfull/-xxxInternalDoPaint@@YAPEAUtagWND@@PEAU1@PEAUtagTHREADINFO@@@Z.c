/*
 * XREFs of ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C009FE90
 * Callers:
 *     xxxDoPaint @ 0x1C009FBB4 (xxxDoPaint.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C009FE90 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C009FE90 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ThreadLockExchange @ 0x1C01242F4 (ThreadLockExchange.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     xxxCompositedPaint @ 0x1C020D040 (xxxCompositedPaint.c)
 */

struct tagWND *__fastcall xxxInternalDoPaint(struct tagWND *a1, struct tagTHREADINFO *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct tagWND *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  struct tagWND *v9; // rcx
  __int64 *ThreadWin32Thread; // rax
  struct tagWND *v11; // rcx
  struct tagWND *v12; // rax
  struct tagWND *v13; // rdi
  __int64 v14; // rbx
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v17; // [rsp+28h] [rbp-20h]

  CurrentThread = KeGetCurrentThread();
  v6 = a1;
  v7 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  v16 = *(_QWORD *)(v7 + 392);
  *(_QWORD *)(v7 + 392) = &v16;
  v17 = v6;
  if ( !v6 )
    return (struct tagWND *)ThreadUnlock1(v9, v8);
  _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
  while ( 1 )
  {
    if ( *((struct tagTHREADINFO **)v6 + 2) == a2 )
    {
      if ( (*((_BYTE *)v6 + 67) & 2) != 0 )
      {
        xxxCompositedPaint(v6);
        v6 = (struct tagWND *)*((_QWORD *)v6 + 11);
        ThreadLockExchange(v6, &v16);
        goto LABEL_18;
      }
      if ( *((_QWORD *)v6 + 22) || (*((_BYTE *)v6 + 57) & 0x10) != 0 )
        break;
    }
    v11 = (struct tagWND *)*((_QWORD *)v6 + 14);
    if ( v11 )
    {
      v12 = xxxInternalDoPaint(v11, a2);
      v13 = v12;
      if ( v12 )
      {
        if ( v12 == v6 )
          return (struct tagWND *)ThreadUnlock1(v9, v8);
        ThreadUnlock1(v9, v8);
        return v13;
      }
    }
    v6 = (struct tagWND *)*((_QWORD *)v6 + 11);
    v9 = v17;
    v17 = v6;
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 2, 0xFFFFFFFF) == 1 )
        HMUnlockObjectInternal(v9);
    }
LABEL_18:
    if ( !v6 )
      return (struct tagWND *)ThreadUnlock1(v9, v8);
  }
  if ( (*((_BYTE *)v6 + 64) & 0x20) == 0 )
    return (struct tagWND *)ThreadUnlock1(v9, v8);
  v14 = *((_QWORD *)v6 + 11);
  if ( !v14 )
    return (struct tagWND *)ThreadUnlock1(v9, v8);
  while ( *(struct tagTHREADINFO **)(v14 + 16) != a2
       || !*(_QWORD *)(v14 + 176) && (*(_BYTE *)(v14 + 57) & 0x10) == 0
       || (*(_BYTE *)(v14 + 64) & 0x20) != 0 )
  {
    v14 = *(_QWORD *)(v14 + 88);
    if ( !v14 )
      return (struct tagWND *)ThreadUnlock1(v9, v8);
  }
  ThreadUnlock1(v9, v8);
  return (struct tagWND *)v14;
}
