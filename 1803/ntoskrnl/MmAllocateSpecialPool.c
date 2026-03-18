/*
 * XREFs of MmAllocateSpecialPool @ 0x14025C600
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x140086940 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiInitializePfn @ 0x140056084 (MiInitializePfn.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiInitializeColorBaseSession @ 0x14007F688 (MiInitializeColorBaseSession.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 *     MiNumberWsSwapPagefiles @ 0x140080AFC (MiNumberWsSwapPagefiles.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RemoveListHeadPte @ 0x1400DE6D0 (RemoveListHeadPte.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 *     MiGetContainingPageTable @ 0x1401A64B8 (MiGetContainingPageTable.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiGetPteLink @ 0x1401A653C (MiGetPteLink.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiExpandSpecialPool @ 0x14025C0AC (MiExpandSpecialPool.c)
 */

unsigned __int64 __fastcall MmAllocateSpecialPool(ULONG_PTR BugCheckParameter3, int a2, int a3, int a4)
{
  int v4; // ebp
  int v5; // r15d
  unsigned __int8 CurrentIrql; // dl
  __int64 v7; // r14
  ULONG_PTR *v8; // rbx
  KSPIN_LOCK *v9; // r13
  int v10; // r11d
  unsigned __int64 SessionVm; // rax
  __int64 v12; // rdx
  __int64 v14; // r9
  unsigned __int64 v15; // rsi
  int v16; // eax
  int v17; // r10d
  __int64 v18; // rcx
  __int16 v19; // cx
  __int64 Page; // r12
  unsigned __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rsi
  unsigned __int64 ContainingPageTable; // rax
  __int64 v27; // rdx
  unsigned __int64 PteTimeStamp; // rax
  __int64 v29; // r8
  __int64 updated; // rax
  __int64 v31; // r9
  __int64 v32; // r9
  unsigned __int64 v33; // r14
  __int64 v34; // r8
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  char v40; // bl
  unsigned __int64 v41; // rsi
  int v42; // ebp
  ULONG_PTR v43; // rcx
  unsigned __int64 v44; // rax
  volatile signed __int32 *v45; // [rsp+38h] [rbp-70h] BYREF
  __int16 v46; // [rsp+40h] [rbp-68h]
  unsigned __int16 v47; // [rsp+42h] [rbp-66h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-60h] BYREF
  unsigned int v51; // [rsp+C0h] [rbp+18h]

  v4 = a3;
  v5 = a3 & 1;
  if ( (a3 & 1) == 0 && (a3 & 0x200) == 0 && (MiFlags & 0x10000) != 0 )
    v4 = a3 | 0x200;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > (unsigned __int8)(2 - (v5 != 0)) )
    KeBugCheckEx(0xC1u, CurrentIrql, v4, BugCheckParameter3, 0x30uLL);
  v51 = 4;
  v7 = 4LL;
  if ( (v4 & 0x20) != 0 )
  {
    SessionVm = MiGetSessionVm();
    v9 = qword_1403CCF08;
    v8 = *(ULONG_PTR **)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
    MiInitializeColorBaseSession((__int64)&v45, v12);
  }
  else
  {
    v8 = &MiSystemPartition;
    v9 = &qword_1403CC540;
    MiInitializePageColorBase(0LL, 0, (__int64)&v45);
    if ( !v5 && (v4 & v10) == 0 )
      v51 = 6;
  }
  if ( !v9[6] )
    return 0LL;
  if ( !(unsigned int)MiChargeCommit((__int64)v8, 1uLL, 1u) )
  {
    ++dword_1403CB1C4;
    return 0LL;
  }
  v15 = v8[880];
  if ( qword_1403CC668 > v15 >> 1 )
  {
    if ( !*((_DWORD *)v8 + 1718) || (v16 = MiNumberWsSwapPagefiles((__int64)v8), v17 == v16) )
    {
      ++dword_1403CB1BC;
LABEL_19:
      v18 = (__int64)v8;
LABEL_20:
      MiReturnCommit(v18, 1uLL);
      return 0LL;
    }
  }
  if ( v5 )
  {
    Page = -1LL;
    v7 = 1LL;
  }
  else
  {
    v18 = (__int64)v8;
    if ( qword_1403CB1C8 > v8[858] >> 3 )
    {
      ++dword_1403CB1B4;
      goto LABEL_20;
    }
    if ( !(unsigned int)MiChargeResident(v8, 1uLL, 128LL, v14) )
    {
      ++dword_1403CB1C0;
      goto LABEL_19;
    }
    v19 = _InterlockedExchangeAdd(v45, 1u);
    if ( v15 < 0x120
      || (Page = MiGetPage((__int64)v8, v47 | (unsigned int)(unsigned __int16)(v19 & v46), 0), Page == -1) )
    {
      ++dword_1403CB1B0;
      MiReturnCommit((__int64)v8, 1uLL);
      if ( v8 == &MiSystemPartition )
        MiReturnResidentAvailable(1uLL);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 888, 1uLL);
      return 0LL;
    }
  }
  v21 = (unsigned __int64)&v9[v7];
  KeAcquireInStackQueuedSpinLock(v9, &LockHandle);
  if ( MiGetPteLink(v9[v7], v22, v23, v24) == (__int64)(((v21 >> 9) & 0x7FFFFFFFF8LL)
                                                      - *(_QWORD *)(v21 + 16)
                                                      - 0x98000000000LL) >> 3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v25 = MiExpandSpecialPool(v4);
    if ( !v25 )
    {
      if ( !v5 )
      {
        MiReleaseFreshPage(48 * Page - 0x58000000000LL);
        if ( v8 == &MiSystemPartition )
          MiReturnResidentAvailable(1uLL);
        else
          _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 888, 1uLL);
      }
      ++dword_1403CB1B8;
      goto LABEL_19;
    }
  }
  else
  {
    v25 = RemoveListHeadPte((_QWORD *)v21);
    ContainingPageTable = MiGetContainingPageTable(v25);
    PteTimeStamp = MiGetPteTimeStamp(
                     *(_QWORD *)(48 * ContainingPageTable - 0x58000000000LL + 16),
                     v27,
                     *(_QWORD *)(48 * ContainingPageTable - 0x58000000000LL + 16),
                     48 * ContainingPageTable - 0x58000000000LL);
    updated = MiUpdatePageFileHighInPte(v29, PteTimeStamp + 1);
    *(_QWORD *)(v31 + 16) = updated;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  v33 = _InterlockedIncrement64(&qword_1403CC668);
  if ( v33 == 1 )
    _InterlockedAdd(&dword_1403CC510, 1u);
  if ( !v5 )
  {
    v34 = v51;
    LODWORD(v34) = v51 | 0x80000000;
    ValidPte = MiMakeValidPte(v25, Page, v34, v32);
    v36 = ValidPte;
    if ( (v4 & 0x20) != 0 )
      v36 = ValidPte & 0xFFFFFFFFFFFFFEFFuLL;
    MiInitializePfn(48 * Page - 0x58000000000LL, v25, v51, 4);
    *(_QWORD *)v25 = v36;
    if ( !MiPteInShadowRange(v25) )
      goto LABEL_49;
    v39 = v36;
    goto LABEL_48;
  }
  *(_QWORD *)v25 = MiMakeDemandZeroPte(v51);
  if ( MiPteInShadowRange(v25) )
LABEL_48:
    MiWritePteShadow(v37, v39, v38);
LABEL_49:
  if ( v33 > qword_1403CB1A8 )
    qword_1403CB1A8 = v33;
  v40 = MEMORY[0xFFFFF78000000320];
  v41 = (__int64)(v25 << 25) >> 16;
  memset((void *)v41, MEMORY[0xFFFFF78000000320] | 1, 0x1000uLL);
  v42 = v4 & 0x40;
  v43 = BugCheckParameter3 - 8;
  if ( !v42 )
    v43 = BugCheckParameter3;
  if ( a4 && (a4 == 1 || MmSpecialPoolCatchOverruns != 1) )
  {
    v44 = v41 + 4080;
  }
  else
  {
    v44 = v41;
    v41 = (v41 - v43 + 4096) & 0xFFFFFFFFFFFFFFF0uLL;
  }
  *(_QWORD *)v44 = 0LL;
  *(_QWORD *)(v44 + 8) = 0LL;
  *(_DWORD *)v44 = v43;
  if ( v9 != &qword_1403CC540 )
  {
    *(_DWORD *)v44 = v43 | 0x2000;
    _InterlockedAdd64((volatile signed __int64 *)v9 + 7, 1uLL);
  }
  *(_BYTE *)(v44 + 2) = v40 | 1;
  *(_DWORD *)(v44 + 4) = a2;
  if ( v5 )
    *(_DWORD *)v44 |= 0x8000u;
  else
    _InterlockedAdd64(&qword_1403CB1C8, 1uLL);
  if ( v42 )
    *(_DWORD *)v44 |= 0x4000u;
  return v41;
}
