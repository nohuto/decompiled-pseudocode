/*
 * XREFs of MiAllocateKernelStackPages @ 0x1401278E0
 * Callers:
 *     MmGrowKernelStackEx @ 0x1400CAE30 (MmGrowKernelStackEx.c)
 *     MmCreateKernelStack @ 0x14012FD20 (MmCreateKernelStack.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     PsGetPagePriorityThread @ 0x140128140 (PsGetPagePriorityThread.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 *     MiGetContainingPageTable @ 0x1401A64B8 (MiGetContainingPageTable.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiTransferSoftwarePte @ 0x1401A6760 (MiTransferSoftwarePte.c)
 *     MiWaitForFreePage @ 0x14026B8B0 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateKernelStackPages(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int16 a5,
        char a6)
{
  __int64 v6; // rbp
  _QWORD *v9; // r14
  int v10; // r12d
  int v11; // r13d
  unsigned int v12; // ebx
  __int64 Page; // rax
  __int64 v14; // r9
  __int64 v15; // rdi
  unsigned __int64 v16; // r14
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 v18; // r15
  __int64 v19; // rax
  unsigned __int64 DemandZeroPte; // rax
  _QWORD *v21; // rbx
  __int64 v22; // rax
  __int64 ContainingPageTable; // rax
  __int64 v24; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v26; // rsi
  unsigned int Queue; // ebp
  int v28; // ebp
  unsigned __int64 v29; // r11
  char v30; // cl
  __int64 v31; // rax
  char v32; // cl
  unsigned __int64 v33; // r10
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // r8
  unsigned __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // rdi
  unsigned __int64 v42; // rax
  char v43; // al
  __int64 v44; // r8
  int v45; // [rsp+20h] [rbp-78h] BYREF
  int v46; // [rsp+24h] [rbp-74h] BYREF
  int v47; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 v48; // [rsp+30h] [rbp-68h] BYREF
  __int64 v49; // [rsp+38h] [rbp-60h]
  unsigned __int64 v50; // [rsp+40h] [rbp-58h]
  volatile signed __int32 *v51; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int16 v52; // [rsp+50h] [rbp-48h]
  unsigned __int16 v53; // [rsp+52h] [rbp-46h]
  unsigned __int8 v55; // [rsp+B0h] [rbp+18h]

  v6 = a3;
  if ( !a3 )
    return 1LL;
  v50 = a2 + 8 * a3;
  v9 = 0LL;
  MiInitializePageColorBase(0LL, (unsigned __int16)(a5 + 1), (__int64)&v51);
  v10 = v52;
  v11 = v53;
  while ( 1 )
  {
    v12 = v11 | _InterlockedExchangeAdd(v51, 1u) & v10;
    Page = MiGetPage(a1, v12, 0);
    if ( Page == -1 )
      break;
LABEL_7:
    v15 = 48 * Page - 0x58000000000LL;
    *(_QWORD *)v15 = v9;
    v9 = (_QWORD *)v15;
    if ( !--v6 )
    {
      v16 = a2;
      ValidPte = MiMakeValidPte(a2, 0LL, 2684354564LL, v14);
      v18 = 0LL;
      v55 = MiLockWorkingSetShared((__int64)&unk_1403CCB00);
      while ( 1 )
      {
        v49 = *(_QWORD *)v15;
        ValidPte ^= (ValidPte ^ (((v15 + 0x58000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
        if ( !v18 )
          goto LABEL_12;
        if ( (v16 & 0xFFF) == 0 )
          break;
LABEL_13:
        v19 = MI_READ_PTE_LOCK_FREE(v16);
        if ( v19 )
          DemandZeroPte = v19 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        else
          DemandZeroPte = MiMakeDemandZeroPte(4LL);
        v22 = MiTransferSoftwarePte(DemandZeroPte, 0LL, 0LL, 4LL);
        *(_WORD *)(v15 + 32) = 1;
        *(_QWORD *)(v15 + 16) = v22 & 0xFFFFFFFFFC00FFFFuLL;
        ContainingPageTable = MiGetContainingPageTable(v16);
        *(_QWORD *)(v15 + 40) ^= (ContainingPageTable ^ *(_QWORD *)(v15 + 40)) & 0xFFFFFFFFFLL;
        CurrentThread = KeGetCurrentThread();
        v26 = 48 * ContainingPageTable - 0x58000000000LL;
        Queue = (unsigned int)CurrentThread[1].Queue;
        if ( (Queue & 0x100) != 0 )
          v28 = (Queue >> 9) & 7;
        else
          LOBYTE(v28) = PsGetPagePriorityThread(CurrentThread);
        v45 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v45);
          while ( *(__int64 *)(v15 + 24) < 0 );
        }
        v46 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v46);
          while ( *(__int64 *)(v26 + 24) < 0 );
        }
        v29 = 0x7FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v26 + 24) ^= (*(_QWORD *)(v26 + 24) ^ (*(_QWORD *)(v26 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v30 = *(_BYTE *)(v15 + 34);
        if ( (v30 & 0xC0) != 0x40 )
        {
          MiChangePageAttribute(v15, 1, 1u);
          v30 = *(_BYTE *)(v15 + 34);
          v29 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v31 = *(_QWORD *)(v15 + 24);
        v32 = v30 & 0xF8 | 6;
        *(_QWORD *)(v15 + 8) = v16;
        *(_QWORD *)(v15 + 24) = v31 & 0xC000000000000000uLL | 1;
        *(_BYTE *)(v15 + 35) ^= (v28 ^ *(_BYTE *)(v15 + 35)) & 7;
        *(_BYTE *)(v15 + 34) = v32;
        *(_BYTE *)(v15 + 34) = v32 | 0x10;
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        *(_QWORD *)v16 = ValidPte;
        v33 = 0xFFFFF6FB7DBED000uLL;
        if ( v16 >= 0xFFFFF6FB7DBED000uLL && v16 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v16, ValidPte, v24);
        v34 = *(_QWORD *)v16;
        if ( v16 >= v33
          && v16 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow()
          && (v34 & 1) != 0
          && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
        {
          v35 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v35 )
          {
            v36 = *(_QWORD *)(v35 + 8 * ((v16 >> 3) & 0x1FF));
            v37 = v34 | 0x20;
            if ( (v36 & 0x20) == 0 )
              v37 = v34;
            v34 = v37;
            if ( (v36 & 0x42) != 0 )
              v34 = v37 | 0x42;
          }
        }
        v48 = v34;
        if ( (unsigned __int64)&v48 >= v33
          && (unsigned __int64)&v48 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow()
          && (v34 & 1) != 0
          && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
        {
          v38 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v38 )
          {
            v39 = *(_QWORD *)(v38 + 8 * (((unsigned __int64)&v48 >> 3) & 0x1FF));
            v40 = v34 | 0x20;
            if ( (v39 & 0x20) == 0 )
              v40 = v34;
            v34 = v40;
            if ( (v39 & 0x42) != 0 )
              v34 = v40 | 0x42;
          }
        }
        v41 = 48 * ((v34 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v47 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v47);
            while ( *(__int64 *)(v41 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) );
          v29 = 0x7FFFFFFFFFFFFFFFLL;
        }
        *(_QWORD *)(v41 + 40) = *(_QWORD *)(v41 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
        v42 = (a4 >> 3) & 0xFFFFFFFFFFELL | *(_QWORD *)v41 & 0xFFFFF00000000001uLL;
        *(_QWORD *)v41 = v42;
        if ( a4 && (v42 & 1) == 0 )
          *(_QWORD *)v41 = v42 | 1;
        v43 = *(_BYTE *)(v41 + 35);
        *(_QWORD *)(v41 + 16) |= 0x3E0uLL;
        *(_BYTE *)(v41 + 35) = v43 & 0xF8 | 5;
        _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), v29);
        v15 = v49;
        v16 += 8LL;
        v44 = 0xFFFFFFFFF000LL;
        if ( v16 >= v50 )
        {
          if ( v18 )
            MiUnlockPageTableInternal((__int64)&unk_1403CCB00, v18);
          MiUnlockWorkingSetShared((__int64)&unk_1403CCB00, v55, v44);
          return 1LL;
        }
      }
      MiUnlockPageTableInternal((__int64)&unk_1403CCB00, v18);
LABEL_12:
      v18 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal((__int64)&unk_1403CCB00, v18, 0LL);
      goto LABEL_13;
    }
  }
  while ( (a6 & 2) == 0 )
  {
    MiWaitForFreePage(a1);
    Page = MiGetPage(a1, v12, 0);
    if ( Page != -1 )
      goto LABEL_7;
  }
  if ( v9 )
  {
    do
    {
      v21 = (_QWORD *)*v9;
      MiReleaseFreshPage(v9);
      v9 = v21;
    }
    while ( v21 );
  }
  return 0LL;
}
