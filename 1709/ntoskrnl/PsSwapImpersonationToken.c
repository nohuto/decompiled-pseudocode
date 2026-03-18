/*
 * XREFs of PsSwapImpersonationToken @ 0x14056D670
 * Callers:
 *     NtOpenThreadTokenEx @ 0x1404C5CB0 (NtOpenThreadTokenEx.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PsSwapImpersonationToken(__int64 a1, void *a2, unsigned __int64 a3)
{
  int v3; // edi
  void *v7; // r14
  struct _KTHREAD *CurrentThread; // r15
  __int64 v9; // rcx
  char v10; // al
  void *v12; // rcx

  v3 = 0;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 1744) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    ObfReferenceObject((PVOID)a3);
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 1728, 0LL);
    if ( (*(_DWORD *)(a1 + 1744) & 8) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 1640);
      if ( (void *)(v9 & 0xFFFFFFFFFFFFFFF8uLL) == a2 && (*(_DWORD *)(a1 + 1744) & 0x100) != 0 )
      {
        v7 = *(void **)(a1 + 1912);
        *(_QWORD *)(a1 + 1912) = 0LL;
        *(_QWORD *)(a1 + 1640) = a3 | v9 & 7;
        _InterlockedAnd((volatile signed __int32 *)(a1 + 1744), 0xFFFFFEFF);
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
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1728), 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1728));
    KeAbPostRelease(a1 + 1728);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v3 < 0 )
    {
      v12 = (void *)a3;
    }
    else
    {
      ObfDereferenceObject(a2);
      if ( !v7 )
        return (unsigned int)v3;
      v12 = v7;
    }
    ObfDereferenceObject(v12);
    return (unsigned int)v3;
  }
  return 3221225596LL;
}
