/*
 * XREFs of CmpAssignKeySecurity @ 0x140165FEC
 * Callers:
 *     CmpSecurityMethod @ 0x1404FCC50 (CmpSecurityMethod.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObAssignObjectSecurityDescriptor @ 0x140457688 (ObAssignObjectSecurityDescriptor.c)
 *     CmpUnlockHiveFlusher @ 0x1404BF104 (CmpUnlockHiveFlusher.c)
 *     CmUnlockHiveSecurity @ 0x1404BF118 (CmUnlockHiveSecurity.c)
 *     CmLockHiveSecurityExclusive @ 0x1404BFFEC (CmLockHiveSecurityExclusive.c)
 *     CmpLockHiveFlusherShared @ 0x1404C0000 (CmpLockHiveFlusherShared.c)
 *     CmpGetKeyNodeForKcb @ 0x1404CFE00 (CmpGetKeyNodeForKcb.c)
 *     CmpLockKcbStackExclusive @ 0x1404CFFD8 (CmpLockKcbStackExclusive.c)
 *     CmpAssignSecurityToKcb @ 0x1404D0F50 (CmpAssignSecurityToKcb.c)
 *     CmpInitializeKcbStack @ 0x1404FC458 (CmpInitializeKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404FC480 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpCleanupKcbStack @ 0x1404FCC2C (CmpCleanupKcbStack.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404FCE78 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1404FF9E0 (CmpUnlockKcbStack.c)
 *     CmpReleaseKeyNodeForKcb @ 0x1405D11E0 (CmpReleaseKeyNodeForKcb.c)
 *     CmpAssignSecurityDescriptor @ 0x1405D11F4 (CmpAssignSecurityDescriptor.c)
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
  v6 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    started = -1073741431;
  }
  CmpCleanupKcbStack(v13);
  if ( v4 )
    CmpUnlockRegistry();
  if ( v6 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)started;
}
