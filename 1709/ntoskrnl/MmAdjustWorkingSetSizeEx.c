/*
 * XREFs of MmAdjustWorkingSetSizeEx @ 0x14000ABF8
 * Callers:
 *     MmAdjustWorkingSetSize @ 0x140215AC0 (MmAdjustWorkingSetSize.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x140273FB0 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x140274394 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     PspSetQuotaLimits @ 0x140449BF0 (PspSetQuotaLimits.c)
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 * Callees:
 *     MiCheckWsLimits @ 0x14000AE78 (MiCheckWsLimits.c)
 *     MiEmptyWorkingSet @ 0x14000AF54 (MiEmptyWorkingSet.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     PsChargeProcessQuota @ 0x1400B7E34 (PsChargeProcessQuota.c)
 *     PsReturnProcessQuota @ 0x1400B8758 (PsReturnProcessQuota.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiGetCurrentMultiplexedVm @ 0x1400F0BD0 (MiGetCurrentMultiplexedVm.c)
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
  __int64 v11; // r14
  __int64 SharedVm; // rbx
  KIRQL v13; // al
  unsigned __int64 v14; // rdx
  int v15; // esi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rax
  int v20; // ebx
  int v21; // eax
  __int64 v23; // rcx
  unsigned __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v26; // [rsp+40h] [rbp-30h]
  unsigned __int64 v27; // [rsp+48h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  KIRQL v29; // [rsp+C0h] [rbp+50h]
  __int16 v31; // [rsp+D8h] [rbp+68h]

  Process = 0LL;
  *a6 = 0;
  switch ( a3 )
  {
    case 0:
      Process = KeGetCurrentThread()->ApcState.Process;
      CurrentMultiplexedVm = (__int64)&Process[1].IdealNode[12];
LABEL_3:
      if ( a1 == -1LL && a2 == -1LL )
        return MiEmptyWorkingSet(CurrentMultiplexedVm, 0LL);
      v11 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(CurrentMultiplexedVm + 172));
      SharedVm = MiGetSharedVm(CurrentMultiplexedVm);
      v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
      v29 = v13;
      if ( !a3 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
      {
        v15 = -1073741558;
        goto LABEL_24;
      }
      if ( a1 )
        v24 = a1 >> 12;
      else
        v24 = *(_QWORD *)(CurrentMultiplexedVm + 112);
      if ( a2 )
        v25 = a2 >> 12;
      else
        v25 = *(_QWORD *)(CurrentMultiplexedVm + 152);
      v15 = MiCheckWsLimits(CurrentMultiplexedVm, (unsigned int)&v24, (unsigned int)&v25, a5, 0);
      if ( (v15 & 0xC0000000) == 0xC0000000 )
        goto LABEL_24;
      v16 = *(_QWORD *)(CurrentMultiplexedVm + 112);
      v14 = *(_QWORD *)(CurrentMultiplexedVm + 16);
      v27 = v14;
      v26 = v24;
      if ( v24 > v16 )
      {
        v17 = v24 - v16;
        *a6 = 1;
        if ( !a4 )
        {
          v15 = -1073741727;
          goto LABEL_24;
        }
        if ( !a3 )
        {
          v15 = PsChargeProcessQuota(Process, v14, v17);
          if ( v15 < 0 )
            goto LABEL_24;
        }
        if ( !(unsigned int)MiChargeResident(v11, v17, 512LL) )
        {
          if ( !a3 )
            PsReturnProcessQuota(Process, v14, v17);
          v15 = -1073741670;
          goto LABEL_24;
        }
        v14 = v27;
      }
      else
      {
        v17 = v16 - v24;
        if ( v24 < *(_QWORD *)(v14 + 32) )
        {
          v15 = -1073741748;
          goto LABEL_24;
        }
      }
      v18 = v25;
      v27 = v25;
      if ( v25 < *(_QWORD *)(CurrentMultiplexedVm + 120) )
      {
        if ( *(_QWORD *)(v14 + 32) + 6LL >= v25 )
        {
          v15 = -1073741748;
          if ( *a6 == 1 )
          {
            if ( !a3 )
            {
              *(_QWORD *)(CurrentMultiplexedVm + 112) = *(_QWORD *)(CurrentMultiplexedVm + 112);
              PsReturnProcessQuota(Process, v14, v17);
            }
            if ( (ULONG_PTR *)v11 == &MiSystemPartition )
              MiReturnResidentAvailable(v17);
            else
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 6016), v17);
          }
          goto LABEL_24;
        }
        *(_BYTE *)(CurrentMultiplexedVm + 195) |= 0x10u;
      }
      if ( !*a6 && v17 )
      {
        if ( !a3 )
          PsReturnProcessQuota(Process, v14, v17);
        if ( (ULONG_PTR *)v11 != &MiSystemPartition )
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 6016), v17);
          v19 = v24;
          v18 = v25;
LABEL_17:
          *(_QWORD *)(CurrentMultiplexedVm + 152) = v18;
          *(_QWORD *)(CurrentMultiplexedVm + 112) = v19;
          if ( !a5 )
          {
LABEL_24:
            LOBYTE(v14) = v29;
            MiUnlockWorkingSetExclusive(CurrentMultiplexedVm, v14);
            return (unsigned int)v15;
          }
          v20 = 0;
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = &qword_140389240;
          KxAcquireQueuedSpinLock(&LockHandle);
          v21 = *(_DWORD *)(CurrentMultiplexedVm + 192);
          v31 = v21;
          if ( (a5 & 4) != 0 )
          {
            LOBYTE(v21) = v21 | 0x80;
          }
          else
          {
            if ( (a5 & 8) == 0 )
              goto LABEL_20;
            LOBYTE(v21) = v21 & 0x7F;
          }
          v20 = 1;
          LOBYTE(v31) = v21;
LABEL_20:
          if ( (a5 & 1) != 0 )
          {
            LOBYTE(v31) = v21 | 0x40;
          }
          else
          {
            if ( (a5 & 2) != 0 )
            {
              v20 = 1;
              LOBYTE(v31) = v21 & 0xBF;
            }
            if ( !v20 )
              goto LABEL_23;
          }
          *(_WORD *)(CurrentMultiplexedVm + 192) = v31;
LABEL_23:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          goto LABEL_24;
        }
        MiReturnResidentAvailable(v17);
      }
      v19 = v26;
      goto LABEL_17;
    case 2:
      CurrentMultiplexedVm = MiGetCurrentMultiplexedVm();
      if ( CurrentMultiplexedVm )
        goto LABEL_3;
      break;
    case 3:
      v23 = 2LL;
      goto LABEL_45;
    case 4:
      v23 = 1LL;
LABEL_45:
      CurrentMultiplexedVm = MiGetAnyMultiplexedVm(v23);
      goto LABEL_3;
  }
  return 3221225713LL;
}
