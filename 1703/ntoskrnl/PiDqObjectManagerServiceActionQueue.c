/*
 * XREFs of PiDqObjectManagerServiceActionQueue @ 0x1404B8940
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     IoSetActivityIdThread @ 0x14006E760 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x14006E780 (IoClearActivityIdThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     Template_p @ 0x1401F9090 (Template_p.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiDqQueryCompletePendedIrp @ 0x14045B784 (PiDqQueryCompletePendedIrp.c)
 *     PiPnpRtlObjectEventRelease @ 0x140489038 (PiPnpRtlObjectEventRelease.c)
 *     PiDqQueryApplyObjectEvent @ 0x1404B83D4 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryFreeActiveData @ 0x1404B8D48 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryRelease @ 0x1404B8DE0 (PiDqQueryRelease.c)
 *     PnpIsNullGuid @ 0x1404B8E58 (PnpIsNullGuid.c)
 */

__int64 __fastcall PiDqObjectManagerServiceActionQueue(PERESOURCE Resource)
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
  __int64 *v12; // r14
  __int64 v13; // rax
  __int64 *v14; // r13
  __int64 v15; // rdi
  PVOID v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rcx
  struct _KTHREAD *v19; // rcx
  int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct _KTHREAD *v24; // rax
  PVOID v25; // r14
  PVOID *v26; // rbx
  __int64 v27; // rsi
  int OwnerTable_high; // eax
  __int64 result; // rax
  __int64 j; // rsi
  struct _KTHREAD *v31; // rax
  char v32; // [rsp+20h] [rbp-50h]
  char v33; // [rsp+21h] [rbp-4Fh]
  PVOID P[2]; // [rsp+28h] [rbp-48h] BYREF
  unsigned int v35; // [rsp+38h] [rbp-38h]
  PVOID v36; // [rsp+40h] [rbp-30h]
  PVOID v37; // [rsp+48h] [rbp-28h]
  PERESOURCE v38; // [rsp+50h] [rbp-20h]
  __int128 v39; // [rsp+58h] [rbp-18h] BYREF

  v37 = 0LL;
  v1 = Resource + 2;
  v2 = Resource;
  v38 = Resource;
  v33 = 1;
  v3 = (struct _FAST_MUTEX *)&Resource[1];
  v4 = 1;
  do
  {
    CurrentThread = KeGetCurrentThread();
    OwnerTable = 0;
    v36 = 0LL;
    v35 = 0;
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
      v35 = OwnerTable;
      if ( OwnerTable )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * OwnerTable, 0x58706E50u);
        v36 = PoolWithTag;
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
      for ( j = (__int64)v2[1].Address; (PVOID *)j != &v2[1].Address; j = *(_QWORD *)j )
      {
        v31 = KeGetCurrentThread();
        --v31->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(j + 64, 0LL);
        *(_DWORD *)(j + 216) |= 1u;
        PiDqQueryFreeActiveData(j);
        PiDqQueryCompletePendedIrp(j);
        ExReleasePushLockEx(j + 64, 0LL);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      }
      HIDWORD(v2[2].OwnerTable) &= ~2u;
      v3 = (struct _FAST_MUTEX *)&v2[1];
    }
    KeReleaseGuardedMutex(v3);
    while ( 1 )
    {
      v12 = (__int64 *)P[0];
      if ( P[0] == P )
        break;
      v13 = *(_QWORD *)P[0];
      if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v13 + 8) != P[0] )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v13 + 8) = P;
      if ( v4 && OwnerTable )
      {
        v14 = (__int64 *)v36;
        v15 = OwnerTable;
        v16 = v37;
        do
        {
          v17 = *v14;
          if ( *(_QWORD *)(*v14 + 224) <= (unsigned __int64)v12[3] )
          {
            v32 = 0;
            if ( !(unsigned __int8)PnpIsNullGuid(*(void **)(v17 + 24)) )
            {
              v39 = *(_OWORD *)*(_QWORD *)(v17 + 24);
              v16 = IoSetActivityIdThread(&v39);
              v32 = 1;
            }
            if ( _bittest(&Microsoft_Windows_Kernel_PnPEnableBits, 0x17u) )
              Template_p(v18, &KMPnPEvt_DevQuery_ProcessingStart, *(const GUID **)(v17 + 24), v17);
            v19 = KeGetCurrentThread();
            --v19->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v17 + 64, 0LL);
            v20 = *(_DWORD *)(v17 + 216);
            ExReleasePushLockEx(v17 + 64, 0LL);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            if ( (v20 & 9) == 0 )
            {
              PiDqQueryApplyObjectEvent(v17, v12[2], v22, v23);
              v24 = KeGetCurrentThread();
              --v24->KernelApcDisable;
              ExAcquirePushLockExclusiveEx(v17 + 64, 0LL);
              if ( (*(_DWORD *)(v17 + 216) & 1) != 0 || *(_QWORD *)(v17 + 192) != v17 + 192 )
                PiDqQueryCompletePendedIrp(v17);
              ExReleasePushLockEx(v17 + 64, 0LL);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            }
            if ( _bittest(&Microsoft_Windows_Kernel_PnPEnableBits, 0x17u) )
              Template_p(v21, &KMPnPEvt_DevQuery_ProcessingStop, *(const GUID **)(v17 + 24), v17);
            if ( v32 )
              IoClearActivityIdThread(v16);
          }
          ++v14;
          --v15;
        }
        while ( v15 );
        v2 = v38;
        v37 = v16;
        OwnerTable = v35;
        v1 = v38 + 2;
      }
      PiPnpRtlObjectEventRelease((char *)v12[2]);
      ExFreePoolWithTag(v12, 0x58706E50u);
    }
    v25 = v36;
    if ( v36 )
    {
      if ( OwnerTable )
      {
        v26 = (PVOID *)v36;
        v27 = OwnerTable;
        do
        {
          PiDqQueryRelease(*v26++);
          --v27;
        }
        while ( v27 );
      }
      ExFreePoolWithTag(v25, 0x58706E50u);
    }
    v3 = (struct _FAST_MUTEX *)&v2[1];
    ExAcquireFastMutex((PFAST_MUTEX)&v2[1]);
    if ( (PERESOURCE)v1->SystemResourcesList.Flink == v1 )
    {
      OwnerTable_high = HIDWORD(v2[2].OwnerTable);
      if ( (OwnerTable_high & 2) == 0 )
      {
        v33 = 0;
        HIDWORD(v2[2].OwnerTable) = OwnerTable_high & 0xFFFFFFFE;
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&v2[1]);
    ExReleaseResourceLite(v2);
    result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  while ( v33 );
  return result;
}
