/*
 * XREFs of MiInitializeSystemPageTable @ 0x1400C42AC
 * Callers:
 *     MiMakeZeroedPageTableRange @ 0x1400C3F64 (MiMakeZeroedPageTableRange.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiInitializePfnForOtherProcess @ 0x1400C457C (MiInitializePfnForOtherProcess.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017C61C (MiGetContainingPageTable.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140214414 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MxFillPhysicalPage @ 0x14082C5B4 (MxFillPhysicalPage.c)
 */

void __fastcall MiInitializeSystemPageTable(__int64 a1, unsigned __int64 a2, _QWORD *a3, int *a4)
{
  __int64 v4; // rdi
  unsigned int v8; // ebx
  unsigned __int64 v9; // r14
  int v10; // edi
  unsigned __int64 v11; // rbp
  ULONG_PTR v12; // rcx
  void *v13; // rax
  __int64 v14; // rdx
  unsigned __int64 i; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r11
  unsigned __int64 ContainingPageTable; // rbp
  unsigned __int64 v20; // r11
  unsigned __int64 ValidPte; // rdi
  __int64 v22; // rax
  unsigned __int64 v23; // r9
  char v24; // [rsp+68h] [rbp+10h] BYREF
  int *v25; // [rsp+78h] [rbp+20h]

  v25 = a4;
  v4 = *(_QWORD *)a2;
  v8 = 0;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    LOBYTE(v4) = MiReadPteShadow(a2, *(_QWORD *)a2);
  v9 = (__int64)(a2 << 25) >> 16;
  if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( (v4 & 1) != 0 )
      v11 = *(_QWORD *)v9;
    else
      v11 = *(_QWORD *)(a1 + 64);
    v12 = (__int64)(a3 + 0xB000000000LL) / 48;
    if ( KeGetCurrentPrcb()->HyperPte )
    {
      v13 = (void *)MiMapPageInHyperSpaceWorker(v12, &v24, 0x80000000LL);
      LOBYTE(v14) = v24;
      memset64(v13, v11, 0x200uLL);
      MiUnmapPageInHyperSpaceWorker(v13, v14, 0x80000000LL);
    }
    else
    {
      MxFillPhysicalPage(v12);
    }
    v10 = -1879048188;
  }
  else
  {
    v10 = -1879048186;
  }
  for ( i = a2; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
  {
    if ( i > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  if ( (unsigned int)MiGetSystemRegionType(i) == 1 )
  {
    v8 = 1;
  }
  else if ( v16 <= 0x7FFFFFFEFFFFLL || v16 >= qword_140389B40 && v16 <= qword_140388958 || v16 >= v18 && v16 <= v17 )
  {
    v8 = 4;
  }
  *a3 = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a2);
  if ( v9 >= v20 && v9 <= 0xFFFFF6FFFFFFFFFFuLL )
    v10 |= 0x8000000u;
  ValidPte = MiMakeValidPte(a2, (__int64)(a3 + 0xB000000000LL) / 48, v10);
  if ( ((a2 ^ 0xFFFFF6FB7DBED000uLL) & 0xFFFFFFFFF000LL) == 0 && (MiFlags & 0x30) != 0 && !v8 )
    ContainingPageTable = PsInitialSystemProcess->DirectoryTableBase >> 12;
  MiInitializePfnForOtherProcess((__int64)(a3 + 0xB000000000LL) / 48, a2, ContainingPageTable, 512LL);
  v22 = *(_QWORD *)a2;
  v23 = 0xFFFFF6FB7DBED7F8uLL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    LOBYTE(v22) = MiReadPteShadow(a2, *(_QWORD *)a2);
  if ( (v22 & 1) != 0 )
    v8 = 8;
  if ( v8 < 8 )
  {
    *(_QWORD *)a2 = ValidPte;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= v23 )
      MiWritePteShadow(a2, ValidPte);
  }
  else
  {
    MI_INTERLOCKED_EXCHANGE_PTE(a2);
    MiInsertTbFlushEntry(v25, (__int64)(a2 << 25) >> 16, 1LL, 0);
  }
}
