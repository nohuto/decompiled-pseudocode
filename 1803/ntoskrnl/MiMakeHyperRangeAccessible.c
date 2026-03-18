/*
 * XREFs of MiMakeHyperRangeAccessible @ 0x14000D2C0
 * Callers:
 *     MiCommitPageTablesForVad @ 0x1404AF6B0 (MiCommitPageTablesForVad.c)
 *     MiExpandVadBitMap @ 0x1404ED338 (MiExpandVadBitMap.c)
 *     MiExpandVadBitMapDown @ 0x14074EFB8 (MiExpandVadBitMapDown.c)
 * Callees:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x14001CFE0 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiFillHyperPtes @ 0x1400B75AC (MiFillHyperPtes.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1400D2920 (MiDeleteDeferredCloneDescriptors.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiReturnFullProcessCommitment @ 0x1404B4A78 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x1405B6870 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiMakeHyperRangeAccessible(unsigned __int64 a1, unsigned __int64 a2, __int64 *a3)
{
  LONG *v3; // rbx
  __int64 v4; // r15
  _KPROCESS *Process; // rax
  unsigned __int16 *v8; // r12
  __int64 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r10
  unsigned int v11; // edi
  _DWORD *SchedulerAssist; // rcx
  int v13; // eax
  signed __int32 v14; // edx
  bool v15; // zf
  signed __int32 v16; // eax
  int v17; // ecx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int16 *AnyMultiplexedVm; // rax
  _KPROCESS *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rdi
  __int64 v29; // rbx
  __int64 result; // rax
  __int64 SharedVm; // rbx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  LONG *v35; // rbx
  _QWORD *v36; // rdi
  int v37; // esi
  __int64 v38; // r8
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // rdx
  int v41; // eax
  _QWORD *v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // [rsp+20h] [rbp-E0h]
  int v46; // [rsp+20h] [rbp-E0h]
  int v47; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v48; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v49; // [rsp+38h] [rbp-C8h]
  __int64 *v50; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v51; // [rsp+48h] [rbp-B8h]
  _KPROCESS *v52; // [rsp+50h] [rbp-B0h]
  __int64 v53; // [rsp+58h] [rbp-A8h]
  unsigned __int16 *v54; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v55; // [rsp+68h] [rbp-98h]
  __int64 v56; // [rsp+70h] [rbp-90h] BYREF
  __int64 v57; // [rsp+78h] [rbp-88h]
  _QWORD v58[22]; // [rsp+80h] [rbp-80h] BYREF
  void *retaddr; // [rsp+178h] [rbp+78h]

  v3 = &dword_1403CCD40;
  v4 = 0LL;
  v50 = a3;
  v51 = 0LL;
  v47 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v52 = Process;
  *a3 = 0LL;
  v8 = &Process[1].IdealNode[12];
  LOBYTE(Process) = (__int64)Process[2].Header.WaitListHead.Flink & 7;
  v54 = v8;
  if ( (_BYTE)Process != 2 )
    v3 = (LONG *)(v8 + 96);
  CurrentIrql = KeGetCurrentIrql();
  v53 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3, (unsigned __int8)CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = SchedulerAssist[5];
        SchedulerAssist[5] = v13 + 1;
        if ( v13 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(v3, 0x1Fu) )
    {
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      v11 = ExpWaitForSpinLockExclusiveAndAcquire(v3, (unsigned __int8)CurrentIrql);
    }
    v14 = *v3;
    while ( (v14 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v14 & 0x40000000) == 0 )
      {
        v16 = _InterlockedCompareExchange(v3, v14 | 0x40000000, v14);
        v15 = v14 == v16;
        v14 = v16;
        if ( !v15 )
          continue;
      }
      if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v11);
      v14 = *v3;
    }
  }
  v17 = 0;
  v45 = 0;
  v3[1] = 0;
  v18 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v55 = v18;
  v19 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    v48 = 0LL;
    v20 = 0LL;
    v49 = 0LL;
    v21 = v18;
    if ( v18 <= v19 )
    {
      while ( 1 )
      {
        v56 = 0LL;
        v57 = 0LL;
        memset(v58, 0, sizeof(v58));
        LODWORD(v58[0]) = 2145;
        v22 = (__int64)(v21 << 25) >> 16;
        v23 = v22;
        if ( v22 >= 0xFFFFF68000000000uLL )
        {
          do
          {
            if ( v23 > 0xFFFFF6FFFFFFFFFFuLL )
              break;
            v23 = (__int64)(v23 << 25) >> 16;
          }
          while ( v23 >= 0xFFFFF68000000000uLL );
          LOBYTE(CurrentIrql) = v53;
        }
        if ( v23 < 0xFFFF800000000000uLL || v23 >= qword_1403CD100 && v23 <= qword_1403CBB70 )
          AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
        else
          AnyMultiplexedVm = (unsigned __int16 *)MiGetAnyMultiplexedVm(1LL);
        v58[2] = 0LL;
        v58[21] = &v56;
        v58[20] = MiGetNextPageTableTail;
        BYTE2(v58[1]) = 1;
        v58[3] = AnyMultiplexedVm;
        BYTE4(v58[0]) = CurrentIrql;
        v58[4] = v22;
        v58[5] = (__int64)(v19 << 25) >> 16;
        MiWalkPageTables(v58);
        if ( v57 )
        {
          if ( v57 == v21 )
          {
            while ( 1 )
            {
              v32 = *(_QWORD *)v21;
              if ( v21 >= 0xFFFFF6FB7DBED000uLL
                && v21 <= 0xFFFFF6FB7DBED7F8uLL
                && (unsigned int)MiPteHasShadow(v25, v32, v26, v27)
                && (v32 & 1) != 0
                && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
              {
                v25 = KeGetCurrentThread()->ApcState.Process;
                v26 = v25[2].Affinity.Bitmap[0];
                if ( v26 )
                {
                  v33 = *(_QWORD *)(v26 + 8 * ((v21 >> 3) & 0x1FF));
                  v26 = v32 | 0x20;
                  v25 = (_KPROCESS *)(unsigned __int8)v33;
                  LOBYTE(v25) = v33 & 0x20;
                  if ( (v33 & 0x20) == 0 )
                    v26 = v32;
                  v32 = v26;
                  if ( (v33 & 0x42) != 0 )
                    v32 = v26 | 0x42;
                }
              }
              if ( !v32 )
              {
                if ( v47 )
                {
                  *(_QWORD *)v21 = MiMakeDemandZeroPte(4LL);
                  if ( (unsigned int)MiPteInShadowRange(v21) )
                    MiWritePteShadow(v25, v34);
                }
                ++v48;
              }
              v21 += 8LL;
              if ( (v21 & 0xFFF) == 0 )
                goto LABEL_38;
              if ( v21 > v19 )
                goto LABEL_39;
            }
          }
          v28 = v57 - 8;
        }
        else
        {
          v28 = v19;
        }
        MiFillHyperPtes(v21, v28, (unsigned __int8)CurrentIrql, &v47);
        v21 = v28 + 8;
LABEL_38:
        if ( v21 > v19 )
        {
LABEL_39:
          v20 = v49;
          v8 = v54;
          v17 = v45;
          break;
        }
      }
    }
    if ( v17 )
      break;
    v29 = v48;
    if ( !v48 )
      break;
    MiUnlockWorkingSetExclusive(v8, (unsigned __int8)CurrentIrql);
    v51 = v20;
    result = MiChargeFullProcessCommitment(v52, v29 + v20);
    if ( (int)result < 0 )
      return result;
    v47 = 1;
    *v50 = v29;
    SharedVm = MiGetSharedVm(v8);
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    v18 = v55;
    v17 = 1;
    v45 = 1;
    *(_DWORD *)(SharedVm + 4) = 0;
  }
  if ( v20 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(MiGetSharedVm(v8) + 56), v20);
  v35 = &dword_1403CCD40;
  v46 = *((_DWORD *)v8 + 46);
  v36 = 0LL;
  if ( (v46 & 7) != 2 )
    v35 = (LONG *)(v8 + 96);
  if ( (v46 & 7) == 0
    && *((_QWORD *)v8 + 2)
    && *(_WORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 336LL) )
  {
    v36 = (_QWORD *)MiDeleteDeferredCloneDescriptors();
  }
  v37 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000;
  MiCheckProcessShadow(v8, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v35, retaddr);
  else
    *v35 = 0;
  v39 = KeGetCurrentPrcb();
  v40 = v39->SchedulerAssist;
  if ( v40 )
  {
    if ( v39->NestingLevel <= 1u )
    {
      v41 = v40[5] - 1;
      v40[5] = v41;
      if ( !v41 )
      {
        v38 = *((unsigned __int8 *)v40 + 27);
        if ( !*((_BYTE *)v40 + 25) && !(_BYTE)v38 )
          KiPerformUnboostKick(v39);
      }
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  if ( v36 )
  {
    do
    {
      v42 = (_QWORD *)*v36;
      ExFreePoolWithTag(v36, 0);
      v36 = v42;
    }
    while ( v42 );
  }
  if ( !v37 && ((v46 & 0x8000000) != 0 || (v46 & 0x4000000) != 0 || (v46 & 0x10000000) != 0) )
  {
    MiLockWorkingSetShared(v8);
    MiUnlockWorkingSetShared(v8, (unsigned __int8)CurrentIrql);
  }
  v43 = v48;
  v44 = *v50;
  if ( v48 != *v50 )
  {
    *v50 = v48;
    v4 = v44 - v43;
  }
  if ( v49 != v51 )
    v4 += v51 - v49;
  if ( v4 )
    MiReturnFullProcessCommitment(v52, v4, v38);
  return 0LL;
}
