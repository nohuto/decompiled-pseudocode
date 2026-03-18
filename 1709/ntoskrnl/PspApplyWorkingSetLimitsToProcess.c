/*
 * XREFs of PspApplyWorkingSetLimitsToProcess @ 0x14050D218
 * Callers:
 *     PspAssignProcessToJob @ 0x14050BFAC (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x14050CBD0 (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MmEnforceWorkingSetLimit @ 0x1400D46B0 (MmEnforceWorkingSetLimit.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MmAdjustWorkingSetSize @ 0x140215AC0 (MmAdjustWorkingSetSize.c)
 */

__int64 __fastcall PspApplyWorkingSetLimitsToProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v3; // r15
  int v4; // r14d
  int v5; // r13d
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int16 v10; // dx
  unsigned __int64 v11; // [rsp+20h] [rbp-78h]
  unsigned __int64 v12; // [rsp+28h] [rbp-70h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v13; // [rsp+38h] [rbp-60h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(a1 + 944);
  v4 = 0;
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)&v13);
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 56), 1u);
  v12 = *(_QWORD *)(v3 + 792);
  v11 = *(_QWORD *)(v3 + 800);
  v5 = ((*(_DWORD *)(v3 + 848) & 1) == 0) + 1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140359F30, 0LL);
  _InterlockedOr((volatile signed __int32 *)(v3 + 1304), 0x100u);
  ExReleaseResourceLite((PERESOURCE)(v3 + 56));
  if ( v5 == 2 || (v4 = MmAdjustWorkingSetSize(v12, v11, 0, 1), v4 >= 0) )
  {
    MmEnforceWorkingSetLimit((_KPROCESS *)a1, v5);
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1304), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140359F30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140359F30);
    KeAbPostRelease((ULONG_PTR)&qword_140359F30);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v6 = *(_QWORD *)(a1 + 1016);
    if ( v6 )
    {
      if ( (*(_DWORD *)(a1 + 772) & 8) != 0 )
      {
        v4 = 0;
      }
      else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 760)) )
      {
        v7 = 0LL;
        v8 = *(__int64 **)(a1 + 1064);
        if ( v8 )
        {
          v10 = *((_WORD *)v8 + 4);
          if ( v10 == 332 || v10 == 452 )
            v7 = *v8;
        }
        _interlockedbittestandset((volatile signed __int32 *)(v6 + 80), 0);
        if ( v7 )
          _interlockedbittestandset((volatile signed __int32 *)(v7 + 40), 0);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 760));
      }
      else
      {
        v4 = -1073741558;
      }
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1304), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140359F30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140359F30);
    KeAbPostRelease((ULONG_PTR)&qword_140359F30);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  KiUnstackDetachProcess(&v13, 0LL);
  return (unsigned int)v4;
}
