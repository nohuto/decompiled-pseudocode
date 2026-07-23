/*
 * XREFs of WbRemoveWarbirdProcess @ 0x1404FC020
 * Callers:
 *     sub_1404FC25C @ 0x1404FC25C (sub_1404FC25C.c)
 *     WbDispatchOperation @ 0x140501A60 (WbDispatchOperation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14005D4E0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     WbFindWarbirdProcess @ 0x1404FC188 (WbFindWarbirdProcess.c)
 *     sub_140575E88 @ 0x140575E88 (sub_140575E88.c)
 *     sub_140583CB0 @ 0x140583CB0 (sub_140583CB0.c)
 */

__int64 __fastcall WbRemoveWarbirdProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v3; // rdi
  int WarbirdProcess; // edi
  struct _KTHREAD *v6; // rax
  PRTL_BALANCED_NODE v7; // rax
  signed __int8 v8; // cf
  PRTL_BALANCED_NODE v9; // rdi
  char v10; // bl
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_14038CC78, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14038CC78, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_14038CC78, (__int64)v3, (ULONG_PTR)&qword_14038CC78);
  if ( v3 )
    BYTE2(v3[1].Left) |= 1u;
  WarbirdProcess = WbFindWarbirdProcess(a1, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14038CC78, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14038CC78);
  KeAbPostRelease((ULONG_PTR)&qword_14038CC78);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( WarbirdProcess >= 0 )
  {
    v6 = KeGetCurrentThread();
    --v6->SpecialApcDisable;
    v7 = KeAbPreAcquire((ULONG_PTR)&qword_14038CC78, 0LL, 0);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14038CC78, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&qword_14038CC78, (__int64)v7, (__int16 *)&qword_14038CC78);
    if ( v9 )
      BYTE2(v9[1].Left) |= 1u;
    WarbirdProcess = sub_140583CB0((unsigned int)&qword_14038CC50, a1, 8, -1, (__int64)&v11);
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14038CC78, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14038CC78);
    KeAbPostRelease((ULONG_PTR)&qword_14038CC78);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    sub_140575E88(v11);
  }
  return (unsigned int)WarbirdProcess;
}
