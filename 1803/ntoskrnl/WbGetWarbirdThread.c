/*
 * XREFs of WbGetWarbirdThread @ 0x14050EF0C
 * Callers:
 *     WbHeapExecuteCall @ 0x14050EC60 (WbHeapExecuteCall.c)
 *     sub_14050EE10 @ 0x14050EE10 (sub_14050EE10.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140008790 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     sub_14050F0D8 @ 0x14050F0D8 (sub_14050F0D8.c)
 *     sub_14050F54C @ 0x14050F54C (sub_14050F54C.c)
 *     sub_14053AD6C @ 0x14053AD6C (sub_14053AD6C.c)
 *     sub_140584498 @ 0x140584498 (sub_140584498.c)
 */

__int64 __fastcall WbGetWarbirdThread(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *v4; // rbx
  unsigned __int64 *v7; // rdi
  __int64 v8; // rsi
  int v9; // esi
  _QWORD *v10; // rcx
  struct _KTHREAD *v12; // rax
  __int64 v13; // rax
  int v14; // r8d
  __int64 v15; // rsi
  _QWORD *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // bp
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v22; // [rsp+78h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v22 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(a1 + 128);
  v8 = KeAbPreAcquire(a1 + 128, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v8, (ULONG_PTR)v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v21 = 0LL;
  v9 = sub_14050F54C((int)a1 + 88, (_DWORD)CurrentThread, 8, (unsigned int)&v21, 0LL);
  if ( v9 >= 0 )
  {
    v10 = (_QWORD *)v21;
    if ( v21 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v21 + 8));
      v10 = (_QWORD *)v21;
    }
    v22 = v10;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v9 == -1073741198 )
  {
    v9 = sub_140584498(a1, CurrentThread, &v22);
    if ( v9 < 0 )
    {
LABEL_27:
      v4 = v22;
      goto LABEL_15;
    }
    v12 = KeGetCurrentThread();
    --v12->SpecialApcDisable;
    v13 = KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0);
    v15 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v13, (ULONG_PTR)v7);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    v16 = v22;
    v9 = sub_14053AD6C((int)a1 + 88, (_DWORD)v22, v14, *v22, 8, -1);
    if ( v9 >= 0 )
      _InterlockedIncrement64(v16 + 1);
    v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v20 & 2) != 0 && (v20 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7, v17, v18, v19);
    KeAbPostRelease((ULONG_PTR)v7);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v9 < 0 || !a3 )
    goto LABEL_27;
  *a3 = v22;
LABEL_15:
  sub_14050F0D8(a1, v4);
  return (unsigned int)v9;
}
