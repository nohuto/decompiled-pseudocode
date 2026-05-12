/*
 * XREFs of RaidStartIoPacket @ 0x1C00073D0
 * Callers:
 *     RaidUnitSubmitRequest @ 0x1C0006B90 (RaidUnitSubmitRequest.c)
 *     RaUnitScsiIrp @ 0x1C0006F90 (RaUnitScsiIrp.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000F7D0 (RaidUnitProcessBusyRequest.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0004AE0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00054E4 (RaUnitReleaseRemoveLock.c)
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     RaidInsertDeviceQueue @ 0x1C0007A90 (RaidInsertDeviceQueue.c)
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     RaAllocateIoResource @ 0x1C000A260 (RaAllocateIoResource.c)
 *     RaidCheckPerProcessorCompletions @ 0x1C001D490 (RaidCheckPerProcessorCompletions.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001D930 (RaidAdapterPoFxActivateComponent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C00312D8 (RaidGetQosEntryForDeviceEntry.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C0031924 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidQosSupportedCommand @ 0x1C0031A30 (RaidQosSupportedCommand.c)
 *     RaUnitRequestPowerUp @ 0x1C0035928 (RaUnitRequestPowerUp.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C003FFC0 (RaAttemptHighWaterMarkIncrease.c)
 */

__int64 __fastcall RaidStartIoPacket(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r13
  __int64 v4; // rsi
  __int64 v8; // r14
  int v9; // ebx
  unsigned __int8 v10; // cl
  int v11; // eax
  __int64 v12; // r13
  unsigned __int8 v13; // bl
  __int64 v14; // r12
  __int64 v15; // rcx
  unsigned __int64 v16; // r12
  int v17; // r9d
  char v18; // r13
  __int64 v19; // rax
  char v20; // bl
  __int64 v21; // rax
  __int64 v22; // r14
  unsigned int v23; // eax
  KSPIN_LOCK *v24; // r14
  char inserted; // r14
  _QWORD *v26; // r12
  __int64 v27; // rbx
  int v28; // ecx
  PSLIST_ENTRY IoResource; // rcx
  PSLIST_ENTRY v30; // rbx
  void *v31; // rax
  size_t v32; // rdx
  _SLIST_ENTRY *Next; // r14
  unsigned int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  char v41; // r13
  __int64 v42; // rax
  _QWORD *v43; // rbx
  _QWORD *Pool; // rax
  unsigned int v45; // r8d
  unsigned int v46; // edx
  PSLIST_ENTRY v47; // rax
  _QWORD *v48; // rcx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v50; // rbx
  _QWORD *v51; // rcx
  _QWORD *v52; // rcx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-49h] BYREF
  int v54; // [rsp+34h] [rbp-45h]
  __int64 v55; // [rsp+38h] [rbp-41h]
  struct _KLOCK_QUEUE_HANDLE v56; // [rsp+40h] [rbp-39h] BYREF
  char v57[8]; // [rsp+58h] [rbp-21h] BYREF
  PSLIST_ENTRY v58; // [rsp+60h] [rbp-19h]
  PSLIST_ENTRY v59; // [rsp+68h] [rbp-11h]
  PSLIST_ENTRY v60; // [rsp+70h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-1h] BYREF
  char v62; // [rsp+E0h] [rbp+67h]
  char v63; // [rsp+E8h] [rbp+6Fh]
  KIRQL v64; // [rsp+E8h] [rbp+6Fh]
  int v65; // [rsp+F0h] [rbp+77h]
  char v66; // [rsp+F8h] [rbp+7Fh]

  v65 = a3;
  v3 = *(_QWORD *)(a2 + 184);
  LODWORD(v4) = 0;
  v55 = v3;
  v8 = *(_QWORD *)(v3 + 8);
  if ( !*(_BYTE *)(a1 + 2576) || (v63 = 1, !(unsigned __int8)RaidQosSupportedCommand(*(_QWORD *)(v3 + 8))) )
    v63 = 0;
  if ( *(_BYTE *)(v8 + 2) == 40 )
    v9 = *(_DWORD *)(v8 + 24);
  else
    v9 = *(_DWORD *)(v8 + 12);
  if ( (*(_BYTE *)(a1 + 154) & 2) == 0 || !(unsigned __int8)RaidIsUnresponsiveBlockedCmd(v8) )
  {
    KeGetCurrentProcessorNumberEx(&ProcNumber);
    v10 = *(_BYTE *)(v8 + 2);
    if ( v10 == 40 )
    {
      *(struct _PROCESSOR_NUMBER *)(v8 + 96) = ProcNumber;
    }
    else
    {
      if ( !*(_QWORD *)(v8 + 40) )
        *(_QWORD *)(v8 + 40) = *(_QWORD *)(v8 + 56);
      *(struct _PROCESSOR_NUMBER *)(v8 + 56) = ProcNumber;
    }
    if ( v10 == 40 )
      v11 = *(_DWORD *)(v8 + 20);
    else
      v11 = v10;
    if ( v11 )
    {
      switch ( v11 )
      {
        case 2:
        case 7:
        case 9:
        case 18:
        case 19:
        case 23:
        case 32:
        case 36:
        case 37:
          break;
        case 8:
          if ( !*(_BYTE *)(*(_QWORD *)(a1 + 24) + 387LL) )
            goto LABEL_14;
          break;
        case 16:
          v42 = *(_QWORD *)(a1 + 24);
          if ( v42 && (*(_BYTE *)(v42 + 524) & 0x10) != 0 )
            break;
          goto LABEL_14;
        default:
          goto LABEL_14;
      }
    }
    if ( (v9 & 0x100800) != 0 )
    {
LABEL_14:
      *(_QWORD *)(v3 + 16) = 0LL;
      v65 = a3 | 8;
      if ( RaidUnitCheckAndAcquirePoFx(a1) )
      {
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
        goto LABEL_33;
      }
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 5088LL) )
      {
LABEL_33:
        v16 = -1LL;
        if ( v63 )
        {
          v43 = 0LL;
          if ( *(_DWORD *)(a1 + 2600) != -1 || *(_DWORD *)(a1 + 2584) != -1 || *(_DWORD *)(a1 + 2588) )
          {
            Pool = RaidAllocatePool(NonPagedPoolNx, 0x38uLL, 0x54436152u, *(_QWORD *)(a1 + 8));
            v43 = Pool;
            if ( Pool )
            {
              memset(Pool, 0, 0x38uLL);
              *(_DWORD *)v43 = 300819165;
              if ( *(_DWORD *)(a1 + 2600) == -1 )
                v43[1] = -1LL;
              else
                v43[1] = (unsigned int)(5000000 * *(_DWORD *)(a1 + 2600)) + KeQueryUnbiasedInterruptTime();
              v65 |= 0x10u;
              v43[6] = a1;
              v43[5] = a2;
            }
          }
          if ( *(_BYTE *)(v8 + 2) == 40 )
          {
            if ( v43 )
            {
              v43[2] = *(_QWORD *)(v8 + 96);
              *(_QWORD *)(v8 + 96) = v43;
            }
            *(_DWORD *)(v8 + 40) = *(_DWORD *)(a1 + 2592);
          }
          else
          {
            if ( v43 )
            {
              v43[2] = *(_QWORD *)(v8 + 48);
              *(_QWORD *)(v8 + 48) = v43;
            }
            *(_DWORD *)(v8 + 20) = *(_DWORD *)(a1 + 2592);
          }
        }
        v64 = KfRaiseIrql(2u);
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4740LL) & 1) == 0
          || (unsigned int)ProcNumber.Group >= HIDWORD(WPP_MAIN_CB.Reserved)
          || (unsigned int)ProcNumber.Number >= *((_DWORD *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink
                                                + ProcNumber.Group)
          || (v40 = (ProcNumber.Number + ((unsigned __int64)ProcNumber.Group << 6)) << 7,
              *(_DWORD *)(v40 + *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) + 80)) )
        {
          v18 = 0;
        }
        else
        {
          v18 = 1;
          _InterlockedExchange((volatile __int32 *)(v40 + *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) + 80), 2);
        }
        v19 = v55;
        v20 = 0;
        *(_BYTE *)(a2 + 141) = -87;
        *(_QWORD *)(v19 + 32) = a1;
        v21 = *(_QWORD *)(a1 + 24);
        if ( v21 )
        {
          v22 = *(_QWORD *)(a1 + 208);
          if ( v22 )
          {
            if ( *(_QWORD *)(v21 + 5000) )
            {
              v23 = KeQueryHighestNodeNumber() + 1;
              if ( v23 )
              {
                v24 = (KSPIN_LOCK *)(v22 + 64);
                v4 = v23;
                do
                {
                  KeAcquireInStackQueuedSpinLock(v24 + 5, &LockHandle);
                  if ( (KSPIN_LOCK *)*v24 != v24 && *(_QWORD *)(*v24 + 40) < v16 )
                    v16 = *(_QWORD *)(*v24 + 40);
                  KeReleaseInStackQueuedSpinLock(&LockHandle);
                  v24 += 7;
                  --v4;
                }
                while ( v4 );
                if ( v16 != -1LL && v16 )
                  v20 = KeQueryUnbiasedInterruptTime() - v16 > *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5000LL);
              }
            }
          }
        }
        inserted = RaidInsertDeviceQueue((int)a1 + 400, a2, v65, v17, v20);
        if ( v20 && inserted )
          ++*(_QWORD *)(a1 + 1680);
        if ( (v65 & 8) == 0 && *(_BYTE *)(a1 + 439) && *(_BYTE *)(a1 + 153) < 0x80u )
          RaUnitRequestPowerUp(a1);
        if ( inserted )
          goto LABEL_58;
        *(_BYTE *)(a2 + 141) = -88;
        v26 = (_QWORD *)(a2 + 120);
        v27 = *(_QWORD *)(a1 + 408);
        if ( *(int *)(v27 + 44) > 0 || *(int *)(v27 + 40) > 0 )
        {
          KeAcquireInStackQueuedSpinLockAtDpcLevel(*(PKSPIN_LOCK *)(a1 + 408), &v56);
          if ( *(int *)(v27 + 44) > 0 || *(int *)(v27 + 40) > 0 )
          {
            v52 = *(_QWORD **)(v27 + 16);
            if ( *v52 != v27 + 8 )
              __fastfail(3u);
            *v26 = v27 + 8;
            *(_QWORD *)(a2 + 128) = v52;
            *v52 = v26;
            *(_QWORD *)(v27 + 16) = v26;
            ++*(_DWORD *)(v27 + 24);
            if ( (*(_BYTE *)(a2 + 142) & 0x20) == 0 )
              goto LABEL_137;
            QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(a2 + 120);
            v50 = v27 + 264;
            v51 = *(_QWORD **)(v50 + 8);
            if ( *v51 != v50 )
              __fastfail(3u);
            goto LABEL_136;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v56);
        }
        v28 = *(_DWORD *)(v27 + 128);
        if ( !v28 )
        {
          IoResource = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v27 + 64));
          goto LABEL_52;
        }
        v35 = v28 * HIDWORD(KeGetPcr()[1].LockArray);
        v36 = *(_QWORD *)(v27 + 64);
        v37 = v35 / *(_DWORD *)(v27 + 132);
        LODWORD(v55) = v37;
        IoResource = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(v36 + 8 * v37));
        if ( !IoResource )
        {
          v45 = *(_DWORD *)(v27 + 128);
          v46 = 1;
          v54 = 1;
          if ( v45 <= 1 )
          {
LABEL_52:
            if ( IoResource
              || *(_DWORD *)(v27 + 136) < *(_DWORD *)(v27 + 144)
              && (RaAttemptHighWaterMarkIncrease(v27),
                  (IoResource = (PSLIST_ENTRY)RaAllocateIoResource((PSLIST_HEADER)(v27 + 64))) != 0LL) )
            {
              if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v27 + 192)) >= *(_DWORD *)(v27 + 36) )
                *(_DWORD *)(v27 + 36) = *(_DWORD *)(v27 + 192);
              v30 = IoResource + 1;
              v59 = IoResource + 1;
              v60 = IoResource + 51;
              v58 = IoResource + 67;
              v31 = (void *)*((_QWORD *)&IoResource[48].Next + 1);
              v32 = *((unsigned int *)&IoResource[47].Next + 2);
              LOBYTE(IoResource[2].Next) &= 0x9Cu;
              Next = IoResource[50].Next;
              LODWORD(IoResource[1].Next) = 523124044;
              *((_QWORD *)&IoResource[1].Next + 1) = 0LL;
              WORD1(IoResource[2].Next) = -1;
              BYTE4(IoResource[2].Next) = -1;
              *((_QWORD *)&IoResource[2].Next + 1) = 0LL;
              *((_QWORD *)&IoResource[7].Next + 1) = 0LL;
              IoResource[8].Next = 0LL;
              *((_QWORD *)&IoResource[9].Next + 1) = 0LL;
              *((_QWORD *)&IoResource[10].Next + 1) = 0LL;
              IoResource[10].Next = 0LL;
              IoResource[13].Next = 0LL;
              IoResource[11].Next = 0LL;
              *((_QWORD *)&IoResource[11].Next + 1) = 0LL;
              *((_QWORD *)&IoResource[14].Next + 1) = 0LL;
              IoResource[15].Next = 0LL;
              *((_QWORD *)&IoResource[8].Next + 1) = 0LL;
              *((_QWORD *)&IoResource[44].Next + 1) = 0LL;
              IoResource[45].Next = 0LL;
              *((_QWORD *)&IoResource[45].Next + 1) = 0LL;
              IoResource[46].Next = 0LL;
              *((_DWORD *)&IoResource[47].Next + 2) = v32;
              *((_QWORD *)&IoResource[48].Next + 1) = v31;
              if ( v31 )
                memset(v31, 0, v32);
              LOBYTE(v30[1].Next) &= ~0x80u;
              BYTE1(v30[1].Next) &= 0xF0u;
              v30[48].Next = 0LL;
              *((_DWORD *)&v30[46].Next + 3) = 0;
              *((_DWORD *)&v30[48].Next + 2) = 0;
              v30[49].Next = Next;
              (*(void (__fastcall **)(_QWORD, __int64, char *))(a1 + 392))(*(_QWORD *)(a1 + 384), a2, v57);
              LODWORD(v4) = 1;
              goto LABEL_58;
            }
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v27, &v56);
            v48 = *(_QWORD **)(v27 + 16);
            if ( *v48 != v27 + 8 )
              __fastfail(3u);
            *v26 = v27 + 8;
            *(_QWORD *)(a2 + 128) = v48;
            *v48 = v26;
            *(_QWORD *)(v27 + 16) = v26;
            ++*(_DWORD *)(v27 + 24);
            *(_DWORD *)(v27 + 40) = 1;
            if ( (*(_BYTE *)(a2 + 142) & 0x20) == 0 )
            {
LABEL_137:
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v56);
LABEL_58:
              if ( v18 == 1 )
                RaidCheckPerProcessorCompletions(*(_QWORD *)(a1 + 24), &ProcNumber);
              KeLowerIrql(v64);
              return (unsigned int)v4;
            }
            QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(a2 + 120);
            v50 = v27 + 264;
            v51 = *(_QWORD **)(v50 + 8);
            if ( *v51 != v50 )
              __fastfail(3u);
