/*
 * XREFs of CmpQueryKeySecurity @ 0x1400188C0
 * Callers:
 *     CmpSecurityMethod @ 0x1404832A0 (CmpSecurityMethod.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpLockKcbStackShared @ 0x14047E98C (CmpLockKcbStackShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14047E9F0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x14047EA68 (CmpUnlockKcbStack.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140482C20 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpCleanupKcbStack @ 0x1404834BC (CmpCleanupKcbStack.c)
 *     CmpQuerySecurityDescriptorInfo @ 0x1404834DC (CmpQuerySecurityDescriptorInfo.c)
 *     CmpInitializeKcbStack @ 0x140483BC0 (CmpInitializeKcbStack.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140568D78 (CmpTransSearchAddTransFromKeyBody.c)
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
  v11 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
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
    KeLeaveCriticalRegionThread(KeGetCurrentThread());
    started = -1073741431;
  }
  CmpCleanupKcbStack(v14);
  if ( v5 )
    CmpUnlockRegistry();
  if ( v11 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread(KeGetCurrentThread());
  }
  return (unsigned int)started;
}
