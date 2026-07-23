/*
 * XREFs of MiManageSubsectionView @ 0x1400DDC40
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 *     MiRemoveFromSystemSpace @ 0x14004671C (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x140046B30 (MiInsertInSystemSpace.c)
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MmMapViewInSystemCache @ 0x1400DD850 (MmMapViewInSystemCache.c)
 *     MiSessionRemoveImage @ 0x140154B38 (MiSessionRemoveImage.c)
 *     MiSessionInsertImage @ 0x14016C34C (MiSessionInsertImage.c)
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 *     MiConstructLoaderEntry @ 0x1405F8E14 (MiConstructLoaderEntry.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiManageSubsectionView(__int64 *a1, _QWORD *a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rsi
  ULONG_PTR v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // edi
  int v13; // edi
  int v14; // edi
  __int64 v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rcx
  struct _KTHREAD *v21; // r14
  struct _KTHREAD *v22; // rdi
  unsigned int SessionId; // r8d
  unsigned __int8 v24; // r15
  unsigned int v25; // edx
  bool v26; // zf
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  _KLOCK_ENTRY *v30; // rbx
  __int64 v31; // rdx
  _QWORD *result; // rax
  int v33; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = *a1;
  --CurrentThread->SpecialApcDisable;
  v8 = v5 + 104;
  ExAcquirePushLockExclusiveEx(v5 + 104, 0LL);
  v12 = a3 - 1;
  if ( !v12 )
  {
    v17 = a1[10];
    v18 = a1 + 10;
    if ( *(__int64 **)(v17 + 8) != a1 + 10 )
      __fastfail(3u);
    goto LABEL_19;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v19 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v20 = (_QWORD *)a2[1], (_QWORD *)*v20 != a2) )
      __fastfail(3u);
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
    goto LABEL_20;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    if ( v14 == 1 && (*(_DWORD *)(v5 + 56) & 0x400) == 0 )
    {
      v15 = *a2;
      if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v16 = (_QWORD *)a2[1], (_QWORD *)*v16 != a2) )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
    }
    goto LABEL_20;
  }
  if ( (*(_DWORD *)(v5 + 56) & 0x400) == 0 )
  {
    v17 = *(_QWORD *)(v5 + 8);
    v18 = (_QWORD *)(v5 + 8);
    if ( *(_QWORD *)(v17 + 8) != v5 + 8 )
      __fastfail(3u);
LABEL_19:
    *a2 = v17;
    a2[1] = v18;
    *(_QWORD *)(v17 + 8) = a2;
    *v18 = a2;
  }
LABEL_20:
  v21 = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 104), v9, v10, v11);
  v33 = 0;
  v22 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v5 + 104) == 1 )
    SessionId = MmGetSessionIdEx(v22->ApcState.Process);
  else
    SessionId = -1;
  --v22->SpecialApcDisable;
  v24 = ++v22->AbAllocationRegionCount;
  v25 = ((char)v22->AbEntrySummary | (char)v22->AbOrphanedEntrySummary) ^ 0x3F;
  v26 = !_BitScanReverse((unsigned int *)&v27, v25);
  if ( v26 )
    goto LABEL_32;
  while ( 1 )
  {
    v28 = 1 << v27;
    v29 = v27;
    v30 = &v22->LockEntries[v29];
    v25 &= ~v28;
    if ( (v30->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v30->LockState.0 & 1) == 0
      && (*(_QWORD *)&v30->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v8 & 0x7FFFFFFFFFFFFFFCLL)
      && v30->LockState.SessionId == SessionId )
    {
      v30->AcquiredByte &= ~1u;
      if ( v30->LockState.0 )
        break;
    }
    v26 = !_BitScanReverse((unsigned int *)&v27, v25);
    if ( v26 )
      goto LABEL_32;
  }
  if ( !v30 )
  {
LABEL_32:
    if ( (*((_DWORD *)&v22->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v22, v8, SessionId, 0LL);
  }
  else
  {
    v30->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v30->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v22->LockEntries[v29].TreeNode);
    v33 = 0;
    v33 = v30->BoostBitmap.AllFields & 0x1FFFF;
    v30->BoostBitmap.AllFields &= 0xFFFE0000;
    v30->ThreadLocalFlags &= ~1u;
    v30->LockState.0 = 0LL;
    v31 = ((char *)v30 - (char *)v22 - 800) / 96;
    if ( v24 == 1 )
      v22->AbEntrySummary |= 1 << v31;
    else
      _InterlockedOr8((volatile signed __int8 *)&v22->AbOrphanedEntrySummary, 1 << v31);
  }
  --v22->AbAllocationRegionCount;
  result = (_QWORD *)KiAbThreadRemoveBoosts(v22, v8, &v33);
  v26 = v22->SpecialApcDisable++ == -1;
  if ( v26 )
  {
    result = &v22->152;
    if ( (_QWORD *)*result != result )
      result = (_QWORD *)KiCheckForKernelApcDelivery();
  }
  v26 = v21->SpecialApcDisable++ == -1;
  if ( v26 )
  {
    result = &v21->152;
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
