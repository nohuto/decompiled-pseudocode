/*
 * XREFs of CcGetVirtualAddress @ 0x14007B2D0
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14001C320 (CcMapAndCopyInToCache.c)
 *     CcPinFileData @ 0x140079AD0 (CcPinFileData.c)
 *     CcPurgeAndClearCacheSection @ 0x1400F208C (CcPurgeAndClearCacheSection.c)
 *     CcPrepareMdlWrite @ 0x14012D230 (CcPrepareMdlWrite.c)
 *     CcMapAndCopyFromCache @ 0x1404A68D0 (CcMapAndCopyFromCache.c)
 *     CcMapData @ 0x1404A6B70 (CcMapData.c)
 *     CcMdlRead @ 0x140507110 (CcMdlRead.c)
 *     CcMapDataCommon @ 0x140570454 (CcMapDataCommon.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     CcUnmapVacbArray @ 0x140062A30 (CcUnmapVacbArray.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     CcGetVacbMiss @ 0x1400A3D50 (CcGetVacbMiss.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     CcInsertVacbArray @ 0x14014801C (CcInsertVacbArray.c)
 *     CcAllocateInitializeVacbArray @ 0x1401480DC (CcAllocateInitializeVacbArray.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     CcBuildUpHighPriorityMappings @ 0x1401E14D0 (CcBuildUpHighPriorityMappings.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall CcGetVirtualAddress(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4, int a5, int a6)
{
  __int64 v6; // r12
  unsigned int v7; // r13d
  __int64 v9; // rbx
  __int64 v11; // r14
  unsigned __int8 CurrentIrql; // r15
  signed __int32 v13; // edx
  ULONG_PTR *v14; // rbp
  int v15; // ebp
  __int64 v16; // rdx
  __int64 VacbMiss; // r14
  __int64 v19; // r10
  int v20; // r8d
  int v21; // ecx
  int v22; // r9d
  __int64 v23; // rax
  unsigned int v24; // r8d
  __int64 *v25; // rdx
  __int64 InitializeVacbArray; // rax
  __int64 v27; // r14
  KIRQL v28; // bp
  bool v29; // zf
  signed __int32 v30; // eax
  int v31; // [rsp+30h] [rbp-68h]
  BOOL v32; // [rsp+34h] [rbp-64h]
  __int64 v33; // [rsp+38h] [rbp-60h] BYREF
  __int64 v34; // [rsp+40h] [rbp-58h] BYREF
  __int64 v35; // [rsp+48h] [rbp-50h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v37; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v38; // [rsp+A8h] [rbp+10h]
  __int64 *v39; // [rsp+B0h] [rbp+18h]
  _DWORD *v40; // [rsp+B8h] [rbp+20h]

  v40 = a4;
  v39 = a3;
  v6 = *(_QWORD *)(a1 + 528);
  v31 = 0;
  v7 = a2 & 0x3FFFF;
  v9 = a2 - (a2 & 0x3FFFF);
  v33 = v9;
  if ( *(_QWORD *)(a1 + 168) )
  {
    v11 = *(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140388100, CurrentIrql);
    }
    else
    {
      v37 = 0;
      if ( _interlockedbittestandset(&dword_140388100, 0x1Fu) )
        v37 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140388100, CurrentIrql);
      v13 = dword_140388100;
      while ( (v13 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v13 & 0x40000000) == 0 )
        {
          v30 = _InterlockedCompareExchange(&dword_140388100, v13 | 0x40000000, v13);
          v29 = v13 == v30;
          v13 = v30;
          if ( !v29 )
            continue;
        }
        KeYieldProcessorEx(&v37);
        v13 = dword_140388100;
      }
      v9 = v33;
    }
    if ( *(_QWORD *)v11 )
      v14 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * (*(_WORD *)(*(_QWORD *)v11 + 60LL) & 0x3FF));
    else
      v14 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140388100, retaddr);
    else
      dword_140388100 = 0;
    __writecr8(CurrentIrql);
    if ( v6 != *(_QWORD *)(v14[21] + 8) )
      KeBugCheckEx(0x34u, 0x1292uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  v32 = (*(_DWORD *)(a1 + 152) & 0x200) != 0;
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 || a5 )
  {
    v15 = 1;
    v38 = 1;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 5 || *(_DWORD *)(v6 + 856) >= 5u )
      goto LABEL_14;
  }
  else
  {
    v15 = 0;
    v38 = 0;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 5 )
      goto LABEL_14;
  }
  InitializeVacbArray = CcAllocateInitializeVacbArray();
  v27 = InitializeVacbArray;
  if ( InitializeVacbArray )
  {
    if ( v15 == 1 )
      CcBuildUpHighPriorityMappings(v6, InitializeVacbArray);
    v28 = KeAcquireQueuedSpinLock(4uLL);
    CcInsertVacbArray(v6, v27);
    KeReleaseQueuedSpinLock(4uLL, v28);
  }
LABEL_14:
  if ( a2 > *(_QWORD *)(a1 + 32) )
    KeBugCheckEx(0x34u, 0x551uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  ExAcquirePushLockSharedEx(a1 + 104, 0LL);
  if ( a6
    || (*(_DWORD *)(a1 + 152) & 0x800200) == 0x200
    || (*(_DWORD *)(a1 + 152) & 0x40000000) != 0
    || (v9 & 0xFFFFF) != 0
    || v9 < 0x100000
    || v9 == *(_QWORD *)(a1 + 336) )
  {
    v31 = 1;
  }
  v16 = *(_QWORD *)(a1 + 32);
  if ( v16 > 0x2000000 )
  {
    v19 = a2;
    v20 = 0;
    v21 = 25;
    do
    {
      v22 = v21;
      v21 += 7;
      ++v20;
    }
    while ( v16 > 1LL << v21 );
    VacbMiss = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * (a2 >> v22));
    if ( !VacbMiss )
      goto LABEL_39;
    do
    {
      if ( !v20 )
        break;
      v23 = 1LL << v22;
      v22 -= 7;
      v19 &= v23 - 1;
      --v20;
      VacbMiss = *(_QWORD *)(VacbMiss + 8 * (v19 >> v22));
    }
    while ( VacbMiss );
  }
  else
  {
    VacbMiss = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)a2 >> 18));
  }
  if ( VacbMiss )
  {
    if ( !(unsigned __int16)_InterlockedIncrement((volatile signed __int32 *)(VacbMiss + 16)) )
      KeBugCheckEx(0x34u, 0x9AEuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    ExReleasePushLockEx(a1 + 104, 0LL);
    v9 = v33;
    goto LABEL_26;
  }
LABEL_39:
  ExReleasePushLockEx(a1 + 104, 0LL);
  VacbMiss = CcGetVacbMiss(a1, a2, v32, v38);
  if ( (*(_DWORD *)(a1 + 152) & 0x8000200) == 0x200 && (v9 & 0xFFFFF) == 0 && v9 >= 0x100000 )
  {
    v9 -= 0x100000LL;
    v33 = v9;
    CcUnmapVacbArray(a1, &v33, 0x100000u, 1, 0, 0);
  }
LABEL_26:
  if ( !v31 )
  {
    if ( (*(_DWORD *)(a1 + 152) & 0x800000) != 0 )
    {
      if ( v9 >= 8650752 )
      {
        v33 = v9 - 0x800000;
        CcUnmapVacbArray(a1, &v33, 0x800000u, 1, 0, 0);
        goto LABEL_27;
      }
      v35 = 0x40000LL;
      v25 = &v35;
    }
    else
    {
      v24 = CcUnmapBehindLength;
      if ( v9 >= (unsigned int)CcUnmapBehindLength )
      {
        v25 = &v33;
        v33 = v9 - (unsigned int)CcUnmapBehindLength;
LABEL_46:
        CcUnmapVacbArray(a1, v25, v24, 1, 0, 0);
        goto LABEL_27;
      }
      v34 = 0LL;
      v25 = &v34;
    }
    v24 = v9;
    goto LABEL_46;
  }
LABEL_27:
  *v39 = VacbMiss;
  *v40 = 0x40000 - v7;
  return v7 + *(_QWORD *)VacbMiss;
}
