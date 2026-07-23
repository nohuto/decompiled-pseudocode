/*
 * XREFs of SepDeleteSessionLowboxEntries @ 0x1400C33BC
 * Callers:
 *     SepDeReferenceLogonSession @ 0x14056FB40 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1405F0844 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     RtlDeleteHashTable @ 0x1401625B0 (RtlDeleteHashTable.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void SepDeleteSessionLowboxEntries()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // r15d
  volatile signed __int64 *i; // r14
  struct _KTHREAD *v6; // rax
  ULONG_PTR v7; // rsi
  volatile signed __int64 *v8; // r13
  __int64 j; // r8
  int v10; // r10d
  unsigned int v11; // ebx
  __int64 v12; // rax
  _QWORD *v13; // r9
  __int64 v14; // rdx
  _QWORD *v15; // rdx
  unsigned __int64 v16; // rax
  int v17; // eax
  struct _KTHREAD *v18; // rbx
  unsigned int v19; // edx
  unsigned __int8 v20; // r14
  unsigned int v21; // r8d
  bool v22; // zf
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  volatile signed __int64 v29; // rcx
  volatile signed __int64 **v30; // rax
  struct _KTHREAD *v31; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v33; // r12
  unsigned int v34; // r8d
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rdx
  struct _KTHREAD *v38; // rbx
  unsigned __int8 v39; // si
  unsigned int v40; // edx
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rdx
  int v44; // [rsp+90h] [rbp+48h] BYREF
  int v45; // [rsp+98h] [rbp+50h] BYREF
  int v46; // [rsp+A0h] [rbp+58h] BYREF
  int v47; // [rsp+A8h] [rbp+60h]

  if ( g_SessionLowboxMap )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&LowboxSessionMapLock, 0LL);
    v4 = -1;
    for ( i = *(volatile signed __int64 **)g_SessionLowboxMap; i != (volatile signed __int64 *)g_SessionLowboxMap; i = v8 )
    {
      v6 = KeGetCurrentThread();
      v7 = (ULONG_PTR)(i + 3);
      v8 = (volatile signed __int64 *)*i;
      --v6->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(i + 3), 0LL);
      j = *((unsigned int *)i + 8);
      v10 = (i[5] & 4) != 0 ? 0x20 : 0;
      v11 = v10 + j - 1;
      v12 = (i[5] & 4) != 0 ? 4 : 0;
      v13 = (_QWORD *)(*((_QWORD *)i + 5) - v12);
      if ( (_DWORD)j )
      {
        v15 = (_QWORD *)(*((_QWORD *)i + 5) - v12);
        for ( j = ~*v13 | ((1LL << v10) - 1); j == -1; j = ~*v15 )
        {
          if ( ++v15 > &v13[(unsigned __int64)v11 >> 6] )
          {
            v14 = 0xFFFFFFFFLL;
            goto LABEL_14;
          }
        }
        j = ~j;
        _BitScanForward64(&v16, j);
        v14 = (unsigned int)v16 + ((unsigned int)(v15 - v13) << 6);
        if ( (unsigned int)v14 > v11 )
          v14 = 0xFFFFFFFFLL;
      }
      else
      {
        v14 = 0xFFFFFFFFLL;
      }
LABEL_14:
      v17 = v14 - v10;
      if ( (_DWORD)v14 == -1 )
        v17 = -1;
      if ( v17 == -1 )
      {
        RtlDeleteHashTable(*((PRTL_DYNAMIC_HASH_TABLE *)i + 6));
        ExFreePoolWithTag(*((PVOID *)i + 5), 0);
        v29 = *i;
        if ( *(volatile signed __int64 **)(*i + 8) != i
          || (v30 = (volatile signed __int64 **)*((_QWORD *)i + 1), *v30 != i) )
        {
          __fastfail(3u);
        }
        *v30 = (volatile signed __int64 *)v29;
        *(_QWORD *)(v29 + 8) = v30;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(i + 3, v26, v27, v28);
        v45 = 0;
        v31 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(i + 3) == 1 )
          SessionId = MmGetSessionIdEx(v31->ApcState.Process);
        else
          SessionId = -1;
        --v31->SpecialApcDisable;
        v33 = ++v31->AbAllocationRegionCount;
        v34 = ((char)v31->AbEntrySummary | (char)v31->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v22 = !_BitScanReverse((unsigned int *)&v35, v34);
          if ( v22 )
            break;
          v36 = (__int64)&v31->LockEntries[v35];
          v34 &= ~(1 << v35);
          if ( (*(_BYTE *)(v36 + 26) & 1) != 0
            && (*(_DWORD *)(v36 + 32) & 1) == 0
            && (*(_QWORD *)(v36 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v36 + 40) == SessionId )
          {
            *(_BYTE *)(v36 + 26) &= ~1u;
            if ( *(_QWORD *)(v36 + 32) )
            {
              if ( v36 )
              {
                *(_BYTE *)(v36 + 32) |= 2u;
                if ( *(__int64 *)(v36 + 32) < 0 )
                  KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v36);
                v45 = 0;
                v45 = *(_DWORD *)(v36 + 88) & 0x1FFFF;
                *(_DWORD *)(v36 + 88) &= 0xFFFE0000;
                *(_BYTE *)(v36 + 25) &= ~1u;
                *(_QWORD *)(v36 + 32) = 0LL;
                v37 = (v36 - (__int64)v31 - 800) / 96;
                if ( v33 == 1 )
                  v31->AbEntrySummary |= 1 << v37;
                else
                  _InterlockedOr8((volatile signed __int8 *)&v31->AbOrphanedEntrySummary, 1 << v37);
                goto LABEL_61;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v31, (ULONG_PTR)(i + 3), SessionId, 0LL);
LABEL_61:
        --v31->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(v31, i + 3, &v45);
        v22 = v31->SpecialApcDisable++ == -1;
        if ( v22 && ($005F0E83B22994B61E86C72E0CE43C71 *)v31->ApcState.ApcListHead[0].Flink != &v31->152 )
          KiCheckForKernelApcDelivery();
        KeLeaveCriticalRegion();
        ExFreePoolWithTag((PVOID)i, 0);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(i + 3, v14, j, (__int64)v13);
        v44 = 0;
        v18 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(i + 3) == 1 )
          v19 = MmGetSessionIdEx(v18->ApcState.Process);
        else
          v19 = -1;
        --v18->SpecialApcDisable;
        v20 = ++v18->AbAllocationRegionCount;
        v21 = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v22 = !_BitScanReverse((unsigned int *)&v23, v21);
          v47 = v23;
          if ( v22 )
            break;
          v24 = (__int64)&v18->LockEntries[v23];
          v21 &= ~(1 << v23);
          if ( (*(_BYTE *)(v24 + 26) & 1) != 0
            && (*(_DWORD *)(v24 + 32) & 1) == 0
            && (*(_QWORD *)(v24 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v24 + 40) == v19 )
          {
            *(_BYTE *)(v24 + 26) &= ~1u;
            if ( *(_QWORD *)(v24 + 32) )
            {
              if ( v24 )
              {
                *(_BYTE *)(v24 + 32) |= 2u;
                if ( *(__int64 *)(v24 + 32) < 0 )
                  KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v24);
                v44 = 0;
                v44 = *(_DWORD *)(v24 + 88) & 0x1FFFF;
                *(_DWORD *)(v24 + 88) &= 0xFFFE0000;
                *(_BYTE *)(v24 + 25) &= ~1u;
                *(_QWORD *)(v24 + 32) = 0LL;
                v25 = (v24 - (__int64)v18 - 800) / 96;
                if ( v20 == 1 )
                  v18->AbEntrySummary |= 1 << v25;
                else
                  _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v25);
                goto LABEL_34;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v18, v7, v19, 0LL);
LABEL_34:
        --v18->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(v18, v7, &v44);
        v22 = v18->SpecialApcDisable++ == -1;
        if ( v22 && ($005F0E83B22994B61E86C72E0CE43C71 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
          KiCheckForKernelApcDelivery();
        KeLeaveCriticalRegion();
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&LowboxSessionMapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&LowboxSessionMapLock, v1, v2, v3);
    v46 = 0;
    v38 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(&LowboxSessionMapLock) == 1 )
      v4 = MmGetSessionIdEx(v38->ApcState.Process);
    --v38->SpecialApcDisable;
    v39 = ++v38->AbAllocationRegionCount;
    v40 = ((char)v38->AbEntrySummary | (char)v38->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v22 = !_BitScanReverse((unsigned int *)&v41, v40);
      if ( v22 )
        break;
      v42 = (__int64)&v38->LockEntries[v41];
      v40 &= ~(1 << v41);
      if ( (*(_BYTE *)(v42 + 26) & 1) != 0
        && (*(_DWORD *)(v42 + 32) & 1) == 0
        && (*(_QWORD *)(v42 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&LowboxSessionMapLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v42 + 40) == v4 )
      {
        *(_BYTE *)(v42 + 26) &= ~1u;
        if ( *(_QWORD *)(v42 + 32) )
        {
          if ( v42 )
          {
            *(_BYTE *)(v42 + 32) |= 2u;
            if ( *(__int64 *)(v42 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v42);
            v46 = 0;
            v46 = *(_DWORD *)(v42 + 88) & 0x1FFFF;
            *(_DWORD *)(v42 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v42 + 25) &= ~1u;
            *(_QWORD *)(v42 + 32) = 0LL;
            v43 = (v42 - (__int64)v38 - 800) / 96;
            if ( v39 == 1 )
              v38->AbEntrySummary |= 1 << v43;
            else
              _InterlockedOr8((volatile signed __int8 *)&v38->AbOrphanedEntrySummary, 1 << v43);
            goto LABEL_87;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v38->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v38, (ULONG_PTR)&LowboxSessionMapLock, v4, 0LL);
LABEL_87:
    --v38->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v38, &LowboxSessionMapLock, &v46);
    v22 = v38->SpecialApcDisable++ == -1;
    if ( v22 && ($005F0E83B22994B61E86C72E0CE43C71 *)v38->ApcState.ApcListHead[0].Flink != &v38->152 )
      KiCheckForKernelApcDelivery();
    KeLeaveCriticalRegion();
  }
}
