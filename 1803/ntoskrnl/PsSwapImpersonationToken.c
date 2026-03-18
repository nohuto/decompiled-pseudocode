/*
 * XREFs of PsSwapImpersonationToken @ 0x1404C0840
 * Callers:
 *     NtOpenThreadTokenEx @ 0x1404C0990 (NtOpenThreadTokenEx.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall PsSwapImpersonationToken(__int64 a1, void *a2, unsigned __int64 a3)
{
  void *v3; // r14
  struct _KTHREAD *CurrentThread; // r13
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  char v13; // bp
  void *v15; // rcx

  v3 = 0LL;
  if ( (*(_DWORD *)(a1 + 1744) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = 0;
    ObfReferenceObject((PVOID)a3);
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 1728, 0LL);
    if ( (*(_DWORD *)(a1 + 1744) & 8) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 1640);
      if ( (void *)(v12 & 0xFFFFFFFFFFFFFFF8uLL) == a2 && (*(_DWORD *)(a1 + 1744) & 0x100) != 0 )
      {
        v3 = *(void **)(a1 + 1912);
        *(_QWORD *)(a1 + 1912) = 0LL;
        *(_QWORD *)(a1 + 1640) = a3 | v12 & 7;
        _InterlockedAnd((volatile signed __int32 *)(a1 + 1744), 0xFFFFFEFF);
      }
      else
      {
        v8 = -1073741823;
      }
    }
    else
    {
      v8 = -1073741700;
    }
    v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1728), 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1728), v9, v10, v11);
    KeAbPostRelease(a1 + 1728);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v8 < 0 )
    {
      v15 = (void *)a3;
    }
    else
    {
      ObfDereferenceObject(a2);
      if ( !v3 )
        return (unsigned int)v8;
      v15 = v3;
    }
    ObfDereferenceObject(v15);
    return (unsigned int)v8;
  }
  return 3221225596LL;
}
