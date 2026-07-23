/*
 * XREFs of WbGetWarbirdProcess @ 0x140501C80
 * Callers:
 *     WbDispatchOperation @ 0x140501A60 (WbDispatchOperation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14005D4E0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     sub_140501EA0 @ 0x140501EA0 (sub_140501EA0.c)
 *     WbCreateWarbirdProcess @ 0x140575D44 (WbCreateWarbirdProcess.c)
 *     WbFreeWarbirdProcess @ 0x140575EBC (WbFreeWarbirdProcess.c)
 *     sub_14057660C @ 0x14057660C (sub_14057660C.c)
 */

__int64 __fastcall WbGetWarbirdProcess(__int64 a1, int a2, PVOID *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v7; // rbx
  int v8; // ebx
  volatile signed __int64 *v9; // rcx
  __int64 v10; // rcx
  struct _KTHREAD *v11; // rax
  bool v12; // zf
  struct _KTHREAD *v14; // rax
  PRTL_BALANCED_NODE v15; // rax
  int v16; // r8d
  PRTL_BALANCED_NODE v17; // rbx
  volatile signed __int64 *v18; // r14
  char v19; // al
  volatile signed __int64 *v20; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  P = 0LL;
  --CurrentThread->SpecialApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&qword_14038CC78, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14038CC78, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_14038CC78, (__int64)v7, (ULONG_PTR)&qword_14038CC78);
  if ( v7 )
    BYTE2(v7[1].Left) |= 1u;
  v20 = 0LL;
  v8 = sub_140501EA0((unsigned int)&qword_14038CC50, a1, 8, (unsigned int)&v20, 0LL);
  if ( v8 >= 0 )
  {
    v9 = v20;
    if ( v20 )
    {
      _InterlockedIncrement64(v20 + 29);
      v9 = v20;
    }
    P = (PVOID)v9;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14038CC78, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14038CC78);
  KeAbPostRelease((ULONG_PTR)&qword_14038CC78);
  v11 = KeGetCurrentThread();
  v12 = v11->SpecialApcDisable++ == -1;
  if ( v12 && ($B476B70DB57F76B110DA5B9238C3E934 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery(v10);
  if ( v8 == -1073741198 )
  {
    if ( !a2 )
      goto LABEL_31;
    v8 = WbCreateWarbirdProcess(a1, &P);
    if ( v8 < 0 )
      goto LABEL_31;
    v14 = KeGetCurrentThread();
    --v14->SpecialApcDisable;
    v15 = KeAbPreAcquire((ULONG_PTR)&qword_14038CC78, 0LL, 0);
    v17 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14038CC78, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_14038CC78, (__int64)v15, (__int16 *)&qword_14038CC78);
    if ( v17 )
      BYTE2(v17[1].Left) |= 1u;
    v18 = (volatile signed __int64 *)P;
    v8 = sub_14057660C((unsigned int)&qword_14038CC50, (_DWORD)P, v16, *(_QWORD *)P, 8, -1);
    if ( v8 >= 0 )
      _InterlockedIncrement64(v18 + 29);
    v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14038CC78, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14038CC78);
    KeAbPostRelease((ULONG_PTR)&qword_14038CC78);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v8 >= 0 && a3 )
  {
    *a3 = P;
    return (unsigned int)v8;
  }
LABEL_31:
  if ( P && _InterlockedExchangeAdd64((volatile signed __int64 *)P + 29, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    WbFreeWarbirdProcess(P);
  return (unsigned int)v8;
}
