/*
 * XREFs of CmpAssignKeySecurity @ 0x140184F70
 * Callers:
 *     CmpSecurityMethod @ 0x1404A6510 (CmpSecurityMethod.c)
 * Callees:
 *     CmpLockKcbStackExclusive @ 0x14049A938 (CmpLockKcbStackExclusive.c)
 *     CmpGetKeyNodeForKcb @ 0x1404A05A0 (CmpGetKeyNodeForKcb.c)
 *     CmpInitializeKcbStack @ 0x1404A5B64 (CmpInitializeKcbStack.c)
 *     CmpAcquireShutdownRundown @ 0x1404A5B8C (CmpAcquireShutdownRundown.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404A5BC8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpCleanupKcbStack @ 0x1404A64E8 (CmpCleanupKcbStack.c)
 *     CmpReleaseShutdownRundown @ 0x1404A674C (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1404A8B74 (CmpUnlockKcbStack.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404AD468 (CmpPerformKeyBodyDeletionCheck.c)
 *     HvpGetCellContextInitialize @ 0x1404E15B4 (HvpGetCellContextInitialize.c)
 *     HvLockHiveFlusherShared @ 0x1404E15C8 (HvLockHiveFlusherShared.c)
 *     CmLockHiveSecurityExclusive @ 0x1404E15E4 (CmLockHiveSecurityExclusive.c)
 *     CmUnlockHiveSecurity @ 0x1404E1DF8 (CmUnlockHiveSecurity.c)
 *     HvUnlockHiveFlusherShared @ 0x1404E1E18 (HvUnlockHiveFlusherShared.c)
 *     CmpAssignSecurityToKcb @ 0x140516C04 (CmpAssignSecurityToKcb.c)
 *     ObAssignObjectSecurityDescriptor @ 0x14055D2D8 (ObAssignObjectSecurityDescriptor.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140651758 (CmpReleaseKeyNodeForKcb.c)
 *     CmpAssignSecurityDescriptor @ 0x140651774 (CmpAssignSecurityDescriptor.c)
 */

__int64 __fastcall CmpAssignKeySecurity(__int64 a1, int a2)
{
  __int64 v3; // rbp
  char v4; // r14
  char v5; // r12
  ULONG_PTR v6; // rsi
  __int64 v7; // rdi
  int started; // ebx
  __int64 v9; // r8
  __int64 KeyNodeForKcb; // r13
  _BYTE v12[32]; // [rsp+30h] [rbp-48h] BYREF
  char v13; // [rsp+90h] [rbp+18h] BYREF

  LODWORD(v3) = a2;
  v4 = 0;
  HvpGetCellContextInitialize(&v13);
  CmpInitializeKcbStack(v12);
  v5 = CmpAcquireShutdownRundown();
  if ( v5 )
  {
    CmpLockRegistry();
    v6 = *(_QWORD *)(a1 + 8);
    v4 = 1;
    v7 = *(_QWORD *)(v6 + 24);
    started = CmpStartKcbStackForTopLayerKcb(v12, v6);
    if ( started >= 0 )
    {
      CmpLockKcbStackExclusive(v12);
      started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
      if ( started >= 0 )
      {
        HvLockHiveFlusherShared(v7);
        CmLockHiveSecurityExclusive(v7);
        LOBYTE(v9) = 1;
        KeyNodeForKcb = CmpGetKeyNodeForKcb(v6, &v13, v9);
        ObAssignObjectSecurityDescriptor(a1, 0LL);
        if ( !KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(v7 + 4152) & 0x20) != 0 && *(_DWORD *)(v7 + 1864) )
          v3 = *(_QWORD *)(*(_QWORD *)(v7 + 1880) + 8LL) + 32LL;
        started = CmpAssignSecurityDescriptor(*(_QWORD *)(v6 + 24), *(_DWORD *)(v6 + 32), KeyNodeForKcb, v3, 0);
        if ( started >= 0 )
        {
          CmpAssignSecurityToKcb(v6, *(unsigned int *)(KeyNodeForKcb + 44), 0);
          started = 0;
        }
        if ( KeyNodeForKcb )
          CmpReleaseKeyNodeForKcb(v6, &v13);
        CmUnlockHiveSecurity(v7);
        HvUnlockHiveFlusherShared(v7);
      }
      CmpUnlockKcbStack(v12);
    }
  }
  else
  {
    started = -1073741431;
  }
  CmpCleanupKcbStack(v12);
  if ( v4 )
    CmpUnlockRegistry();
  if ( v5 )
    CmpReleaseShutdownRundown();
  return (unsigned int)started;
}
