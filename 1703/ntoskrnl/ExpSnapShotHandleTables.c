/*
 * XREFs of ExpSnapShotHandleTables @ 0x1407173E0
 * Callers:
 *     ObGetHandleInformation @ 0x1406C111C (ObGetHandleInformation.c)
 *     ObGetHandleInformationEx @ 0x1406C1170 (ObGetHandleInformationEx.c)
 * Callees:
 *     ExLockHandleTableEntry @ 0x1400B0390 (ExLockHandleTableEntry.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExpLookupHandleTableEntry @ 0x140531E20 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall ExpSnapShotHandleTables(
        __int64 (__fastcall *a1)(_DWORD **, _QWORD, volatile signed __int64 *, __int64, int, __int64),
        _DWORD *a2,
        int a3,
        __int64 a4,
        char a5)
{
  struct _KTHREAD *CurrentThread; // rbp
  _DWORD *v6; // rax
  unsigned int v9; // edi
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
  v6 = a2 + 2;
  v20 = CurrentThread;
  v9 = 0;
  if ( a5 )
    v6 = a2 + 4;
  v22 = v6;
  *a2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&HandleTableListLock, 0LL);
  v10 = (__int64 *)HandleTableListHead;
  v11 = v23;
  while ( 1 )
  {
    v19 = (__int64 **)v10;
    if ( ((v9 + 0x80000000) & 0x80000000) == 0 && v9 != -1073741820 )
      break;
    if ( v10 == &HandleTableListHead )
      break;
    v12 = (__int64)(v10 - 3);
    for ( i = 0LL; ((v9 + 0x80000000) & 0x80000000) != 0 || v9 == -1073741820; i += 4LL )
    {
      v14 = (volatile signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)v12, i);
      v15 = v14;
      if ( !v14 )
        break;
      if ( (i & 0x3FC) != 0 && *v14 && ExLockHandleTableEntry(v12, v14) )
      {
        ++*a2;
        v9 = a1(&v22, *(unsigned int *)(v12 + 40), v15, i, v11, a4);
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
  KiLeaveCriticalRegionUnsafe(v16);
  return v9;
}
