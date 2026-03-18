/*
 * XREFs of SepQueueWorkItem @ 0x1400C33F8
 * Callers:
 *     SepAdtLogAuditRecord @ 0x14017FF54 (SepAdtLogAuditRecord.c)
 *     SepInformLsaOfDeletedLogon @ 0x14056FD04 (SepInformLsaOfDeletedLogon.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     PsGetServerSiloState @ 0x1400C3558 (PsGetServerSiloState.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char __fastcall SepQueueWorkItem(__int64 a1, __int64 a2, _BYTE *a3)
{
  char v6; // bp
  char v7; // r15
  _BYTE *v8; // r8
  unsigned __int8 CurrentIrql; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64); // rax
  _QWORD *v13; // rax
  _QWORD *v15; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v6 = 0;
  v7 = 0;
  if ( (unsigned int)PsGetServerSiloState(*(_QWORD *)(a2 + 56)) == 1 )
  {
    if ( v8 )
      *v8 = 0;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql == 2 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
      v11 = *(_QWORD *)(a1 + 200);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 32), 1u);
      v11 = *(_QWORD *)(a1 + 192);
    }
    if ( v11 )
    {
      if ( a3 )
        *a3 = 1;
    }
    else
    {
      v12 = *(__int64 (__fastcall **)(__int64))(a1 + 208);
      if ( v12 )
        v6 = v12(a2);
      else
        v6 = 1;
      if ( v6 )
      {
        *(_DWORD *)(a2 + 52) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 180));
        if ( CurrentIrql == 2 )
        {
          v15 = *(_QWORD **)(a1 + 24);
          if ( *v15 != a1 + 16 )
            __fastfail(3u);
          *(_QWORD *)a2 = a1 + 16;
          *(_QWORD *)(a2 + 8) = v15;
          *v15 = a2;
          *(_QWORD *)(a1 + 24) = a2;
        }
        else
        {
          v13 = *(_QWORD **)(a1 + 8);
          if ( *v13 != a1 )
            __fastfail(3u);
          *(_QWORD *)a2 = a1;
          *(_QWORD *)(a2 + 8) = v13;
          *v13 = a2;
          *(_QWORD *)(a1 + 8) = a2;
        }
        if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 176)) == 1 )
          v7 = 1;
      }
    }
    if ( CurrentIrql == 2 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    else
    {
      ExReleaseResourceLite((PERESOURCE)(a1 + 32));
      KeLeaveCriticalRegion();
    }
    if ( v7 )
    {
      *(_QWORD *)(a1 + 144) = 0LL;
      *(_QWORD *)(a1 + 160) = SepRmCallLsa;
      *(_QWORD *)(a1 + 168) = a1;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 144), DelayedWorkQueue);
    }
    return v6;
  }
  else
  {
    if ( a3 )
      *v8 = 1;
    return 0;
  }
}
