/*
 * XREFs of MiAllocateKernelStackPages @ 0x140029AB0
 * Callers:
 *     MmCreateKernelStack @ 0x140029020 (MmCreateKernelStack.c)
 *     MmGrowKernelStackEx @ 0x140151490 (MmGrowKernelStackEx.c)
 * Callees:
 *     MiMarkKernelStack @ 0x140029F00 (MiMarkKernelStack.c)
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017C61C (MiGetContainingPageTable.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiTransferSoftwarePte @ 0x14017C95C (MiTransferSoftwarePte.c)
 *     MiWaitForFreePage @ 0x14023059C (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateKernelStackPages(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int16 a5, char a6)
{
  __int64 v6; // r15
  _QWORD *v9; // r14
  __int16 v10; // r13
  char v11; // r12
  _WORD *v12; // rbp
  unsigned int v13; // ebx
  __int64 Page; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 *v17; // r14
  __int64 ValidPte; // rbx
  __int64 v19; // r12
  __int64 PteShadow; // rax
  unsigned __int64 DemandZeroPte; // rax
  _QWORD *v22; // rbx
  __int64 v23; // rax
  __int64 ContainingPageTable; // rax
  char v25; // r11
  __int64 v26; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue; // ebp
  unsigned int v29; // ebp
  char v30; // al
  unsigned __int64 v31; // rax
  int v32; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-60h]
  __int64 *v34; // [rsp+30h] [rbp-58h]
  __int64 CurrentIrql; // [rsp+38h] [rbp-50h]
  _WORD *v36; // [rsp+40h] [rbp-48h] BYREF
  __int16 v37; // [rsp+48h] [rbp-40h]
  unsigned __int16 v38; // [rsp+4Ah] [rbp-3Eh]
  int v40; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v41; // [rsp+A8h] [rbp+20h]

  v41 = a4;
  v6 = a3;
  if ( !a3 )
    return 1LL;
  v33 = (unsigned __int64)&a2[a3];
  v9 = 0LL;
  MiInitializePageColorBase(0LL, (unsigned __int16)(a5 + 1), &v36);
  v10 = v37;
  v11 = a6;
  v12 = v36;
  while ( 1 )
  {
    v13 = v38 | (unsigned __int16)(v10 & ++*v12);
    Page = MiGetPage(a1, v13, 0LL);
    if ( Page == -1 )
      break;
LABEL_7:
    v16 = 48 * Page - 0x58000000000LL;
    *(_QWORD *)v16 = v9;
    v9 = (_QWORD *)v16;
    if ( !--v6 )
    {
      v17 = a2;
      ValidPte = MiMakeValidPte(a2, 0LL, 2684354564LL);
      v34 = a2;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      do
      {
        v19 = *(_QWORD *)v16;
        PteShadow = *v17;
        ValidPte ^= (ValidPte ^ (((v16 + 0x58000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
        if ( (unsigned __int64)v17 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v17 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(v17, *v17);
        if ( PteShadow )
          DemandZeroPte = PteShadow & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        else
          DemandZeroPte = MiMakeDemandZeroPte(4LL);
        v23 = MiTransferSoftwarePte(DemandZeroPte, 0LL, 0LL, 4LL);
        *(_WORD *)(v16 + 32) = 1;
        *(_QWORD *)(v16 + 16) = v23 & 0xFFFFFFFFFC00FFFFuLL;
        ContainingPageTable = MiGetContainingPageTable(v17);
        *(_QWORD *)(v16 + 40) ^= (*(_QWORD *)(v16 + 40) ^ ContainingPageTable) & 0xFFFFFFFFFLL;
        v26 = 48 * ContainingPageTable - 0x58000000000LL;
        CurrentThread = KeGetCurrentThread();
        Queue = (unsigned int)CurrentThread[1].Queue;
        if ( (Queue & 0x100) != 0 )
        {
          v29 = (Queue >> 9) & 7;
        }
        else
        {
          v29 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
          if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
          {
            v30 = v25;
            if ( v29 < 2 )
              v30 = v29;
            LOBYTE(v29) = v30;
          }
        }
        v40 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v40);
          while ( *(__int64 *)(v16 + 24) < 0 );
        }
        *(_BYTE *)(v16 + 34) |= 0x10u;
        v32 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v32);
          while ( *(__int64 *)(v26 + 24) < 0 );
        }
        *(_QWORD *)(v26 + 24) ^= (*(_QWORD *)(v26 + 24) ^ (*(_QWORD *)(v26 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (*(_BYTE *)(v16 + 34) & 0xC0) != 0x40 )
          MiChangePageAttribute(v16, 1LL, 1LL);
        v31 = *(_QWORD *)(v16 + 24) & 0xC000000000000001uLL;
        *(_QWORD *)(v16 + 8) = v17;
        *(_QWORD *)(v16 + 24) = v31 | 1;
        *(_BYTE *)(v16 + 35) ^= (v29 ^ *(_BYTE *)(v16 + 35)) & 7;
        *(_BYTE *)(v16 + 34) = *(_BYTE *)(v16 + 34) & 0xF8 | 6;
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        *v17 = ValidPte;
        if ( (unsigned __int64)v17 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v17 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v17, ValidPte);
        ++v17;
        v16 = v19;
      }
      while ( (unsigned __int64)v17 < v33 );
      MiMarkKernelStack(v34, v33, v41);
      __writecr8((unsigned __int8)CurrentIrql);
      return 1LL;
    }
  }
  while ( (v11 & 2) == 0 )
  {
    MiWaitForFreePage(a1);
    Page = MiGetPage(a1, v13, 0LL);
    if ( Page != -1 )
      goto LABEL_7;
  }
  if ( v9 )
  {
    do
    {
      v22 = (_QWORD *)*v9;
      MiReleaseFreshPage(v9, v15);
      v9 = v22;
    }
    while ( v22 );
  }
  return 0LL;
}
