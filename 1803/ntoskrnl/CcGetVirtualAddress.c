/*
 * XREFs of CcGetVirtualAddress @ 0x14011DD70
 * Callers:
 *     CcPrepareMdlWrite @ 0x140098000 (CcPrepareMdlWrite.c)
 *     CcPurgeAndClearCacheSection @ 0x14009ADF4 (CcPurgeAndClearCacheSection.c)
 *     CcMapAndCopyInToCache @ 0x140112290 (CcMapAndCopyInToCache.c)
 *     CcPinFileData @ 0x14011C510 (CcPinFileData.c)
 *     CcMdlRead @ 0x1405392E0 (CcMdlRead.c)
 *     CcMapDataCommon @ 0x14055E4E4 (CcMapDataCommon.c)
 *     CcMapAndCopyFromCache @ 0x1405B6B00 (CcMapAndCopyFromCache.c)
 *     CcMapData @ 0x1405B6DB0 (CcMapData.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     CcUnmapVacbArray @ 0x1400DCE30 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x1400DD440 (CcGetVacbMiss.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     CcInsertVacbArray @ 0x1401628B4 (CcInsertVacbArray.c)
 *     CcAllocateInitializeVacbArray @ 0x140162ED4 (CcAllocateInitializeVacbArray.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     CcBuildUpHighPriorityMappings @ 0x140220A10 (CcBuildUpHighPriorityMappings.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall CcGetVirtualAddress(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 **a3,
        _DWORD *a4,
        int a5,
        int a6)
{
  __int64 v6; // r15
  unsigned int v7; // r13d
  __int64 v9; // rbx
  __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v15; // edx
  ULONG_PTR *v16; // rbx
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  int v19; // eax
  BOOL v20; // r12d
  int v21; // esi
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // r10
  volatile signed __int32 *VacbMiss; // rsi
  __int64 v27; // r11
  int v28; // edx
  unsigned int v29; // ecx
  __int64 v30; // rax
  __int64 InitializeVacbArray; // rax
  __int64 v32; // r12
  KIRQL v33; // si
  unsigned int v34; // r8d
  __int64 *v35; // rdx
  int v36; // eax
  bool v37; // zf
  signed __int32 v38; // eax
  int v39; // eax
  int v40; // [rsp+30h] [rbp-68h]
  int v41; // [rsp+34h] [rbp-64h]
  __int64 v42; // [rsp+38h] [rbp-60h] BYREF
  __int64 v43; // [rsp+40h] [rbp-58h] BYREF
  __int64 v44; // [rsp+48h] [rbp-50h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v46; // [rsp+A0h] [rbp+8h] BYREF
  BOOL v47; // [rsp+A8h] [rbp+10h]
  volatile signed __int32 **v48; // [rsp+B0h] [rbp+18h]
  _DWORD *v49; // [rsp+B8h] [rbp+20h]

  v49 = a4;
  v48 = a3;
  v6 = *(_QWORD *)(a1 + 528);
  v41 = 0;
  v7 = a2 & 0x3FFFF;
  v9 = a2 - (a2 & 0x3FFFF);
  v42 = v9;
  if ( *(_QWORD *)(a1 + 168) )
  {
    v11 = *(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_1403CB280, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v46 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v36 = SchedulerAssist[5];
          SchedulerAssist[5] = v36 + 1;
          if ( v36 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(&dword_1403CB280, 0x1Fu) )
      {
        KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
        v46 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_1403CB280, CurrentIrql);
      }
      v15 = dword_1403CB280;
      while ( (v15 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v15 & 0x40000000) == 0 )
        {
          v38 = _InterlockedCompareExchange(&dword_1403CB280, v15 | 0x40000000, v15);
          v37 = v15 == v38;
          v15 = v38;
          if ( !v37 )
            continue;
        }
        KeYieldProcessorEx(&v46);
        v15 = dword_1403CB280;
      }
    }
    if ( *(_QWORD *)v11 )
      v16 = *(ULONG_PTR **)(qword_1403CBD88 + 8LL * (*(_WORD *)(*(_QWORD *)v11 + 60LL) & 0x3FF));
    else
      v16 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_1403CB280, retaddr);
    else
      dword_1403CB280 = 0;
    v17 = KeGetCurrentPrcb();
    v18 = v17->SchedulerAssist;
    if ( v18 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v39 = v18[5] - 1;
        v18[5] = v39;
        if ( !v39 && !*((_BYTE *)v18 + 25) && !*((_BYTE *)v18 + 27) )
          KiPerformUnboostKick(v17);
      }
    }
    __writecr8(CurrentIrql);
    if ( v6 != *(_QWORD *)(v16[21] + 8) )
      KeBugCheckEx(0x34u, 0x12A5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v9 = v42;
  }
  v19 = *(_DWORD *)(a1 + 152) & 0x200;
  v20 = v19 != 0;
  v47 = v20;
  if ( v19 || a5 )
  {
    v21 = 1;
    v40 = 1;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 5 || *(_DWORD *)(v6 + 856) >= 5u )
      goto LABEL_16;
  }
  else
  {
    v21 = 0;
    v40 = 0;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 5 )
      goto LABEL_16;
  }
  InitializeVacbArray = CcAllocateInitializeVacbArray();
  v32 = InitializeVacbArray;
  if ( InitializeVacbArray )
  {
    if ( v21 == 1 )
      CcBuildUpHighPriorityMappings(v6, InitializeVacbArray);
    v33 = KeAcquireQueuedSpinLock(4uLL);
    CcInsertVacbArray(v6, v32);
    KeReleaseQueuedSpinLock(4uLL, v33);
  }
  v20 = v47;
LABEL_16:
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
    v41 = 1;
  }
  v23 = *(_QWORD *)(a1 + 32);
  v24 = *(_QWORD *)(a1 + 88);
  if ( v23 > 0x2000000 )
  {
    v27 = a2;
    v28 = 0;
    v29 = 25;
    do
    {
      v22 = v29;
      v29 += 7;
      ++v28;
    }
    while ( v23 > 1LL << v29 );
    VacbMiss = *(volatile signed __int32 **)(v24 + 8 * (a2 >> v22));
    if ( !VacbMiss )
      goto LABEL_45;
    do
    {
      if ( !v28 )
        break;
      v30 = 1LL << v22;
      v22 = (unsigned int)(v22 - 7);
      v27 &= v30 - 1;
      --v28;
      VacbMiss = *(volatile signed __int32 **)&VacbMiss[2 * (v27 >> v22)];
    }
    while ( VacbMiss );
  }
  else
  {
    VacbMiss = *(volatile signed __int32 **)(v24 + 8 * ((unsigned __int64)(unsigned int)a2 >> 18));
  }
  if ( VacbMiss )
  {
    if ( !(unsigned __int16)_InterlockedIncrement(VacbMiss + 4) )
      KeBugCheckEx(0x34u, 0x9BAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    ExReleasePushLockEx(a1 + 104, 0LL, v23, v22);
    v9 = v42;
    goto LABEL_28;
  }
LABEL_45:
  ExReleasePushLockEx(a1 + 104, 0LL, v23, v22);
  VacbMiss = (volatile signed __int32 *)CcGetVacbMiss(a1, a2, v20, v40);
  if ( (*(_DWORD *)(a1 + 152) & 0x8000200) == 0x200 && (v9 & 0xFFFFF) == 0 && v9 >= 0x100000 )
  {
    v9 -= 0x100000LL;
    v42 = v9;
    CcUnmapVacbArray(a1, &v42, 0x100000u, 1, 0, 0);
  }
LABEL_28:
  if ( !v41 )
  {
    if ( (*(_DWORD *)(a1 + 152) & 0x800000) != 0 )
    {
      if ( v9 >= 8650752 )
      {
        v42 = v9 - 0x800000;
        CcUnmapVacbArray(a1, &v42, 0x800000u, 1, 0, 0);
        goto LABEL_29;
      }
      v44 = 0x40000LL;
      v35 = &v44;
    }
    else
    {
      v34 = CcUnmapBehindLength;
      if ( v9 >= (unsigned int)CcUnmapBehindLength )
      {
        v35 = &v42;
        v42 = v9 - (unsigned int)CcUnmapBehindLength;
LABEL_52:
        CcUnmapVacbArray(a1, v35, v34, 1, 0, 0);
        goto LABEL_29;
      }
      v43 = 0LL;
      v35 = &v43;
    }
    v34 = v9;
    goto LABEL_52;
  }
LABEL_29:
  *v48 = VacbMiss;
  *v49 = 0x40000 - v7;
  return v7 + *(_QWORD *)VacbMiss;
}
