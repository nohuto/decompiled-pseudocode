/*
 * XREFs of WbGetWarbirdProcess @ 0x14053BCA0
 * Callers:
 *     WbDispatchOperation @ 0x14053BA60 (WbDispatchOperation.c)
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
 *     WbCreateWarbirdProcess @ 0x14045A96C (WbCreateWarbirdProcess.c)
 *     WbFreeWarbirdProcess @ 0x140549778 (WbFreeWarbirdProcess.c)
 */

__int64 __fastcall WbGetWarbirdProcess(__int64 a1, int a2, PVOID *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v7; // rbx
  int v8; // ebp
  int v9; // edi
  int v10; // ebx
  int v11; // esi
  __int64 v12; // rax
  volatile signed __int64 *v13; // rdx
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax
  struct _KTHREAD *v17; // rax
  PRTL_BALANCED_NODE v18; // rax
  __int64 v19; // r8
  PRTL_BALANCED_NODE v20; // rbx
  volatile signed __int64 *v21; // rsi
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&qword_140384F78, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140384F78, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140384F78, v7, (ULONG_PTR)&qword_140384F78);
  if ( v7 )
    BYTE2(v7[1].Left) |= 1u;
  v8 = 0;
  v9 = HIDWORD(qword_140384F50) - 1;
  v10 = -1073741198;
  if ( HIDWORD(qword_140384F50) - 1 >= 0 )
  {
    while ( 1 )
    {
      v11 = (v9 + v8) / 2;
      v12 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))qword_140384F70)(
              *(_QWORD *)((unsigned int)(v11 * qword_140384F50) + qword_140384F60),
              a1,
              8LL);
      if ( !v12 )
        break;
      if ( v12 < 0 )
        v9 = v11 - 1;
      else
        v8 = v11 + 1;
      if ( v8 > v9 )
        goto LABEL_10;
    }
    v10 = 0;
    v13 = *(volatile signed __int64 **)((unsigned int)(v11 * qword_140384F50) + qword_140384F60);
    if ( v13 )
      _InterlockedIncrement64(v13 + 29);
    P = (PVOID)v13;
  }
LABEL_10:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140384F78, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140384F78);
  KeAbPostRelease((ULONG_PTR)&qword_140384F78);
  v14 = KeGetCurrentThread();
  v15 = v14->SpecialApcDisable + 1;
  v14->SpecialApcDisable = v15;
  if ( !v15 && ($69CD3F157F9F39B6F7113F2231989901 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
    KiCheckForKernelApcDelivery((__int64)v14);
  if ( v10 == -1073741198 )
  {
    if ( !a2 )
      goto LABEL_36;
    v10 = WbCreateWarbirdProcess(a1, &P);
    if ( v10 < 0 )
      goto LABEL_36;
    v17 = KeGetCurrentThread();
    --v17->SpecialApcDisable;
    v18 = KeAbPreAcquire((ULONG_PTR)&qword_140384F78, 0LL, 0);
    v20 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140384F78, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140384F78, v18, (ULONG_PTR)&qword_140384F78);
    if ( v20 )
      BYTE2(v20[1].Left) |= 1u;
    v21 = (volatile signed __int64 *)P;
    v10 = sub_1404412D8((__int64)&qword_140384F50, (__int64)P, v19, *(_QWORD *)P, 8, -1);
    if ( v10 >= 0 )
      _InterlockedIncrement64(v21 + 29);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140384F78, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140384F78);
    KeAbPostRelease((ULONG_PTR)&qword_140384F78);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v10 >= 0 && a3 )
  {
    *a3 = P;
    return (unsigned int)v10;
  }
LABEL_36:
  if ( P && _InterlockedExchangeAdd64((volatile signed __int64 *)P + 29, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    WbFreeWarbirdProcess(P);
  return (unsigned int)v10;
}
