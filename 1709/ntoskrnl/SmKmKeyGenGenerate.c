/*
 * XREFs of SmKmKeyGenGenerate @ 0x14073A658
 * Callers:
 *     SmcStoreCreate @ 0x14073C98C (SmcStoreCreate.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     SmKmKeyGenKeyDelete @ 0x14073A768 (SmKmKeyGenKeyDelete.c)
 *     SmKmKeyGenKeyFind @ 0x14073A7F8 (SmKmKeyGenKeyFind.c)
 *     SmKmKeyGenNewKey @ 0x14073A9AC (SmKmKeyGenNewKey.c)
 */

__int64 __fastcall SmKmKeyGenGenerate(signed __int64 *BugCheckParameter2, void *a2, void *a3, unsigned int a4)
{
  size_t v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  struct _PRIVILEGE_SET *v10; // rdi
  int v11; // edi

  v4 = a4;
  while ( 1 )
  {
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)BugCheckParameter2, 0LL);
      v9 = SmKmKeyGenKeyFind(BugCheckParameter2, a2);
      v10 = (struct _PRIVILEGE_SET *)v9;
      if ( v9 )
        break;
      if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(BugCheckParameter2);
      KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
      KeLeaveCriticalRegion();
      v11 = SmKmKeyGenNewKey((ULONG_PTR)BugCheckParameter2, a2, v4);
      if ( v11 < 0 )
        return (unsigned int)v11;
    }
    if ( *(_DWORD *)(v9 + 32) == (_DWORD)v4 )
      break;
    if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(BugCheckParameter2);
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
    KeLeaveCriticalRegion();
    SmKmKeyGenKeyDelete((ULONG_PTR)BugCheckParameter2, v10);
  }
  memmove(a3, *(const void **)(v9 + 24), v4);
  v11 = 0;
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
  return (unsigned int)v11;
}
