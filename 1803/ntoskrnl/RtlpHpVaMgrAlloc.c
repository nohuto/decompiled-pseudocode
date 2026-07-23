/*
 * XREFs of RtlpHpVaMgrAlloc @ 0x140296050
 * Callers:
 *     RtlpHpVaMgrCtxAlloc @ 0x1402966FC (RtlpHpVaMgrCtxAlloc.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpAcquireLockExclusive @ 0x1400AC764 (RtlpHpAcquireLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlpHpVaMgrAllocAligned @ 0x14029668C (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrFree @ 0x140296EB4 (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeCreate @ 0x140297130 (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpVaMgrRangeFind @ 0x140297248 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrRangeSplit @ 0x140297400 (RtlpHpVaMgrRangeSplit.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x140297470 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpEnvFreeVA @ 0x140297764 (RtlpHpEnvFreeVA.c)
 */

__int64 __fastcall RtlpHpVaMgrAlloc(__int64 SpinLock, unsigned __int64 *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v6; // rdi
  unsigned __int8 v9; // dl
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // r14
  KIRQL v13; // r15
  _RTL_BALANCED_NODE *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // r12d
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rsi
  char v24; // al
  struct _KTHREAD *CurrentThread; // rdi
  __int64 SessionId; // rdx
  unsigned __int8 v27; // r15
  unsigned int v28; // r8d
  bool v29; // zf
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rax
  struct _KTHREAD *v35; // rdi
  unsigned __int8 v36; // r14
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rcx
  _KLOCK_ENTRY *v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rdx
  int v44; // [rsp+30h] [rbp-39h] BYREF
  int v45; // [rsp+34h] [rbp-35h] BYREF
  unsigned __int64 v46; // [rsp+38h] [rbp-31h] BYREF
  __int64 v47; // [rsp+40h] [rbp-29h] BYREF
  int v48; // [rsp+48h] [rbp-21h]
  int v49; // [rsp+4Ch] [rbp-1Dh]
  __int64 v50; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v51[4]; // [rsp+58h] [rbp-11h] BYREF
  _DWORD v52[4]; // [rsp+78h] [rbp+Fh]

  v4 = *a2;
  v52[0] = 0x100000;
  v52[1] = 0x100000;
  v6 = a3;
  v52[2] = 0x200000;
  v52[3] = 0x40000000;
  if ( !v4 )
    NT_ASSERT("*SizeInOut > 0");
  v9 = *(_BYTE *)(SpinLock + 46);
  v10 = (unsigned __int64)(*(unsigned __int16 *)(SpinLock + 40) << 20) >> 1;
  v46 = v4;
  if ( v4 <= v10 )
  {
    v12 = v4 >> 20;
    v13 = RtlpHpAcquireLockExclusive((volatile LONG *)SpinLock, v9 & 1);
    v14 = (_RTL_BALANCED_NODE *)RtlpHpVaMgrRangeFind(
                                  SpinLock,
                                  (unsigned __int16)v12,
                                  (unsigned __int16)(v6 >> 20),
                                  &v50);
    v18 = -1;
    v19 = (__int64)v14;
    if ( v14 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 8), v14);
      v23 = v50;
      if ( v50 != v19 )
      {
        *(_QWORD *)v19 = 0LL;
        *(_QWORD *)(v19 + 8) = 0LL;
        *(_QWORD *)(v19 + 16) = 0LL;
        *(_BYTE *)v19 = 1;
        v24 = *(_BYTE *)(SpinLock + 44);
        *(_QWORD *)(v19 + 8) = 0LL;
        *(_BYTE *)(v19 + 1) = v24;
        RtlpHpVaMgrRangeSplit(SpinLock, v19, (v23 - v19) >> 5);
        RtlpHpVaMgrFree(SpinLock, v19);
        v19 = v23;
      }
    }
    else
    {
      if ( (*(_BYTE *)(SpinLock + 46) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)SpinLock);
        __writecr8(v13);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SpinLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)SpinLock, v15, v16, v17);
        v44 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(SpinLock) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --CurrentThread->SpecialApcDisable;
        v27 = ++CurrentThread->AbAllocationRegionCount;
        v28 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v29 = !_BitScanReverse((unsigned int *)&v30, v28);
          v48 = v30;
          if ( v29 )
            break;
          v31 = (__int64)&CurrentThread->LockEntries[v30];
          v28 &= ~(1 << v30);
          if ( (*(_BYTE *)(v31 + 26) & 1) != 0
            && (*(_DWORD *)(v31 + 32) & 1) == 0
            && (*(_QWORD *)(v31 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (SpinLock & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v31 + 40) == (_DWORD)SessionId )
          {
            *(_BYTE *)(v31 + 26) &= ~1u;
            if ( *(_QWORD *)(v31 + 32) )
            {
              if ( v31 )
              {
                *(_BYTE *)(v31 + 32) |= 2u;
                if ( *(__int64 *)(v31 + 32) < 0 )
                  KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v31, SessionId);
                v44 = 0;
                v44 = *(_DWORD *)(v31 + 88) & 0x1FFFF;
                *(_DWORD *)(v31 + 88) &= 0xFFFE0000;
                *(_BYTE *)(v31 + 25) &= ~1u;
                *(_QWORD *)(v31 + 32) = 0LL;
                v32 = (v31 - (__int64)CurrentThread - 800) / 96;
                if ( v27 == 1 )
                  CurrentThread->AbEntrySummary |= 1 << v32;
                else
                  _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v32);
                goto LABEL_33;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, SpinLock, (unsigned int)SessionId, 0LL);
LABEL_33:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, SpinLock, (__int64)&v44);
        v29 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v29
          && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        KeLeaveCriticalRegion();
      }
      v19 = RtlpHpVaMgrRegionAllocate(SpinLock);
      if ( !v19 )
        return 0LL;
      v13 = RtlpHpAcquireLockExclusive((volatile LONG *)SpinLock, *(_BYTE *)(SpinLock + 46) & 1);
    }
    v33 = *(_QWORD *)(*(_QWORD *)(SpinLock + 24) + 8LL)
        + ((v19 - *(_QWORD *)(*(_QWORD *)(SpinLock + 24) + 32LL)) >> *(_DWORD *)(*(_QWORD *)(SpinLock + 24) + 88LL) << 20);
    *(_QWORD *)v19 = 0LL;
    *(_QWORD *)(v19 + 8) = 0LL;
    *(_QWORD *)(v19 + 16) = 0LL;
    *(_BYTE *)v19 = 1;
    *(_BYTE *)(v19 + 1) = *(_BYTE *)(SpinLock + 44);
    *(_QWORD *)(v19 + 8) = a4;
    if ( *(_WORD *)(v19 + 24) > (unsigned __int16)v12 )
    {
      v34 = RtlpHpVaMgrRangeSplit(SpinLock, v19, (unsigned __int16)v12);
      RtlpHpVaMgrFree(SpinLock, v34);
    }
    v47 = v33;
    if ( (*(_BYTE *)(SpinLock + 46) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)SpinLock);
      __writecr8(v13);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SpinLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)SpinLock, v20, v21, v22);
      v45 = 0;
      v35 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(SpinLock) == 1 )
        v18 = MmGetSessionIdEx((__int64)v35->ApcState.Process);
      --v35->SpecialApcDisable;
      v36 = ++v35->AbAllocationRegionCount;
      LODWORD(v37) = ((char)v35->AbEntrySummary | (char)v35->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v29 = !_BitScanReverse((unsigned int *)&v41, v37);
        v49 = v41;
        if ( v29 )
          goto LABEL_57;
        v38 = 1 << v41;
        v39 = v41;
        v40 = &v35->LockEntries[v39];
        v37 = ~v38 & (unsigned int)v37;
        if ( (v40->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v40->LockState.0 & 1) == 0
          && (*(_QWORD *)&v40->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (SpinLock & 0x7FFFFFFFFFFFFFFCLL)
          && v40->LockState.SessionId == v18 )
        {
          v40->AcquiredByte &= ~1u;
          if ( v40->LockState.0 )
            break;
        }
      }
      if ( !v40 )
      {
LABEL_57:
        if ( (*((_DWORD *)&v35->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v35, SpinLock, v18, 0LL);
        goto LABEL_64;
      }
      v40->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v40->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v35->LockEntries[v39].TreeNode, v37);
      v45 = 0;
      v45 = v40->BoostBitmap.AllFields & 0x1FFFF;
      v40->BoostBitmap.AllFields &= 0xFFFE0000;
      v40->ThreadLocalFlags &= ~1u;
      v40->LockState.0 = 0LL;
      v42 = ((char *)v40 - (char *)v35 - 800) / 96;
      if ( v36 == 1 )
        v35->AbEntrySummary |= 1 << v42;
      else
        _InterlockedOr8((volatile signed __int8 *)&v35->AbOrphanedEntrySummary, 1 << v42);
LABEL_64:
      --v35->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v35, SpinLock, (__int64)&v45);
      v29 = v35->SpecialApcDisable++ == -1;
      if ( v29 && ($005F0E83B22994B61E86C72E0CE43C71 *)v35->ApcState.ApcListHead[0].Flink != &v35->152 )
        KiCheckForKernelApcDelivery();
      KeLeaveCriticalRegion();
    }
    return v47;
  }
  if ( a3 <= (unsigned int)v52[((unsigned __int64)v9 >> 1) & 3] )
    v6 = (unsigned int)v52[((unsigned __int64)v9 >> 1) & 3];
  v46 = v4 + v6 - ((v6 - 1) & (v6 + v4 - 1)) - 1;
  v47 = RtlpHpVaMgrAllocAligned(SpinLock, &v46, v6);
  v11 = v47;
  if ( v47 )
  {
    memset(v51, 0, sizeof(v51));
    BYTE1(v51[0]) = *(_BYTE *)(SpinLock + 44);
    v51[3] = v46 >> 20;
    LOBYTE(v51[0]) = 5;
    v51[1] = a4;
    if ( !RtlpHpVaMgrRangeCreate(SpinLock, v47, v51) )
    {
      RtlpHpEnvFreeVA(&v47, &v46);
      return 0LL;
    }
    *a2 = v46;
    return v47;
  }
  return v11;
}
