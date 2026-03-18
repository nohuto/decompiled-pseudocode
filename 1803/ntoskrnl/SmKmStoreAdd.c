/*
 * XREFs of SmKmStoreAdd @ 0x14052B218
 * Callers:
 *     SmProcessCreateRequest @ 0x14052AEB8 (SmProcessCreateRequest.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     SmAlloc @ 0x14007E79C (SmAlloc.c)
 *     SmEtwEnabled @ 0x140092880 (SmEtwEnabled.c)
 *     ExInitializePushLock @ 0x1400BA070 (ExInitializePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SmKmEtwLogStoreChange @ 0x14079CFD4 (SmKmEtwLogStoreChange.c)
 */

__int64 __fastcall SmKmStoreAdd(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  unsigned int v4; // r13d
  __int64 v5; // r12
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r15
  volatile signed __int64 *v9; // rsi
  struct _KTHREAD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD *v14; // rax
  volatile signed __int64 *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int16 v19; // cx
  int v20; // eax
  ULONGLONG *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  char *v27; // rax
  struct _PRIVILEGE_SET *v28; // rbp
  unsigned __int64 v29; // r15
  struct _EX_RUNDOWN_REF *v30; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  _DWORD *v38; // [rsp+20h] [rbp-48h]

  v4 = 0;
  v38 = *(_DWORD **)a3;
  v5 = 0LL;
  do
  {
    if ( !*(_QWORD *)(a1 + 8 * v5) )
    {
      v27 = (char *)SmAlloc(0x500uLL, 0x61536D73u);
      v28 = (struct _PRIVILEGE_SET *)v27;
      if ( !v27 )
        return (unsigned int)-1073741670;
      v29 = (unsigned __int64)(v27 + 1280);
      if ( v27 < v27 + 1280 )
      {
        v30 = (struct _EX_RUNDOWN_REF *)(v27 + 8);
        do
        {
          memset(&v30[-1], 0, 0x28uLL);
          ExInitializePushLock(&v30->Count);
          ExWaitForRundownProtectionRelease(v30);
          v30[1].Count = 0LL;
          v30 += 5;
        }
        while ( (unsigned __int64)&v30[-1] < v29 );
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 416, 0LL);
      if ( !*(_QWORD *)(a1 + 8 * v5) )
      {
        *(_QWORD *)(a1 + 8 * v5) = v28;
        v28 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 416), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 416), v32, v33, v34);
      KeAbPostRelease(a1 + 416);
      KeLeaveCriticalRegion();
      if ( v28 )
        CmSiFreeMemory(v28);
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
        ExfTryToWakePushLock(v9, v11, v12, v13);
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
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    v15 = (volatile signed __int64 *)(a1 + 416);
    ExAcquirePushLockExclusiveEx(a1 + 416, 0LL);
    if ( (*v38 & 0x100) == 0 )
      goto LABEL_12;
    if ( *(_DWORD *)(a1 + 432) == -1 )
    {
      *(_DWORD *)(a1 + 432) = v4;
LABEL_12:
      *(_BYTE *)(v7 + 34) &= ~1u;
      *(_BYTE *)(v7 + 34) &= ~2u;
      *(_WORD *)(v7 + 32) ^= (*(_WORD *)(v7 + 32) ^ (*v38 >> 18 << 7)) & 0x80;
      *(_QWORD *)(v7 + 24) = *(_QWORD *)(a3 + 16);
      ++*(_DWORD *)(a1 + 424);
      if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 416), v16, v17, v18);
      KeAbPostRelease(a1 + 416);
      KeLeaveCriticalRegion();
      *(_QWORD *)v7 = a2;
      do
      {
        v19 = *(_WORD *)(v7 + 32) ^ (*(_WORD *)(v7 + 32) ^ (*(_WORD *)(v7 + 32) + 1)) & 0x3F;
        *(_WORD *)(v7 + 32) = v19;
        v20 = v4 | ((v19 & 0x3F) << 10);
        *a4 = v20;
      }
      while ( v20 == 66559 );
      v21 = SmEtwEnabled(0);
      if ( v21 )
        SmKmEtwLogStoreChange(v21, *(_QWORD *)v7, &SmEventStoreCreate);
      _InterlockedExchange64((volatile __int64 *)(v7 + 8), 0LL);
      ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v7 + 8));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 16), v22, v23, v24);
      KeAbPostRelease(v7 + 16);
      KeLeaveCriticalRegion();
      return 0;
    }
    else
    {
      if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 416), v16, v17, v18);
      KeAbPostRelease(a1 + 416);
      KeLeaveCriticalRegion();
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 16), v35, v36, v37);
      KeAbPostRelease(v7 + 16);
      KeLeaveCriticalRegion();
      return (unsigned int)-1073740757;
    }
  }
}
