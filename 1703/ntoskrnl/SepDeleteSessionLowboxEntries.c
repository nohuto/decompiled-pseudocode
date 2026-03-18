/*
 * XREFs of SepDeleteSessionLowboxEntries @ 0x1401433DC
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x140579760 (SepDeleteLogonSessionTrack.c)
 *     SepDeReferenceLogonSession @ 0x14057D950 (SepDeReferenceLogonSession.c)
 * Callees:
 *     RtlDeleteHashTable @ 0x14003C690 (RtlDeleteHashTable.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void SepDeleteSessionLowboxEntries()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rax
  unsigned int v2; // r12d
  volatile signed __int64 *v3; // r15
  ULONG_PTR v4; // r14
  struct _KTHREAD *v5; // rax
  unsigned int v6; // r9d
  unsigned int v7; // r11d
  __int64 v8; // r8
  _QWORD *v9; // rcx
  __int64 i; // rdx
  unsigned int v11; // ecx
  unsigned __int64 v12; // rax
  int v13; // eax
  struct _KTHREAD *v14; // rbx
  __int64 v15; // rdx
  unsigned __int8 v16; // r15
  __int64 v17; // r8
  bool v18; // zf
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  _KLOCK_ENTRY *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int16 v25; // ax
  volatile signed __int64 v26; // rcx
  volatile signed __int64 **v27; // rax
  struct _KTHREAD *v28; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v30; // r13
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int16 v36; // ax
  struct _KTHREAD *v37; // rbx
  unsigned __int8 v38; // r14
  unsigned __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  _KLOCK_ENTRY *v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int16 v47; // ax
  volatile signed __int64 *v48; // [rsp+40h] [rbp-18h]
  int v49; // [rsp+A0h] [rbp+48h] BYREF
  int v50; // [rsp+A8h] [rbp+50h] BYREF
  int v51; // [rsp+B0h] [rbp+58h] BYREF
  int v52; // [rsp+B8h] [rbp+60h]

  if ( g_SessionLowboxMap )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&LowboxSessionMapLock, 0LL);
    v1 = g_SessionLowboxMap;
    v2 = -1;
    v3 = *(volatile signed __int64 **)g_SessionLowboxMap;
    while ( v3 != (volatile signed __int64 *)v1 )
    {
      v4 = (ULONG_PTR)(v3 + 3);
      v48 = (volatile signed __int64 *)*v3;
      v5 = KeGetCurrentThread();
      --v5->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v3 + 3), 0LL);
      v6 = (v3[5] & 4) != 0 ? 0x20 : 0;
      v7 = v6 + *((_DWORD *)v3 + 8) - 1;
      v8 = *((_QWORD *)v3 + 5) - ((v3[5] & 4) != 0 ? 4 : 0);
      if ( *((_DWORD *)v3 + 8) )
      {
        v9 = (_QWORD *)(v8 + 8 * ((unsigned __int64)v6 >> 6));
        for ( i = ((1LL << v6) - 1) | ~*v9; i == -1; i = ~*v9 )
        {
          if ( (unsigned __int64)++v9 > v8 + 8 * ((unsigned __int64)v7 >> 6) )
            goto LABEL_6;
        }
        _BitScanForward64(&v12, ~i);
        v11 = v12 + ((unsigned int)(((__int64)v9 - v8) >> 3) << 6);
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
        RtlDeleteHashTable(*((PRTL_DYNAMIC_HASH_TABLE *)v3 + 6));
        ExFreePoolWithTag(*((PVOID *)v3 + 5), 0);
        v26 = *v3;
        v27 = (volatile signed __int64 **)*((_QWORD *)v3 + 1);
        if ( *(volatile signed __int64 **)(*v3 + 8) != v3 || *v27 != v3 )
          __fastfail(3u);
        *v27 = (volatile signed __int64 *)v26;
        *(_QWORD *)(v26 + 8) = v27;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v3 + 3);
        v50 = 0;
        v28 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(v3 + 3)) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx(v28->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --v28->SpecialApcDisable;
        v30 = ++v28->AbAllocationRegionCount;
        LODWORD(v31) = ((char)v28->AbEntrySummary | (char)v28->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v18 = !_BitScanReverse((unsigned int *)&v32, v31);
          if ( v18 )
            goto LABEL_48;
          v33 = (__int64)&v28->LockEntries[v32];
          v31 = ~(1 << v32) & (unsigned int)v31;
          if ( (*(_BYTE *)(v33 + 26) & 1) != 0
            && (*(_DWORD *)(v33 + 32) & 1) == 0
            && (*(_QWORD *)(v33 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v33 + 40) == (_DWORD)SessionId )
          {
            *(_BYTE *)(v33 + 26) &= ~1u;
            if ( *(_QWORD *)(v33 + 32) )
              break;
          }
        }
        if ( !v33 )
        {
LABEL_48:
          if ( (*((_DWORD *)&v28->0 + 1) & 0x8000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v28, (ULONG_PTR)(v3 + 3), (unsigned int)SessionId, 0LL);
          goto LABEL_60;
        }
        *(_BYTE *)(v33 + 32) |= 2u;
        if ( *(__int64 *)(v33 + 32) < 0 )
          KiAbEntryRemoveFromTree(v33, SessionId, v31);
        v50 = 0;
        v50 = *(_DWORD *)(v33 + 88) & 0x1FFFF;
        *(_DWORD *)(v33 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v33 + 25) &= ~1u;
        *(_QWORD *)(v33 + 32) = 0LL;
        v34 = (v33 - (__int64)v28 - 800) / 96;
        if ( v30 == 1 )
          v28->AbEntrySummary |= 1 << v34;
        else
          _InterlockedOr8((volatile signed __int8 *)&v28->AbOrphanedEntrySummary, 1 << v34);
LABEL_60:
        --v28->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(&v28->Header.Lock, (__int64)(v3 + 3), (unsigned int *)&v50);
        v36 = v28->SpecialApcDisable + 1;
        v28->SpecialApcDisable = v36;
        if ( !v36 && ($69CD3F157F9F39B6F7113F2231989901 *)v28->ApcState.ApcListHead[0].Flink != &v28->152 )
          KiCheckForKernelApcDelivery(v35);
        KeLeaveCriticalRegion();
        ExFreePoolWithTag((PVOID)v3, 0);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v3 + 3);
        v49 = 0;
        v14 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(v3 + 3)) == 1 )
          v15 = (unsigned int)MmGetSessionIdEx(v14->ApcState.Process);
        else
          v15 = 0xFFFFFFFFLL;
        --v14->SpecialApcDisable;
        v16 = ++v14->AbAllocationRegionCount;
        LODWORD(v17) = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v18 = !_BitScanReverse((unsigned int *)&v19, v17);
          v52 = v19;
          if ( v18 )
            goto LABEL_22;
          v20 = 1 << v19;
          v21 = v19;
          v22 = &v14->LockEntries[v21];
          v17 = ~v20 & (unsigned int)v17;
          if ( (v22->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v22->LockState.0 & 1) == 0
            && (*(_QWORD *)&v22->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
            && v22->LockState.SessionId == (_DWORD)v15 )
          {
            v22->AcquiredByte &= ~1u;
            if ( v22->LockState.0 )
              break;
          }
        }
        if ( !v22 )
        {
LABEL_22:
          if ( (*((_DWORD *)&v14->0 + 1) & 0x8000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v14, v4, (unsigned int)v15, 0LL);
          goto LABEL_34;
        }
        v22->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v22->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree((__int64)&v14->LockEntries[v21], v15, v17);
        v49 = 0;
        v49 = v22->BoostBitmap.AllFields & 0x1FFFF;
        v22->BoostBitmap.AllFields &= 0xFFFE0000;
        v22->ThreadLocalFlags &= ~1u;
        v22->LockState.0 = 0LL;
        v23 = ((char *)v22 - (char *)v14 - 800) / 96;
        if ( v16 == 1 )
          v14->AbEntrySummary |= 1 << v23;
        else
          _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v23);
LABEL_34:
        --v14->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(&v14->Header.Lock, v4, (unsigned int *)&v49);
        v25 = v14->SpecialApcDisable + 1;
        v14->SpecialApcDisable = v25;
        if ( !v25 && ($69CD3F157F9F39B6F7113F2231989901 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
          KiCheckForKernelApcDelivery(v24);
        KeLeaveCriticalRegion();
      }
      v3 = v48;
      v1 = g_SessionLowboxMap;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&LowboxSessionMapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&LowboxSessionMapLock);
    v51 = 0;
    v37 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&LowboxSessionMapLock) == 1 )
      v2 = MmGetSessionIdEx(v37->ApcState.Process);
    --v37->SpecialApcDisable;
    v38 = ++v37->AbAllocationRegionCount;
    v39 = (unsigned __int64)&LowboxSessionMapLock & 0x7FFFFFFFFFFFFFFCLL;
    LODWORD(v40) = ((char)v37->AbEntrySummary | (char)v37->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v18 = !_BitScanReverse((unsigned int *)&v41, v40);
      if ( v18 )
        goto LABEL_73;
      v42 = 1 << v41;
      v43 = v41;
      v44 = &v37->LockEntries[v43];
      v40 = ~v42 & (unsigned int)v40;
      if ( (v44->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v44->LockState.0 & 1) == 0
        && (*(_QWORD *)&v44->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v39
        && v44->LockState.SessionId == v2 )
      {
        v44->AcquiredByte &= ~1u;
        if ( v44->LockState.0 )
          break;
      }
    }
    if ( !v44 )
    {
LABEL_73:
      if ( (*((_DWORD *)&v37->0 + 1) & 0x8000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v37, (ULONG_PTR)&LowboxSessionMapLock, v2, 0LL);
      goto LABEL_85;
    }
    v44->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v44->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree((__int64)&v37->LockEntries[v43], v40, v39);
    v51 = 0;
    v51 = v44->BoostBitmap.AllFields & 0x1FFFF;
    v44->BoostBitmap.AllFields &= 0xFFFE0000;
    v44->ThreadLocalFlags &= ~1u;
    v44->LockState.0 = 0LL;
    v45 = ((char *)v44 - (char *)v37 - 800) / 96;
    if ( v38 == 1 )
      v37->AbEntrySummary |= 1 << v45;
    else
      _InterlockedOr8((volatile signed __int8 *)&v37->AbOrphanedEntrySummary, 1 << v45);
LABEL_85:
    --v37->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(&v37->Header.Lock, (__int64)&LowboxSessionMapLock, (unsigned int *)&v51);
    v47 = v37->SpecialApcDisable + 1;
    v37->SpecialApcDisable = v47;
    if ( !v47 && ($69CD3F157F9F39B6F7113F2231989901 *)v37->ApcState.ApcListHead[0].Flink != &v37->152 )
      KiCheckForKernelApcDelivery(v46);
    KeLeaveCriticalRegion();
  }
}
