/*
 * XREFs of PsSwapImpersonationToken @ 0x140510E40
 * Callers:
 *     NtOpenThreadTokenEx @ 0x140510670 (NtOpenThreadTokenEx.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PsSwapImpersonationToken(__int64 a1, void *a2, unsigned __int64 a3)
{
  int v3; // edi
  void *v7; // r14
  struct _KTHREAD *CurrentThread; // r15
  __int64 v9; // rcx
  void *v11; // rcx

  v3 = 0;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 1736) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    ObfReferenceObject((PVOID)a3);
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 1720, 0LL);
    if ( (*(_DWORD *)(a1 + 1736) & 8) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 1640);
      if ( (void *)(v9 & 0xFFFFFFFFFFFFFFF8uLL) == a2 && (*(_DWORD *)(a1 + 1736) & 0x100) != 0 )
      {
        v7 = *(void **)(a1 + 1904);
        *(_QWORD *)(a1 + 1904) = 0LL;
        *(_QWORD *)(a1 + 1640) = a3 | v9 & 7;
        _InterlockedAnd((volatile signed __int32 *)(a1 + 1736), 0xFFFFFEFF);
      }
      else
      {
        v3 = -1073741823;
      }
    }
    else
    {
      v3 = -1073741700;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1720), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1720));
    KeAbPostRelease(a1 + 1720);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    if ( v3 < 0 )
    {
      v11 = (void *)a3;
    }
    else
    {
      ObfDereferenceObject(a2);
      if ( !v7 )
        return (unsigned int)v3;
      v11 = v7;
    }
    ObfDereferenceObject(v11);
    return (unsigned int)v3;
  }
  return 3221225596LL;
}
