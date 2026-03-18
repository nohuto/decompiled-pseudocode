/*
 * XREFs of PspApplyWorkingSetLimitsToProcess @ 0x14053154C
 * Callers:
 *     PspAssignProcessToJob @ 0x1405306C8 (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x140531810 (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MmEnforceWorkingSetLimit @ 0x14008A9B8 (MmEnforceWorkingSetLimit.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MmAdjustWorkingSetSize @ 0x1402539A0 (MmAdjustWorkingSetSize.c)
 */

__int64 __fastcall PspApplyWorkingSetLimitsToProcess(ULONG_PTR BugCheckParameter1)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v3; // r15
  int v4; // esi
  int v5; // r13d
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int16 v13; // dx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // [rsp+20h] [rbp-78h]
  unsigned __int64 v18; // [rsp+28h] [rbp-70h]
  _BYTE v19[48]; // [rsp+30h] [rbp-68h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(BugCheckParameter1 + 944);
  v4 = 0;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v19);
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 56), 1u);
  v17 = *(_QWORD *)(v3 + 792);
  v18 = *(_QWORD *)(v3 + 800);
  v5 = ((*(_DWORD *)(v3 + 848) & 1) == 0) + 1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14039D570, 0LL);
  _InterlockedOr((volatile signed __int32 *)(v3 + 1304), 0x100u);
  ExReleaseResourceLite((PERESOURCE)(v3 + 56));
  if ( v5 == 2 || (v4 = MmAdjustWorkingSetSize(v17, v18, 0, 1), v4 >= 0) )
  {
    MmEnforceWorkingSetLimit((_KPROCESS *)BugCheckParameter1, v5);
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1304), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14039D570, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14039D570, v6, v7, v8);
    KeAbPostRelease((ULONG_PTR)&qword_14039D570);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v9 = *(_QWORD *)(BugCheckParameter1 + 1016);
    if ( v9 )
    {
      if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 8) != 0 )
      {
        v4 = 0;
      }
      else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
      {
        v10 = 0LL;
        v11 = *(__int64 **)(BugCheckParameter1 + 1064);
        if ( v11 )
        {
          v13 = *((_WORD *)v11 + 4);
          if ( v13 == 332 || v13 == 452 )
            v10 = *v11;
        }
        _interlockedbittestandset((volatile signed __int32 *)(v9 + 80), 0);
        if ( v10 )
          _interlockedbittestandset((volatile signed __int32 *)(v10 + 40), 0);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
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
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14039D570, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14039D570, v14, v15, v16);
    KeAbPostRelease((ULONG_PTR)&qword_14039D570);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  KiUnstackDetachProcess((__int64)v19, 0LL);
  return (unsigned int)v4;
}
