/*
 * XREFs of CmpAssignKeySecurity @ 0x1401593C4
 * Callers:
 *     CmpSecurityMethod @ 0x1404832A0 (CmpSecurityMethod.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     CmpGetKeyNodeForKcb @ 0x140472A4C (CmpGetKeyNodeForKcb.c)
 *     CmpLockKcbStackExclusive @ 0x140472C1C (CmpLockKcbStackExclusive.c)
 *     CmpAssignSecurityToKcb @ 0x1404765F8 (CmpAssignSecurityToKcb.c)
 *     CmpLockHiveFlusherShared @ 0x140476D5C (CmpLockHiveFlusherShared.c)
 *     CmLockHiveSecurityExclusive @ 0x140476D7C (CmLockHiveSecurityExclusive.c)
 *     CmpUnlockHiveFlusher @ 0x140476DAC (CmpUnlockHiveFlusher.c)
 *     CmUnlockHiveSecurity @ 0x140476DC8 (CmUnlockHiveSecurity.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14047E9F0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x14047EA68 (CmpUnlockKcbStack.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140482C20 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpCleanupKcbStack @ 0x1404834BC (CmpCleanupKcbStack.c)
 *     CmpInitializeKcbStack @ 0x140483BC0 (CmpInitializeKcbStack.c)
 *     ObAssignObjectSecurityDescriptor @ 0x140483E68 (ObAssignObjectSecurityDescriptor.c)
 *     CmpReleaseKeyNodeForKcb @ 0x1405EB4B0 (CmpReleaseKeyNodeForKcb.c)
 *     CmpAssignSecurityDescriptor @ 0x1405EB4CC (CmpAssignSecurityDescriptor.c)
 */

__int64 __fastcall CmpAssignKeySecurity(__int64 a1, int a2)
{
  __int64 v3; // rbp
  char v4; // r14
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v6; // r12
  ULONG_PTR v7; // rsi
  __int64 v8; // rdi
  int started; // ebx
  __int64 v10; // r8
  __int64 KeyNodeForKcb; // r15
  _BYTE v13[32]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+90h] [rbp+18h] BYREF

  v14 = 0xFFFFFFFFLL;
  LODWORD(v3) = a2;
  v4 = 0;
  CmpInitializeKcbStack(v13);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v6 )
  {
    CmpLockRegistry();
    v7 = *(_QWORD *)(a1 + 8);
    v4 = 1;
    v8 = *(_QWORD *)(v7 + 24);
    started = CmpStartKcbStackForTopLayerKcb(v13, v7);
    if ( started >= 0 )
    {
      CmpLockKcbStackExclusive(v13);
      started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
      if ( started >= 0 )
      {
        CmpLockHiveFlusherShared(v8);
        CmLockHiveSecurityExclusive(v8);
        LOBYTE(v10) = 1;
        KeyNodeForKcb = CmpGetKeyNodeForKcb(v7, &v14, v10);
        ObAssignObjectSecurityDescriptor(a1, 0LL);
        if ( !KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(v8 + 5360) & 0x20) != 0 && *(_DWORD *)(v8 + 3040) )
          v3 = *(_QWORD *)(*(_QWORD *)(v8 + 3056) + 8LL) + 32LL;
        started = CmpAssignSecurityDescriptor(*(_QWORD *)(v7 + 24), *(_DWORD *)(v7 + 32), KeyNodeForKcb, v3, 0);
        if ( started >= 0 )
        {
          CmpAssignSecurityToKcb(v7, *(unsigned int *)(KeyNodeForKcb + 44), 0);
          started = 0;
        }
        if ( KeyNodeForKcb )
          CmpReleaseKeyNodeForKcb(v7, &v14);
        CmUnlockHiveSecurity(v8);
        CmpUnlockHiveFlusher(v8);
      }
      CmpUnlockKcbStack(v13);
    }
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    started = -1073741431;
  }
  CmpCleanupKcbStack(v13);
  if ( v4 )
    CmpUnlockRegistry();
  if ( v6 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)started;
}
