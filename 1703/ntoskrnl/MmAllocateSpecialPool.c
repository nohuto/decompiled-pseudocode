/*
 * XREFs of MmAllocateSpecialPool @ 0x140217008
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 * Callees:
 *     MiInitializeColorBaseSession @ 0x14002E4C4 (MiInitializeColorBaseSession.c)
 *     MiNumberWsSwapPagefiles @ 0x140083F14 (MiNumberWsSwapPagefiles.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     RemoveListHeadPte @ 0x1400AA5FC (RemoveListHeadPte.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiInitializePfn @ 0x1401099F8 (MiInitializePfn.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017CDC0 (MiGetContainingPageTable.c)
 *     MiGetPteLink @ 0x14017CE5C (MiGetPteLink.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiExpandSpecialPool @ 0x140216C28 (MiExpandSpecialPool.c)
 */

unsigned __int64 __fastcall MmAllocateSpecialPool(ULONG_PTR BugCheckParameter3, int a2, int a3, int a4)
{
  int v4; // ebp
  ULONG_PTR v5; // r12
  int v6; // r15d
  unsigned __int8 CurrentIrql; // dl
  KSPIN_LOCK *v8; // rsi
  ULONG_PTR *v9; // rbx
  int v10; // r11d
  unsigned __int64 v12; // r14
  int v13; // eax
  int v14; // r10d
  __int64 v15; // rcx
  __int16 v16; // cx
  __int64 Page; // r13
  __int64 v18; // rax
  __int64 *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rsi
  unsigned __int64 ContainingPageTable; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned __int64 PteTimeStamp; // rax
  __int64 v28; // r9
  __int64 updated; // rax
  __int64 v30; // r9
  unsigned __int64 v31; // r14
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v33; // rbx
  char v34; // bl
  unsigned __int64 v35; // rsi
  int v36; // ebp
  unsigned __int64 v37; // rax
  __int64 v38; // [rsp+38h] [rbp-70h]
  KSPIN_LOCK *v39; // [rsp+40h] [rbp-68h]
  _WORD *v40; // [rsp+48h] [rbp-60h] BYREF
  __int16 v41; // [rsp+50h] [rbp-58h]
  unsigned __int16 v42; // [rsp+52h] [rbp-56h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-50h] BYREF
  unsigned int v45; // [rsp+C0h] [rbp+18h]

  v4 = a3;
  v5 = BugCheckParameter3;
  v6 = a3 & 1;
  if ( (a3 & 1) == 0 && (a3 & 0x200) == 0 && (MiFlags & 0x10000) != 0 )
    v4 = a3 | 0x200;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > (unsigned __int8)(2 - (v6 != 0)) )
    KeBugCheckEx(0xC1u, CurrentIrql, v4, BugCheckParameter3, 0x30uLL);
  v45 = 4;
  v38 = 4LL;
  if ( (v4 & 0x20) != 0 )
  {
    v8 = (KSPIN_LOCK *)qword_14036D688;
    v39 = (KSPIN_LOCK *)qword_14036D688;
    v9 = *(ULONG_PTR **)(qword_14036C8F8
                       + 8LL
                       * *(unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2]
                                             + 3180));
    MiInitializeColorBaseSession((__int64)&v40);
  }
  else
  {
    v8 = &qword_14036D000;
    v39 = &qword_14036D000;
    v9 = &MiSystemPartition;
    MiInitializePageColorBase(0LL, 0, (__int64)&v40);
    if ( !v6 && (v4 & v10) == 0 )
      v45 = 6;
  }
  if ( !v8[6] )
    return 0LL;
  if ( !(unsigned int)MiChargeCommit((unsigned __int64)v9, 1uLL, 1uLL) )
  {
    ++dword_14036BDC4;
    return 0LL;
  }
  v12 = v9[720];
  if ( qword_14036D130 > v12 >> 1 )
  {
    if ( !*((_DWORD *)v9 + 1398) || (v13 = MiNumberWsSwapPagefiles((__int64)v9), v14 == v13) )
    {
      ++dword_14036BDBC;
LABEL_19:
      v15 = (__int64)v9;
LABEL_20:
      MiReturnCommit(v15, 1uLL);
      return 0LL;
    }
  }
  if ( v6 )
  {
    Page = -1LL;
    v18 = 1LL;
    v38 = 1LL;
  }
  else
  {
    v15 = (__int64)v9;
    if ( qword_14036BDC8 > v9[698] >> 3 )
    {
      ++dword_14036BDB4;
      goto LABEL_20;
    }
    if ( !(unsigned int)MiChargeResident(v9, 1uLL, 128LL) )
    {
      ++dword_14036BDC0;
      goto LABEL_19;
    }
    v16 = *v40 + 1;
    *v40 = v16;
    if ( v12 < 0x120
      || (Page = MiGetPage((__int64)v9, v42 | (unsigned int)(unsigned __int16)(v41 & v16), 0), Page == -1) )
    {
      ++dword_14036BDB0;
      MiReturnCommit((__int64)v9, 1uLL);
      if ( v9 == &MiSystemPartition )
        MiReturnResidentAvailable(1uLL);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 728, 1uLL);
      return 0LL;
    }
    v18 = 4LL;
  }
  v19 = (__int64 *)&v8[v18];
  KeAcquireInStackQueuedSpinLock(v8, &LockHandle);
  if ( MiGetPteLink(*v19, v20, v21, v22) == (__int64)((((unsigned __int64)v19 >> 9) & 0x7FFFFFFFF8LL)
                                                    - v19[2]
                                                    - 0x98000000000LL) >> 3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v23 = MiExpandSpecialPool(v4);
    if ( !v23 )
    {
      if ( !v6 )
      {
        MiReleaseFreshPage(48 * Page - 0x58000000000LL);
        if ( v9 == &MiSystemPartition )
          MiReturnResidentAvailable(1uLL);
        else
          _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 728, 1uLL);
      }
      ++dword_14036BDB8;
      goto LABEL_19;
    }
  }
  else
  {
    v23 = RemoveListHeadPte(&v8[v38]);
    ContainingPageTable = MiGetContainingPageTable(v23);
    PteTimeStamp = MiGetPteTimeStamp(
                     *(_QWORD *)(48 * ContainingPageTable - 0x58000000000LL + 16),
                     v25,
                     v26,
                     48 * ContainingPageTable - 0x58000000000LL);
    updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v28 + 16), PteTimeStamp + 1);
    *(_QWORD *)(v30 + 16) = updated;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  v31 = _InterlockedIncrement64(&qword_14036D130);
  if ( v31 == 1 )
    _InterlockedAdd(&dword_14036CFD0, 1u);
  if ( !v6 )
  {
    ValidPte = MiMakeValidPte(v23, Page, v45 | 0x80000000);
    v33 = ValidPte;
    if ( (v4 & 0x20) != 0 )
      v33 = ValidPte & 0xFFFFFFFFFFFFFEFFuLL;
    MiInitializePfn(48 * Page - 0x58000000000LL, v23, v45, 4);
    *(_QWORD *)v23 = v33;
    if ( !MiPteInShadowRange(v23) )
      goto LABEL_50;
    goto LABEL_49;
  }
  *(_QWORD *)v23 = MiMakeDemandZeroPte(v45);
  if ( MiPteInShadowRange(v23) )
