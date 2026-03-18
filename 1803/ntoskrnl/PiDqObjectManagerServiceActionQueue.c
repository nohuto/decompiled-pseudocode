/*
 * XREFs of PiDqObjectManagerServiceActionQueue @ 0x1405DD500
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     IoClearActivityIdThread @ 0x140075960 (IoClearActivityIdThread.c)
 *     IoSetActivityIdThread @ 0x140075980 (IoSetActivityIdThread.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     McTemplateK0p @ 0x14023B79C (McTemplateK0p.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PiPnpRtlObjectEventRelease @ 0x140509B1C (PiPnpRtlObjectEventRelease.c)
 *     PnpIsNullGuid @ 0x140523858 (PnpIsNullGuid.c)
 *     PiDqQueryRelease @ 0x1405733F8 (PiDqQueryRelease.c)
 *     PiDqQueryFreeActiveData @ 0x140573470 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryApplyObjectEvent @ 0x1405DD894 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryCompletePendedIrp @ 0x1405DDDC8 (PiDqQueryCompletePendedIrp.c)
 */

_QWORD *__fastcall PiDqObjectManagerServiceActionQueue(PERESOURCE Resource)
{
  struct _FAST_MUTEX *v1; // rbx
  PERESOURCE v2; // rdi
  PERESOURCE v3; // r13
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
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  struct _KTHREAD *v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  PVOID v27; // r14
  PVOID *v28; // rbx
  __int64 v29; // rsi
  int OwnerTable_high; // eax
  _QWORD *result; // rax
  __int64 j; // rsi
  struct _KTHREAD *v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  char v36; // [rsp+20h] [rbp-50h]
  char v37; // [rsp+21h] [rbp-4Fh]
  PVOID P[2]; // [rsp+28h] [rbp-48h] BYREF
  unsigned int v39; // [rsp+38h] [rbp-38h]
  PVOID v40; // [rsp+40h] [rbp-30h]
  PVOID v41; // [rsp+48h] [rbp-28h]
  PERESOURCE v42; // [rsp+50h] [rbp-20h]
  __int128 v43; // [rsp+58h] [rbp-18h] BYREF

  v41 = 0LL;
  v1 = (struct _FAST_MUTEX *)&Resource[1];
  v2 = Resource;
  v42 = Resource;
  v37 = 1;
  v3 = Resource + 2;
  v4 = 1;
  do
  {
    CurrentThread = KeGetCurrentThread();
    OwnerTable = 0;
    v40 = 0LL;
    v39 = 0;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(v2, 1u);
    ExAcquireFastMutex(v1);
    if ( (PERESOURCE)v3->SystemResourcesList.Flink == v3 )
    {
      P[1] = P;
      P[0] = P;
    }
    else
    {
      *(LIST_ENTRY *)P = v3->SystemResourcesList;
      *((_QWORD *)P[0] + 1) = P;
      *(_QWORD *)P[1] = P;
      v3->SystemResourcesList.Blink = &v3->SystemResourcesList;
      v3->SystemResourcesList.Flink = &v3->SystemResourcesList;
    }
    v7 = 0;
    if ( (HIDWORD(v2[2].OwnerTable) & 2) == 0 )
      v7 = v4;
    v4 = v7;
    v8 = v7;
    if ( v7 )
    {
      OwnerTable = (unsigned int)v2[2].OwnerTable;
      v39 = OwnerTable;
      if ( OwnerTable )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * OwnerTable, 0x58706E50u);
        v40 = PoolWithTag;
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
        v1 = (struct _FAST_MUTEX *)&v2[1];
      }
    }
    if ( !v4 )
    {
      for ( j = (__int64)v2[1].Address; (PVOID *)j != &v2[1].Address; j = *(_QWORD *)j )
      {
        v33 = KeGetCurrentThread();
        --v33->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(j + 64, 0LL);
        *(_DWORD *)(j + 216) |= 1u;
        PiDqQueryFreeActiveData(j);
        PiDqQueryCompletePendedIrp(j);
        ExReleasePushLockEx(j + 64, 0LL, v34, v35);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      HIDWORD(v2[2].OwnerTable) &= ~2u;
      v1 = (struct _FAST_MUTEX *)&v2[1];
    }
    KeReleaseGuardedMutex(v1);
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
        v14 = (char *)v40;
        v15 = OwnerTable;
        v16 = v41;
        do
        {
          v17 = *(_QWORD *)v14;
          if ( *(_QWORD *)(*(_QWORD *)v14 + 224LL) <= *((_QWORD *)v12 + 3) )
          {
            v36 = 0;
            if ( !PnpIsNullGuid(*(void **)(v17 + 24)) )
            {
              v43 = *(_OWORD *)*(_QWORD *)(v17 + 24);
              v16 = IoSetActivityIdThread(&v43);
              v36 = 1;
            }
            if ( _bittest(&Microsoft_Windows_Kernel_PnPEnableBits, 0x17u) )
              McTemplateK0p(v18, &KMPnPEvt_DevQuery_ProcessingStart, *(const GUID **)(v17 + 24), v17);
            v19 = KeGetCurrentThread();
            --v19->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v17 + 64, 0LL);
            v20 = *(_DWORD *)(v17 + 216);
            ExReleasePushLockEx(v17 + 64, 0LL, v21, v22);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            if ( (v20 & 9) == 0 )
            {
              PiDqQueryApplyObjectEvent(v17, *((_QWORD *)v12 + 2));
              v24 = KeGetCurrentThread();
              --v24->KernelApcDisable;
              ExAcquirePushLockExclusiveEx(v17 + 64, 0LL);
              if ( (*(_DWORD *)(v17 + 216) & 1) != 0 || *(_QWORD *)(v17 + 192) != v17 + 192 )
                PiDqQueryCompletePendedIrp(v17);
              ExReleasePushLockEx(v17 + 64, 0LL, v25, v26);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            }
            if ( _bittest(&Microsoft_Windows_Kernel_PnPEnableBits, 0x17u) )
              McTemplateK0p(v23, &KMPnPEvt_DevQuery_ProcessingStop, *(const GUID **)(v17 + 24), v17);
            if ( v36 )
              IoClearActivityIdThread(v16);
          }
          v14 += 8;
          --v15;
        }
        while ( v15 );
        v2 = v42;
        v41 = v16;
        OwnerTable = v39;
        v3 = v42 + 2;
      }
      PiPnpRtlObjectEventRelease(*((char **)v12 + 2));
      ExFreePoolWithTag(v12, 0x58706E50u);
    }
    v27 = v40;
    if ( v40 )
    {
      if ( OwnerTable )
      {
        v28 = (PVOID *)v40;
        v29 = OwnerTable;
        do
        {
          PiDqQueryRelease(*v28++);
          --v29;
        }
        while ( v29 );
      }
      ExFreePoolWithTag(v27, 0x58706E50u);
    }
    v1 = (struct _FAST_MUTEX *)&v2[1];
    ExAcquireFastMutex((PFAST_MUTEX)&v2[1]);
    if ( (PERESOURCE)v3->SystemResourcesList.Flink == v3 )
    {
      OwnerTable_high = HIDWORD(v2[2].OwnerTable);
      if ( (OwnerTable_high & 2) == 0 )
      {
        v37 = 0;
        HIDWORD(v2[2].OwnerTable) = OwnerTable_high & 0xFFFFFFFE;
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&v2[1]);
    ExReleaseResourceLite(v2);
    result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  while ( v37 );
  return result;
}
