/*
 * XREFs of ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C0066C90
 * Callers:
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C00676D0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 * Callees:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0002DA0 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     Template_p @ 0x1C001F4D4 (Template_p.c)
 *     Template_pppppppqq @ 0x1C00211E0 (Template_pppppppqq.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064A6C (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064AF0 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064B90 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C00688C0 (-Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::MergeRanges(
        VIDMM_RECYCLE_MULTIRANGE *this,
        struct VIDMM_RECYCLE_RANGE *a2,
        struct VIDMM_RECYCLE_RANGE *a3)
{
  unsigned __int64 v3; // rax
  struct VIDMM_RECYCLE_RANGE *v4; // rbx
  int v5; // edx
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // r13d
  bool v12; // r12
  char v13; // si
  VIDMM_RECYCLE_HEAP_MGR *v14; // rdx
  struct VIDMM_RECYCLE_RANGE *v15; // rbp
  VIDMM_RECYCLE_HEAP_MGR *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  VIDMM_RECYCLE_BLOCK *v20; // rcx
  bool v21; // zf
  __int64 v22; // rdi
  struct VIDMM_RECYCLE_BLOCK *v23; // rsi
  __int64 v24; // rdi
  PSLIST_ENTRY v25; // rbx
  __int64 v26; // r8
  VIDMM_RECYCLE_BLOCK *v27; // rcx
  __int64 v28; // rdx
  __int64 (__fastcall *v29)(__int64, __int64, __int64, __int64); // rax
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  char v34; // [rsp+60h] [rbp-A8h]
  char v35; // [rsp+61h] [rbp-A7h]
  bool v36; // [rsp+62h] [rbp-A6h]
  bool v37; // [rsp+63h] [rbp-A5h]
  char v38; // [rsp+64h] [rbp-A4h]
  int v39; // [rsp+68h] [rbp-A0h]
  int v40; // [rsp+6Ch] [rbp-9Ch]
  int v41; // [rsp+70h] [rbp-98h]
  __int64 v42; // [rsp+80h] [rbp-88h]
  unsigned __int64 v43; // [rsp+88h] [rbp-80h]
  unsigned __int64 v44; // [rsp+90h] [rbp-78h]
  __int64 v45; // [rsp+98h] [rbp-70h]
  __int64 v46; // [rsp+A0h] [rbp-68h]
  struct _SLIST_ENTRY *v47; // [rsp+A8h] [rbp-60h]
  __int64 v48; // [rsp+B0h] [rbp-58h]
  bool v50; // [rsp+118h] [rbp+10h]
  bool v51; // [rsp+120h] [rbp+18h]
  bool v52; // [rsp+128h] [rbp+20h]

  v3 = *((_QWORD *)a2 + 4);
  v4 = a2;
  v5 = *((_DWORD *)a2 + 16);
  v44 = v3;
  v7 = *((_QWORD *)v4 + 17);
  v43 = *((_QWORD *)a3 + 5);
  v41 = *((_DWORD *)v4 + 20);
  v40 = *((_DWORD *)v4 + 23);
  v39 = v5;
  v50 = 0;
  v34 = 0;
  if ( v7 )
  {
    v50 = *(_QWORD *)(v7 + 64) == (_QWORD)v4;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v7 + 72) == a3 )
    {
      v34 = 1;
      v50 = *(_QWORD *)(v7 + 64) == (_QWORD)v4;
    }
  }
  v8 = *((_QWORD *)v4 + 18);
  v42 = v8;
  v51 = 0;
  v35 = 0;
  if ( v8 )
  {
    v51 = *(_QWORD *)(v8 + 64) == (_QWORD)v4;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v8 + 72) == a3 )
    {
      v35 = 1;
      v51 = *(_QWORD *)(v8 + 64) == (_QWORD)v4;
    }
  }
  v9 = *((_QWORD *)v4 + 19);
  v45 = v9;
  v36 = 0;
  v37 = 0;
  if ( v9 )
  {
    v36 = *(_QWORD *)(v9 + 64) == (_QWORD)v4;
    v37 = *(_QWORD *)(v9 + 72) == (_QWORD)a3;
  }
  v10 = *((_QWORD *)v4 + 20);
  v46 = v10;
  v52 = 0;
  v38 = 0;
  if ( v10 )
  {
    v52 = *(_QWORD *)(v10 + 64) == (_QWORD)v4;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v10 + 72) == a3 )
    {
      v38 = 1;
      v52 = *(_QWORD *)(v10 + 64) == (_QWORD)v4;
    }
  }
  v11 = v5 - 3;
  v12 = 1;
  v47 = (struct _SLIST_ENTRY *)*((_QWORD *)v4 + 16);
  v48 = *((_QWORD *)a3 + 15);
  ++**((_QWORD **)this + 10);
  v13 = 0;
  do
  {
    v14 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v4 + 15);
    v15 = 0LL;
    v16 = (VIDMM_RECYCLE_HEAP_MGR *)(*((_QWORD *)v4 + 9) + 72LL);
    if ( v14 != v16 )
      v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v14 - 120);
    if ( v11 <= 2 )
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v16, v4);
    if ( v4 == a3 )
      v13 = 1;
    v12 = v12 && *((_BYTE *)v4 + 84);
    v17 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
    v18 = *(_QWORD *)(v17 + 8);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      Template_p(v17, &EventRecycleRangeDestroy, (__int64)a3, v4);
    v19 = WdLogNewEntry5_WdEvent(v17, v14);
    *(_QWORD *)(v19 + 24) = v4;
    WdLogEvent5_WdEvent(v19);
    v20 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v4 + 9);
    v21 = (*(_QWORD *)v20)-- == 1LL;
    if ( v21 )
      VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v20);
    v22 = *(_QWORD *)(v18 + 1168);
    ++*(_DWORD *)(v22 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v22) >= *(_WORD *)(v22 + 16) )
    {
      ++*(_DWORD *)(v22 + 32);
      (*(void (__fastcall **)(struct VIDMM_RECYCLE_RANGE *, __int64))(v22 + 56))(v4, v22);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v22, (PSLIST_ENTRY)v4);
    }
    if ( v13 )
      v15 = v4;
    v4 = v15;
  }
  while ( !v13 );
  v23 = (struct VIDMM_RECYCLE_BLOCK *)*((_QWORD *)this + 10);
  v24 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v23 + 4) + 8LL) + 1168LL);
  ++*(_DWORD *)(v24 + 20);
  v25 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v24);
  if ( v25
    || (v28 = *(unsigned int *)(v24 + 44),
        v29 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v24 + 48),
        v30 = *(unsigned int *)(v24 + 40),
        v31 = *(unsigned int *)(v24 + 36),
        ++*(_DWORD *)(v24 + 24),
        (v25 = (PSLIST_ENTRY)v29(v31, v28, v30, v24)) != 0LL) )
  {
    VIDMM_RECYCLE_RANGE::Init((VIDMM_RECYCLE_RANGE *)v25, v23, v44, v43);
  }
  v27 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)this + 10);
  v21 = (*(_QWORD *)v27)-- == 1LL;
  if ( v21 )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v27);
  *((_DWORD *)&v25[5].Next + 3) = v40;
  LODWORD(v25[5].Next) = v41;
  LODWORD(v25[4].Next) = v39;
  if ( v12 )
    BYTE4(v25[5].Next) = 1;
  *((_QWORD *)&v25[9].Next + 1) = v45;
  v25[10].Next = (struct _SLIST_ENTRY *)v46;
  *((_QWORD *)&v25[8].Next + 1) = v7;
  v25[9].Next = (struct _SLIST_ENTRY *)v42;
  if ( v50 )
    *(_QWORD *)(v7 + 64) = v25;
  if ( v34 )
    *(_QWORD *)(v7 + 72) = v25;
  if ( v51 )
    *(_QWORD *)(v42 + 64) = v25;
  if ( v35 )
    *(_QWORD *)(v42 + 72) = v25;
  if ( v36 )
    *(_QWORD *)(v45 + 64) = v25;
  if ( v37 )
    *(_QWORD *)(v45 + 72) = v25;
  if ( v52 )
    *(_QWORD *)(v46 + 64) = v25;
  if ( v38 )
    *(_QWORD *)(v46 + 72) = v25;
  v25[8].Next = v47;
  v47->Next = (PSLIST_ENTRY)((char *)v25 + 120);
  *((_QWORD *)&v25[7].Next + 1) = v48;
  *(_QWORD *)(v48 + 8) = (char *)v25 + 120;
  if ( v39 >= 3 )
  {
    if ( v39 > 4 )
    {
      if ( v39 == 5 )
        VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
          *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL),
          (struct VIDMM_RECYCLE_RANGE *)v25);
    }
    else
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL),
        (struct VIDMM_RECYCLE_RANGE *)v25);
    }
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
  {
    v32 = *((_QWORD *)this + 10);
    v33 = *(_QWORD *)(v32 + 32);
    Template_pppppppqq(
      v33,
      v32,
      v26,
      **(_QWORD **)(*(_QWORD *)(v33 + 8) + 8LL),
      v25,
      v32,
      *(_QWORD *)(v32 + 56),
      v33,
      v25[2].Next,
      *((_QWORD *)&v25[2].Next + 1),
      *(_DWORD *)v33,
      LODWORD(v25[4].Next));
  }
}
