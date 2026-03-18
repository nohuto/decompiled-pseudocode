/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C007047C
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C006DF10 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0016180 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00161A4 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0055A58 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C006D734 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C006F4E8 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C0070168 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0070970 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0070D80 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0070F70 (-RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0071098 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0071208 (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0071E9C (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP::Allocate(
        VIDMM_RECYCLE_HEAP_MGR **this,
        unsigned __int64 a2,
        __int64 a3,
        struct VIDMM_RECYCLE_MULTIRANGE **a4,
        void **a5,
        void **a6,
        unsigned __int8 *a7,
        unsigned __int8 a8)
{
  void *v8; // rdi
  __int64 v9; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct VIDMM_RECYCLE_MULTIRANGE *BlockAndRange; // rbx
  __int64 v20; // rdx
  unsigned __int8 *v21; // r8
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // edx
  void *v30; // rcx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rcx
  char v32; // r8
  struct VIDMM_RECYCLE_RANGE *v33; // r9
  unsigned __int8 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD *v38; // rax
  unsigned int v39; // r8d
  _QWORD *v40; // rax
  __int64 v41; // rdx
  int v42; // [rsp+20h] [rbp-28h] BYREF
  __int64 v43; // [rsp+28h] [rbp-20h]

  v8 = 0LL;
  v9 = (unsigned int)a3;
  v43 = 0LL;
  v42 = 8004;
  if ( (qword_1C0047010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, (__int64)&EventProfilerEnter, a3, 8004);
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v15 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, v13);
  v16 = v9;
  v15[3] = this;
  v15[4] = a2;
  v15[5] = v9;
  WdLogEvent5_WdEvent(v15);
  BlockAndRange = VIDMM_RECYCLE_HEAP::LookupSufficientRange((VIDMM_RECYCLE_HEAP *)this, a2, v9, a8);
  if ( BlockAndRange
    || (v38 = (_QWORD *)WdLogNewEntry5_WdEvent(v18, v17),
        v38[3] = this,
        v38[4] = a2,
        v38[5] = v16,
        WdLogEvent5_WdEvent(v38),
        (BlockAndRange = VIDMM_RECYCLE_HEAP::CreateBlockAndRange((VIDMM_RECYCLE_HEAP *)this, a2, v39, a8)) != 0LL) )
  {
    v20 = *((_QWORD *)BlockAndRange + 6);
    if ( *((_QWORD *)BlockAndRange + 5) - v20 > a2 )
      VIDMM_RECYCLE_MULTIRANGE::SplitAt(BlockAndRange, a2 + v20 - *((_QWORD *)BlockAndRange + 4));
    VIDMM_RECYCLE_HEAP::RemoveOverlappingMultirangesFromSearch((VIDMM_RECYCLE_HEAP *)this, BlockAndRange);
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(this, *((unsigned int *)BlockAndRange + 22), BlockAndRange);
    v22 = VIDMM_RECYCLE_MULTIRANGE::Commit((struct _SLIST_ENTRY *)BlockAndRange, a8, v21);
    v25 = v22;
    if ( v22 < 0 )
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23);
      v40[3] = BlockAndRange;
      v40[4] = a2;
      v40[5] = v16;
      v40[6] = v25;
      v40[7] = **((_QWORD **)this[1] + 1);
      WdLogEvent5_WdWarning(v40);
      if ( !VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees((VIDMM_RECYCLE_HEAP *)this, BlockAndRange) )
        VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(this[1], (struct _SLIST_ENTRY *)BlockAndRange);
    }
    else
    {
      v26 = *((_QWORD *)BlockAndRange + 9);
      v27 = 0LL;
      v28 = *(_QWORD *)(v26 + 120);
      if ( v28 != *(_QWORD *)(v26 + 72) + 72LL )
        v27 = v28 - 120;
      if ( v27 && !*(_DWORD *)(v27 + 64) )
        VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(*((_QWORD **)BlockAndRange + 10), v27);
      *a4 = BlockAndRange;
      v29 = **(_DWORD **)(*((_QWORD *)BlockAndRange + 10) + 32LL);
      if ( (unsigned int)(v29 - 3) > 3 || (unsigned int)(v29 - 5) <= 1 )
        v30 = (void *)*((_QWORD *)BlockAndRange + 6);
      else
        v30 = (void *)(*((_QWORD *)BlockAndRange + 20) + *((_QWORD *)BlockAndRange + 21));
      *a5 = v30;
      if ( a6 )
      {
        v41 = *((_QWORD *)BlockAndRange + 10);
        if ( (unsigned int)(**(_DWORD **)(v41 + 32) - 9) <= 1 )
          v8 = (void *)(*((_QWORD *)BlockAndRange + 6) + *(_QWORD *)(v41 + 120) - *(_QWORD *)(v41 + 40));
        *a6 = v8;
      }
      NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
      v32 = 1;
      v33 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 9);
      while ( 1 )
      {
        v34 = *((_DWORD *)NextRange + 21) <= 1u ? v32 : 0;
        if ( NextRange == v33 )
          break;
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      }
      *a7 = v34;
      *(_QWORD *)(*((_QWORD *)this[1] + 1) + 128LL) += *((_QWORD *)BlockAndRange + 5) - *((_QWORD *)BlockAndRange + 4);
    }
  }
  else
  {
    LODWORD(v25) = -1073741801;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
  if ( (qword_1C0047010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v35, (__int64)&EventProfilerExit, v36, v42);
  return (unsigned int)v25;
}
