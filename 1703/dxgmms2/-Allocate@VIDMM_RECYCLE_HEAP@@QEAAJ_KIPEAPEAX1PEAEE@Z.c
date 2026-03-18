/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C0065C28
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEEE@Z @ 0x1C0065060 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEEE@Z.c)
 * Callees:
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0064838 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00660D0 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00665D0 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00667C0 (-RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C00668E4 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0066A48 (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C00677D8 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C006861C (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C00691D0 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0069408 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
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
  __int64 v8; // rbx
  _QWORD *v11; // rax
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct VIDMM_RECYCLE_MULTIRANGE *BlockAndRange; // rbx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  char v24; // dl
  __int64 v25; // r8
  void *v26; // rcx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rcx
  bool v28; // cf
  __int64 v29; // rcx
  _QWORD *v31; // rax
  unsigned int v32; // r8d
  _QWORD *v33; // rax

  v8 = (unsigned int)a3;
  if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 8004);
  v11 = (_QWORD *)WdLogNewEntry5_WdEvent(this, a2);
  v12 = v8;
  v11[3] = this;
  v11[4] = a2;
  v11[5] = v8;
  WdLogEvent5_WdEvent(v11);
  BlockAndRange = VIDMM_RECYCLE_HEAP::LookupSufficientRange((VIDMM_RECYCLE_HEAP *)this, a2, v8, a7);
  if ( BlockAndRange
    || (v31 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, v13),
        v31[3] = this,
        v31[4] = a2,
        v31[5] = v12,
        WdLogEvent5_WdEvent(v31),
        (BlockAndRange = VIDMM_RECYCLE_HEAP::CreateBlockAndRange((VIDMM_RECYCLE_HEAP *)this, a2, v32, a7)) != 0LL) )
  {
    v16 = *((_QWORD *)BlockAndRange + 6);
    if ( *((_QWORD *)BlockAndRange + 5) - v16 > a2 )
      VIDMM_RECYCLE_MULTIRANGE::SplitAt(BlockAndRange, a2 + v16 - *((_QWORD *)BlockAndRange + 4));
    VIDMM_RECYCLE_HEAP::RemoveOverlappingMultirangesFromSearch((VIDMM_RECYCLE_HEAP *)this, BlockAndRange);
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(this, *((unsigned int *)BlockAndRange + 22), BlockAndRange);
    v17 = VIDMM_RECYCLE_MULTIRANGE::Commit(BlockAndRange, a7, a6);
    v20 = v17;
    if ( v17 < 0 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18);
      v33[3] = BlockAndRange;
      v33[4] = a2;
      v33[5] = v12;
      v33[6] = v20;
      v33[7] = **((_QWORD **)this[1] + 1);
      WdLogEvent5_WdWarning(v33);
      if ( !VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees((VIDMM_RECYCLE_HEAP *)this, BlockAndRange) )
        VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(this[1], (struct _SLIST_ENTRY *)BlockAndRange);
    }
    else
    {
      v21 = *((_QWORD *)BlockAndRange + 9);
      v22 = 0LL;
      v23 = *(_QWORD *)(v21 + 120);
      if ( v23 != *(_QWORD *)(v21 + 72) + 72LL )
        v22 = v23 - 120;
      if ( v22 && !*(_DWORD *)(v22 + 64) )
        VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(*((_QWORD *)BlockAndRange + 10));
      *a4 = BlockAndRange;
      v24 = 1;
      v25 = **(unsigned int **)(*((_QWORD *)BlockAndRange + 10) + 32LL);
      if ( (unsigned int)(v25 - 3) > 3 || (unsigned int)(v25 - 5) <= 1 )
        v26 = (void *)*((_QWORD *)BlockAndRange + 6);
      else
        v26 = (void *)(*((_QWORD *)BlockAndRange + 20) + *((_QWORD *)BlockAndRange + 21));
      *a5 = v26;
      NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
      while ( 1 )
      {
        v28 = *((_BYTE *)NextRange + 84) != 0;
        *((_BYTE *)NextRange + 84) = 0;
        LOBYTE(v25) = v28 ? v24 : 0;
        if ( NextRange == *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) )
          break;
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
        v24 = v25;
      }
      *a6 = v25;
      v29 = *((_QWORD *)BlockAndRange + 5) - *((_QWORD *)BlockAndRange + 4);
      *(_QWORD *)(*((_QWORD *)this[1] + 1) + 88LL) += v29;
    }
  }
  else
  {
    LODWORD(v20) = -1073741801;
  }
  if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v29, &EventProfilerExit, v25, 8004);
  return (unsigned int)v20;
}
