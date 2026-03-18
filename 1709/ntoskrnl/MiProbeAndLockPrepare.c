/*
 * XREFs of MiProbeAndLockPrepare @ 0x1400BEF50
 * Callers:
 *     MiProbeAndLockPages @ 0x1400BDA70 (MiProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140100140 (MmProbeAndLockSelectedPages.c)
 *     MmStoreProbeAndLockPages @ 0x14022DB24 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     MiVadPureReserve @ 0x14003DDE0 (MiVadPureReserve.c)
 *     MiObtainReferencedVad @ 0x140040AF0 (MiObtainReferencedVad.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiGetMultiplexedVm @ 0x1400A344C (MiGetMultiplexedVm.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400BF390 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14028607C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x140495E90 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiProbeAndLockPrepare(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        char a5,
        int a6,
        int a7)
{
  struct _KTHREAD *CurrentThread; // r10
  int v9; // r8d
  unsigned __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r14
  _KPROCESS *Process; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r8
  __int64 AnyMultiplexedVm; // rax
  char *v20; // rdi
  LONG *v21; // rdi
  unsigned __int8 CurrentIrql; // r14
  signed __int32 v23; // ett
  __int64 v24; // rax
  int SystemRegionType; // eax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r15
  __int64 v29; // rax
  int v30; // edx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned int v33; // edi
  struct _KTHREAD *v34; // rax
  int v35; // [rsp+68h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v9 = a6;
  v11 = a3 + a4;
  *(_QWORD *)(a1 + 56) = CurrentThread;
  v12 = a5 == 0;
  *(_QWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 72) = v9;
  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = v11;
  if ( !v12 && (v11 > 0x7FFFFFFF0000LL || a3 >= v11) )
  {
    ++dword_140388BC0;
    return 3221225477LL;
  }
  v13 = *(unsigned int *)(a2 + 40);
  *(_QWORD *)(a1 + 32) = a2 + 48;
  v14 = v11 - 1;
  v15 = (v13 + 4095 + (a3 & 0xFFF)) >> 12;
  *(_QWORD *)(a1 + 16) = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 120) = 0xFFFFFFFFFLL;
  *(_QWORD *)(a1 + 24) = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v9 )
    *(_WORD *)(a2 + 10) |= 0x80u;
  else
    *(_WORD *)(a2 + 10) &= ~0x80u;
  *(_WORD *)(a2 + 10) |= 2u;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( a3 >= 0x7FFFFFFF0000LL )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
  }
  else
  {
    Process = CurrentThread->ApcState.Process;
    *(_QWORD *)(a1 + 64) = Process;
    *(_QWORD *)(a2 + 16) = Process;
    if ( v9 == 3 )
    {
      v27 = MiObtainReferencedVad(a3, &v35);
      v28 = v27;
      if ( !v27 )
        return (unsigned int)v35;
      if ( (unsigned int)MiVadPureReserve(v27)
        || (v29 = *(unsigned int *)(v28 + 52),
            LODWORD(v29) = v29 & 0x7FFFFFFF,
            (v29 | ((unsigned __int64)*(unsigned __int8 *)(v28 + 34) << 31)) >= 0x7FFFFFFFELL)
        || (v30 = *(_DWORD *)(v28 + 48), (((v30 & 7) - 1) & 0xFFFFFFFD) == 0)
        || (v30 & 0x8000) == 0 && (v30 & 7) != 2 )
      {
        MiUnlockAndDereferenceVad((char *)v28);
        return 3221225477LL;
      }
      v31 = (*(unsigned int *)(v28 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v28 + 32) << 32)) << 12;
      if ( a3 < v31
        || (v32 = ((*(unsigned int *)(v28 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v28 + 33) << 32)) << 12) | 0xFFF,
            a3 > v32)
        || v14 < v31
        || v14 > v32 )
      {
        MiUnlockAndDereferenceVad((char *)v28);
        return 3221225496LL;
      }
      v35 = MiChargeFullProcessCommitment(*(_QWORD *)(a1 + 64), v15);
      v33 = v35;
      if ( v35 < 0 )
      {
        MiUnlockAndDereferenceVad((char *)v28);
        return v33;
      }
      *(_QWORD *)(a1 + 104) = v28;
      *(_QWORD *)(a1 + 96) = v15;
    }
    if ( a7 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 64) + 928LL), v15);
  }
  v17 = *(_QWORD *)a1;
  v18 = 2LL;
  *(_QWORD *)(a1 + 80) = MmBadPointer;
  *(_BYTE *)(a1 + 55) = 0;
  if ( v17 >= 0x7FFFFFFF0000LL )
  {
    SystemRegionType = MiGetSystemRegionType(v17);
    if ( SystemRegionType == 1 )
    {
      v34 = KeGetCurrentThread();
      *(_DWORD *)(a1 + 48) = 6;
      AnyMultiplexedVm = v34->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
    }
    else if ( (unsigned int)(SystemRegionType - 6) <= 1 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm((unsigned int)v18);
      *(_DWORD *)(a1 + 48) = 3;
    }
    else
    {
      switch ( SystemRegionType )
      {
        case 8:
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(0LL);
          *(_DWORD *)(a1 + 48) = v18;
          break;
        case 5:
          *(_DWORD *)(a1 + 48) = 4;
          goto LABEL_13;
        case 13:
          *(_DWORD *)(a1 + 48) = 0;
          goto LABEL_13;
        default:
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
          *(_DWORD *)(a1 + 48) = 5;
          break;
      }
    }
  }
  else
  {
    AnyMultiplexedVm = *(_QWORD *)(a1 + 64) + 1280LL;
    *(_DWORD *)(a1 + 48) = 1;
  }
  *(_QWORD *)(a1 + 80) = AnyMultiplexedVm;
LABEL_13:
  v20 = *(char **)(a1 + 80);
  v12 = v20 == MmBadPointer;
  *(_WORD *)(a1 + 53) = 0;
  *(_QWORD *)(a1 + 128) = 0LL;
  if ( v12 )
  {
    *(_BYTE *)(a1 + 52) = 17;
  }
  else
  {
    if ( (v20[192] & 7) == (_BYTE)v18 )
      v21 = &dword_140389780;
    else
      v21 = (LONG *)(v20 + 200);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v18);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v21, CurrentIrql);
    }
    else
    {
      _m_prefetchw(v21);
      v23 = *v21 & 0x7FFFFFFF;
      if ( v23 != _InterlockedCompareExchange(v21, v23 + 1, v23) )
        ExpWaitForSpinLockSharedAndAcquire(v21, CurrentIrql);
    }
    if ( v21[1] )
      _InterlockedExchange(v21 + 1, 0);
    v12 = *(_DWORD *)(a1 + 48) == 1;
    *(_BYTE *)(a1 + 52) = CurrentIrql;
    if ( v12 )
    {
      v24 = *(_QWORD *)(a1 + 64);
      if ( *(_QWORD *)(v24 + 1032) )
        *(_BYTE *)(a1 + 53) = 1;
      if ( *(_QWORD *)(v24 + 912) )
        *(_BYTE *)(a1 + 54) = 1;
    }
  }
  if ( v17 >= 0xFFFF800000000000uLL && byte_1403899D0[((v17 >> 39) & 0x1FF) - 256] == 8 )
    *(_QWORD *)(a1 + 80) = MiGetMultiplexedVm((__int64)byte_1403899D0, v17);
  return 0LL;
}
