/*
 * XREFs of ExEnableHandleExceptions @ 0x14057B6C4
 * Callers:
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     PspApplyMitigationOptions @ 0x1404EF46C (PspApplyMitigationOptions.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

bool __fastcall ExEnableHandleExceptions(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int64 *v5; // rbp
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdx
  char v10; // cl
  bool v11; // di
  int v13; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (volatile signed __int64 *)(a1 + 56);
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v8 = *(_QWORD *)(a1 + 96);
  LOBYTE(v9) = 2;
  if ( v8 )
  {
    v13 = *(_DWORD *)(v8 + 8);
    if ( (v13 & 8) == 0 )
    {
      if ( a2 )
        *(_DWORD *)(v8 + 8) = v13 | 8;
      goto LABEL_4;
    }
  }
  else
  {
    v10 = *(_BYTE *)(a1 + 44);
    if ( (v10 & 2) == 0 )
    {
      *(_BYTE *)(a1 + 44) = v10 & 0xFD | (a2 != 0 ? 2 : 0);
LABEL_4:
      v11 = 1;
      goto LABEL_5;
    }
  }
  v11 = a2 != 0;
LABEL_5:
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5, v9, v6, v7);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v11;
}
