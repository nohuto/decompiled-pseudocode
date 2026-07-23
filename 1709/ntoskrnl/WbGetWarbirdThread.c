/*
 * XREFs of WbGetWarbirdThread @ 0x140501880
 * Callers:
 *     sub_140502058 @ 0x140502058 (sub_140502058.c)
 *     WbHeapExecuteCall @ 0x1405024B0 (WbHeapExecuteCall.c)
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
 *     sub_14057660C @ 0x14057660C (sub_14057660C.c)
 *     sub_14059E238 @ 0x14059E238 (sub_14059E238.c)
 *     sub_14059E290 @ 0x14059E290 (sub_14059E290.c)
 */

__int64 __fastcall WbGetWarbirdThread(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r12
  signed __int64 *v6; // rdi
  PRTL_BALANCED_NODE v7; // rbx
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct _KTHREAD *v11; // rax
  bool v12; // zf
  struct _KTHREAD *v14; // rax
  PRTL_BALANCED_NODE v15; // rax
  int v16; // r8d
  PRTL_BALANCED_NODE v17; // rbx
  __int64 v18; // r12
  char v19; // al
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+78h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v21 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v6 = (signed __int64 *)(a1 + 128);
  v7 = KeAbPreAcquire(a1 + 128, 0LL, 0);
  if ( _InterlockedCompareExchange64(v6, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v6, (__int64)v7, (ULONG_PTR)v6);
  if ( v7 )
    BYTE2(v7[1].Left) |= 1u;
  v20 = 0LL;
  v8 = sub_140501EA0((int)a1 + 88, (_DWORD)CurrentThread, 8, (unsigned int)&v20, 0LL);
  if ( v8 >= 0 )
  {
    v9 = v20;
    if ( v20 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v20 + 8));
      v9 = v20;
    }
    v21 = v9;
  }
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  v11 = KeGetCurrentThread();
  v12 = v11->SpecialApcDisable++ == -1;
  if ( v12 && ($B476B70DB57F76B110DA5B9238C3E934 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery(v10);
  if ( v8 == -1073741198 )
  {
    v8 = sub_14059E290(a1, CurrentThread, &v21);
    if ( v8 < 0 )
      goto LABEL_30;
    v14 = KeGetCurrentThread();
    --v14->SpecialApcDisable;
    v15 = KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0);
    v17 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v6, (__int64)v15, (__int16 *)v6);
    if ( v17 )
      BYTE2(v17[1].Left) |= 1u;
    v18 = v21;
    v8 = sub_14057660C((int)a1 + 88, v21, v16, *(_QWORD *)v21, 8, -1);
    if ( v8 >= 0 )
      _InterlockedIncrement64((volatile signed __int64 *)(v18 + 8));
    v19 = _InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
      ExfTryToWakePushLock(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v8 >= 0 && a3 )
  {
    *a3 = v21;
    return (unsigned int)v8;
  }
LABEL_30:
  if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    sub_14059E238(a1, v21);
  return (unsigned int)v8;
}
