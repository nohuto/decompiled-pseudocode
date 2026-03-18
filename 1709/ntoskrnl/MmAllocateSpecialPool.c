/*
 * XREFs of MmAllocateSpecialPool @ 0x140220868
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x140081330 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 * Callees:
 *     MiInitializePfn @ 0x140027CC0 (MiInitializePfn.c)
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RemoveListHeadPte @ 0x1400A3BF4 (RemoveListHeadPte.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiNumberWsSwapPagefiles @ 0x1400F0408 (MiNumberWsSwapPagefiles.c)
 *     MiInitializeColorBaseSession @ 0x140123BEC (MiInitializeColorBaseSession.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017C61C (MiGetContainingPageTable.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiGetPteLink @ 0x14017C6E8 (MiGetPteLink.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiExpandSpecialPool @ 0x14022042C (MiExpandSpecialPool.c)
 */

unsigned __int64 __fastcall MmAllocateSpecialPool(ULONG_PTR BugCheckParameter3, int a2, int a3, int a4)
{
  int v4; // ebp
  int v5; // r15d
  unsigned __int8 CurrentIrql; // dl
  __int64 v7; // r14
  KSPIN_LOCK *v8; // r13
  ULONG_PTR *v9; // rbx
  __int64 v10; // r9
  int v11; // r11d
  unsigned __int64 v13; // rsi
  int v14; // eax
  int v15; // r10d
  __int64 v16; // rcx
  __int16 v17; // cx
  __int64 Page; // r12
  unsigned __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // rsi
  __int64 ContainingPageTable; // rax
  __int64 v24; // rdx
  unsigned __int64 PteTimeStamp; // rax
  __int64 v26; // r8
  __int64 updated; // rax
  __int64 v28; // r9
  unsigned __int64 v29; // r14
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // r8
  char v34; // bl
  unsigned __int64 v35; // rsi
  int v36; // ebp
  ULONG_PTR v37; // rcx
  unsigned __int64 v38; // rax
  _WORD *v39; // [rsp+38h] [rbp-70h] BYREF
  __int16 v40; // [rsp+40h] [rbp-68h]
  unsigned __int16 v41; // [rsp+42h] [rbp-66h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-60h] BYREF
  unsigned int v45; // [rsp+C0h] [rbp+18h]

  v4 = a3;
  v5 = a3 & 1;
  if ( (a3 & 1) == 0 && (a3 & 0x200) == 0 && (MiFlags & 0x10000) != 0 )
    v4 = a3 | 0x200;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > (unsigned __int8)(2 - (v5 != 0)) )
    KeBugCheckEx(0xC1u, CurrentIrql, v4, BugCheckParameter3, 0x30uLL);
  v45 = 4;
  v7 = 4LL;
  if ( (v4 & 0x20) != 0 )
  {
    v8 = (KSPIN_LOCK *)qword_140389948;
    v9 = *(ULONG_PTR **)(qword_140388AF0
                       + 8LL
                       * *(unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2]
                                             + 3180));
    MiInitializeColorBaseSession((__int64)&v39);
  }
  else
  {
    v8 = &qword_1403892C0;
    v9 = &MiSystemPartition;
    MiInitializePageColorBase(0LL, 0, (__int64)&v39);
    if ( !v5 && (v4 & v11) == 0 )
      v45 = 6;
  }
  if ( !v8[6] )
    return 0LL;
  if ( !(unsigned int)MiChargeCommit((__int64)v9, 1uLL, 1LL, v10) )
  {
    ++dword_1403880C4;
    return 0LL;
  }
  v13 = v9[744];
  if ( qword_1403893F0 > v13 >> 1 )
  {
    if ( !*((_DWORD *)v9 + 1446) || (v14 = MiNumberWsSwapPagefiles((__int64)v9), v15 == v14) )
    {
      ++dword_1403880BC;
LABEL_19:
      v16 = (__int64)v9;
LABEL_20:
      MiReturnCommit(v16, 1uLL);
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
    v16 = (__int64)v9;
    if ( qword_1403880C8 > v9[722] >> 3 )
    {
      ++dword_1403880B4;
      goto LABEL_20;
    }
    if ( !(unsigned int)MiChargeResident(v9, 1uLL) )
    {
      ++dword_1403880C0;
      goto LABEL_19;
    }
    v17 = *v39 + 1;
    *v39 = v17;
    if ( v13 < 0x120
      || (Page = MiGetPage((__int64)v9, v41 | (unsigned int)(unsigned __int16)(v40 & v17), 0), Page == -1) )
    {
      ++dword_1403880B0;
      MiReturnCommit((__int64)v9, 1uLL);
      if ( v9 == &MiSystemPartition )
        MiReturnResidentAvailable(1uLL);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 752, 1uLL);
      return 0LL;
    }
  }
  v19 = (unsigned __int64)&v8[v7];
  KeAcquireInStackQueuedSpinLock(v8, &LockHandle);
  if ( MiGetPteLink(v8[v7], v20, v21) == (__int64)(((v19 >> 9) & 0x7FFFFFFFF8LL)
                                                 - *(_QWORD *)(v19 + 16)
                                                 - 0x98000000000LL) >> 3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v22 = MiExpandSpecialPool(v4, v32, v33);
    if ( !v22 )
    {
      if ( !v5 )
      {
        MiReleaseFreshPage(48 * Page - 0x58000000000LL);
        if ( v9 == &MiSystemPartition )
          MiReturnResidentAvailable(1uLL);
        else
          _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 752, 1uLL);
      }
      ++dword_1403880B8;
      goto LABEL_19;
    }
  }
  else
  {
    v22 = RemoveListHeadPte((_QWORD *)v19);
    ContainingPageTable = MiGetContainingPageTable(v22);
    PteTimeStamp = MiGetPteTimeStamp(
                     *(_QWORD *)(48 * ContainingPageTable - 0x58000000000LL + 16),
                     v24,
                     *(_QWORD *)(48 * ContainingPageTable - 0x58000000000LL + 16));
    updated = MiUpdatePageFileHighInPte(v26, PteTimeStamp + 1);
    *(_QWORD *)(v28 + 16) = updated;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  v29 = _InterlockedIncrement64(&qword_1403893F0);
  if ( v29 == 1 )
    _InterlockedAdd(&dword_140389290, 1u);
  if ( v5 )
  {
    *(_QWORD *)v22 = MiMakeDemandZeroPte(v45);
    if ( v22 < 0xFFFFF6FB7DBED000uLL || v22 > 0xFFFFF6FB7DBED7F8uLL )
      goto LABEL_51;
  }
  else
  {
    ValidPte = MiMakeValidPte(v22, Page, v45 | 0x80000000);
    v31 = ValidPte;
    if ( (v4 & 0x20) != 0 )
      v31 = ValidPte & 0xFFFFFFFFFFFFFEFFuLL;
    MiInitializePfn(48 * Page - 0x58000000000LL, (__int64 *)v22, v45, 4);
    *(_QWORD *)v22 = v31;
    if ( v22 < 0xFFFFF6FB7DBED000uLL || v22 > 0xFFFFF6FB7DBED7F8uLL )
      goto LABEL_51;
  }
  MiWritePteShadow();
LABEL_51:
  if ( v29 > qword_1403880A8 )
    qword_1403880A8 = v29;
  v34 = MEMORY[0xFFFFF78000000320];
  v35 = (__int64)(v22 << 25) >> 16;
  memset((void *)v35, MEMORY[0xFFFFF78000000320] | 1, 0x1000uLL);
  v36 = v4 & 0x40;
  v37 = BugCheckParameter3 - 8;
  if ( !v36 )
    v37 = BugCheckParameter3;
  if ( a4 && (a4 == 1 || MmSpecialPoolCatchOverruns != 1) )
  {
    v38 = v35 + 4080;
  }
  else
  {
    v38 = v35;
    v35 = (v35 - v37 + 4096) & 0xFFFFFFFFFFFFFFF0uLL;
  }
  *(_QWORD *)v38 = 0LL;
  *(_QWORD *)(v38 + 8) = 0LL;
  *(_DWORD *)v38 = v37;
  if ( v8 != &qword_1403892C0 )
  {
    *(_DWORD *)v38 = v37 | 0x2000;
    _InterlockedAdd64((volatile signed __int64 *)v8 + 7, 1uLL);
  }
  *(_BYTE *)(v38 + 2) = v34 | 1;
  *(_DWORD *)(v38 + 4) = a2;
  if ( v5 )
    *(_DWORD *)v38 |= 0x8000u;
  else
    _InterlockedAdd64(&qword_1403880C8, 1uLL);
  if ( v36 )
    *(_DWORD *)v38 |= 0x4000u;
  return v35;
}
