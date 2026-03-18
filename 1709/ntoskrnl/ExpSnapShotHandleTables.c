/*
 * XREFs of ExpSnapShotHandleTables @ 0x140756B50
 * Callers:
 *     ExpGetHandleInformation @ 0x140754220 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1407542B8 (ExpGetHandleInformationEx.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     ExLockHandleTableEntry @ 0x1400BD9D4 (ExLockHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x14017D4F0 (ExfUnblockPushLock.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExpLookupHandleTableEntry @ 0x1404B1720 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall ExpSnapShotHandleTables(
        __int64 (__fastcall *a1)(_DWORD **, _QWORD, volatile signed __int64 *, __int64, int, _DWORD *),
        _DWORD *a2,
        int a3,
        _DWORD *a4,
        char a5)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v8; // edi
  _DWORD *v9; // rax
  __int64 *v10; // r15
  int v11; // ebp
  __int64 v12; // r13
  __int64 i; // rbx
  volatile signed __int64 *v14; // rax
  volatile signed __int64 *v15; // rsi
  __int64 v16; // rbp
  signed __int32 v18[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 **v19; // [rsp+40h] [rbp-48h]
  struct _KTHREAD *v20; // [rsp+48h] [rbp-40h]
  _DWORD *v22; // [rsp+98h] [rbp+10h] BYREF
  int v23; // [rsp+A0h] [rbp+18h]

  v23 = a3;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  v20 = CurrentThread;
  if ( a5 )
  {
    v9 = a2 + 4;
    *a4 = 16;
  }
  else
  {
    v9 = a2 + 2;
    *a4 = 8;
  }
  v22 = v9;
  *a2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&HandleTableListLock, 0LL);
  v10 = (__int64 *)HandleTableListHead;
  v11 = v23;
  while ( 1 )
  {
    v19 = (__int64 **)v10;
    if ( ((v8 + 0x80000000) & 0x80000000) == 0 && v8 != -1073741820 )
      break;
    if ( v10 == &HandleTableListHead )
      break;
    v12 = (__int64)(v10 - 3);
    for ( i = 0LL; ((v8 + 0x80000000) & 0x80000000) != 0 || v8 == -1073741820; i += 4LL )
    {
      v14 = (volatile signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)v12, i);
      v15 = v14;
      if ( !v14 )
        break;
      if ( (i & 0x3FC) != 0 && *v14 && ExLockHandleTableEntry(v12, v14) )
      {
        ++*a2;
        v8 = a1(&v22, *(unsigned int *)(v12 + 40), v15, i, v11, a4);
        _InterlockedExchangeAdd64(v15, 1uLL);
        _InterlockedOr(v18, 0);
        if ( *(_QWORD *)(v12 + 48) )
          ExfUnblockPushLock((volatile __int64 *)(v12 + 48), 0LL);
      }
    }
    v10 = *v19;
  }
  v16 = (__int64)v20;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&HandleTableListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&HandleTableListLock);
  KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
  KeLeaveCriticalRegionThread(v16);
  return v8;
}
