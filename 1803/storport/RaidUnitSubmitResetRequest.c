/*
 * XREFs of RaidUnitSubmitResetRequest @ 0x1C003E128
 * Callers:
 *     RaUnitScsiIrp @ 0x1C00085C0 (RaUnitScsiIrp.c)
 *     RaUnitResetBusSrb @ 0x1C003ACE8 (RaUnitResetBusSrb.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0003B44 (DbgLogRequest.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00069E4 (RaidUnitCheckAndAcquirePoFx.c)
 *     StorAllocateContiguousIoResources @ 0x1C0007318 (StorAllocateContiguousIoResources.c)
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     RaidZeroXrb @ 0x1C000CDA8 (RaidZeroXrb.c)
 *     RaidUnitStartDeviceBusy @ 0x1C002E5B4 (RaidUnitStartDeviceBusy.c)
 *     RaidNtStatusToSrbStatus @ 0x1C0039944 (RaidNtStatusToSrbStatus.c)
 *     RaUnitStartResetIo @ 0x1C003B464 (RaUnitStartResetIo.c)
 */

__int64 __fastcall RaidUnitSubmitResetRequest(__int64 a1, IRP *a2)
{
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 ContiguousIoResources; // rax
  __int128 v7; // xmm1
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *Pool; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  KIRQL v13; // bl
  unsigned int v14; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-40h] BYREF
  __int128 v17; // [rsp+58h] [rbp-28h] BYREF
  __int128 v18; // [rsp+68h] [rbp-18h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  CurrentStackLocation->Control |= 1u;
  LOBYTE(CurrentStackLocation) = BYTE2(SecurityContext->SecurityQos);
  BYTE3(SecurityContext->SecurityQos) = 0;
  if ( (_BYTE)CurrentStackLocation == 40 )
    LODWORD(CurrentStackLocation) = SecurityContext->FullCreateOptions;
  else
    LODWORD(CurrentStackLocation) = (unsigned __int8)CurrentStackLocation;
  if ( (_DWORD)CurrentStackLocation == 16 )
  {
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              ((*(_DWORD *)(*(_QWORD *)(a1 + 24) + 444LL) + 7) & 0xFFFFFFF8) + 1088,
                              (int)a2,
                              *(_QWORD *)(a1 + 24));
    if ( ContiguousIoResources )
    {
      *(_QWORD *)&v18 = ContiguousIoResources + 32;
      *((_QWORD *)&v18 + 1) = ContiguousIoResources + 832;
      *((_QWORD *)&v17 + 1) = ContiguousIoResources + 1088;
      RaidZeroXrb(ContiguousIoResources + 32, ContiguousIoResources + 832, 0, 0LL);
      LODWORD(v17) = -1;
      goto LABEL_9;
    }
LABEL_24:
    BYTE3(SecurityContext->SecurityQos) = RaidNtStatusToSrbStatus(-1073741670);
    a2->IoStatus.Information = 0LL;
    RaidCompleteRequestEx(a2, 0, v14);
    return 259LL;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1472), 1, 0) )
    goto LABEL_24;
  v7 = *(_OWORD *)(a1 + 1456);
  v17 = *(_OWORD *)(a1 + 1440);
  v18 = v7;
LABEL_9:
  if ( (qword_1C0056210 & 0x20) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      3,
      (__int64)a2,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 88)) | (unsigned __int64)((((unsigned __int8)*(_DWORD *)(a1 + 88) << 8) | (unsigned int)(unsigned __int8)BYTE1(*(_DWORD *)(a1 + 88))) << 8),
      0LL,
      0LL,
      0LL);
  if ( (*(_BYTE *)(a1 + 153) & 1) != 0 || *(char *)(a1 + 152) < 0 )
    goto LABEL_23;
  v8 = a1;
  if ( KeGetCurrentIrql() < 2u )
  {
    v9 = 1LL;
LABEL_22:
    RaidUnitStartDeviceBusy(v8, (__int64)a2, v9);
    goto LABEL_23;
  }
  if ( !RaidUnitCheckAndAcquirePoFx(a1) )
  {
LABEL_23:
    v13 = KfRaiseIrql(2u);
    RaUnitStartResetIo(*(_QWORD *)(a1 + 8), a2, (__int64)&v17);
    KeLowerIrql(v13);
    return 259LL;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 1488) + 104LL), &LockHandle);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1488) + 32LL) & 2) != 0
    || (Pool = RaidAllocatePool(NonPagedPoolNx, 0x20uLL, 0x4F506152u, *(_QWORD *)(a1 + 8))) == 0LL )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
    v9 = 0LL;
    v8 = a1;
    goto LABEL_22;
  }
  Pool[2] = a2;
  v11 = *(_QWORD *)(a1 + 1488) + 88LL;
  v12 = *(_QWORD *)v11;
  if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 )
    __fastfail(3u);
  *Pool = v12;
  Pool[1] = v11;
  *(_QWORD *)(v12 + 8) = Pool;
  *(_QWORD *)v11 = Pool;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  RaidUnitStartDeviceBusy(a1, (__int64)a2, 0LL);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
  return 259LL;
}
