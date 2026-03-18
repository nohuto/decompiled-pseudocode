/*
 * XREFs of MiInitializeSystemPageTable @ 0x14010A470
 * Callers:
 *     MiMakeZeroedPageTableRange @ 0x140109D80 (MiMakeZeroedPageTableRange.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiInitializePfnForOtherProcess @ 0x14010A008 (MiInitializePfnForOtherProcess.c)
 *     MiMarkPageActive @ 0x14010A760 (MiMarkPageActive.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017CDC0 (MiGetContainingPageTable.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x14020D3B4 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MxFillPhysicalPage @ 0x1408025BC (MxFillPhysicalPage.c)
 */

void __fastcall MiInitializeSystemPageTable(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int8 v6; // bl
  char v7; // di
  unsigned __int64 v8; // r14
  int v9; // edi
  unsigned __int64 v10; // rbp
  __int64 v11; // rcx
  void *v12; // rax
  unsigned __int8 v13; // dl
  unsigned __int64 i; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r10
  unsigned __int64 ContainingPageTable; // rbp
  unsigned __int64 v19; // r10
  unsigned int v20; // edi
  unsigned __int64 v21; // r9
  unsigned __int64 ValidPte; // rdi
  __int64 v23; // r8
  _KPROCESS *v24; // rdx
  __int64 v25; // rcx
  unsigned __int8 v26[16]; // [rsp+20h] [rbp-118h] BYREF
  int v27; // [rsp+30h] [rbp-108h] BYREF
  __int16 v28; // [rsp+34h] [rbp-104h]
  __int64 v29; // [rsp+38h] [rbp-100h]
  __int64 v30; // [rsp+40h] [rbp-F8h]
  __int64 v31; // [rsp+48h] [rbp-F0h]

  v6 = 0;
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v8 = (__int64)(a2 << 25) >> 16;
  if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( (v7 & 1) != 0 )
      v10 = *(_QWORD *)v8;
    else
      v10 = *(_QWORD *)(a1 + 48);
    v11 = (__int64)(a3 + 0xB000000000LL) / 48;
    if ( KeGetCurrentPrcb()->HyperPte )
    {
      v12 = (void *)MiMapPageInHyperSpaceWorker(v11, v26, 0x80000000);
      v13 = v26[0];
      memset64(v12, v10, 0x200uLL);
      MiUnmapPageInHyperSpaceWorker((__int64)v12, v13);
    }
    else
    {
      MxFillPhysicalPage(v11);
    }
    v9 = 4;
  }
  else
  {
    v9 = 6;
  }
  for ( i = a2; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
  {
    if ( i > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  if ( (unsigned int)MiGetSystemRegionType(i) == 1 )
  {
    v6 = 1;
  }
  else if ( v15 <= 0x7FFFFFFEFFFFLL || v15 >= qword_14036D870 && v15 <= qword_14036C5D0 || v15 >= v16 && v15 <= v17 )
  {
    v6 = 4;
  }
  *a3 = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a2);
  v20 = v9 | 0x90000000;
  if ( v8 >= v21 && v8 <= v19 )
    v20 |= 0x8000000u;
  ValidPte = MiMakeValidPte(a2, (__int64)(a3 + 0xB000000000LL) / 48, v20);
  if ( ((a2 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL && (MiFlags & 0x30) != 0 && (v6 & 5) == 0 )
    ContainingPageTable = PsInitialSystemProcess->DirectoryTableBase >> 12;
  MiInitializePfnForOtherProcess((__int64)(a3 + 0xB000000000LL) / 48, a2, ContainingPageTable, 0);
  MiMarkPageActive(a3);
  if ( (MI_READ_PTE_LOCK_FREE(a2) & 1) != 0 )
    v6 |= 8u;
  if ( (v6 & 8) != 0 )
  {
    MI_INTERLOCKED_EXCHANGE_PTE(a2, ValidPte, v23);
    v29 = 20LL;
    v27 = (v6 >> 2) & 1;
    v28 = 0;
    v30 = 0LL;
    v31 = 0LL;
    MiInsertTbFlushEntry((__int64)&v27, (__int64)(a2 << 25) >> 16, 1LL, 0);
    MiFlushTbList((__int64)&v27, v24);
  }
  else
  {
    *(_QWORD *)a2 = ValidPte;
    if ( (unsigned int)MiPteInShadowRange(a2) )
      MiWritePteShadow(v25);
  }
}
