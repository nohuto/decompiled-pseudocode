/*
 * XREFs of ObUnRegisterCallbacks @ 0x1406C1EF0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 */

void __stdcall ObUnRegisterCallbacks(PVOID RegistrationHandle)
{
  unsigned int i; // edi
  struct _EX_RUNDOWN_REF *v3; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 Count; // rcx
  struct _EX_RUNDOWN_REF **v6; // rax

  for ( i = 0; i < *((unsigned __int16 *)RegistrationHandle + 1); ++i )
  {
    v3 = (struct _EX_RUNDOWN_REF *)((char *)RegistrationHandle + 64 * (unsigned __int64)i + 32);
    ExWaitForRundownProtectionRelease(v3 + 7);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v3[4].Count + 184, 0LL);
    Count = v3->Count;
    v6 = (struct _EX_RUNDOWN_REF **)v3[1].Count;
    if ( *(struct _EX_RUNDOWN_REF **)(v3->Count + 8) != v3 || *v6 != v3 )
      __fastfail(3u);
    *v6 = (struct _EX_RUNDOWN_REF *)Count;
    *(_QWORD *)(Count + 8) = v6;
    ExReleasePushLockEx(v3[4].Count + 184, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  ExFreePoolWithTag(RegistrationHandle, 0x6C46624Fu);
}
