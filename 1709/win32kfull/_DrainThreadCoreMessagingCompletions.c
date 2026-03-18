/*
 * XREFs of _DrainThreadCoreMessagingCompletions @ 0x1C00A5F30
 * Callers:
 *     NtUserCallNoParam @ 0x1C00A5520 (NtUserCallNoParam.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C00A81A0 (-xxxHandleQueueCompletion@@YA-AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLET.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall DrainThreadCoreMessagingCompletions(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 *ThreadWin32Thread; // rax
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rbp
  tagObjLock *v10; // r14
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _KTHREAD *v16; // rsi
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  int v19; // esi
  unsigned int v20; // eax
  int v21; // eax
  unsigned int v22; // eax
  int v24; // [rsp+28h] [rbp-50h]
  _BYTE v25[32]; // [rsp+40h] [rbp-38h] BYREF
  char v26; // [rsp+80h] [rbp+8h] BYREF
  __int64 v27; // [rsp+88h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
  v10 = (tagObjLock *)(v6 + 368);
  v11 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v11);
  tagObjLock::LockShared(DomainLockRef);
  tagObjLock::LockExclusive((tagObjLock *)(v6 + 368));
  if ( *(_QWORD *)(v6 + 1424) )
  {
    v16 = KeGetCurrentThread();
    v17 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v13, v12, v14, v15) )
    {
      v18 = (_QWORD *)PsGetThreadWin32Thread(v16);
      if ( v18 )
        v17 = (_QWORD *)*v18;
    }
    v27 = 0LL;
    v19 = 0;
    ZwSetIoCompletionEx(v17[173], v17[177], 0LL, 2LL, 0, 0LL);
    do
    {
      while ( 1 )
      {
        LOBYTE(v24) = 0;
        v20 = ZwRemoveIoCompletionEx(v17[173], v25, 1LL, &v26, &v27, v24);
        v21 = xxxHandleQueueCompletion(v17, v20, v25, 0LL);
        if ( v21 != 3 )
          break;
        v19 = 1;
      }
    }
    while ( v21 == 4 );
    if ( v19 )
      ZwAssociateWaitCompletionPacket(v17[176], v17[173], v17[175], 0LL, 1LL, 0, 0LL, 0LL);
    v5 = 1;
  }
  else
  {
    UserSetLastError(5LL, v12);
  }
  v22 = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(v22);
  tagObjLock::UnLock(v10);
  tagObjLock::UnLock(DomainLockRef);
  return v5;
}
