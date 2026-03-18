/*
 * XREFs of WbAddHeapExecutedBlockToCache @ 0x14053AB8C
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x14050F76C (WbGetHeapExecutedBlock.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     sub_14050EEB8 @ 0x14050EEB8 (sub_14050EEB8.c)
 *     sub_14050FC44 @ 0x14050FC44 (sub_14050FC44.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x14053AC9C (WbAddHeapExecutedBlockToLRU.c)
 *     sub_14053AD6C @ 0x14053AD6C (sub_14053AD6C.c)
 */

__int64 __fastcall WbAddHeapExecutedBlockToCache(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  char v15; // bp
  int v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v17 = 0;
  v18 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(a1 + 48);
  v8 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = sub_14050EEB8(a1, *(_QWORD *)(a2 + 48), &v18, (__int64)&v17);
  v14 = v10;
  if ( v10 >= 0 )
  {
    if ( a3 )
      *a3 = v18;
  }
  else if ( v10 == -1073741198 )
  {
    v14 = sub_14053AD6C((int)a1 + 8, a2, v12, *(_QWORD *)(a2 + 48), 8, v17);
    if ( v14 >= 0 )
    {
      v14 = sub_14050FC44(a2);
      if ( v14 >= 0 )
      {
        if ( a3 )
          *a3 = 0LL;
        v14 = WbAddHeapExecutedBlockToLRU(a1, a2);
      }
    }
  }
  v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7, v11, v12, v13);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v14;
}