LABEL_136:
            *QosEntryForDeviceEntry = v50;
            QosEntryForDeviceEntry[1] = v51;
            *v51 = QosEntryForDeviceEntry;
            *(_QWORD *)(v50 + 8) = QosEntryForDeviceEntry;
            goto LABEL_137;
          }
          while ( !IoResource )
          {
            v47 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v27 + 64)
                                                               + 8LL * ((v46 + (unsigned int)v55) % v45)));
            IoResource = v47;
            v45 = *(_DWORD *)(v27 + 128);
            v46 = v54 + 1;
            v54 = v46;
            if ( v46 >= v45 )
            {
              if ( !v47 )
                goto LABEL_52;
              break;
            }
          }
        }
        LODWORD(IoResource->Next) = v55;
        goto LABEL_52;
      }
    }
    if ( KeGetCurrentIrql() >= 2u || *(_BYTE *)(a1 + 152) >= 0x80u || (*(_BYTE *)(a1 + 153) & 1) != 0 )
    {
      v38 = *(_QWORD *)(a1 + 24);
      v13 = 0;
      v14 = *(_QWORD *)(a2 + 184);
      v62 = 0;
      if ( *(_QWORD *)(v38 + 5088) )
      {
        RaidAdapterPoFxActivateComponent(v38, 0LL);
        v13 = 2;
        v62 = 2;
      }
      if ( *(_BYTE *)(a1 + 153) < 0x80u
        || !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448)) )
      {
        goto LABEL_32;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1456) + 96LL));
      if ( *(_BYTE *)(v38 + 108) >= 0x80u )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1752));
        if ( (*(_BYTE *)(v38 + 109) & 1) != 0 )
          _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1760));
      }
      v39 = *(_QWORD *)(a1 + 1456);
      if ( (*(_DWORD *)(v39 + 148) & 1) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v39 + 144));
      PoFxActivateComponent(**(_QWORD **)(a1 + 1456), 0LL, 2LL);
      v13 = v62 | 1;
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 24);
      v13 = 0;
      v14 = *(_QWORD *)(a2 + 184);
      v66 = 0;
      if ( *(_QWORD *)(v12 + 5088) )
      {
        RaidAdapterPoFxActivateComponent(v12, 0LL);
        v13 = 2;
        v66 = 2;
      }
      if ( *(_BYTE *)(a1 + 153) < 0x80u
        || !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448)) )
      {
        goto LABEL_32;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1456) + 96LL));
      if ( *(_BYTE *)(v12 + 108) >= 0x80u )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1752));
        if ( (*(_BYTE *)(v12 + 109) & 1) != 0 )
          _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1760));
      }
      v15 = *(_QWORD *)(a1 + 1456);
      if ( (*(_DWORD *)(v15 + 148) & 1) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 144));
      PoFxActivateComponent(**(_QWORD **)(a1 + 1456), 0LL, 1LL);
      v13 = v66 | 1;
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
LABEL_32:
    *(_QWORD *)(v14 + 16) = v13 & 1 | (unsigned __int64)(2 * ((v13 >> 1) & 1u));
    goto LABEL_33;
  }
  RaUnitReleaseRemoveLock((struct _KEVENT *)a1);
  v41 = 56;
  if ( *(char *)(v8 + 3) < 0 )
    v41 = -72;
  *(_BYTE *)(v8 + 3) = v41;
  RaidCompleteRequestEx((PIRP)a2);
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1792));
  return 1LL;
}
