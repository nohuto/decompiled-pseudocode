/*
 * XREFs of ObUnRegisterCallbacks @ 0x140759D40
 * Callers:
 *     <none>
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __stdcall ObUnRegisterCallbacks(PVOID RegistrationHandle)
{
  unsigned int i; // esi
  struct _EX_RUNDOWN_REF *v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 Count; // rcx
  struct _EX_RUNDOWN_REF **v8; // rax

  for ( i = 0; i < *((unsigned __int16 *)RegistrationHandle + 1); ++i )
  {
    v3 = (struct _EX_RUNDOWN_REF *)((char *)RegistrationHandle + 64 * (unsigned __int64)i + 32);
    ExWaitForRundownProtectionRelease(v3 + 7);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v3[4].Count + 184, 0LL);
    Count = v3->Count;
    if ( *(struct _EX_RUNDOWN_REF **)(v3->Count + 8) != v3 || (v8 = (struct _EX_RUNDOWN_REF **)v3[1].Count, *v8 != v3) )
      __fastfail(3u);
    *v8 = (struct _EX_RUNDOWN_REF *)Count;
    *(_QWORD *)(Count + 8) = v8;
    ExReleasePushLockEx(v3[4].Count + 184, 0LL, v5, v6);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  ExFreePoolWithTag(RegistrationHandle, 0x6C46624Fu);
}
