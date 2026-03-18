/*
 * XREFs of MiOffsetToProtos @ 0x14009DAD0
 * Callers:
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     MiSetSystemCodeProtection @ 0x14006C1E0 (MiSetSystemCodeProtection.c)
 *     MmMapViewInSystemCache @ 0x1400A9520 (MmMapViewInSystemCache.c)
 *     MiRemoveMappedPtes @ 0x1400FD140 (MiRemoveMappedPtes.c)
 *     MiRelocateImage @ 0x140495140 (MiRelocateImage.c)
 *     MiScanRelocationPage @ 0x140495AC0 (MiScanRelocationPage.c)
 *     MiLogRelocationRva @ 0x14049620C (MiLogRelocationRva.c)
 *     MiAddMappedPtes @ 0x1404976A0 (MiAddMappedPtes.c)
 *     MmHardFaultBytesRequired @ 0x140514370 (MmHardFaultBytesRequired.c)
 *     MiPfPrepareReadList @ 0x140518E60 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140519D10 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiLocatePagefileSubsection @ 0x140099578 (MiLocatePagefileSubsection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B2E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14025C760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14025C84C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiOffsetToProtos(_DWORD *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  _DWORD *v3; // rsi
  int v6; // eax
  unsigned __int8 CurrentIrql; // r14
  signed __int32 v9; // ett
  __int64 v10; // rax
  __int64 i; // rcx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rcx
  unsigned __int8 v14; // bp
  signed __int32 v15; // ett
  __int64 v16; // r14
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 j; // rax
  _QWORD *v22; // r8
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r10
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  void *retaddr; // [rsp+B8h] [rbp+0h]

  v3 = 0LL;
  *a3 = a2 >> 12;
  v6 = a1[14];
  if ( (v6 & 0x20) != 0 || !*((_QWORD *)a1 + 8) || (v6 & 0x400) != 0 )
  {
    v12 = *(unsigned int *)(*(_QWORD *)a1 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a1 + 12LL) & 0x3FF) << 32);
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
      _m_prefetchw(a1 + 18);
      v9 = a1[18] & 0x7FFFFFFF;
      if ( v9 != _InterlockedCompareExchange(a1 + 18, v9 + 1, v9) )
        ExpWaitForSpinLockSharedAndAcquire(a1 + 18, CurrentIrql);
    }
    v10 = *((_QWORD *)a1 + 30);
    for ( i = 0LL; v10; v10 = *(_QWORD *)(v10 + 8) )
      i = v10;
    v12 = *(unsigned int *)(i - 12)
        + (*(unsigned int *)(i - 20) | ((unsigned __int64)(*(_WORD *)(i - 24) & 0xFFC0) << 26));
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(a1 + 18, retaddr);
    }
    else
    {
      _InterlockedAnd(a1 + 18, 0xBFFFFFFF);
      _InterlockedDecrement(a1 + 18);
    }
    __writecr8(CurrentIrql);
  }
  v13 = *a3;
  if ( *a3 >= v12 )
    return 0LL;
  if ( !*((_QWORD *)a1 + 8) )
    return MiLocatePagefileSubsection((unsigned __int64)(a1 + 32), a3);
  if ( (a1[14] & 0x20) != 0 )
  {
    v3 = a1 + 32;
    for ( j = (unsigned int)a1[43]; v13 >= j; j = (unsigned int)v3[11] )
    {
      v13 -= j;
      *a3 = v13;
      v3 = (_DWORD *)*((_QWORD *)v3 + 2);
    }
  }
  else
  {
    if ( a2 >= 0x3FFFFFFFFFF000LL )
      goto LABEL_28;
    v14 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 18, v14);
    }
    else
    {
      _m_prefetchw(a1 + 18);
      v15 = a1[18] & 0x7FFFFFFF;
      if ( v15 != _InterlockedCompareExchange(a1 + 18, v15 + 1, v15) )
        ExpWaitForSpinLockSharedAndAcquire(a1 + 18, v14);
    }
    v16 = *((_QWORD *)a1 + 32);
    v17 = a2 >> 12;
    v18 = *(unsigned int *)(v16 + 36) | ((unsigned __int64)(*(_WORD *)(v16 + 32) & 0xFFC0) << 26);
    if ( v17 >= v18 )
    {
      v19 = v18 + *(unsigned int *)(v16 + 40);
      if ( *(_WORD *)(v16 + 34) < 0x10u )
        v19 = v18 + *(unsigned int *)(v16 + 40) - 1LL;
      if ( v17 <= v19 )
      {
        if ( v14 != 17 )
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
          __writecr8(v14);
        }
        v3 = (_DWORD *)v16;
        goto LABEL_28;
      }
    }
    v22 = (_QWORD *)*((_QWORD *)a1 + 30);
    if ( v22 )
    {
      v23 = (unsigned int)v17 | ((unsigned __int64)(unsigned __int16)(WORD2(v17) << 6) << 26);
      do
      {
        v24 = *((unsigned int *)v22 - 5) | ((unsigned __int64)(*(_WORD *)(v22 - 3) & 0xFFC0) << 26);
        v25 = *((unsigned int *)v22 - 4);
        v26 = v25 + v24;
        if ( *((_WORD *)v22 - 11) < 0x10u )
          v26 = v25 + v24 - 1;
        if ( v23 > v26 )
        {
          v22 = (_QWORD *)v22[1];
        }
        else
        {
          if ( v23 >= v24 )
          {
            v3 = v22 - 7;
            *((_QWORD *)a1 + 32) = v22 - 7;
            if ( v14 != 17 )
              goto LABEL_42;
            goto LABEL_28;
          }
          v22 = (_QWORD *)*v22;
        }
      }
      while ( v22 );
    }
    if ( v14 != 17 )
    {
LABEL_42:
      ExReleaseSpinLockSharedFromDpcLevel(a1 + 18);
      __writecr8(v14);
    }
LABEL_28:
    *a3 -= (unsigned int)v3[9] | ((unsigned __int64)((_WORD)v3[8] & 0xFFC0) << 26);
  }
  return (__int64)v3;
}
