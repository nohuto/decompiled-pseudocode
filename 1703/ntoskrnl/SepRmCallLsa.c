/*
 * XREFs of SepRmCallLsa @ 0x1401481D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     SepRmDispatchDataToLsa @ 0x140148404 (SepRmDispatchDataToLsa.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     NtWaitForSingleObject @ 0x140527B30 (NtWaitForSingleObject.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 *     SepAdtOpenEtwReadyEvent @ 0x1405A6F18 (SepAdtOpenEtwReadyEvent.c)
 *     AdtpWriteToEtw @ 0x1405AB9F4 (AdtpWriteToEtw.c)
 *     SepAuditFailed @ 0x1406F9D10 (SepAuditFailed.c)
 */

__int64 __fastcall SepRmCallLsa(__int64 a1)
{
  int v2; // ebp
  char v3; // r14
  __int64 *v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rdx
  __int64 v7; // rax
  signed __int32 v8; // ebp
  void *v9; // rcx
  __int64 result; // rax
  struct _KTHREAD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // eax
  NTSTATUS v15; // ebx
  struct _KEVENT *v16; // rcx
  __int64 **v17; // rcx
  struct _KEVENT *v18; // rcx
  __int64 *v19; // rdx
  __int64 v20; // rax
  char v21[8]; // [rsp+20h] [rbp-78h] BYREF
  HANDLE Object; // [rsp+28h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  $5BC46E0569261879018906DEC3127961 v24; // [rsp+48h] [rbp-50h] BYREF

  Object = 0LL;
  v2 = 1;
  v3 = SepRmAuditingEnabled;
  if ( !AdtpRegisteredWithEtw )
  {
    result = SepAdtOpenEtwReadyEvent(&Object);
    if ( (int)result < 0 )
      return result;
    v15 = NtWaitForSingleObject(Object, 1u, 0LL);
    NtClose(Object);
    if ( v15 < 0 )
      return (unsigned int)v15;
  }
  if ( v3 )
    KiStackAttachProcess((_KPROCESS *)SepRmLsaCallProcess, 0, (__int64)&v24);
  do
  {
    v4 = 0LL;
    if ( (*(_BYTE *)(a1 + 224) & 1) == 0 )
      goto LABEL_33;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 32), 1u);
    v6 = *(__int64 **)a1;
    if ( *(_QWORD *)a1 != a1 )
      goto LABEL_6;
    v16 = *(struct _KEVENT **)(a1 + 192);
    if ( v16 )
    {
      KeSetEvent(v16, 0, 0);
      goto LABEL_10;
    }
    if ( v6 != (__int64 *)a1 )
    {
LABEL_6:
      if ( *((_DWORD *)v6 + 13) == *(_DWORD *)(a1 + 184) + 1 )
      {
        v4 = *(__int64 **)a1;
        v7 = *v6;
        if ( v6[1] != a1 || *(__int64 **)(v7 + 8) != v6 )
          __fastfail(3u);
        *(_QWORD *)a1 = v7;
        *(_QWORD *)(v7 + 8) = a1;
      }
    }
LABEL_10:
    ExReleaseResourceLite((PERESOURCE)(a1 + 32));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v4 )
      goto LABEL_11;
LABEL_33:
    if ( (*(_BYTE *)(a1 + 224) & 2) != 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
      v17 = (__int64 **)(a1 + 16);
      if ( *v17 == (__int64 *)v17 )
      {
        v18 = *(struct _KEVENT **)(a1 + 200);
        if ( v18 )
          KeSetEvent(v18, 0, 0);
      }
      else
      {
        v19 = *v17;
        if ( *((_DWORD *)*v17 + 13) == *(_DWORD *)(a1 + 184) + 1 )
        {
          v4 = *v17;
          v20 = *v19;
          if ( (__int64 **)v19[1] != v17 || *(__int64 **)(v20 + 8) != v19 )
            __fastfail(3u);
          *v17 = (__int64 *)v20;
          *(_QWORD *)(v20 + 8) = v17;
        }
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      if ( v4 )
      {
LABEL_11:
        if ( *((_DWORD *)v4 + 8) != 1 || (*(_DWORD *)(v4[3] + 20) & 2) != 0 )
        {
          if ( v3 )
            SepRmDispatchDataToLsa(v4);
        }
        else
        {
          v11 = KeGetCurrentThread();
          v12 = v4[7];
          v21[0] = 0;
          v13 = *(_QWORD *)&v11[1].WaitBlockFill11[160];
          *(_QWORD *)&v11[1].WaitBlockFill11[160] = v12;
          v14 = AdtpWriteToEtw(v4[3], v21);
          *(_QWORD *)&KeGetCurrentThread()[1].WaitBlockFill11[160] = v13;
          if ( v14 < 0 )
          {
            SepAdtLastAuditFailStatus = v14;
            _InterlockedIncrement(&SepAdtAuditFailureCount);
            if ( !v21[0] )
              SepAuditFailed((unsigned int)v14);
          }
          if ( (unsigned int)(*((_DWORD *)v4 + 4) - 4) <= 1 )
            ExFreePoolWithTag((PVOID)v4[3], 0);
        }
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 184));
        v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 176), 0xFFFFFFFF);
        v9 = (void *)v4[7];
        v2 = v8 - 1;
        if ( v9 )
        {
          ObfDereferenceObjectWithTag(v9, 0x69416553u);
          v4[7] = 0LL;
        }
        (*(void (__fastcall **)(__int64 *))(a1 + 216))(v4);
      }
    }
  }
  while ( v2 );
  if ( v3 )
    KiUnstackDetachProcess(&v24, 0LL);
  return 0LL;
}
