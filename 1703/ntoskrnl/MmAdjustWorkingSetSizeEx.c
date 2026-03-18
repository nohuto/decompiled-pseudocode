/*
 * XREFs of MmAdjustWorkingSetSizeEx @ 0x140030524
 * Callers:
 *     MmAdjustWorkingSetSize @ 0x14020E360 (MmAdjustWorkingSetSize.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x14024E424 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14024E820 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     PspSetQuotaLimits @ 0x14044B53C (PspSetQuotaLimits.c)
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 * Callees:
 *     MiCheckWsLimits @ 0x1400307A4 (MiCheckWsLimits.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     PsReturnProcessQuota @ 0x140062C84 (PsReturnProcessQuota.c)
 *     PsChargeProcessQuota @ 0x140063F28 (PsChargeProcessQuota.c)
 *     MiGetCurrentMultiplexedVm @ 0x140084C44 (MiGetCurrentMultiplexedVm.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 *     MiEmptyWorkingSet @ 0x140136528 (MiEmptyWorkingSet.c)
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
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rax
  int v21; // ebx
  int v22; // eax
  __int64 v24; // rcx
  unsigned __int64 v25; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v27; // [rsp+40h] [rbp-30h]
  unsigned __int64 v28; // [rsp+48h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  KIRQL v30; // [rsp+C0h] [rbp+50h]
  __int16 v32; // [rsp+D8h] [rbp+68h]

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
      v11 = *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(CurrentMultiplexedVm + 172));
      SharedVm = MiGetSharedVm(CurrentMultiplexedVm);
      v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
      v30 = v13;
      if ( !a3 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
      {
        v15 = -1073741558;
        goto LABEL_26;
      }
      if ( a1 )
        v25 = a1 >> 12;
      else
        v25 = *(_QWORD *)(CurrentMultiplexedVm + 112);
      if ( a2 )
        v26 = a2 >> 12;
      else
        v26 = *(_QWORD *)(CurrentMultiplexedVm + 152);
      v15 = MiCheckWsLimits(CurrentMultiplexedVm, (unsigned int)&v25, (unsigned int)&v26, a5, 0);
      if ( (v15 & 0xC0000000) == 0xC0000000 )
        goto LABEL_26;
      v17 = *(_QWORD *)(CurrentMultiplexedVm + 112);
      v14 = *(_QWORD *)(CurrentMultiplexedVm + 16);
      v28 = v14;
      v27 = v25;
      if ( v25 > v17 )
      {
        v18 = v25 - v17;
        *a6 = 1;
        if ( !a4 )
        {
          v15 = -1073741727;
          goto LABEL_26;
        }
        if ( !a3 )
        {
          v15 = PsChargeProcessQuota(Process, v14, v18);
          if ( v15 < 0 )
            goto LABEL_26;
        }
        if ( !(unsigned int)MiChargeResident(v11, v18, 512LL) )
        {
          if ( !a3 )
            PsReturnProcessQuota(Process, v14, v18);
          v15 = -1073741670;
          goto LABEL_26;
        }
        v14 = v28;
      }
      else
      {
        v18 = v17 - v25;
        if ( v25 < *(_QWORD *)(v14 + 32) )
        {
          v15 = -1073741748;
          goto LABEL_26;
        }
      }
      v19 = v26;
      v28 = v26;
      if ( v26 < *(_QWORD *)(CurrentMultiplexedVm + 120) )
      {
        if ( *(_QWORD *)(v14 + 32) + 6LL >= v26 )
        {
          v15 = -1073741748;
          if ( *a6 == 1 )
          {
            if ( !a3 )
            {
              *(_QWORD *)(CurrentMultiplexedVm + 112) = *(_QWORD *)(CurrentMultiplexedVm + 112);
              PsReturnProcessQuota(Process, v14, v18);
            }
            if ( (ULONG_PTR *)v11 == &MiSystemPartition )
              MiReturnResidentAvailable(v18, v14, v16);
            else
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 5824), v18);
          }
          goto LABEL_26;
        }
        *(_BYTE *)(CurrentMultiplexedVm + 195) |= 0x20u;
      }
      if ( !*a6 && v18 )
      {
        if ( !a3 )
          PsReturnProcessQuota(Process, v14, v18);
        if ( (ULONG_PTR *)v11 != &MiSystemPartition )
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 5824), v18);
          v20 = v25;
          v19 = v26;
LABEL_17:
          *(_QWORD *)(CurrentMultiplexedVm + 152) = v19;
          *(_QWORD *)(CurrentMultiplexedVm + 112) = v20;
          if ( !a5 )
          {
LABEL_26:
            LOBYTE(v14) = v30;
            MiUnlockWorkingSetExclusive(CurrentMultiplexedVm, v14);
            return (unsigned int)v15;
          }
          v21 = 0;
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = &qword_14036CF80;
          KxAcquireQueuedSpinLock(&LockHandle);
          v22 = *(_DWORD *)(CurrentMultiplexedVm + 192);
          v32 = v22;
          if ( (a5 & 4) != 0 )
          {
            LOBYTE(v22) = v22 | 0x80;
          }
          else
          {
            if ( (a5 & 8) == 0 )
              goto LABEL_22;
            LOBYTE(v22) = v22 & 0x7F;
          }
          v21 = 1;
          LOBYTE(v32) = v22;
LABEL_22:
          if ( (a5 & 1) != 0 )
          {
            LOBYTE(v32) = v22 | 0x40;
          }
          else
          {
            if ( (a5 & 2) != 0 )
            {
              v21 = 1;
              LOBYTE(v32) = v22 & 0xBF;
            }
            if ( !v21 )
              goto LABEL_25;
          }
          *(_WORD *)(CurrentMultiplexedVm + 192) = v32;
LABEL_25:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          goto LABEL_26;
        }
        MiReturnResidentAvailable(v18, v14, v16);
      }
      v20 = v27;
      goto LABEL_17;
    case 2:
      CurrentMultiplexedVm = MiGetCurrentMultiplexedVm();
      if ( CurrentMultiplexedVm )
        goto LABEL_3;
      break;
    case 3:
      v24 = 2LL;
      goto LABEL_45;
    case 4:
      v24 = 1LL;
LABEL_45:
      CurrentMultiplexedVm = MiGetAnyMultiplexedVm(v24);
      goto LABEL_3;
  }
  return 3221225713LL;
}
