/*
 * XREFs of MiRemoveWsle @ 0x14000F040
 * Callers:
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x140011580 (MiDeleteVa.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiTerminateWsle @ 0x14012B31C (MiTerminateWsle.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MmLockLoadedModuleListShared @ 0x14012B7B0 (MmLockLoadedModuleListShared.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiLogRemoveWsleEvent @ 0x1402537B0 (MiLogRemoveWsleEvent.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall MiRemoveWsle(__int64 a1, unsigned __int64 a2, char a3, int a4, int a5)
{
  LONG *v5; // r12
  unsigned __int64 v8; // rbp
  volatile signed __int32 *v10; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  int v13; // eax
  __int64 v14; // rdx
  signed __int32 v15; // edx
  bool v16; // zf
  signed __int32 v17; // eax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rbx
  _QWORD *v21; // rsi
  _QWORD *v22; // rdx
  unsigned __int64 v23; // r8
  char v24; // cl
  char v25; // cl
  int v26; // r15d
  unsigned __int8 v27; // r14
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 *v36; // r9
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // rsi
  __int64 *v42; // rbx
  __int64 v43; // rax
  __int64 **v44; // rcx
  __int64 **v45; // rdx
  signed __int64 v46; // rax
  struct _KPRCB *v47; // rcx
  _DWORD *v48; // rdx
  unsigned __int64 v49; // rdx
  volatile signed __int64 *v50; // rdx
  signed __int64 v51; // rtt
  unsigned __int64 v53; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 v56; // [rsp+80h] [rbp+8h] BYREF
  int v57; // [rsp+88h] [rbp+10h] BYREF

  v5 = &dword_1403CCD68;
  v8 = a2;
  v10 = &dword_1403CCD68;
  if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
    v10 = (volatile signed __int32 *)(a1 + 232);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(a2) = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v10, a2);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v57 = 0;
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
    if ( _interlockedbittestandset(v10, 0x1Fu) )
    {
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      LOBYTE(v14) = -1;
      v57 = ExpWaitForSpinLockExclusiveAndAcquire(v10, v14);
    }
    v15 = *v10;
    while ( (v15 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v15 & 0x40000000) == 0 )
      {
        v17 = _InterlockedCompareExchange(v10, v15 | 0x40000000, v15);
        v16 = v15 == v17;
        v15 = v17;
        if ( !v16 )
          continue;
      }
      KeYieldProcessorEx(&v57);
      v15 = *v10;
    }
  }
  v18 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( a5 )
  {
    --*(_QWORD *)(a1 + 144);
    if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
      --*(_QWORD *)(a1 + 128);
  }
  v19 = 0x7FFFFFFFF8LL;
  if ( (*(_BYTE *)(a1 + 184) & 7) != 4 )
    goto LABEL_43;
  if ( PsNtosImageBase
    && (v8 >= (unsigned __int64)PsNtosImageBase && v8 < PsNtosImageEnd
     || v8 >= (unsigned __int64)PsHalImageBase && v8 < PsHalImageEnd) )
  {
    LODWORD(xmmword_1403CB5A0) = xmmword_1403CB5A0 - 1;
    goto LABEL_43;
  }
  if ( (unsigned int)MiGetSystemRegionType(v8) != 12 )
    goto LABEL_43;
  v56 = 17;
  v20 = (__int64)(((v19 & (v8 >> 9)) - 0x98000000000LL) << 25) >> 16;
  v21 = 0LL;
  MmLockLoadedModuleListShared(&v56);
  v22 = (_QWORD *)qword_1403CB5B8;
  if ( !qword_1403CB5B8 )
    goto LABEL_39;
  while ( 1 )
  {
    v23 = *(v22 - 23) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v20 > *((unsigned int *)v22 - 42) + v23 - 1 )
    {
      v22 = (_QWORD *)v22[1];
      goto LABEL_35;
    }
    if ( v20 >= v23 )
      break;
    v22 = (_QWORD *)*v22;
LABEL_35:
    if ( !v22 )
      goto LABEL_39;
  }
  if ( v22 )
    v21 = v22 - 29;
LABEL_39:
  ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( v56 < 0xFu )
    __writecr8(v56);
  v18 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( v21 )
    --DWORD1(xmmword_1403CB5A0);
LABEL_43:
  v24 = *(_BYTE *)(a1 + 184);
  --*(_QWORD *)(a1 + 136);
  v25 = v24 & 7;
  if ( v8 < 0xFFFFF68000000000uLL || v8 > v18 )
  {
    --*(_QWORD *)(a1 + 120);
    v27 = a3 & 0xF;
    v26 = 1;
    if ( v27 == 8 )
      goto LABEL_94;
LABEL_48:
    if ( v8 >= 0xFFFFF68000000000uLL && v8 <= v18 )
      goto LABEL_80;
    v28 = ((v8 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v29 = *(_QWORD *)v28;
    if ( v28 >= 0xFFFFF6FB7DBED000uLL
      && v28 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v29 & 1) != 0
      && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
    {
      v30 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v30 )
      {
        v31 = *(_QWORD *)(v30 + 8 * ((v28 >> 3) & 0x1FF));
        v32 = v29 | 0x20;
        if ( (v31 & 0x20) == 0 )
          v32 = v29;
        v29 = v32;
        if ( (v31 & 0x42) != 0 )
          v29 = v32 | 0x42;
      }
    }
    v53 = v29;
    if ( (unsigned __int64)&v53 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v53 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v29 & 1) != 0
      && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
    {
      v33 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v33 )
      {
        v34 = *(_QWORD *)(v33 + 8 * (((unsigned __int64)&v53 >> 3) & 0x1FF));
        v35 = v29 | 0x20;
        if ( (v34 & 0x20) == 0 )
          v35 = v29;
        v29 = v35;
        if ( (v34 & 0x42) != 0 )
          v29 = v35 | 0x42;
      }
    }
    v36 = (__int64 *)(48 * ((v29 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v37 = *v36;
    v19 = (unsigned __int64)*v36 >> 4;
    if ( (v19 & 0x3FF) == 0 )
      goto LABEL_80;
    v38 = (v37 >> 14) & 7;
    if ( v27 == v38 )
    {
      v39 = v37 ^ ((unsigned __int16)v37 ^ (unsigned __int16)(16 * (v19 - 1))) & 0x3FF0;
    }
    else
    {
      if ( v27 <= v38 )
      {
LABEL_80:
        --*(_QWORD *)(a1 + 8LL * v27 + 40);
        if ( v27 == 7 )
        {
          v40 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(a1 + 174));
          v41 = *(_QWORD *)(v40 + 6768);
          if ( *(_QWORD *)(a1 + 96) < *(_QWORD *)(v41 + 64) )
          {
            v42 = (__int64 *)(a1 + 24);
            if ( *(_QWORD *)(a1 + 24) )
            {
              if ( *(__int64 **)(v40 + 6784) != v42 )
              {
                LockHandle.LockQueue.Next = 0LL;
                LockHandle.LockQueue.Lock = &qword_1403CC4C0;
                KxAcquireQueuedSpinLock(&LockHandle, &qword_1403CC4C0);
                if ( *(_BYTE *)(v41 + 53) || (v43 = *v42) == 0 )
                {
                  *(_BYTE *)(v41 + 54) = 1;
                }
                else
                {
                  v44 = *(__int64 ***)(a1 + 32);
                  if ( *(__int64 **)(v43 + 8) != v42 || *v44 != v42 )
                    __fastfail(3u);
                  *v44 = (__int64 *)v43;
                  *(_QWORD *)(v43 + 8) = v44;
                  v45 = *(__int64 ***)(v40 + 6784);
                  if ( *v45 != (__int64 *)(v40 + 6776) )
                    __fastfail(3u);
                  *v42 = v40 + 6776;
                  *(_QWORD *)(a1 + 32) = v45;
                  *v45 = v42;
                  *(_QWORD *)(v40 + 6784) = v42;
                }
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              }
            }
          }
        }
        goto LABEL_94;
      }
      v39 = v37 ^ ((unsigned int)v37 ^ (v27 << 14)) & 0x1C000 | 0x3FF0;
    }
    *v36 = v39;
    goto LABEL_80;
  }
  v26 = 0;
  if ( !v25 )
  {
    v27 = a3 & 0xF;
    goto LABEL_48;
  }
LABEL_94:
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
  {
    --qword_1403CCDC8;
    if ( v26 == 1 )
      --qword_1403CCDD0;
  }
  LOBYTE(v46) = *(_BYTE *)(a1 + 184) & 7;
  if ( (_BYTE)v46 != 2 )
    v5 = (LONG *)(a1 + 232);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    LOBYTE(v46) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5, retaddr);
  else
    *v5 = 0;
  v47 = KeGetCurrentPrcb();
  v48 = v47->SchedulerAssist;
  if ( v48 )
  {
    if ( v47->NestingLevel <= 1u )
    {
      LODWORD(v46) = v48[5] - 1;
      v48[5] = v46;
      if ( !(_DWORD)v46 )
      {
        LOBYTE(v46) = *((_BYTE *)v48 + 25);
        v19 = *((unsigned __int8 *)v48 + 27);
        if ( !(_BYTE)v46 && !(_BYTE)v19 )
          LOBYTE(v46) = KiPerformUnboostKick(v47);
      }
    }
  }
  if ( v26 == 1 )
  {
    if ( a4 == 9 )
    {
      v49 = v8 >> 9;
      goto LABEL_114;
    }
    if ( a4 == 10 )
    {
      v19 = 0x7FFFFFFFF8LL;
      v49 = v8 >> 9;
      LOBYTE(v46) = 0;
      if ( (*(_BYTE *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0 )
      {
LABEL_114:
        v50 = (volatile signed __int64 *)((v49 & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v19 = (unsigned __int64)(a4 & 0xF) << 56;
        v46 = *v50;
        do
        {
          v51 = v46;
          v46 = _InterlockedCompareExchange64(v50, v19 | v46 & 0x80FFFFFFFFFFFFFFuLL, v46);
        }
        while ( v51 != v46 );
      }
    }
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
    LOBYTE(v46) = MiLogRemoveWsleEvent(v8, *(_BYTE *)(a1 + 184) & 7, v19);
  return v46;
}
