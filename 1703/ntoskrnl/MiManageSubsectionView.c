/*
 * XREFs of MiManageSubsectionView @ 0x1400A98F0
 * Callers:
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     MiRemoveFromSystemSpace @ 0x140060690 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     MmUnmapViewInSystemCache @ 0x1400A83B0 (MmUnmapViewInSystemCache.c)
 *     MmMapViewInSystemCache @ 0x1400A9520 (MmMapViewInSystemCache.c)
 *     MiSessionInsertImage @ 0x140148C0C (MiSessionInsertImage.c)
 *     MiSessionRemoveImage @ 0x140149B04 (MiSessionRemoveImage.c)
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 *     MiConstructLoaderEntry @ 0x1404B65FC (MiConstructLoaderEntry.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall MiManageSubsectionView(__int64 *a1, _QWORD *a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbp
  ULONG_PTR v8; // rsi
  int v9; // ebx
  int v10; // ebx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // r14
  struct _KTHREAD *v15; // r14
  struct _KTHREAD *v16; // rbx
  ULONG_PTR SessionId; // r9
  BOOL v18; // r15d
  __int64 v19; // r8
  __int64 v20; // rdx
  bool v21; // zf
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  _KLOCK_ENTRY *v25; // rdi
  __int64 v26; // rdx
  __int16 v27; // ax
  int v29; // ebx
  __int64 v30; // rax
  _QWORD *v31; // rbp
  __int64 v32; // rcx
  _QWORD *v33; // rax
  int v34; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = *a1;
  --CurrentThread->SpecialApcDisable;
  v8 = v5 + 104;
  ExAcquirePushLockExclusiveEx(v5 + 104, 0LL);
  v9 = a3 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v29 = v10 - 1;
      if ( v29 )
      {
        if ( v29 == 1 && (*(_DWORD *)(v5 + 56) & 0x400) == 0 )
        {
          v32 = *a2;
          v33 = (_QWORD *)a2[1];
          if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v33 != a2 )
            __fastfail(3u);
          *v33 = v32;
          *(_QWORD *)(v32 + 8) = v33;
        }
      }
      else if ( (*(_DWORD *)(v5 + 56) & 0x400) == 0 )
      {
        v30 = *(_QWORD *)(v5 + 8);
        v31 = (_QWORD *)(v5 + 8);
        if ( *(_QWORD **)(v30 + 8) != v31 )
          __fastfail(3u);
        *a2 = v30;
        a2[1] = v31;
        *(_QWORD *)(v30 + 8) = a2;
        *v31 = a2;
      }
    }
    else
    {
      v11 = *a2;
      v12 = (_QWORD *)a2[1];
      if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v12 != a2 )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
    }
  }
  else
  {
    v13 = a1[10];
    v14 = a1 + 10;
    if ( *(_QWORD **)(v13 + 8) != v14 )
      __fastfail(3u);
    *a2 = v13;
    a2[1] = v14;
    *(_QWORD *)(v13 + 8) = a2;
    *v14 = a2;
  }
  v15 = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  v34 = 0;
  v16 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v8) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(v16->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v16->SpecialApcDisable;
  v18 = ++v16->AbAllocationRegionCount == 1;
  v19 = v8 & 0x7FFFFFFFFFFFFFFCLL;
  LODWORD(v20) = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
  v21 = !_BitScanReverse((unsigned int *)&v22, v20);
  if ( v21 )
    goto LABEL_38;
  while ( 1 )
  {
    v23 = 1 << v22;
    v24 = v22;
    v25 = &v16->LockEntries[v24];
    v20 = ~v23 & (unsigned int)v20;
    if ( (v25->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v25->LockState.0 & 1) == 0
      && (*(_QWORD *)&v25->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v19
      && v25->LockState.SessionId == (_DWORD)SessionId )
    {
      v25->AcquiredByte &= ~1u;
      if ( v25->LockState.0 )
        break;
    }
    v21 = !_BitScanReverse((unsigned int *)&v22, v20);
    if ( v21 )
      goto LABEL_38;
  }
  if ( !v25 )
  {
LABEL_38:
    if ( (*((_DWORD *)&v16->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, v8, SessionId, 0LL);
  }
  else
  {
    v25->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v25->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree((__int64)&v16->LockEntries[v24], v20, v19);
    v34 = 0;
    v34 = v25->BoostBitmap.AllFields & 0x1FFFF;
    v25->BoostBitmap.AllFields &= 0xFFFE0000;
    v25->ThreadLocalFlags &= ~1u;
    v25->LockState.0 = 0LL;
    v26 = ((char *)v25 - (char *)v16 - 800) / 96;
    if ( v18 )
      v16->AbEntrySummary |= 1 << v26;
    else
      _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v26);
  }
  --v16->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v16, v8, &v34);
  v27 = v16->SpecialApcDisable + 1;
  v16->SpecialApcDisable = v27;
  if ( !v27 && ($69CD3F157F9F39B6F7113F2231989901 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery();
  return KiLeaveGuardedRegionUnsafe(v15);
}
