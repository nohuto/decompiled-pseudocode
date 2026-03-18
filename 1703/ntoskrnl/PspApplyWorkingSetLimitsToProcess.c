/*
 * XREFs of PspApplyWorkingSetLimitsToProcess @ 0x14054BB34
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140546C9C (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x14054B358 (PspAssignProcessToJob.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MmEnforceWorkingSetLimit @ 0x14011DB20 (MmEnforceWorkingSetLimit.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MmAdjustWorkingSetSize @ 0x14020E360 (MmAdjustWorkingSetSize.c)
 */

__int64 __fastcall PspApplyWorkingSetLimitsToProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v3; // r13
  int v4; // r15d
  int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int16 v10; // dx
  unsigned __int64 v11; // [rsp+28h] [rbp-80h]
  unsigned __int64 v12; // [rsp+30h] [rbp-78h]
  $5BC46E0569261879018906DEC3127961 v13; // [rsp+40h] [rbp-68h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(a1 + 944);
  v4 = 0;
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)&v13);
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 56), 1u);
  v12 = *(_QWORD *)(v3 + 792);
  v11 = *(_QWORD *)(v3 + 800);
  v5 = *(_DWORD *)(v3 + 848) & 1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140341790, 0LL);
  _InterlockedOr((volatile signed __int32 *)(v3 + 1304), 0x100u);
  ExReleaseResourceLite((PERESOURCE)(v3 + 56));
  if ( v5 && (v4 = MmAdjustWorkingSetSize(v12, v11, 0, 1), v4 < 0) )
  {
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1304), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140341790, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140341790);
    KeAbPostRelease((ULONG_PTR)&qword_140341790);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  else
  {
    MmEnforceWorkingSetLimit((_KPROCESS *)a1, 2 - (v5 != 0));
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1304), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140341790, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140341790);
    KeAbPostRelease((ULONG_PTR)&qword_140341790);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v6 = *(_QWORD *)(a1 + 1016);
    if ( v6 )
    {
      if ( (*(_DWORD *)(a1 + 772) & 8) != 0 )
      {
        v4 = 0;
      }
      else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 760)) )
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
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 760));
      }
      else
      {
        v4 = -1073741558;
      }
    }
  }
  KiUnstackDetachProcess(&v13, 0LL);
  return (unsigned int)v4;
}
