/*
 * XREFs of MmAdjustWorkingSetSizeEx @ 0x1400C8FB8
 * Callers:
 *     MmAdjustWorkingSetSize @ 0x1402539A0 (MmAdjustWorkingSetSize.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x1402A79AC (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1402A7D90 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 *     PspSetQuotaLimits @ 0x14057899C (PspSetQuotaLimits.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     PsReturnProcessQuota @ 0x1400703DC (PsReturnProcessQuota.c)
 *     PsChargeProcessQuota @ 0x1400718EC (PsChargeProcessQuota.c)
 *     MiGetCurrentMultiplexedVm @ 0x14008045C (MiGetCurrentMultiplexedVm.c)
 *     MiEmptyWorkingSetInitiate @ 0x1400839D0 (MiEmptyWorkingSetInitiate.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiCheckWsLimits @ 0x1400C924C (MiCheckWsLimits.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 */

__int64 __fastcall MmAdjustWorkingSetSizeEx(
        unsigned __int64 a1,
        unsigned __int64 a2,
        int a3,
        char a4,
        int a5,
        _BYTE *a6)
{
  _KPROCESS *Process; // r13
  __int64 CurrentMultiplexedVm; // rdi
  __int64 v11; // r15
  __int64 SharedVm; // rbx
  KIRQL v13; // al
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r14
  int v17; // esi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r14
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rcx
  int v23; // ebx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v28; // rdx
  int v29; // ecx
  unsigned __int64 v30; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-28h] BYREF
  __int64 v32; // [rsp+40h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF
  KIRQL v34; // [rsp+B0h] [rbp+50h]
  __int16 v36; // [rsp+C8h] [rbp+68h]

  Process = 0LL;
  *a6 = 0;
  if ( !a3 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    CurrentMultiplexedVm = (__int64)&Process[1].IdealNode[12];
LABEL_3:
    if ( a1 == -1LL && a2 == -1LL )
      return MiEmptyWorkingSetInitiate(CurrentMultiplexedVm, 0, 0LL, -1LL);
    v11 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(CurrentMultiplexedVm + 174));
    SharedVm = MiGetSharedVm(CurrentMultiplexedVm);
    v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    v34 = v13;
    v14 = MiGetSharedVm(CurrentMultiplexedVm);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v14 + 40));
    if ( !a3 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
    {
      v17 = -1073741558;
      goto LABEL_29;
    }
    if ( a1 )
      v15 = a1 >> 12;
    else
      v15 = *(_QWORD *)(CurrentMultiplexedVm + 112);
    v30 = v15;
    if ( a2 )
      v16 = a2 >> 12;
    else
      v16 = *(_QWORD *)(CurrentMultiplexedVm + 152);
    v31 = v16;
    v17 = MiCheckWsLimits(CurrentMultiplexedVm, (unsigned int)&v30, (unsigned int)&v31, a5, 0);
    if ( (v17 & 0xC0000000) == 0xC0000000 )
      goto LABEL_29;
    v18 = *(_QWORD *)(CurrentMultiplexedVm + 112);
    v19 = v30;
    v20 = *(_QWORD *)(CurrentMultiplexedVm + 16);
    v32 = v20;
    if ( v30 > v18 )
    {
      v21 = v30 - v18;
      *a6 = 1;
      if ( !a4 )
      {
        v17 = -1073741727;
        goto LABEL_29;
      }
      if ( !a3 )
      {
        v17 = PsChargeProcessQuota(Process, v20, v21);
        if ( v17 < 0 )
          goto LABEL_29;
      }
      if ( !(unsigned int)MiChargeResident(v11, v21, 512LL) )
      {
        if ( !a3 )
          PsReturnProcessQuota(Process, v28, v21);
        v17 = -1073741670;
        goto LABEL_29;
      }
      v20 = v32;
    }
    else
    {
      v21 = v18 - v30;
      if ( v30 < *(_QWORD *)(v20 + 32) )
      {
        v17 = -1073741748;
        goto LABEL_29;
      }
    }
    v22 = v31;
    v32 = v31;
    if ( v31 < *(_QWORD *)(CurrentMultiplexedVm + 120) )
    {
      if ( *(_QWORD *)(v20 + 32) + 6LL >= v31 )
      {
        v17 = -1073741748;
        if ( *a6 == 1 )
        {
          if ( !a3 )
            PsReturnProcessQuota(Process, v20, v21);
          if ( (ULONG_PTR *)v11 == &MiSystemPartition )
            MiReturnResidentAvailable(v21, v20);
          else
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 7104), v21);
        }
        goto LABEL_29;
      }
      *(_BYTE *)(CurrentMultiplexedVm + 187) |= 0x10u;
    }
    if ( !*a6 && v21 )
    {
      if ( !a3 )
        PsReturnProcessQuota(Process, v20, v21);
      if ( (ULONG_PTR *)v11 == &MiSystemPartition )
      {
        MiReturnResidentAvailable(v21, v20);
        v22 = v32;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 7104), v21);
        v19 = v30;
        v22 = v31;
      }
    }
    *(_QWORD *)(CurrentMultiplexedVm + 112) = v19;
    *(_QWORD *)(CurrentMultiplexedVm + 152) = v22;
    if ( !a5 )
    {
LABEL_29:
      v25 = MiGetSharedVm(CurrentMultiplexedVm);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v25 + 40));
      LOBYTE(v26) = v34;
      MiUnlockWorkingSetExclusive(CurrentMultiplexedVm, v26);
      return (unsigned int)v17;
    }
    v23 = 0;
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &qword_1403CC4C0;
    KxAcquireQueuedSpinLock(&LockHandle, &qword_1403CC4C0);
    v24 = *(_DWORD *)(CurrentMultiplexedVm + 184);
    v36 = v24;
    if ( (a5 & 4) != 0 )
    {
      LOBYTE(v24) = v24 | 0x80;
    }
    else
    {
      if ( (a5 & 8) == 0 )
        goto LABEL_23;
      LOBYTE(v24) = v24 & 0x7F;
    }
    v23 = 1;
    LOBYTE(v36) = v24;
LABEL_23:
    if ( (a5 & 1) != 0 )
    {
      LOBYTE(v36) = v24 | 0x40;
    }
    else
    {
      if ( (a5 & 2) != 0 )
      {
        v23 = 1;
        LOBYTE(v36) = v24 & 0xBF;
      }
      if ( !v23 )
        goto LABEL_28;
    }
    *(_WORD *)(CurrentMultiplexedVm + 184) = v36;
LABEL_28:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_29;
  }
  if ( a3 == 2 )
  {
    CurrentMultiplexedVm = MiGetCurrentMultiplexedVm();
    if ( CurrentMultiplexedVm )
      goto LABEL_3;
  }
  else
  {
    v29 = a3 - 3;
    if ( a3 == 3 )
    {
      v29 = 2;
LABEL_43:
      CurrentMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(v29);
      goto LABEL_3;
    }
    if ( a3 == 4 )
      goto LABEL_43;
  }
  return 3221225713LL;
}
