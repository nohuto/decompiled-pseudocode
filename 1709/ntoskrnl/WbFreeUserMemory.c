/*
 * XREFs of WbFreeUserMemory @ 0x140577424
 * Callers:
 *     sub_140502354 @ 0x140502354 (sub_140502354.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14005D4E0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     sub_140501EA0 @ 0x140501EA0 (sub_140501EA0.c)
 *     WbFreeMemoryBlockRegion @ 0x140577510 (WbFreeMemoryBlockRegion.c)
 */

__int64 __fastcall WbFreeUserMemory(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // rbx
  PRTL_BALANCED_NODE v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  int v9; // edi
  int v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h]
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v5 = (signed __int64 *)(a1 + 224);
  v6 = KeAbPreAcquire(a1 + 224, 0LL, 0);
  if ( _InterlockedCompareExchange64(v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, (__int64)v6, (ULONG_PTR)v5);
  if ( v6 )
    BYTE2(v6[1].Left) |= 1u;
  v13 = 0LL;
  v7 = sub_140501EA0(a1 + 184, a2, 8u, &v13, &v11);
  v8 = v12;
  v9 = v7;
  if ( v7 >= 0 )
    v8 = v13;
  v12 = v8;
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v9 >= 0 )
    return (unsigned int)WbFreeMemoryBlockRegion(v12, a2);
  return (unsigned int)v9;
}
