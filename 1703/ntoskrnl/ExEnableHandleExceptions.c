/*
 * XREFs of ExEnableHandleExceptions @ 0x140455EF0
 * Callers:
 *     PspApplyMitigationOptions @ 0x1404A0710 (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

bool __fastcall ExEnableHandleExceptions(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r12
  bool v5; // si
  volatile signed __int64 *v6; // rbp
  __int64 v7; // rcx
  char v8; // cl
  int v10; // eax

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  v6 = (volatile signed __int64 *)(a1 + 56);
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v7 = *(_QWORD *)(a1 + 96);
  if ( v7 )
  {
    v10 = *(_DWORD *)(v7 + 8);
    if ( (v10 & 8) != 0 )
    {
      v5 = a2 == 0;
    }
    else if ( a2 )
    {
      *(_DWORD *)(v7 + 8) = v10 | 8;
    }
  }
  else
  {
    v8 = *(_BYTE *)(a1 + 44);
    if ( (v8 & 2) != 0 )
      v5 = a2 == 0;
    else
      *(_BYTE *)(a1 + 44) = v8 ^ (v8 ^ (2 * (a2 != 0))) & 2;
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return !v5;
}
