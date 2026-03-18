/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C00695D0
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEEE@Z @ 0x1C0068AD0 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEEE@Z.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C006827C (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0069A90 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C006A2D4 (-RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C006A400 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C006A564 (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C006B38C (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C006C2E4 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C006CEB8 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006D1C4 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP::Allocate(
        VIDMM_RECYCLE_HEAP_MGR **this,
        unsigned __int64 a2,
        __int64 a3,
        struct VIDMM_RECYCLE_MULTIRANGE **a4,
        void **a5,
        unsigned __int8 *a6,
        unsigned __int8 a7)
{
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct VIDMM_RECYCLE_MULTIRANGE *BlockAndRange; // rbx
  struct VIDMM_RECYCLE_RANGE *i; // rcx
  char v17; // dl
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // edi
  char *v28; // rcx
  unsigned __int8 *v29; // r8
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  int v36; // edx
  void *v37; // rcx
  char v38; // r8
  struct VIDMM_RECYCLE_RANGE *j; // rcx
  bool v40; // zf
  unsigned __int8 v41; // dl
  __int64 v42; // r8
  __int64 v43; // rcx
  _QWORD *v45; // rax
  unsigned int v46; // r8d
  _QWORD *v47; // rax
  _QWORD *v48; // rax

  v10 = (unsigned int)a3;
  if ( (qword_1C0040010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, (__int64)&EventProfilerEnter, a3, 8004);
  v11 = (_QWORD *)WdLogNewEntry5_WdEvent(this, a2);
  v12 = v10;
  v11[3] = this;
  v11[4] = a2;
  v11[5] = v10;
  WdLogEvent5_WdEvent(v11);
  BlockAndRange = VIDMM_RECYCLE_HEAP::LookupSufficientRange((VIDMM_RECYCLE_HEAP *)this, a2, v10, a7);
  if ( !BlockAndRange )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, v13);
    v45[3] = this;
    v45[4] = a2;
    v45[5] = v12;
    WdLogEvent5_WdEvent(v45);
    BlockAndRange = VIDMM_RECYCLE_HEAP::CreateBlockAndRange((VIDMM_RECYCLE_HEAP *)this, a2, v46, a7);
    if ( !BlockAndRange )
    {
      LODWORD(v32) = -1073741801;
      goto LABEL_27;
    }
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v17 = *((_BYTE *)i + 84);
    if ( (v17 & 1) == 0 )
      *((_BYTE *)i + 84) = v17 | 2;
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) )
      break;
  }
  v18 = *((_QWORD *)BlockAndRange + 6);
  if ( *((_QWORD *)BlockAndRange + 5) - v18 > a2 )
    VIDMM_RECYCLE_MULTIRANGE::SplitAt(BlockAndRange, a2 + v18 - *((_QWORD *)BlockAndRange + 4));
  VIDMM_RECYCLE_HEAP::RemoveOverlappingMultirangesFromSearch((VIDMM_RECYCLE_HEAP *)this, BlockAndRange);
  v19 = *((int *)BlockAndRange + 22);
  v22 = WdLogNewEntry5_WdEvent(v21, v20);
  v23 = v19;
  *(_QWORD *)(v22 + 24) = BlockAndRange;
  *(_QWORD *)(v22 + 32) = v19;
  WdLogEvent5_WdEvent(v22);
  if ( !(_DWORD)v19 )
  {
    v28 = (char *)(this + 6);
    goto LABEL_13;
  }
  v27 = v19 - 1;
  if ( !v27 )
  {
    v28 = (char *)(this + 7);
    goto LABEL_13;
  }
  if ( v27 == 1 )
  {
    v28 = (char *)(this + 8);
LABEL_13:
    RtlAvlRemoveNode(v28, BlockAndRange);
    goto LABEL_14;
  }
  v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24, v26);
  v47[3] = 270LL;
  v47[4] = 52LL;
  v47[5] = 16LL;
  v47[6] = v23;
  v47[7] = 0LL;
  WdLogEvent5_WdCriticalError(v47);
LABEL_14:
  *((_DWORD *)BlockAndRange + 22) = 3;
  v30 = VIDMM_RECYCLE_MULTIRANGE::Commit(BlockAndRange, a7, v29);
  v32 = v30;
  if ( v30 < 0 )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v31);
    v48[3] = BlockAndRange;
    v48[4] = a2;
    v48[5] = v12;
    v48[6] = v32;
    v48[7] = **((_QWORD **)this[1] + 1);
    WdLogEvent5_WdWarning(v48);
    if ( !VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees((VIDMM_RECYCLE_HEAP *)this, BlockAndRange) )
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(this[1], (struct _SLIST_ENTRY *)BlockAndRange);
  }
  else
  {
    v33 = *((_QWORD *)BlockAndRange + 9);
    v34 = 0LL;
    v35 = *(_QWORD *)(v33 + 120);
    if ( v35 != *(_QWORD *)(v33 + 72) + 72LL )
      v34 = v35 - 120;
    if ( v34 && !*(_DWORD *)(v34 + 64) )
      VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(*((_QWORD *)BlockAndRange + 10));
    *a4 = BlockAndRange;
    v36 = **(_DWORD **)(*((_QWORD *)BlockAndRange + 10) + 32LL);
    if ( (unsigned int)(v36 - 3) > 3 || (unsigned int)(v36 - 5) <= 1 )
      v37 = (void *)*((_QWORD *)BlockAndRange + 6);
    else
      v37 = (void *)(*((_QWORD *)BlockAndRange + 20) + *((_QWORD *)BlockAndRange + 21));
    v38 = 1;
    *a5 = v37;
    for ( j = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8); ; j = VIDMM_RECYCLE_RANGE::GetNextRange(j) )
    {
      v40 = (*((_BYTE *)j + 84) & 1) == 0;
      *((_BYTE *)j + 84) &= ~1u;
      v41 = 0;
      if ( !v40 )
        v41 = v38;
      v42 = v41;
      if ( j == *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) )
        break;
    }
    *a6 = v41;
    v43 = *((_QWORD *)BlockAndRange + 5) - *((_QWORD *)BlockAndRange + 4);
    *(_QWORD *)(*((_QWORD *)this[1] + 1) + 88LL) += v43;
  }
LABEL_27:
  if ( (qword_1C0040010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v43, (__int64)&EventProfilerExit, v42, 8004);
  return (unsigned int)v32;
}