LABEL_49:
    MiWritePteShadow();
LABEL_50:
  if ( v31 > qword_14036BDA8 )
    qword_14036BDA8 = v31;
  v34 = MEMORY[0xFFFFF78000000320];
  v35 = (__int64)(v23 << 25) >> 16;
  memset((void *)v35, MEMORY[0xFFFFF78000000320] | 1, 0x1000uLL);
  v36 = v4 & 0x40;
  if ( v36 )
    v5 -= 8LL;
  if ( a4 && (a4 == 1 || MmSpecialPoolCatchOverruns != 1) )
  {
    v37 = v35 + 4080;
  }
  else
  {
    v37 = v35;
    v35 = (v35 - v5 + 4096) & 0xFFFFFFFFFFFFFFF0uLL;
  }
  *(_QWORD *)v37 = 0LL;
  *(_QWORD *)(v37 + 8) = 0LL;
  *(_DWORD *)v37 = v5;
  if ( v39 != &qword_14036D000 )
  {
    *(_DWORD *)v37 = v5 | 0x2000;
    _InterlockedAdd64((volatile signed __int64 *)v39 + 7, 1uLL);
  }
  *(_BYTE *)(v37 + 2) = v34 | 1;
  *(_DWORD *)(v37 + 4) = a2;
  if ( v6 )
    *(_DWORD *)v37 |= 0x8000u;
  else
    _InterlockedAdd64(&qword_14036BDC8, 1uLL);
  if ( v36 )
    *(_DWORD *)v37 |= 0x4000u;
  return v35;
}
