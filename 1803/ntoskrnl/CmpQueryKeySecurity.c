/*
 * XREFs of CmpQueryKeySecurity @ 0x140007C08
 * Callers:
 *     CmpSecurityMethod @ 0x1404A6510 (CmpSecurityMethod.c)
 * Callees:
 *     CmpInitializeKcbStack @ 0x1404A5B64 (CmpInitializeKcbStack.c)
 *     CmpAcquireShutdownRundown @ 0x1404A5B8C (CmpAcquireShutdownRundown.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404A5BC8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpQuerySecurityDescriptorInfo @ 0x1404A5DD4 (CmpQuerySecurityDescriptorInfo.c)
 *     CmpCleanupKcbStack @ 0x1404A64E8 (CmpCleanupKcbStack.c)
 *     CmpReleaseShutdownRundown @ 0x1404A674C (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpLockKcbStackShared @ 0x1404A8434 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1404A8B74 (CmpUnlockKcbStack.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404AD468 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14054BFC8 (CmpTransSearchAddTransFromKeyBody.c)
 */

__int64 __fastcall CmpQueryKeySecurity(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v6; // bp
  char v10; // r14
  int started; // ebx
  _BYTE v13[32]; // [rsp+30h] [rbp-48h] BYREF

  a5 = 0LL;
  v6 = 0;
  CmpInitializeKcbStack(v13);
  v10 = CmpAcquireShutdownRundown();
  if ( v10 )
  {
    CmpLockRegistry();
    v6 = 1;
    started = CmpStartKcbStackForTopLayerKcb(v13, a1[1]);
    if ( started >= 0 )
    {
      CmpLockKcbStackShared(v13);
      started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
      if ( started >= 0 )
      {
        if ( !a1[7] && !a1[8]
          || (started = CmpTransSearchAddTransFromKeyBody(a1, &a5), started >= 0)
          && (started = CmpPerformKeyBodyDeletionCheck(a1, a5), started >= 0) )
        {
          started = CmpQuerySecurityDescriptorInfo(v13, a2, a3, a4);
          if ( started >= 0 )
            started = 0;
        }
      }
      CmpUnlockKcbStack(v13);
    }
  }
  else
  {
    started = -1073741431;
  }
  CmpCleanupKcbStack(v13);
  if ( v6 )
    CmpUnlockRegistry();
  if ( v10 )
    CmpReleaseShutdownRundown();
  return (unsigned int)started;
}
