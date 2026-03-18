/*
 * XREFs of RunContext @ 0x1C00025DC
 * Callers:
 *     InsertReadyQueue @ 0x1C0002838 (InsertReadyQueue.c)
 *     DispatchCtxtQueue @ 0x1C004BC50 (DispatchCtxtQueue.c)
 * Callees:
 *     LogSchedEvent @ 0x1C000295C (LogSchedEvent.c)
 *     LogEvent @ 0x1C00029B8 (LogEvent.c)
 *     FreeContext @ 0x1C0002E08 (FreeContext.c)
 *     DupObjData @ 0x1C0003188 (DupObjData.c)
 *     HeapFree @ 0x1C0003D74 (HeapFree.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     AMLIDebugger @ 0x1C0048460 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     InvokePauseCallbacks @ 0x1C004E5A8 (InvokePauseCallbacks.c)
 *     AsyncCallBack @ 0x1C004EA84 (AsyncCallBack.c)
 *     ReleaseASLMutex @ 0x1C004EF98 (ReleaseASLMutex.c)
 */

__int64 __fastcall RunContext(_QWORD *Entry)
{
  char v1; // bp
  _QWORD *v2; // rdi
  _QWORD *v4; // rax
  char v5; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  _QWORD **v15; // r14
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v20; // rax

  v1 = 0;
  v2 = Entry + 49;
  if ( (_QWORD *)*v2 == v2 )
  {
    v4 = (_QWORD *)qword_1C00667D8;
    if ( *(__int64 **)qword_1C00667D8 != &RunningContextListHead )
      __fastfail(3u);
    *v2 = &RunningContextListHead;
    v5 = 0;
    Entry[50] = v4;
    *v4 = v2;
    qword_1C00667D8 = (__int64)(Entry + 49);
  }
  else
  {
    v5 = 1;
  }
  Entry[51] = KeGetCurrentThread();
  v6 = *((unsigned int *)Entry + 16);
  if ( (v6 & 0x200) != 0 )
  {
    gReadyQueue |= 0x200u;
    v6 = *((unsigned int *)Entry + 16);
  }
  v7 = Entry[13];
  if ( v7 )
    v8 = *(_QWORD *)(v7 + 32);
  else
    v8 = Entry[9];
  LogSchedEvent(1381322307, (_DWORD)Entry, (_DWORD)Entry, v8, v6);
  v9 = *((_DWORD *)Entry + 16);
  do
  {
    v10 = 0;
    *((_DWORD *)Entry + 16) = v9 & 0xFFFFFFE7 | 0x10;
    KeReleaseSpinLock(&SpinLock, NewIrql);
    do
    {
      v11 = Entry[52];
      if ( !v11 )
        break;
      if ( (gDebugger & 0x1000) != 0 )
      {
        ConPrintf("\nProcess AML Debugger Request.\n");
        _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
        AMLIDebugger();
        v11 = Entry[52];
      }
      v12 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(v11 + 24))(Entry, v11, v10);
      v10 = v12;
      if ( v12 == 32772 )
        break;
    }
    while ( v12 != 0x8000 );
    NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    v9 = *((_DWORD *)Entry + 16);
    if ( (v9 & 0x80u) == 0 || v10 != 0x8000 )
    {
      v9 &= ~0x10u;
      *((_DWORD *)Entry + 16) = v9;
    }
  }
  while ( (v9 & 8) != 0 );
  if ( v10 == 32772 )
  {
    *((_DWORD *)Entry + 16) = v9 | 0x20;
  }
  else if ( v10 == 0x8000 )
  {
    if ( !Entry[13] )
      *((_DWORD *)Entry + 16) = v9 & 0xFFFFFF7F;
    v10 = 0;
  }
  else
  {
    KeReleaseSpinLock(&SpinLock, NewIrql);
    if ( !v10 )
    {
      v13 = Entry[22];
      if ( v13 )
        v10 = DupObjData(gpheapGlobal, v13, Entry + 16);
    }
    v14 = *((_DWORD *)Entry + 16);
    if ( (v14 & 0x20) != 0 )
    {
      AsyncCallBack(Entry, v10);
      v14 = *((_DWORD *)Entry + 16);
      if ( (v14 & 0x100) != 0 )
        v10 = 32772;
    }
    if ( (v14 & 0x200) != 0 )
      gReadyQueue &= ~0x200u;
    v15 = (_QWORD **)(Entry + 6);
    while ( 1 )
    {
      v16 = *v15;
      if ( *v15 == v15 )
        break;
      if ( *((_DWORD *)v16 - 6) == 1 )
      {
        ReleaseASLMutex(Entry, *(v16 - 1), 0LL);
      }
      else
      {
        if ( (_QWORD **)v16[1] != v15 || (v20 = (_QWORD *)*v16, *(_QWORD **)(*v16 + 8LL) != v16) )
          __fastfail(3u);
        *v15 = v20;
        v20[1] = v15;
        HeapFree(v16 - 3);
      }
    }
    v1 = 1;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  }
  if ( !v5 )
  {
    v17 = (_QWORD *)*v2;
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v18 = (_QWORD *)v2[1], (_QWORD *)*v18 != v2) )
      __fastfail(3u);
    *v18 = v17;
    v17[1] = v18;
    v2[1] = v2;
    *v2 = v2;
    Entry[51] = 0LL;
  }
  if ( v1 )
    FreeContext(Entry);
  if ( (gReadyQueue & 4) != 0 && glistCtxtHead == (_UNKNOWN *)&glistCtxtHead )
  {
    gReadyQueue = gReadyQueue & 0xFFFFFFF3 | 8;
    if ( (__int64 *)qword_1C0067980 != &qword_1C0067980 )
    {
      InvokePauseCallbacks();
      LogSchedEvent(1346454338, 0, (_DWORD)Entry, v10, 0LL);
    }
  }
  LogEvent(
    1381322273,
    (unsigned int)KeGetCurrentThread(),
    0,
    0,
    (unsigned int)gReadyQueue,
    (__int64)Entry,
    (int)v10,
    0LL);
  return v10;
}
