/*
 * XREFs of CmpQueryKeySecurity @ 0x14008BF10
 * Callers:
 *     CmpSecurityMethod @ 0x1404FCC50 (CmpSecurityMethod.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14042DC14 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpInitializeKcbStack @ 0x1404FC458 (CmpInitializeKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404FC480 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpQuerySecurityDescriptorInfo @ 0x1404FC558 (CmpQuerySecurityDescriptorInfo.c)
 *     CmpCleanupKcbStack @ 0x1404FCC2C (CmpCleanupKcbStack.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404FCE78 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpLockKcbStackShared @ 0x1404FF968 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1404FF9E0 (CmpUnlockKcbStack.c)
 */

__int64 __fastcall CmpQueryKeySecurity(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // si
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v11; // r14
  int started; // ebx
  _BYTE v14[32]; // [rsp+30h] [rbp-48h] BYREF

  v5 = 0;
  a5 = 0LL;
  CmpInitializeKcbStack(v14);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v11 )
  {
    CmpLockRegistry();
    v5 = 1;
    started = CmpStartKcbStackForTopLayerKcb(v14, a1[1]);
    if ( started >= 0 )
    {
      CmpLockKcbStackShared(v14);
      started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
      if ( started >= 0 )
      {
        if ( !a1[7] && !a1[8]
          || (started = CmpTransSearchAddTransFromKeyBody(a1, &a5), started >= 0)
          && (started = CmpPerformKeyBodyDeletionCheck(a1, a5), started >= 0) )
        {
          started = CmpQuerySecurityDescriptorInfo(v14, a2, a3, a4);
          if ( started >= 0 )
            started = 0;
        }
      }
      CmpUnlockKcbStack(v14);
    }
  }
  else
  {
    KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
    started = -1073741431;
  }
  CmpCleanupKcbStack(v14);
  if ( v5 )
    CmpUnlockRegistry();
  if ( v11 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
  }
  return (unsigned int)started;
}
