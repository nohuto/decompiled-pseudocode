/*
 * XREFs of SepDeleteSessionLowboxEntries @ 0x140133A34
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1405A7534 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1405A79E0 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     RtlDeleteHashTable @ 0x140124E50 (RtlDeleteHashTable.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void SepDeleteSessionLowboxEntries()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // r15d
  volatile signed __int64 *i; // r14
  struct _KTHREAD *v3; // rax
  ULONG_PTR v4; // rsi
  volatile signed __int64 *v5; // r13
  int v6; // r9d
  unsigned int v7; // r11d
  _QWORD *v8; // r8
  _QWORD *v9; // rcx
  __int64 j; // rdx
  unsigned int v11; // ecx
  unsigned __int64 v12; // rax
  int v13; // eax
  struct _KTHREAD *v14; // rbx
  unsigned int v15; // edx
  unsigned __int8 v16; // r14
  unsigned int v17; // r8d
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  volatile signed __int64 v23; // rcx
  volatile signed __int64 **v24; // rax
  struct _KTHREAD *v25; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v27; // r12
  unsigned int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct _KTHREAD *v33; // rbx
  unsigned __int8 v34; // si
  unsigned int v35; // edx
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // [rsp+90h] [rbp+48h] BYREF
  int v41; // [rsp+98h] [rbp+50h] BYREF
  int v42; // [rsp+A0h] [rbp+58h] BYREF
  int v43; // [rsp+A8h] [rbp+60h]

  if ( g_SessionLowboxMap )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&LowboxSessionMapLock, 0LL);
    v1 = -1;
    for ( i = *(volatile signed __int64 **)g_SessionLowboxMap; i != (volatile signed __int64 *)g_SessionLowboxMap; i = v5 )
    {
      v3 = KeGetCurrentThread();
      v4 = (ULONG_PTR)(i + 3);
      v5 = (volatile signed __int64 *)*i;
      --v3->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(i + 3), 0LL);
      v6 = (i[5] & 4) != 0 ? 0x20 : 0;
      v7 = v6 + *((_DWORD *)i + 8) - 1;
      v8 = (_QWORD *)(*((_QWORD *)i + 5) - ((i[5] & 4) != 0 ? 4 : 0));
      if ( *((_DWORD *)i + 8) )
      {
        v9 = (_QWORD *)(*((_QWORD *)i + 5) - ((i[5] & 4) != 0 ? 4 : 0));
        for ( j = ((1LL << v6) - 1) | ~*v8; j == -1; j = ~*v9 )
        {
          if ( ++v9 > &v8[(unsigned __int64)v7 >> 6] )
            goto LABEL_6;
        }
        _BitScanForward64(&v12, ~j);
        v11 = v12 + ((unsigned int)(v9 - v8) << 6);
        if ( v11 > v7 )
          v11 = -1;
      }
      else
      {
LABEL_6:
        v11 = -1;
      }
      v13 = v11 - v6;
      if ( v11 == -1 )
        v13 = -1;
      if ( v13 == -1 )
      {
        RtlDeleteHashTable(*((PRTL_DYNAMIC_HASH_TABLE *)i + 6));
        ExFreePoolWithTag(*((PVOID *)i + 5), 0);
        v23 = *i;
        if ( *(volatile signed __int64 **)(*i + 8) != i
          || (v24 = (volatile signed __int64 **)*((_QWORD *)i + 1), *v24 != i) )
        {
          __fastfail(3u);
        }
        *v24 = (volatile signed __int64 *)v23;
        *(_QWORD *)(v23 + 8) = v24;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(i + 3);
        v41 = 0;
        v25 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(i + 3)) == 1 )
          SessionId = MmGetSessionIdEx((__int64)v25->ApcState.Process);
        else
          SessionId = -1;
        --v25->SpecialApcDisable;
        v27 = ++v25->AbAllocationRegionCount;
        v28 = ((char)v25->AbEntrySummary | (char)v25->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v18 = !_BitScanReverse((unsigned int *)&v29, v28);
          if ( v18 )
            break;
          v30 = (__int64)&v25->LockEntries[v29];
          v28 &= ~(1 << v29);
          if ( (*(_BYTE *)(v30 + 26) & 1) != 0
            && (*(_DWORD *)(v30 + 32) & 1) == 0
            && (*(_QWORD *)(v30 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v30 + 40) == SessionId )
          {
            *(_BYTE *)(v30 + 26) &= ~1u;
            if ( *(_QWORD *)(v30 + 32) )
            {
              if ( v30 )
              {
                *(_BYTE *)(v30 + 32) |= 2u;
                if ( *(__int64 *)(v30 + 32) < 0 )
                  KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v30);
                v41 = 0;
                v41 = *(_DWORD *)(v30 + 88) & 0x1FFFF;
                *(_DWORD *)(v30 + 88) &= 0xFFFE0000;
                *(_BYTE *)(v30 + 25) &= ~1u;
                *(_QWORD *)(v30 + 32) = 0LL;
                v31 = (v30 - (__int64)v25 - 800) / 96;
                if ( v27 == 1 )
                  v25->AbEntrySummary |= 1 << v31;
                else
                  _InterlockedOr8((volatile signed __int8 *)&v25->AbOrphanedEntrySummary, 1 << v31);
                goto LABEL_59;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&v25->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v25, (ULONG_PTR)(i + 3), SessionId, 0LL);
LABEL_59:
        --v25->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v25, (__int64)(i + 3), (unsigned int *)&v41);
        v18 = v25->SpecialApcDisable++ == -1;
        if ( v18 && ($B476B70DB57F76B110DA5B9238C3E934 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
          KiCheckForKernelApcDelivery(v32);
        KeLeaveCriticalRegion();
        ExFreePoolWithTag((PVOID)i, 0);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(i + 3);
        v40 = 0;
        v14 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(i + 3)) == 1 )
          v15 = MmGetSessionIdEx((__int64)v14->ApcState.Process);
        else
          v15 = -1;
        --v14->SpecialApcDisable;
        v16 = ++v14->AbAllocationRegionCount;
        v17 = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v18 = !_BitScanReverse((unsigned int *)&v19, v17);
          v43 = v19;
          if ( v18 )
            break;
          v20 = (__int64)&v14->LockEntries[v19];
          v17 &= ~(1 << v19);
          if ( (*(_BYTE *)(v20 + 26) & 1) != 0
            && (*(_DWORD *)(v20 + 32) & 1) == 0
            && (*(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v20 + 40) == v15 )
          {
            *(_BYTE *)(v20 + 26) &= ~1u;
            if ( *(_QWORD *)(v20 + 32) )
            {
              if ( v20 )
              {
                *(_BYTE *)(v20 + 32) |= 2u;
                if ( *(__int64 *)(v20 + 32) < 0 )
                  KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v20);
                v40 = 0;
                v40 = *(_DWORD *)(v20 + 88) & 0x1FFFF;
                *(_DWORD *)(v20 + 88) &= 0xFFFE0000;
                *(_BYTE *)(v20 + 25) &= ~1u;
                *(_QWORD *)(v20 + 32) = 0LL;
                v21 = (v20 - (__int64)v14 - 800) / 96;
                if ( v16 == 1 )
                  v14->AbEntrySummary |= 1 << v21;
                else
                  _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v21);
                goto LABEL_32;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v14, v4, v15, 0LL);
LABEL_32:
        --v14->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v14, v4, (unsigned int *)&v40);
        v18 = v14->SpecialApcDisable++ == -1;
        if ( v18 && ($B476B70DB57F76B110DA5B9238C3E934 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
          KiCheckForKernelApcDelivery(v22);
        KeLeaveCriticalRegion();
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&LowboxSessionMapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&LowboxSessionMapLock);
    v42 = 0;
    v33 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&LowboxSessionMapLock) == 1 )
      v1 = MmGetSessionIdEx((__int64)v33->ApcState.Process);
    --v33->SpecialApcDisable;
    v34 = ++v33->AbAllocationRegionCount;
    v35 = ((char)v33->AbEntrySummary | (char)v33->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v18 = !_BitScanReverse((unsigned int *)&v36, v35);
      if ( v18 )
        break;
      v37 = (__int64)&v33->LockEntries[v36];
      v35 &= ~(1 << v36);
      if ( (*(_BYTE *)(v37 + 26) & 1) != 0
        && (*(_DWORD *)(v37 + 32) & 1) == 0
        && (*(_QWORD *)(v37 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&LowboxSessionMapLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v37 + 40) == v1 )
      {
        *(_BYTE *)(v37 + 26) &= ~1u;
        if ( *(_QWORD *)(v37 + 32) )
        {
          if ( v37 )
          {
            *(_BYTE *)(v37 + 32) |= 2u;
            if ( *(__int64 *)(v37 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v37);
            v42 = 0;
            v42 = *(_DWORD *)(v37 + 88) & 0x1FFFF;
            *(_DWORD *)(v37 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v37 + 25) &= ~1u;
            *(_QWORD *)(v37 + 32) = 0LL;
            v38 = (v37 - (__int64)v33 - 800) / 96;
            if ( v34 == 1 )
              v33->AbEntrySummary |= 1 << v38;
            else
              _InterlockedOr8((volatile signed __int8 *)&v33->AbOrphanedEntrySummary, 1 << v38);
            goto LABEL_85;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v33->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v33, (ULONG_PTR)&LowboxSessionMapLock, v1, 0LL);
LABEL_85:
    --v33->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v33, (__int64)&LowboxSessionMapLock, (unsigned int *)&v42);
    v18 = v33->SpecialApcDisable++ == -1;
    if ( v18 && ($B476B70DB57F76B110DA5B9238C3E934 *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
      KiCheckForKernelApcDelivery(v39);
    KeLeaveCriticalRegion();
  }
}
