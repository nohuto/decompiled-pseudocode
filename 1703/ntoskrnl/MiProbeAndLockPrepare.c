/*
 * XREFs of MiProbeAndLockPrepare @ 0x1400B4C90
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x1400266C0 (MmStoreProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x1400B2BF0 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockPages @ 0x1400B3C60 (MiProbeAndLockPages.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B2E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiObtainReferencedVad @ 0x1400BDAC0 (MiObtainReferencedVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     MiVadPureReserve @ 0x1400D2C90 (MiVadPureReserve.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiSystemCacheVaControlArea @ 0x140102068 (MiSystemCacheVaControlArea.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14025C760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x14051D550 (MiChargeFullProcessCommitment.c)
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
  unsigned __int64 v18; // r9
  PVOID v19; // rdx
  char *AnyMultiplexedVm; // rax
  __int64 v21; // rdi
  LONG *v22; // rdi
  unsigned __int8 CurrentIrql; // r14
  signed __int32 v24; // ett
  __int64 v25; // rax
  int SystemRegionType; // eax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r15
  __int64 v33; // rax
  int v34; // edx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned int v37; // edi
  struct _KTHREAD *v38; // rax
  int v39; // [rsp+68h] [rbp+20h] BYREF

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
    ++dword_14036C9C8;
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
      v28 = MiObtainReferencedVad(a3, &v39);
      v32 = v28;
      if ( !v28 )
        return (unsigned int)v39;
      if ( (unsigned int)MiVadPureReserve(v28, v29, v30, v31)
        || (v33 = *(unsigned int *)(v32 + 52),
            LODWORD(v33) = v33 & 0x7FFFFFFF,
            (v33 | ((unsigned __int64)*(unsigned __int8 *)(v32 + 34) << 31)) >= 0x7FFFFFFFELL)
        || (v34 = *(_DWORD *)(v32 + 48), (((v34 & 7) - 1) & 0xFFFFFFFD) == 0)
        || (v34 & 0x8000) == 0 && (v34 & 7) != 2 )
      {
        MiUnlockAndDereferenceVad((PVOID)v32);
        return 3221225477LL;
      }
      v35 = (*(unsigned int *)(v32 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v32 + 32) << 32)) << 12;
      if ( a3 < v35
        || (v36 = ((*(unsigned int *)(v32 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v32 + 33) << 32)) << 12) | 0xFFF,
            a3 > v36)
        || v14 < v35
        || v14 > v36 )
      {
        MiUnlockAndDereferenceVad((PVOID)v32);
        return 3221225496LL;
      }
      v39 = MiChargeFullProcessCommitment(*(_QWORD *)(a1 + 64), v15);
      v37 = v39;
      if ( v39 < 0 )
      {
        MiUnlockAndDereferenceVad((PVOID)v32);
        return v37;
      }
      *(_QWORD *)(a1 + 104) = v32;
      *(_QWORD *)(a1 + 96) = v15;
    }
    if ( a7 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 64) + 928LL), v15);
  }
  v17 = *(_QWORD *)a1;
  v18 = 2LL;
  v19 = MmBadPointer;
  *(_QWORD *)(a1 + 80) = MmBadPointer;
  *(_BYTE *)(a1 + 55) = 0;
  if ( v17 >= 0x7FFFFFFF0000LL )
  {
    SystemRegionType = MiGetSystemRegionType(v17);
    if ( SystemRegionType == 1 )
    {
      v38 = KeGetCurrentThread();
      v19 = MmBadPointer;
      *(_DWORD *)(a1 + 48) = 6;
      AnyMultiplexedVm = (char *)(v38->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
    }
    else if ( (unsigned int)(SystemRegionType - 6) > 1 )
    {
      switch ( SystemRegionType )
      {
        case 8:
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
          *(_DWORD *)(a1 + 48) = v18;
          break;
        case 5:
          *(_DWORD *)(a1 + 48) = 4;
          goto LABEL_13;
        case 13:
          *(_DWORD *)(a1 + 48) = 0;
          goto LABEL_13;
        default:
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
          *(_DWORD *)(a1 + 48) = 5;
          break;
      }
    }
    else
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(v18);
      *(_DWORD *)(a1 + 48) = 3;
    }
  }
  else
  {
    AnyMultiplexedVm = (char *)(*(_QWORD *)(a1 + 64) + 1280LL);
    *(_DWORD *)(a1 + 48) = 1;
  }
  *(_QWORD *)(a1 + 80) = AnyMultiplexedVm;
LABEL_13:
  v21 = *(_QWORD *)(a1 + 80);
  *(_WORD *)(a1 + 53) = 0;
  *(_QWORD *)(a1 + 128) = 0LL;
  if ( (PVOID)v21 == v19 )
  {
    *(_BYTE *)(a1 + 52) = 17;
  }
  else
  {
    if ( (*(_BYTE *)(v21 + 192) & 7) == (_BYTE)v18 )
      v22 = &dword_14036D4C0;
    else
      v22 = (LONG *)(v21 + 200);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v18);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v22, CurrentIrql);
    }
    else
    {
      _m_prefetchw(v22);
      v24 = *v22 & 0x7FFFFFFF;
      if ( v24 != _InterlockedCompareExchange(v22, v24 + 1, v24) )
        ExpWaitForSpinLockSharedAndAcquire(v22, CurrentIrql);
    }
    if ( v22[1] )
      _InterlockedExchange(v22 + 1, 0);
    v12 = *(_DWORD *)(a1 + 48) == 1;
    *(_BYTE *)(a1 + 52) = CurrentIrql;
    if ( v12 )
    {
      v25 = *(_QWORD *)(a1 + 64);
      if ( *(_QWORD *)(v25 + 1032) )
        *(_BYTE *)(a1 + 53) = 1;
      if ( *(_QWORD *)(v25 + 912) )
        *(_BYTE *)(a1 + 54) = 1;
    }
  }
  if ( v17 >= 0xFFFF800000000000uLL && byte_14036D700[((v17 >> 39) & 0x1FF) - 256] == 8 )
    *(_QWORD *)(a1 + 80) = *(_QWORD *)(qword_14036C8F8 + 8LL
                                                       * (*(_WORD *)(MiSystemCacheVaControlArea(v17) + 60) & 0x3FF))
                         + 5888LL;
  return 0LL;
}
