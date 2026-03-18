/*
 * XREFs of NtUserGetQueueStatusReadonly @ 0x1C00A63B0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C00A81A0 (-xxxHandleQueueCompletion@@YA-AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLET.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall NtUserGetQueueStatusReadonly(unsigned __int16 a1)
{
  _QWORD *v2; // rbp
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // r14
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v11; // rbx
  _QWORD *ThreadWin32Thread; // rax
  int v13; // edi
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v21; // [rsp+28h] [rbp-60h]
  _BYTE v22[72]; // [rsp+40h] [rbp-48h] BYREF
  char v23; // [rsp+90h] [rbp+8h] BYREF
  __int64 v24; // [rsp+98h] [rbp+10h] BYREF

  v2 = (_QWORD *)EnterSharedCrit(0LL, 1LL);
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
  v5 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v5);
  tagObjLock::LockShared(DomainLockRef);
  tagObjLock::LockExclusive((tagObjLock *)(v2 + 46));
  if ( v2[178] && (a1 & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v11 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v7, v6, v8, v9) )
    {
      ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v11 = (_QWORD *)*ThreadWin32Thread;
    }
    v24 = 0LL;
    v13 = 0;
    ZwSetIoCompletionEx(v11[173], v11[177], 0LL, 2LL, 0, 0LL);
    do
    {
      while ( 1 )
      {
        LOBYTE(v21) = 0;
        v14 = ZwRemoveIoCompletionEx(v11[173], v22, 1LL, &v23, &v24, v21);
        v15 = xxxHandleQueueCompletion(v11, v14, v22, 1LL);
        if ( v15 != 3 )
          break;
        v13 = 1;
      }
    }
    while ( v15 == 4 );
    if ( v13 )
      ZwAssociateWaitCompletionPacket(v11[176], v11[173], v11[175], 0LL, 1LL, 0, 0LL, 0LL);
  }
  v16 = (a1 | (a1 << 16)) & (*(unsigned __int16 *)(v2[53] + 4LL) | (*(unsigned __int16 *)(v2[53] + 6LL) << 16));
  v17 = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(v17);
  tagObjLock::UnLock((tagObjLock *)(v2 + 46));
  tagObjLock::UnLock(DomainLockRef);
  UserSessionSwitchLeaveCrit(v19, v18);
  return v16;
}
