/*
 * XREFs of SmKmStoreAdd @ 0x140567F1C
 * Callers:
 *     SmProcessCreateRequest @ 0x140567BBC (SmProcessCreateRequest.c)
 * Callees:
 *     ExInitializePushLock @ 0x140023310 (ExInitializePushLock.c)
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     SmEtwEnabled @ 0x1400587E0 (SmEtwEnabled.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     SmAlloc @ 0x14012F798 (SmAlloc.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SmKmEtwLogStoreChange @ 0x140701CD4 (SmKmEtwLogStoreChange.c)
 */

__int64 __fastcall SmKmStoreAdd(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  unsigned int v4; // r13d
  __int64 v5; // r12
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r15
  volatile signed __int64 *v9; // rsi
  struct _KTHREAD *v10; // rax
  struct _KTHREAD *v11; // rax
  volatile signed __int64 *v12; // rsi
  int v13; // eax
  ULONGLONG *v14; // rax
  char *v17; // rax
  struct _PRIVILEGE_SET *v18; // rbp
  unsigned __int64 v19; // r15
  struct _EX_RUNDOWN_REF *v20; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v22; // [rsp+20h] [rbp-48h]

  v4 = 0;
  v22 = *(_DWORD **)a3;
  v5 = 0LL;
  do
  {
    if ( !*(_QWORD *)(a1 + 8 * v5) )
    {
      v17 = (char *)SmAlloc(0x500uLL, 0x61536D73u);
      v18 = (struct _PRIVILEGE_SET *)v17;
      if ( !v17 )
        return (unsigned int)-1073741670;
      v19 = (unsigned __int64)(v17 + 1280);
      if ( v17 < v17 + 1280 )
      {
        v20 = (struct _EX_RUNDOWN_REF *)(v17 + 8);
        do
        {
          memset(&v20[-1], 0, 0x28uLL);
          ExInitializePushLock(&v20->Count);
          ExWaitForRundownProtectionRelease(v20);
          v20[1].Count = 0LL;
          v20 += 5;
        }
        while ( (unsigned __int64)&v20[-1] < v19 );
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 416, 0LL);
      if ( !*(_QWORD *)(a1 + 8 * v5) )
      {
        *(_QWORD *)(a1 + 8 * v5) = v18;
        v18 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 416), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 416));
      KeAbPostRelease(a1 + 416);
      KeLeaveCriticalRegion();
      if ( v18 )
        MiDeleteSubsection(v18);
    }
    v7 = *(_QWORD *)(a1 + 8 * v5);
    v8 = v7 + 1280;
    if ( v7 >= v7 + 1280 )
      goto LABEL_35;
    v9 = (volatile signed __int64 *)(v7 + 16);
    while ( *(_QWORD *)v7 )
    {
LABEL_6:
      v7 += 40LL;
      v9 += 5;
      ++v4;
      if ( v7 >= v8 )
        goto LABEL_9;
    }
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v9, 0LL);
    if ( *(_QWORD *)v7 )
    {
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v9);
      KeAbPostRelease((ULONG_PTR)v9);
      KeLeaveCriticalRegion();
      goto LABEL_6;
    }
LABEL_9:
    if ( v7 < v8 )
      break;
LABEL_35:
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < 0x20 );
  if ( v4 >= 0x400 )
  {
    return (unsigned int)-1073741671;
  }
  else
  {
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    v12 = (volatile signed __int64 *)(a1 + 416);
    ExAcquirePushLockExclusiveEx(a1 + 416, 0LL);
    if ( (*v22 & 0x100) == 0 )
      goto LABEL_12;
    if ( *(_DWORD *)(a1 + 432) == -1 )
    {
      *(_DWORD *)(a1 + 432) = v4;
LABEL_12:
      *(_BYTE *)(v7 + 34) &= 0xFCu;
      *(_WORD *)(v7 + 32) ^= (*(_WORD *)(v7 + 32) ^ (*v22 >> 18 << 7)) & 0x80;
      *(_QWORD *)(v7 + 24) = *(_QWORD *)(a3 + 16);
      ++*(_DWORD *)(a1 + 424);
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 416));
      KeAbPostRelease(a1 + 416);
      KeLeaveCriticalRegion();
      *(_QWORD *)v7 = a2;
      do
      {
        *(_WORD *)(v7 + 32) ^= (*(_WORD *)(v7 + 32) ^ (*(_WORD *)(v7 + 32) + 1)) & 0x3F;
        v13 = v4 | ((*(_WORD *)(v7 + 32) & 0x3F) << 10);
        *a4 = v13;
      }
      while ( v13 == 66559 );
      v14 = SmEtwEnabled(0);
      if ( v14 )
        SmKmEtwLogStoreChange(v14, *(_QWORD *)v7, &SmEventStoreCreate);
      _InterlockedExchange64((volatile __int64 *)(v7 + 8), 0LL);
      ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v7 + 8));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 16));
      KeAbPostRelease(v7 + 16);
      KeLeaveCriticalRegion();
      return 0;
    }
    else
    {
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 416));
      KeAbPostRelease(a1 + 416);
      KeLeaveCriticalRegion();
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 16));
      KeAbPostRelease(v7 + 16);
      KeLeaveCriticalRegion();
      return (unsigned int)-1073740757;
    }
  }
}
