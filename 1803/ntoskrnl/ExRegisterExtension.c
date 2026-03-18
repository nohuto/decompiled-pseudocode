/*
 * XREFs of ExRegisterExtension @ 0x1406421E0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140008790 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExpFindHost @ 0x140642534 (ExpFindHost.c)
 *     ExpDereferenceHost @ 0x1407C6258 (ExpDereferenceHost.c)
 */

__int64 __fastcall ExRegisterExtension(__int64 *a1, int a2, unsigned __int16 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdi
  __int64 Host; // rdi
  unsigned __int16 v8; // ax
  unsigned int v9; // ecx
  struct _KTHREAD *v10; // rax
  volatile signed __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbp
  void (__fastcall *v17)(_QWORD, _QWORD); // rax
  PVOID v18; // rdx
  void (__fastcall *v19)(__int64, _QWORD); // rax
  char v20; // bl
  _QWORD *v21; // rcx
  unsigned int v23; // ebx

  if ( (a2 & 0xFFFF0000) != 0x10000 || !*((_QWORD *)a3 + 1) && a3[2] )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&ExpHostListLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpHostListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&ExpHostListLock, v6, (ULONG_PTR)&ExpHostListLock);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  Host = ExpFindHost(*a3, a3[1]);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpHostListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpHostListLock);
  KeAbPostRelease((ULONG_PTR)&ExpHostListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( !Host )
    return 3221226021LL;
  v8 = a3[2];
  if ( v8 < *(_WORD *)(Host + 28) )
  {
    v23 = -1073741811;
LABEL_40:
    ExpDereferenceHost(Host);
    return v23;
  }
  v9 = 0;
  if ( v8 )
  {
    while ( *(_QWORD *)(*((_QWORD *)a3 + 1) + 8LL * v9) )
    {
      if ( ++v9 >= v8 )
        goto LABEL_14;
    }
    v23 = -1073741790;
    goto LABEL_40;
  }
LABEL_14:
  v10 = KeGetCurrentThread();
  --v10->KernelApcDisable;
  v11 = (volatile signed __int64 *)(Host + 72);
  v12 = KeAbPreAcquire(Host + 72, 0LL, 0);
  v16 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(Host + 72), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Host + 72), v12, Host + 72);
  if ( v16 )
    *(_BYTE *)(v16 + 26) |= 1u;
  if ( *(_QWORD *)(Host + 80) || (*(_BYTE *)(Host + 88) & 1) != 0 )
  {
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(Host + 72), v13, v14, v15);
    KeAbPostRelease(Host + 72);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v23 = -1073741771;
    goto LABEL_40;
  }
  v17 = *(void (__fastcall **)(_QWORD, _QWORD))(Host + 48);
  if ( v17 )
    v17(0LL, *(_QWORD *)(Host + 56));
  v18 = (PVOID)*((_QWORD *)a3 + 1);
  if ( !v18 )
    v18 = MmBadPointer;
  *(_QWORD *)(Host + 80) = v18;
  _InterlockedExchange64((volatile __int64 *)(Host + 64), 0LL);
  v19 = *(void (__fastcall **)(__int64, _QWORD))(Host + 48);
  if ( v19 )
    v19(1LL, *(_QWORD *)(Host + 56));
  v20 = _InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v20 & 2) != 0 && (v20 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(Host + 72), (__int64)v18, v14, v15);
  KeAbPostRelease(Host + 72);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v21 = (_QWORD *)*((_QWORD *)a3 + 2);
  if ( v21 )
    *v21 = *(_QWORD *)(Host + 40);
  *a1 = Host;
  return 0LL;
}
