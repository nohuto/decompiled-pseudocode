/*
 * XREFs of MiMakeZeroedPageTableRange @ 0x140109D80
 * Callers:
 *     MiMakeZeroedPageTableRange @ 0x140109D80 (MiMakeZeroedPageTableRange.c)
 *     MiMakeZeroedPageTables @ 0x140127F0C (MiMakeZeroedPageTables.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiMakeZeroedPageTableRange @ 0x140109D80 (MiMakeZeroedPageTableRange.c)
 *     MiInitializeSystemPageTable @ 0x14010A470 (MiInitializeSystemPageTable.c)
 *     MiReplicatePteChange @ 0x140164BE0 (MiReplicatePteChange.c)
 *     KeCopyPage @ 0x140185390 (KeCopyPage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MxCopyPage @ 0x140801AEC (MxCopyPage.c)
 */

char __fastcall MiMakeZeroedPageTableRange(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned int v6; // ebx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r9
  __int64 v12; // r10
  unsigned __int64 v13; // rax
  __int64 v14; // r11
  __int64 v15; // r11
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rcx
  ULONG_PTR v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rcx
  int v21; // edx
  bool v22; // cc
  unsigned __int64 v23; // rbx
  __int64 v25; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v26; // [rsp+38h] [rbp-40h]
  char v27[56]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int8 v28; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v29; // [rsp+88h] [rbp+10h]
  __int64 v30; // [rsp+90h] [rbp+18h]
  unsigned int v31; // [rsp+98h] [rbp+20h]

  v31 = a4;
  v30 = a3;
  v6 = a4;
  LOBYTE(v9) = MiInitializePageColorBase(0LL, 0, (__int64)v27);
  if ( a1 < *(_QWORD *)(a3 + 16LL * v6) )
    a1 = *(_QWORD *)(a3 + 16LL * v6);
  if ( a2 > *(_QWORD *)(a3 + 16LL * v6 + 8) )
    a2 = *(_QWORD *)(a3 + 16LL * v6 + 8);
  v29 = a2;
  if ( a1 <= a2 )
  {
    v10 = a5;
    while ( 1 )
    {
      v25 = MI_READ_PTE_LOCK_FREE(a1);
      v11 = v25;
      v12 = v25 & 1;
      if ( (v25 & 1) == 0 )
        break;
      v13 = MI_READ_PTE_LOCK_FREE(&v25);
      if ( ((v13 >> 12) & 0xFFFFFFFFFLL) == MiState[v14 + 581] )
        break;
      v9 = MI_GET_PAGE_FRAME_FROM_PTE(&v25);
      if ( v9 == MiState[v15 + 577] || (v11 & 0x800) == 0 && (v11 & 0x42) == 0 )
        break;
      if ( !v6 || (v11 & 0x80u) == 0LL )
        goto LABEL_28;
LABEL_31:
      a1 += 8LL;
      if ( a1 > a2 )
        return v9;
    }
    v16 = *(_QWORD **)v10;
    v26 = v16;
    *(_QWORD *)v10 = *v16;
    v17 = (__int64)((unsigned __int128)((__int64)(v16 + 0xB000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    v18 = (v17 >> 63) + v17;
    if ( v12 )
    {
      if ( KeGetCurrentPrcb()->HyperPte )
      {
        v19 = MiMapPageInHyperSpaceWorker(v18, &v28, 0x80000000);
        KeCopyPage(v19, (__int64)(a1 << 25) >> 16);
        MiUnmapPageInHyperSpaceWorker(v19, v28);
        v6 = v31;
      }
      else
      {
        MxCopyPage(v18);
      }
      a2 = v29;
    }
    LOBYTE(v9) = MiInitializeSystemPageTable(v10, a1, v26, v11);
    if ( v6 == 3 && *(_DWORD *)(v10 + 32) != 2 )
    {
      v20 = a1;
      v21 = 3;
      do
      {
        v20 = v20 << 25 >> 16;
        --v21;
      }
      while ( v21 );
      LOBYTE(v9) = MiReplicatePteChange(v20, v20);
    }
    ++*(_QWORD *)(v10 + 24);
    if ( *(_DWORD *)(v10 + 32) != 2 )
    {
      v22 = v6 <= *(_DWORD *)(v10 + 40);
      if ( v6 != *(_DWORD *)(v10 + 40) )
        goto LABEL_29;
      v23 = *(unsigned __int8 *)(v10 + 44);
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036C59C);
      __writecr8(v23);
      LOBYTE(v9) = ExAcquireSpinLockExclusive(&dword_14036C59C);
      v6 = v31;
    }
LABEL_28:
    v22 = v6 <= *(_DWORD *)(v10 + 40);
LABEL_29:
    if ( !v22 )
      LOBYTE(v9) = MiMakeZeroedPageTableRange(
                     (__int64)(a1 << 25) >> 16,
                     (unsigned int)((__int64)(a1 << 25) >> 16) + 4088,
                     v30,
                     v6 - 1,
                     v10);
    goto LABEL_31;
  }
  return v9;
}
