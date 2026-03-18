/*
 * XREFs of ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C006B290
 * Callers:
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0068030 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0068D94 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0069A90 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z @ 0x1C006BCFC (-Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C006BDF0 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C006C2E4 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C006827C (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006838C (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0069F8C (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C006A7C0 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 */

unsigned __int8 __fastcall VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(struct _SLIST_ENTRY *this)
{
  struct _SLIST_ENTRY *Next; // rbx
  struct VIDMM_RECYCLE_RANGE *v3; // rdx
  struct VIDMM_RECYCLE_RANGE *v4; // r8
  int v5; // ecx
  int v6; // r9d
  struct VIDMM_RECYCLE_RANGE *v7; // rsi
  __int64 v8; // r8
  struct _SLIST_ENTRY *v9; // rbx
  struct _SLIST_ENTRY *v11; // rsi
  __int64 v12; // r8

  Next = this[4].Next;
  v3 = (struct VIDMM_RECYCLE_RANGE *)Next;
  v4 = (struct VIDMM_RECYCLE_RANGE *)Next;
  v5 = (int)Next[4].Next;
  v6 = *((_DWORD *)&Next[5].Next + 3);
  while ( 1 )
  {
    v7 = (struct VIDMM_RECYCLE_RANGE *)Next;
    if ( LODWORD(Next[4].Next) != v5 || *((_DWORD *)&Next[5].Next + 3) != v6 )
    {
      if ( v3 != v4 )
        VIDMM_RECYCLE_MULTIRANGE::MergeRanges((VIDMM_RECYCLE_BLOCK **)this, v3, v4);
      v5 = (int)Next[4].Next;
      v3 = (struct VIDMM_RECYCLE_RANGE *)Next;
      v6 = *((_DWORD *)&Next[5].Next + 3);
    }
    if ( Next == *(&this[4].Next + 1) )
      break;
    v8 = *((_QWORD *)&Next[7].Next + 1);
    if ( v8 == *((_QWORD *)&Next[4].Next + 1) + 72LL )
      Next = 0LL;
    else
      Next = (struct _SLIST_ENTRY *)(v8 - 120);
    v4 = v7;
  }
  if ( v3 != (struct VIDMM_RECYCLE_RANGE *)Next )
    VIDMM_RECYCLE_MULTIRANGE::MergeRanges((VIDMM_RECYCLE_BLOCK **)this, v3, (struct VIDMM_RECYCLE_RANGE *)Next);
  v9 = this[5].Next;
  if ( v9->Next != (struct _SLIST_ENTRY *)1 )
    return 0;
  if ( *((_DWORD *)&this[13].Next + 2) )
    return 0;
  v11 = this[4].Next;
  if ( LODWORD(v11[4].Next) )
    return 0;
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)v9[2].Next, 2LL, (__int64)this);
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)&v9[2].Next->Next + 1), this);
  VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*((VIDMM_RECYCLE_HEAP_MGR **)&v9[2].Next->Next + 1), v11, v12);
  return 1;
}
