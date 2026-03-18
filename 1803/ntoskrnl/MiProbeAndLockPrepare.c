/*
 * XREFs of MiProbeAndLockPrepare @ 0x140022150
 * Callers:
 *     MiProbeAndLockPages @ 0x140020610 (MiProbeAndLockPages.c)
 *     MmStoreProbeAndLockPages @ 0x140136640 (MmStoreProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140136C00 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiVadPureReserve @ 0x14000BFF0 (MiVadPureReserve.c)
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400A22F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiGetSystemCacheReverseMap @ 0x1400DDF40 (MiGetSystemCacheReverseMap.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x1405B6870 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiProbeAndLockPrepare(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        int a7)
{
  __int64 v8; // r8
  unsigned __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // r14
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rdi
  __int16 v15; // ax
  unsigned __int64 v16; // rcx
  __int16 v17; // ax
  unsigned __int64 v18; // rsi
  int v19; // edx
  int v20; // r15d
  _BYTE *SessionVm; // rax
  unsigned int v22; // edx
  __int64 v23; // rdx
  _BYTE *v24; // rdi
  unsigned __int8 v25; // al
  LONG *v26; // rdi
  unsigned __int8 v27; // r14
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v30; // eax
  unsigned __int8 CurrentIrql; // al
  int v33; // edx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  int v36; // edx
  int v37; // edx
  int v38; // edx
  int v39; // edx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r15
  __int64 v42; // rax
  int v43; // ecx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  unsigned int v46; // edi
  __int64 v47; // rdx
  int v48; // edx
  int v49; // eax
  unsigned int v50; // [rsp+68h] [rbp+20h] BYREF

  v8 = a6;
  v10 = a3 + a4;
  *(_QWORD *)(a1 + 72) = KeGetCurrentThread();
  v11 = a5 == 0;
  *(_QWORD *)(a1 + 56) = a2;
  *(_DWORD *)(a1 + 88) = v8;
  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = v10;
  if ( !v11 && (v10 > 0x7FFFFFFF0000LL || a3 >= v10) )
  {
    ++dword_1403CBE58;
    return 3221225477LL;
  }
  v12 = *(unsigned int *)(a2 + 40) + 4095LL;
  *(_QWORD *)(a1 + 48) = a2 + 48;
  v13 = ((a3 & 0xFFF) + v12) >> 12;
  v14 = v10 - 1;
  *(_QWORD *)(a1 + 16) = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 24) = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 136) = 0xFFFFFFFFFLL;
  v16 = *(unsigned __int16 *)(a2 + 10);
  v15 = v16;
  LOWORD(v16) = v16 & 0xFF7F;
  v17 = v15 | 0x80;
  if ( (_DWORD)v8 )
    LOWORD(v16) = v17;
  LOWORD(v16) = v16 | 2;
  *(_WORD *)(a2 + 10) = v16;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  if ( *(_QWORD *)a1 >= 0x7FFFFFFF0000uLL )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
  }
  else
  {
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 184LL);
    *(_QWORD *)(a1 + 80) = v16;
    *(_QWORD *)(a2 + 16) = v16;
    if ( (_DWORD)v8 == 3 )
    {
      v40 = MiObtainReferencedVadEx(*(_QWORD *)a1, 0, (int *)&v50);
      v41 = v40;
      if ( !v40 )
        return v50;
      if ( (unsigned int)MiVadPureReserve(v40)
        || (v42 = *(unsigned int *)(v41 + 52),
            LODWORD(v42) = v42 & 0x7FFFFFFF,
            (v42 | ((unsigned __int64)*(unsigned __int8 *)(v41 + 34) << 31)) >= 0x7FFFFFFFDLL)
        || (v43 = *(_DWORD *)(v41 + 48), (v43 & 7) == 1)
        || (v43 & 0x4000) == 0 && (v43 & 7) != 2 )
      {
        MiUnlockAndDereferenceVad((PVOID)v41);
        return 3221225477LL;
      }
      v44 = (*(unsigned int *)(v41 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v41 + 32) << 32)) << 12;
      if ( a3 < v44
        || (v45 = ((*(unsigned int *)(v41 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v41 + 33) << 32)) << 12) | 0xFFF,
            a3 > v45)
        || v14 < v44
        || v14 > v45 )
      {
        MiUnlockAndDereferenceVad((PVOID)v41);
        return 3221225496LL;
      }
      v50 = MiChargeFullProcessCommitment(*(_QWORD *)(a1 + 80), v13);
      v46 = v50;
      if ( (v50 & 0x80000000) != 0 )
      {
        MiUnlockAndDereferenceVad((PVOID)v41);
        return v46;
      }
      *(_QWORD *)(a1 + 120) = v41;
      *(_QWORD *)(a1 + 112) = v13;
    }
    if ( a7 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 80) + 928LL), v13);
  }
  *(_DWORD *)(a1 + 64) &= ~2u;
  v18 = *(_QWORD *)a1;
  v19 = *(_DWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v18 >= 0xFFFF800000000000uLL )
  {
    v16 = ((v18 >> 39) & 0x1FF) - 256;
    v20 = (unsigned __int8)byte_1403CCF90[v16];
  }
  else
  {
    v20 = 0;
  }
  if ( v18 >= 0x7FFFFFFF0000LL )
  {
    if ( v20 == 1 )
    {
      v47 = v19 & 0xFFFFFF0F | 0x80;
      *(_DWORD *)(a1 + 64) = v47;
      SessionVm = (_BYTE *)MiGetSessionVm(v16, v47, v8);
      goto LABEL_15;
    }
    if ( (unsigned int)(v20 - 6) > 1 )
    {
      switch ( v20 )
      {
        case 8:
          SessionVm = (_BYTE *)MiGetAnyMultiplexedVm(0LL);
          v22 = v33 & 0xFFFFFF0F | 0x20;
          break;
        case 5:
          SessionVm = (_BYTE *)MiGetAnyMultiplexedVm(5LL);
          v22 = v36 & 0xFFFFFF0F | 0x40;
          break;
        case 13:
          SessionVm = (_BYTE *)MiGetAnyMultiplexedVm(5LL);
          v22 = v48 & 0xFFFFFF0F;
          break;
        case 12:
        case 3:
          SessionVm = (_BYTE *)MiGetAnyMultiplexedVm(1LL);
          v22 = v37 & 0xFFFFFF0F | 0x60;
          break;
        case 15:
          SessionVm = (_BYTE *)MiGetAnyMultiplexedVm(4LL);
          v22 = v38 & 0xFFFFFF0F | 0x70;
          break;
        default:
          SessionVm = (_BYTE *)MiGetAnyMultiplexedVm(3LL);
          v22 = v39 & 0xFFFFFF0F | 0x50;
          break;
      }
    }
    else
    {
      SessionVm = &unk_1403CC8E0;
      v22 = v19 & 0xFFFFFF0F | 0x30;
    }
  }
  else
  {
    SessionVm = (_BYTE *)(*(_QWORD *)(a1 + 80) + 1280LL);
    v22 = v19 & 0xFFFFFF0F | 0x10;
  }
  *(_DWORD *)(a1 + 64) = v22;
LABEL_15:
  v23 = v22 & 0xFFFFFFFE;
  *(_QWORD *)(a1 + 96) = SessionVm;
  *(_DWORD *)(a1 + 64) = v23;
  v24 = SessionVm;
  *(_QWORD *)(a1 + 144) = 0LL;
  if ( SessionVm )
  {
    v25 = SessionVm[184] & 7;
    if ( v25 >= 6u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    else
    {
      if ( v25 == 2 )
        v26 = &dword_1403CCD40;
      else
        v26 = (LONG *)(v24 + 192);
      v27 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v26, v27);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v49 = SchedulerAssist[5];
            SchedulerAssist[5] = v49 + 1;
            if ( v49 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
              KiPerformUnboostKick(CurrentPrcb);
          }
        }
        _m_prefetchw(v26);
        v30 = *v26 & 0x7FFFFFFF;
        v23 = (unsigned int)(v30 + 1);
        if ( v30 != _InterlockedCompareExchange(v26, v23, v30) )
        {
          KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
          ExpWaitForSpinLockSharedAndAcquire(v26, v27);
        }
      }
      if ( v26[1] )
        _InterlockedExchange(v26 + 1, 0);
      CurrentIrql = v27;
    }
    *(_BYTE *)(a1 + 68) = CurrentIrql;
    if ( (*(_DWORD *)(a1 + 64) & 0xF0) == 0x10 && *(_QWORD *)(*(_QWORD *)(a1 + 80) + 912LL) )
      *(_DWORD *)(a1 + 64) |= 1u;
  }
  else
  {
    *(_BYTE *)(a1 + 68) = 17;
  }
  if ( v20 == 8 )
  {
    v34 = *(_QWORD *)(MiGetSystemCacheReverseMap(v18, v23) + 24);
    v35 = v34 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v34 & 1) == 0 )
      v35 = v34;
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(*(_QWORD *)v35 + 60LL) & 0x3FF)) + 7168LL;
  }
  return 0LL;
}
