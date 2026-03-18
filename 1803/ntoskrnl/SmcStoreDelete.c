/*
 * XREFs of SmcStoreDelete @ 0x14079FBE0
 * Callers:
 *     SmcProcessStoreCreateRequest @ 0x14079CCD4 (SmcProcessStoreCreateRequest.c)
 *     SmcProcessStoreDeleteRequest @ 0x14079CE30 (SmcProcessStoreDeleteRequest.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ExRundownCompleted @ 0x14008AE10 (ExRundownCompleted.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     SmStoreDelete @ 0x14079C3DC (SmStoreDelete.c)
 *     SmcCacheReference @ 0x14079F54C (SmcCacheReference.c)
 *     SmcStoreEntryFind @ 0x14079FD44 (SmcStoreEntryFind.c)
 */

__int64 __fastcall SmcStoreDelete(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  char v6; // r15
  struct _PRIVILEGE_SET *v8; // rbp
  struct _EX_RUNDOWN_REF v9; // rdi
  unsigned int v10; // edi
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v12; // rsi
  _DWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // r14
  struct _KTHREAD *v18; // rax

  v6 = a2;
  v8 = 0LL;
  v9.Count = SmcCacheReference(a1, a2).Count;
  if ( v9.Count )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v12 = (volatile signed __int64 *)(v9.Count + 160);
    ExAcquirePushLockExclusiveEx(v9.Count + 160, 0LL);
    v13 = (_DWORD *)SmcStoreEntryFind(v9.Count, a3, a4);
    v17 = v13;
    if ( v13 )
    {
      v13[1] |= 4u;
      *v13 = -1;
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v9.Count + 160), v14, v15, v16);
      KeAbPostRelease(v9.Count + 160);
      KeLeaveCriticalRegion();
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v17 + 2);
      ExRundownCompleted((PEX_RUNDOWN_REF)v17 + 2);
      SmStoreDelete(a4, a3);
      v18 = KeGetCurrentThread();
      --v18->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v9.Count + 160, 0LL);
      v8 = (struct _PRIVILEGE_SET *)*((_QWORD *)v17 + 1);
      *((_QWORD *)v17 + 1) = 0LL;
      v17[1] &= ~4u;
      v10 = 0;
    }
    else
    {
      v10 = -1073741672;
    }
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12, v14, v15, v16);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegion();
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(32LL * (v6 & 0xF) + a1 + 8));
    if ( v8 )
      CmSiFreeMemory(v8);
  }
  else
  {
    return (unsigned int)-1073741672;
  }
  return v10;
}
