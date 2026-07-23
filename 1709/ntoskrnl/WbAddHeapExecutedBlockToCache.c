/*
 * XREFs of WbAddHeapExecutedBlockToCache @ 0x14057642C
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x1405021D0 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     sub_14050182C @ 0x14050182C (sub_14050182C.c)
 *     sub_140502844 @ 0x140502844 (sub_140502844.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x14057653C (WbAddHeapExecutedBlockToLRU.c)
 *     sub_14057660C @ 0x14057660C (sub_14057660C.c)
 */

__int64 __fastcall WbAddHeapExecutedBlockToCache(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rsi
  PRTL_BALANCED_NODE v8; // rax
  PRTL_BALANCED_NODE v9; // rdi
  int v10; // eax
  int v11; // r8d
  int v12; // edi
  char v13; // bl
  int v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v15 = 0;
  v16 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(a1 + 48);
  v8 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, (__int64)v8, (__int16 *)v7);
  if ( v9 )
    BYTE2(v9[1].Left) |= 1u;
  v10 = sub_14050182C(a1, *(_QWORD *)(a2 + 48), &v16, (__int64)&v15);
  v12 = v10;
  if ( v10 >= 0 )
  {
    if ( a3 )
      *a3 = v16;
  }
  else if ( v10 == -1073741198 )
  {
    v12 = sub_14057660C((int)a1 + 8, a2, v11, *(_QWORD *)(a2 + 48), 8, v15);
    if ( v12 >= 0 )
    {
      v12 = sub_140502844(a2);
      if ( v12 >= 0 )
      {
        if ( a3 )
          *a3 = 0LL;
        v12 = WbAddHeapExecutedBlockToLRU(a1, a2);
      }
    }
  }
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v12;
}
