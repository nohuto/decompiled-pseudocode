/*
 * XREFs of WbRemoveWarbirdProcess @ 0x1404987CC
 * Callers:
 *     sub_140498A0C @ 0x140498A0C (sub_140498A0C.c)
 *     WbDispatchOperation @ 0x14053BA60 (WbDispatchOperation.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400FE070 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     sub_14045AAB0 @ 0x14045AAB0 (sub_14045AAB0.c)
 *     WbFindWarbirdProcess @ 0x140498938 (WbFindWarbirdProcess.c)
 *     sub_140549218 @ 0x140549218 (sub_140549218.c)
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
  volatile signed __int64 *v10; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_140384F78, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140384F78, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140384F78, v3, (ULONG_PTR)&qword_140384F78);
  if ( v3 )
    BYTE2(v3[1].Left) |= 1u;
  WarbirdProcess = WbFindWarbirdProcess(a1, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140384F78, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140384F78);
  KeAbPostRelease((ULONG_PTR)&qword_140384F78);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( WarbirdProcess >= 0 )
  {
    v6 = KeGetCurrentThread();
    --v6->SpecialApcDisable;
    v7 = KeAbPreAcquire((ULONG_PTR)&qword_140384F78, 0LL, 0);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140384F78, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&qword_140384F78, v7, (ULONG_PTR)&qword_140384F78);
    if ( v9 )
      BYTE2(v9[1].Left) |= 1u;
    WarbirdProcess = sub_140549218((unsigned int)&qword_140384F50, a1, 8, -1, (__int64)&v10);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140384F78, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140384F78);
    KeAbPostRelease((ULONG_PTR)&qword_140384F78);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    sub_14045AAB0(v10);
  }
  return (unsigned int)WarbirdProcess;
}
