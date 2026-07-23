/*
 * XREFs of MiManageSubsectionView @ 0x1400A3110
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140053130 (MmUnmapViewInSystemCache.c)
 *     MmMapViewInSystemCache @ 0x1400A2D00 (MmMapViewInSystemCache.c)
 *     MiInsertInSystemSpace @ 0x1400B6230 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1400B69C0 (MiRemoveFromSystemSpace.c)
 *     MiDeletePartialVad @ 0x1401123D4 (MiDeletePartialVad.c)
 *     MiSessionInsertImage @ 0x1401550D4 (MiSessionInsertImage.c)
 *     MiSessionRemoveImage @ 0x140158EEC (MiSessionRemoveImage.c)
 *     MiConstructLoaderEntry @ 0x140471244 (MiConstructLoaderEntry.c)
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiManageSubsectionView(__int64 *a1, _QWORD *a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbp
  unsigned __int64 v8; // rsi
  int v9; // edi
  int v10; // edi
  __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // r14
  struct _KTHREAD *v15; // rbp
  struct _KTHREAD *v16; // rbx
  ULONG_PTR SessionId; // r9
  BOOL v18; // r15d
  unsigned int v19; // edx
  bool v20; // zf
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  _KLOCK_ENTRY *v24; // rdi
  __int64 v25; // rdx
  _QWORD *result; // rax
  int v27; // edi
  __int64 v28; // rax
  _QWORD *v29; // rbp
  __int64 v30; // rax
  _QWORD *v31; // rcx
  int v32; // [rsp+70h] [rbp+18h] BYREF

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
      v27 = v10 - 1;
      if ( v27 )
      {
        if ( v27 == 1 && (*(_DWORD *)(v5 + 56) & 0x400) == 0 )
        {
          v30 = *a2;
          if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v31 = (_QWORD *)a2[1], (_QWORD *)*v31 != a2) )
            __fastfail(3u);
          *v31 = v30;
          *(_QWORD *)(v30 + 8) = v31;
        }
      }
      else if ( (*(_DWORD *)(v5 + 56) & 0x400) == 0 )
      {
        v28 = *(_QWORD *)(v5 + 8);
        v29 = (_QWORD *)(v5 + 8);
        if ( *(_QWORD **)(v28 + 8) != v29 )
          __fastfail(3u);
        *a2 = v28;
        a2[1] = v29;
        *(_QWORD *)(v28 + 8) = a2;
        *v29 = a2;
      }
    }
    else
    {
      v11 = *a2;
      if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v12 = (_QWORD *)a2[1], (_QWORD *)*v12 != a2) )
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
  v32 = 0;
  v16 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v8) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v16->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v16->SpecialApcDisable;
  v18 = ++v16->AbAllocationRegionCount == 1;
  v19 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
  v20 = !_BitScanReverse((unsigned int *)&v21, v19);
  if ( v20 )
    goto LABEL_41;
  while ( 1 )
  {
    v22 = 1 << v21;
    v23 = v21;
    v24 = &v16->LockEntries[v23];
    v19 &= ~v22;
    if ( (v24->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v24->LockState.0 & 1) == 0
      && (*(_QWORD *)&v24->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v8 & 0x7FFFFFFFFFFFFFFCLL)
      && v24->LockState.SessionId == (_DWORD)SessionId )
    {
      v24->AcquiredByte &= ~1u;
      if ( v24->LockState.0 )
        break;
    }
    v20 = !_BitScanReverse((unsigned int *)&v21, v19);
    if ( v20 )
      goto LABEL_41;
  }
  if ( !v24 )
  {
LABEL_41:
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, v8, SessionId, 0LL);
  }
  else
  {
    v24->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v24->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v16->LockEntries[v23].TreeNode);
    v32 = 0;
    v32 = v24->BoostBitmap.AllFields & 0x1FFFF;
    v24->BoostBitmap.AllFields &= 0xFFFE0000;
    v24->ThreadLocalFlags &= ~1u;
    v24->LockState.0 = 0LL;
    v25 = ((char *)v24 - (char *)v16 - 800) / 96;
    if ( v18 )
      v16->AbEntrySummary |= 1 << v25;
    else
      _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v25);
  }
  --v16->AbAllocationRegionCount;
  result = (_QWORD *)KiAbThreadRemoveBoosts((ULONG_PTR)v16, v8, (unsigned int *)&v32);
  v20 = v16->SpecialApcDisable++ == -1;
  if ( v20 && ($B476B70DB57F76B110DA5B9238C3E934 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    result = (_QWORD *)KiCheckForKernelApcDelivery();
  v20 = v15->SpecialApcDisable++ == -1;
  if ( v20 )
  {
    result = &v15->152;
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
