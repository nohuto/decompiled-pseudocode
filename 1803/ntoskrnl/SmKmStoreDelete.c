/*
 * XREFs of SmKmStoreDelete @ 0x140539560
 * Callers:
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x14009ACC0 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     SmProcessCreateRequest @ 0x14052AEB8 (SmProcessCreateRequest.c)
 *     SmProcessDeleteRequest @ 0x14079BA90 (SmProcessDeleteRequest.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140090324 (SmKmStoreRefFromStoreIndex.c)
 *     SmEtwEnabled @ 0x140092880 (SmEtwEnabled.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     SmKmEtwLogStoreChange @ 0x14079CFD4 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x14079D108 (SmKmEtwLogStoreStats.c)
 */

__int64 __fastcall SmKmStoreDelete(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v4; // r12d
  unsigned int v7; // edi
  _QWORD *v8; // r14
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int16 v14; // cx
  __int64 v15; // r15
  ULONGLONG *v16; // rax
  ULONGLONG *v17; // r13
  struct _KTHREAD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9

  v4 = a2 & 0x3FF;
  v7 = 0;
  v8 = (_QWORD *)SmKmStoreRefFromStoreIndex(a1, v4);
  if ( !v8 )
    return (unsigned int)-1073741735;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = v8 + 2;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v8 + 2), 0LL);
  v14 = *((_WORD *)v8 + 16);
  if ( a2 >> 10 != (v14 & 0x3F) )
    goto LABEL_21;
  v15 = *v8;
  if ( (unsigned __int64)(*v8 - 1LL) > 0xFFFFFFFFFFFFFFFDuLL )
    goto LABEL_21;
  if ( !a3 )
  {
LABEL_5:
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 256))(a1, *v8, 7LL);
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v8 + 1);
    v16 = SmEtwEnabled(0);
    v17 = v16;
    if ( v16 )
    {
      SmKmEtwLogStoreStats(v16, *v8);
      SmKmEtwLogStoreChange(v17, *v8, &SmEventStoreDelete);
    }
    (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 256))(a1, v15, 2LL);
    *v8 = 0LL;
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 416, 0LL);
    if ( *(_DWORD *)(a1 + 432) == v4 )
      *(_DWORD *)(a1 + 432) = -1;
    if ( (*(_DWORD *)(a1 + 424))-- == 1 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 256))(a1, 0LL, 4LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 416), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 416), v19, v20, v21);
    KeAbPostRelease(a1 + 416);
    KeLeaveCriticalRegion();
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10, v23, v24, v25);
    KeAbPostRelease((ULONG_PTR)v10);
    KeLeaveCriticalRegion();
    (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 256))(a1, v15, 1LL);
    return v7;
  }
  if ( (v14 & 0x40) != 0 )
  {
LABEL_21:
    v7 = -1073741735;
  }
  else
  {
    if ( (v14 & 0x80u) == 0 )
      goto LABEL_5;
    v7 = -1073741790;
  }
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8 + 2, v11, v12, v13);
  KeAbPostRelease((ULONG_PTR)(v8 + 2));
  KeLeaveCriticalRegion();
  return v7;
}
