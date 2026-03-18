/*
 * XREFs of SepRmCallLsa @ 0x14014C140
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     SepRmDispatchDataToLsa @ 0x14014C374 (SepRmDispatchDataToLsa.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     NtWaitForSingleObject @ 0x1404A3A80 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     AdtpWriteToEtw @ 0x1405D08F8 (AdtpWriteToEtw.c)
 *     SepAdtOpenEtwReadyEvent @ 0x1405D108C (SepAdtOpenEtwReadyEvent.c)
 *     SepAuditFailed @ 0x140731750 (SepAuditFailed.c)
 */

__int64 __fastcall SepRmCallLsa(__int64 **a1)
{
  int v2; // ebp
  char v3; // r14
  __int64 *v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rdx
  __int64 *v7; // rax
  signed __int32 v8; // ebp
  void *v9; // rcx
  __int64 result; // rax
  struct _KTHREAD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // eax
  NTSTATUS v15; // ebx
  struct _KEVENT *v16; // rcx
  _QWORD *v17; // rcx
  __int64 *v18; // rdx
  struct _KEVENT *v19; // rcx
  __int64 v20; // rax
  _BYTE v21[8]; // [rsp+20h] [rbp-78h] BYREF
  HANDLE Object; // [rsp+28h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v24; // [rsp+48h] [rbp-50h] BYREF

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
    if ( ((_BYTE)a1[28] & 1) == 0 )
      goto LABEL_33;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 4), 1u);
    v6 = *a1;
    if ( *a1 != (__int64 *)a1 )
      goto LABEL_6;
    v16 = (struct _KEVENT *)a1[24];
    if ( v16 )
    {
      KeSetEvent(v16, 0, 0);
      goto LABEL_10;
    }
    if ( v6 != (__int64 *)a1 )
    {
LABEL_6:
      if ( *((_DWORD *)v6 + 13) == *((_DWORD *)a1 + 46) + 1 )
      {
        v4 = *a1;
        if ( (__int64 **)v6[1] != a1 || (v7 = (__int64 *)*v6, *(__int64 **)(*v6 + 8) != v6) )
          __fastfail(3u);
        *a1 = v7;
        v7[1] = (__int64)a1;
      }
    }
LABEL_10:
    ExReleaseResourceLite((PERESOURCE)(a1 + 4));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v4 )
      goto LABEL_11;
LABEL_33:
    if ( ((_BYTE)a1[28] & 2) != 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 17, &LockHandle);
      v17 = a1 + 2;
      v18 = a1[2];
      if ( v18 == (__int64 *)(a1 + 2) )
      {
        v19 = (struct _KEVENT *)a1[25];
        if ( v19 )
          KeSetEvent(v19, 0, 0);
      }
      else if ( *((_DWORD *)v18 + 13) == *((_DWORD *)a1 + 46) + 1 )
      {
        v4 = a1[2];
        if ( (_QWORD *)v18[1] != v17 || (v20 = *v18, *(__int64 **)(*v18 + 8) != v18) )
          __fastfail(3u);
        *v17 = v20;
        *(_QWORD *)(v20 + 8) = v17;
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
        _InterlockedIncrement((volatile signed __int32 *)a1 + 46);
        v8 = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 44, 0xFFFFFFFF);
        v9 = (void *)v4[7];
        v2 = v8 - 1;
        if ( v9 )
        {
          ObfDereferenceObjectWithTag(v9, 0x69416553u);
          v4[7] = 0LL;
        }
        ((void (__fastcall *)(__int64 *))a1[27])(v4);
      }
    }
  }
  while ( v2 );
  if ( v3 )
    KiUnstackDetachProcess(&v24, 0LL);
  return 0LL;
}
