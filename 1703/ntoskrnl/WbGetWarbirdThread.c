/*
 * XREFs of WbGetWarbirdThread @ 0x14053C220
 * Callers:
 *     WbHeapExecuteReturn @ 0x14053BFD0 (WbHeapExecuteReturn.c)
 *     WbHeapExecuteCall @ 0x14053C4C0 (WbHeapExecuteCall.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400FE070 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     sub_1404412D8 @ 0x1404412D8 (sub_1404412D8.c)
 *     sub_14045B468 @ 0x14045B468 (sub_14045B468.c)
 *     sub_14045B538 @ 0x14045B538 (sub_14045B538.c)
 */

__int64 __fastcall WbGetWarbirdThread(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r15
  signed __int64 *v6; // rbp
  PRTL_BALANCED_NODE v7; // rbx
  int v8; // r14d
  int v9; // esi
  int v10; // edi
  int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rdx
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax
  struct _KTHREAD *v17; // rax
  PRTL_BALANCED_NODE v18; // rax
  __int64 v19; // r8
  PRTL_BALANCED_NODE v20; // rdi
  _QWORD *v21; // r14
  struct _KTHREAD *v22; // [rsp+80h] [rbp+8h]
  _QWORD *v23; // [rsp+88h] [rbp+10h] BYREF
  __int64 v24; // [rsp+98h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v23 = 0LL;
  v22 = CurrentThread;
  --CurrentThread->SpecialApcDisable;
  v6 = (signed __int64 *)(a1 + 128);
  v7 = KeAbPreAcquire(a1 + 128, 0LL, 0);
  if ( _InterlockedCompareExchange64(v6, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v6, v7, (ULONG_PTR)v6);
  if ( v7 )
    BYTE2(v7[1].Left) |= 1u;
  v8 = 0;
  v9 = *(_DWORD *)(a1 + 92) - 1;
  v10 = -1073741198;
  if ( v9 >= 0 )
  {
    while ( 1 )
    {
      v11 = (v9 + v8) / 2;
      v12 = (*(__int64 (__fastcall **)(_QWORD, struct _KTHREAD *, __int64))(a1 + 120))(
              *(_QWORD *)((unsigned int)(v11 * *(_DWORD *)(a1 + 88)) + *(_QWORD *)(a1 + 104)),
              v22,
              8LL);
      if ( !v12 )
        break;
      if ( v12 < 0 )
        v9 = v11 - 1;
      else
        v8 = v11 + 1;
      if ( v8 > v9 )
      {
        CurrentThread = v22;
        goto LABEL_10;
      }
    }
    v10 = 0;
    v13 = *(_QWORD *)((unsigned int)(v11 * *(_DWORD *)(a1 + 88)) + *(_QWORD *)(a1 + 104));
    v24 = v13;
    if ( v13 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v13 + 8));
      v13 = v24;
    }
    CurrentThread = v22;
    v23 = (_QWORD *)v13;
  }
LABEL_10:
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  v14 = KeGetCurrentThread();
  v15 = v14->SpecialApcDisable + 1;
  v14->SpecialApcDisable = v15;
  if ( !v15 && ($69CD3F157F9F39B6F7113F2231989901 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
    KiCheckForKernelApcDelivery((__int64)v14);
  if ( v10 == -1073741198 )
  {
    v10 = sub_14045B468(a1, (__int64)CurrentThread, &v23);
    if ( v10 < 0 )
      goto LABEL_36;
    v17 = KeGetCurrentThread();
    --v17->SpecialApcDisable;
    v18 = KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0);
    v20 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v6, v18, (ULONG_PTR)v6);
    if ( v20 )
      BYTE2(v20[1].Left) |= 1u;
    v21 = v23;
    v10 = sub_1404412D8(a1 + 88, (__int64)v23, v19, *v23, 8, -1);
    if ( v10 >= 0 )
      _InterlockedIncrement64(v21 + 1);
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v10 >= 0 && a3 )
  {
    *a3 = v23;
    return (unsigned int)v10;
  }
LABEL_36:
  if ( v23 && _InterlockedExchangeAdd64(v23 + 1, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    sub_14045B538(a1, v23);
  return (unsigned int)v10;
}
