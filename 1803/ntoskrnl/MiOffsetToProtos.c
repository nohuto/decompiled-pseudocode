/*
 * XREFs of MiOffsetToProtos @ 0x14011D9C0
 * Callers:
 *     MiInsertInSystemSpace @ 0x140046B30 (MiInsertInSystemSpace.c)
 *     MmMapViewInSystemCache @ 0x1400DD850 (MmMapViewInSystemCache.c)
 *     MiRemoveMappedPtes @ 0x14012ADA0 (MiRemoveMappedPtes.c)
 *     MiSetSystemCodeProtection @ 0x14013EB40 (MiSetSystemCodeProtection.c)
 *     MiPfPrepareSequentialReadList @ 0x1404ADAD0 (MiPfPrepareSequentialReadList.c)
 *     MiAddMappedPtes @ 0x1404BC450 (MiAddMappedPtes.c)
 *     MiLogRelocationRva @ 0x1404BD2AC (MiLogRelocationRva.c)
 *     MiRelocateImage @ 0x14053C470 (MiRelocateImage.c)
 *     MiScanRelocationPage @ 0x14053CE30 (MiScanRelocationPage.c)
 *     MmHardFaultBytesRequired @ 0x1405B6CC0 (MmHardFaultBytesRequired.c)
 *     MiPfPrepareReadList @ 0x1405B7520 (MiPfPrepareReadList.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400A22F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiLocatePagefileSubsection @ 0x1400E6B80 (MiLocatePagefileSubsection.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402BA870 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiOffsetToProtos(_DWORD *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  _DWORD *v4; // rsi
  unsigned __int64 v6; // rcx
  int v8; // eax
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  signed __int32 v11; // ett
  __int64 v12; // rax
  __int64 i; // rcx
  unsigned __int64 v14; // rbp
  struct _KPRCB *v15; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int8 v17; // bp
  struct _KPRCB *v18; // r10
  _DWORD *v19; // rcx
  signed __int32 v20; // ett
  __int64 v21; // r13
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  _QWORD *v29; // r8
  __int64 v30; // rax
  unsigned __int16 v31; // r9
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // r9
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  unsigned __int64 j; // rdx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0LL;
  v6 = a2 >> 12;
  *a3 = a2 >> 12;
  v8 = a1[14];
  if ( (v8 & 0x20) != 0 || !*((_QWORD *)a1 + 8) || (v8 & 0x400) != 0 )
  {
    v14 = *(unsigned int *)(*(_QWORD *)a1 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a1 + 12LL) & 0x3FF) << 32);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 18, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
      _m_prefetchw(a1 + 18);
      v11 = a1[18] & 0x7FFFFFFF;
      if ( v11 != _InterlockedCompareExchange(a1 + 18, v11 + 1, v11) )
      {
        KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
        ExpWaitForSpinLockSharedAndAcquire(a1 + 18, CurrentIrql);
      }
    }
    v12 = *((_QWORD *)a1 + 34);
    for ( i = 0LL; v12; v12 = *(_QWORD *)(v12 + 8) )
      i = v12;
    v14 = (*(unsigned int *)(i - 20) | ((unsigned __int64)(*(_WORD *)(i - 24) & 0xFFC0) << 26))
        + *(unsigned int *)(i - 12)
        - (unsigned __int64)(*(_DWORD *)(i - 4) & 0x3FFFFFFF);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(a1 + 18, retaddr);
    }
    else
    {
      _InterlockedAnd(a1 + 18, 0xBFFFFFFF);
      _InterlockedDecrement(a1 + 18);
    }
    v15 = KeGetCurrentPrcb();
    SchedulerAssist = v15->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v37 = SchedulerAssist[5] - 1;
        SchedulerAssist[5] = v37;
        if ( !v37 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(v15);
      }
    }
    __writecr8(CurrentIrql);
    v6 = *a3;
  }
  if ( v6 >= v14 )
    return 0LL;
  if ( !*((_QWORD *)a1 + 8) )
    return MiLocatePagefileSubsection((unsigned __int64)(a1 + 32), a3);
  if ( (a1[14] & 0x20) != 0 )
  {
    v4 = a1 + 32;
    for ( j = (unsigned int)a1[43]; v6 >= j; j = (unsigned int)v4[11] )
    {
      v6 -= j;
      *a3 = v6;
      v4 = (_DWORD *)*((_QWORD *)v4 + 2);
    }
  }
  else
  {
    if ( a2 >= 0x3FFFFFFFFFF000LL )
      goto LABEL_31;
    v17 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 18, v17);
    }
    else
    {
      v18 = KeGetCurrentPrcb();
      v19 = v18->SchedulerAssist;
      if ( v19 )
      {
        if ( v18->NestingLevel <= 1u )
        {
          v38 = v19[5];
          v19[5] = v38 + 1;
          if ( v38 == -1 && !*((_BYTE *)v19 + 25) && !*((_BYTE *)v19 + 27) )
            KiPerformUnboostKick(v18);
        }
      }
      _m_prefetchw(a1 + 18);
      v20 = a1[18] & 0x7FFFFFFF;
      if ( v20 != _InterlockedCompareExchange(a1 + 18, v20 + 1, v20) )
      {
        KiSetVpThreadSpinLockCount((__int64)v18, 0);
        ExpWaitForSpinLockSharedAndAcquire(a1 + 18, v17);
      }
    }
    v21 = *((_QWORD *)a1 + 36);
    v22 = a2 >> 12;
    v23 = HIDWORD(v22);
    v24 = *(unsigned int *)(v21 + 36) | ((unsigned __int64)(*(_WORD *)(v21 + 32) & 0xFFC0) << 26);
    v25 = v24 + *(unsigned int *)(v21 + 40);
    if ( *(_WORD *)(v21 + 34) < 0x10u )
      v25 = v24 + *(unsigned int *)(v21 + 40) - 1LL;
    if ( v22 >= v24 && v22 <= v25 )
    {
      if ( v17 != 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(a1 + 18, retaddr);
        }
        else
        {
          _InterlockedAnd(a1 + 18, 0xBFFFFFFF);
          _InterlockedDecrement(a1 + 18);
        }
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        if ( v27 )
        {
          if ( v26->NestingLevel <= 1u )
          {
            v39 = v27[5] - 1;
            v27[5] = v39;
            if ( !v39 && !*((_BYTE *)v27 + 25) && !*((_BYTE *)v27 + 27) )
              KiPerformUnboostKick(v26);
          }
        }
        __writecr8(v17);
      }
      v4 = (_DWORD *)v21;
      goto LABEL_31;
    }
    v29 = (_QWORD *)*((_QWORD *)a1 + 34);
    v30 = (unsigned int)v22;
    if ( v22 < v24 )
    {
      LOWORD(v23) = WORD2(v22);
      v30 = (unsigned int)v22;
    }
    v31 = (_WORD)v23 << 6;
    if ( v29 )
    {
      v32 = v30 | ((unsigned __int64)v31 << 26);
      do
      {
        v33 = *((unsigned int *)v29 - 5) | ((unsigned __int64)(*(_WORD *)(v29 - 3) & 0xFFC0) << 26);
        v34 = *((unsigned int *)v29 - 4);
        v35 = v34 + v33;
        if ( *((_WORD *)v29 - 11) < 0x10u )
          v35 = v34 + v33 - 1;
        if ( v32 > v35 )
        {
          v29 = (_QWORD *)v29[1];
        }
        else
        {
          if ( v32 >= v33 )
          {
            v4 = v29 - 7;
            *((_QWORD *)a1 + 36) = v29 - 7;
            if ( v17 != 17 )
              goto LABEL_47;
            goto LABEL_31;
          }
          v29 = (_QWORD *)*v29;
        }
      }
      while ( v29 );
    }
    if ( v17 != 17 )
    {
LABEL_47:
      ExReleaseSpinLockSharedFromDpcLevel(a1 + 18);
      __writecr8(v17);
    }
LABEL_31:
    *a3 -= (unsigned int)v4[9] | ((unsigned __int64)((_WORD)v4[8] & 0xFFC0) << 26);
  }
  return (__int64)v4;
}
