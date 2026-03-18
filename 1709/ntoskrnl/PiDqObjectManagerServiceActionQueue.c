/*
 * XREFs of PiDqObjectManagerServiceActionQueue @ 0x14054C2A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     IoClearActivityIdThread @ 0x1400FB270 (IoClearActivityIdThread.c)
 *     IoSetActivityIdThread @ 0x1400FB290 (IoSetActivityIdThread.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     McTemplateK0p @ 0x1401FEE2C (McTemplateK0p.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PiPnpRtlObjectEventRelease @ 0x140528EA0 (PiPnpRtlObjectEventRelease.c)
 *     PnpIsNullGuid @ 0x14054CECC (PnpIsNullGuid.c)
 *     PiDqQueryRelease @ 0x14054CEF8 (PiDqQueryRelease.c)
 *     PiDqQueryFreeActiveData @ 0x14054CF70 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryApplyObjectEvent @ 0x14054D08C (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryCompletePendedIrp @ 0x14059ED40 (PiDqQueryCompletePendedIrp.c)
 */

_QWORD *__fastcall PiDqObjectManagerServiceActionQueue(PERESOURCE Resource)
{
  PERESOURCE v1; // r13
  PERESOURCE v2; // rdi
  struct _FAST_MUTEX *v3; // rbx
  char v4; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned int OwnerTable; // r12d
  char v7; // cl
  char v8; // si
  PVOID PoolWithTag; // rax
  __int64 v10; // r8
  volatile signed __int32 *i; // rcx
  PVOID v12; // r14
  __int64 v13; // rax
  char *v14; // r13
  __int64 v15; // rdi
  PVOID v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rcx
  struct _KTHREAD *v19; // rcx
  int v20; // ebx
  __int64 v21; // rcx
  struct _KTHREAD *v22; // rax
  PVOID v23; // r14
  PVOID *v24; // rbx
  __int64 v25; // rsi
  int OwnerTable_high; // eax
  _QWORD *result; // rax
  PVOID *j; // rsi
  struct _KTHREAD *v29; // rax
  char v30; // [rsp+20h] [rbp-50h]
  char v31; // [rsp+21h] [rbp-4Fh]
  PVOID P[2]; // [rsp+28h] [rbp-48h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-38h]
  PVOID v34; // [rsp+40h] [rbp-30h]
  PVOID v35; // [rsp+48h] [rbp-28h]
  PERESOURCE v36; // [rsp+50h] [rbp-20h]
  __int128 v37; // [rsp+58h] [rbp-18h] BYREF

  v35 = 0LL;
  v1 = Resource + 2;
  v2 = Resource;
  v36 = Resource;
  v31 = 1;
  v3 = (struct _FAST_MUTEX *)&Resource[1];
  v4 = 1;
  do
  {
    CurrentThread = KeGetCurrentThread();
    OwnerTable = 0;
    v34 = 0LL;
    v33 = 0;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(v2, 1u);
    ExAcquireFastMutex(v3);
    if ( (PERESOURCE)v1->SystemResourcesList.Flink == v1 )
    {
      P[1] = P;
      P[0] = P;
    }
    else
    {
      *(LIST_ENTRY *)P = v1->SystemResourcesList;
      *((_QWORD *)P[0] + 1) = P;
      *(_QWORD *)P[1] = P;
      v1->SystemResourcesList.Blink = &v1->SystemResourcesList;
      v1->SystemResourcesList.Flink = &v1->SystemResourcesList;
    }
    v7 = 0;
    if ( (HIDWORD(v2[2].OwnerTable) & 2) == 0 )
      v7 = v4;
    v4 = v7;
    v8 = v7;
    if ( v7 )
    {
      OwnerTable = (unsigned int)v2[2].OwnerTable;
      v33 = OwnerTable;
      if ( OwnerTable )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * OwnerTable, 0x58706E50u);
        v34 = PoolWithTag;
        if ( PoolWithTag )
        {
          v10 = 0LL;
          for ( i = (volatile signed __int32 *)v2[1].Address;
                i != (volatile signed __int32 *)&v2[1].Address;
                i = *(volatile signed __int32 **)i )
          {
            *((_QWORD *)PoolWithTag + v10) = i;
            v10 = (unsigned int)(v10 + 1);
            _InterlockedIncrement(i + 53);
          }
          v4 = v8;
        }
        else
        {
          v4 = 0;
        }
        v3 = (struct _FAST_MUTEX *)&v2[1];
      }
    }
    if ( !v4 )
    {
      for ( j = (PVOID *)v2[1].Address; j != &v2[1].Address; j = (PVOID *)*j )
      {
        v29 = KeGetCurrentThread();
        --v29->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(j + 8), 0LL);
        *((_DWORD *)j + 54) |= 1u;
        PiDqQueryFreeActiveData(j);
        PiDqQueryCompletePendedIrp(j);
        ExReleasePushLockEx((ULONG_PTR)(j + 8), 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      HIDWORD(v2[2].OwnerTable) &= ~2u;
      v3 = (struct _FAST_MUTEX *)&v2[1];
    }
    KeReleaseGuardedMutex(v3);
    while ( 1 )
    {
      v12 = P[0];
      if ( P[0] == P )
        break;
      if ( *((PVOID **)P[0] + 1) != P || (v13 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v13 + 8) = P;
      if ( v4 && OwnerTable )
      {
        v14 = (char *)v34;
        v15 = OwnerTable;
        v16 = v35;
        do
        {
          v17 = *(_QWORD *)v14;
          if ( *(_QWORD *)(*(_QWORD *)v14 + 224LL) <= *((_QWORD *)v12 + 3) )
          {
            v30 = 0;
            if ( !(unsigned __int8)PnpIsNullGuid(*(void **)(v17 + 24)) )
            {
              v37 = *(_OWORD *)*(_QWORD *)(v17 + 24);
              v16 = IoSetActivityIdThread(&v37);
              v30 = 1;
            }
            if ( _bittest(&Microsoft_Windows_Kernel_PnPEnableBits, 0x17u) )
              McTemplateK0p(v18, &KMPnPEvt_DevQuery_ProcessingStart, *(const GUID **)(v17 + 24), v17);
            v19 = KeGetCurrentThread();
            --v19->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v17 + 64, 0LL);
            v20 = *(_DWORD *)(v17 + 216);
            ExReleasePushLockEx(v17 + 64, 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            if ( (v20 & 9) == 0 )
            {
              PiDqQueryApplyObjectEvent(v17, *((_QWORD *)v12 + 2));
              v22 = KeGetCurrentThread();
              --v22->KernelApcDisable;
              ExAcquirePushLockExclusiveEx(v17 + 64, 0LL);
              if ( (*(_DWORD *)(v17 + 216) & 1) != 0 || *(_QWORD *)(v17 + 192) != v17 + 192 )
                PiDqQueryCompletePendedIrp(v17);
              ExReleasePushLockEx(v17 + 64, 0LL);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            }
            if ( _bittest(&Microsoft_Windows_Kernel_PnPEnableBits, 0x17u) )
              McTemplateK0p(v21, &KMPnPEvt_DevQuery_ProcessingStop, *(const GUID **)(v17 + 24), v17);
            if ( v30 )
              IoClearActivityIdThread(v16);
          }
          v14 += 8;
          --v15;
        }
        while ( v15 );
        v2 = v36;
        v35 = v16;
        OwnerTable = v33;
        v1 = v36 + 2;
      }
      PiPnpRtlObjectEventRelease(*((char **)v12 + 2));
      ExFreePoolWithTag(v12, 0x58706E50u);
    }
    v23 = v34;
    if ( v34 )
    {
      if ( OwnerTable )
      {
        v24 = (PVOID *)v34;
        v25 = OwnerTable;
        do
        {
          PiDqQueryRelease(*v24++);
          --v25;
        }
        while ( v25 );
      }
      ExFreePoolWithTag(v23, 0x58706E50u);
    }
    v3 = (struct _FAST_MUTEX *)&v2[1];
    ExAcquireFastMutex((PFAST_MUTEX)&v2[1]);
    if ( (PERESOURCE)v1->SystemResourcesList.Flink == v1 )
    {
      OwnerTable_high = HIDWORD(v2[2].OwnerTable);
      if ( (OwnerTable_high & 2) == 0 )
      {
        v31 = 0;
        HIDWORD(v2[2].OwnerTable) = OwnerTable_high & 0xFFFFFFFE;
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&v2[1]);
    ExReleaseResourceLite(v2);
    result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  while ( v31 );
  return result;
}
