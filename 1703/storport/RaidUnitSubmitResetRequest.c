/*
 * XREFs of RaidUnitSubmitResetRequest @ 0x1C003F380
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0006F90 (RaUnitScsiIrp.c)
 *     RaUnitResetBusSrb @ 0x1C003A978 (RaUnitResetBusSrb.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0004AE0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResources @ 0x1C0005900 (StorAllocateContiguousIoResources.c)
 *     RaidZeroXrb @ 0x1C000597C (RaidZeroXrb.c)
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     DbgLogRequest @ 0x1C000D264 (DbgLogRequest.c)
 *     RaidUnitStartDeviceBusy @ 0x1C0031BF4 (RaidUnitStartDeviceBusy.c)
 *     RaidNtStatusToSrbStatus @ 0x1C00396D8 (RaidNtStatusToSrbStatus.c)
 *     RaUnitStartResetIo @ 0x1C003B0F4 (RaUnitStartResetIo.c)
 */

__int64 __fastcall RaidUnitSubmitResetRequest(__int64 a1, IRP *a2)
{
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 ContiguousIoResources; // rax
  __int128 v7; // xmm1
  __int64 v8; // rcx
  unsigned int v9; // r8d
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
                              ((*(_DWORD *)(*(_QWORD *)(a1 + 24) + 444LL) + 7) & 0xFFFFFFF8) + 1072,
                              (__int64)a2,
                              *(_QWORD **)(a1 + 24));
    if ( ContiguousIoResources )
    {
      *(_QWORD *)&v18 = ContiguousIoResources + 16;
      *((_QWORD *)&v18 + 1) = ContiguousIoResources + 816;
      *((_QWORD *)&v17 + 1) = ContiguousIoResources + 1072;
      RaidZeroXrb(ContiguousIoResources + 16, ContiguousIoResources + 816, 0, 0LL);
      LODWORD(v17) = -1;
      goto LABEL_9;
    }
LABEL_24:
    BYTE3(SecurityContext->SecurityQos) = RaidNtStatusToSrbStatus(-1073741670);
    a2->IoStatus.Information = 0LL;
    RaidCompleteRequestEx(a2, 0, v14);
    return 259LL;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1440), 1, 0) )
    goto LABEL_24;
  v7 = *(_OWORD *)(a1 + 1424);
  v17 = *(_OWORD *)(a1 + 1408);
  v18 = v7;
LABEL_9:
  if ( (qword_1C00551F8 & 0x20) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      3,
      (__int64)a2,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 88)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(a1 + 88) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 88))) << 8),
      0LL,
      0LL,
      0LL);
  if ( (*(_BYTE *)(a1 + 153) & 1) != 0 || *(_BYTE *)(a1 + 152) >= 0x80u )
    goto LABEL_23;
  v8 = a1;
  if ( KeGetCurrentIrql() < 2u )
  {
    v9 = 1;
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
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 1456) + 88LL), &LockHandle);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1456) + 32LL) & 2) != 0
    || (Pool = RaidAllocatePool(NonPagedPoolNx, 0x20uLL, 0x4F506152u, *(_QWORD *)(a1 + 8))) == 0LL )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
    v9 = 0;
    v8 = a1;
    goto LABEL_22;
  }
  Pool[2] = a2;
  v11 = *(_QWORD *)(a1 + 1456) + 72LL;
  v12 = *(_QWORD *)v11;
  if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 )
    __fastfail(3u);
  *Pool = v12;
  Pool[1] = v11;
  *(_QWORD *)(v12 + 8) = Pool;
  *(_QWORD *)v11 = Pool;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  RaidUnitStartDeviceBusy(a1, (__int64)a2, 0);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
  return 259LL;
}
