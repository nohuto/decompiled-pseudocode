/*
 * XREFs of SmcStoreDelete @ 0x14073CBD8
 * Callers:
 *     SmcProcessStoreCreateRequest @ 0x140739C18 (SmcProcessStoreCreateRequest.c)
 *     SmcProcessStoreDeleteRequest @ 0x140739D74 (SmcProcessStoreDeleteRequest.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1400ADB30 (ExRundownCompleted.c)
 *     SmStoreDelete @ 0x140739188 (SmStoreDelete.c)
 *     SmcCacheReference @ 0x14073C544 (SmcCacheReference.c)
 *     SmcStoreEntryFind @ 0x14073CD3C (SmcStoreEntryFind.c)
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
  _DWORD *v14; // r14
  struct _KTHREAD *v15; // rax

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
    v14 = v13;
    if ( v13 )
    {
      v13[1] |= 4u;
      *v13 = -1;
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v9.Count + 160));
      KeAbPostRelease(v9.Count + 160);
      KeLeaveCriticalRegion();
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v14 + 2);
      ExRundownCompleted((PEX_RUNDOWN_REF)v14 + 2);
      SmStoreDelete(a4, a3);
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v9.Count + 160, 0LL);
      v8 = (struct _PRIVILEGE_SET *)*((_QWORD *)v14 + 1);
      *((_QWORD *)v14 + 1) = 0LL;
      v14[1] &= ~4u;
      v10 = 0;
    }
    else
    {
      v10 = -1073741672;
    }
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegion();
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(32LL * (v6 & 0xF) + a1 + 8));
    if ( v8 )
      MiDeleteSubsection(v8);
  }
  else
  {
    return (unsigned int)-1073741672;
  }
  return v10;
}
