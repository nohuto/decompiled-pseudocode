/*
 * XREFs of ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C006EA8C
 * Callers:
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C006F3E8 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 * Callees:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0002D80 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p @ 0x1C0023F00 (McTemplateK0p.c)
 *     McTemplateK0pppppppqq @ 0x1C0025C20 (McTemplateK0pppppppqq.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006D968 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006D9EC (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006DA8C (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C0071410 (-Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::MergeRanges(
        VIDMM_RECYCLE_MULTIRANGE *this,
        struct VIDMM_RECYCLE_RANGE *a2,
        struct VIDMM_RECYCLE_RANGE *a3)
{
  __int64 v3; // r14
  int v5; // ecx
  struct VIDMM_RECYCLE_RANGE *v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // r12
  unsigned int v10; // r13d
  char v11; // di
  char v12; // r15
  int v13; // ebp
  VIDMM_RECYCLE_HEAP_MGR *v14; // rdx
  __int64 v15; // r8
  VIDMM_RECYCLE_HEAP_MGR *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rax
  VIDMM_RECYCLE_BLOCK *v22; // rcx
  bool v23; // zf
  __int64 v24; // rdi
  struct VIDMM_RECYCLE_RANGE *v25; // rax
  struct VIDMM_RECYCLE_BLOCK *v26; // rsi
  __int64 v27; // rdi
  PSLIST_ENTRY v28; // rbx
  __int64 v29; // r8
  VIDMM_RECYCLE_BLOCK *v30; // rcx
  bool v31; // dl
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  bool v38; // [rsp+60h] [rbp-A8h]
  char v39; // [rsp+61h] [rbp-A7h]
  char v40; // [rsp+62h] [rbp-A6h]
  char v41; // [rsp+63h] [rbp-A5h]
  char v42; // [rsp+64h] [rbp-A4h]
  char v43; // [rsp+68h] [rbp-A0h]
  int v44; // [rsp+6Ch] [rbp-9Ch]
  int v45; // [rsp+70h] [rbp-98h]
  int v46; // [rsp+74h] [rbp-94h]
  __int64 v47; // [rsp+78h] [rbp-90h]
  __int64 v48; // [rsp+88h] [rbp-80h]
  __int64 v49; // [rsp+90h] [rbp-78h]
  unsigned __int64 v50; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v51; // [rsp+A8h] [rbp-60h]
  struct _SLIST_ENTRY *v52; // [rsp+B0h] [rbp-58h]
  __int64 v53; // [rsp+B8h] [rbp-50h]
  bool v55; // [rsp+118h] [rbp+10h]
  bool v56; // [rsp+120h] [rbp+18h]
  bool v57; // [rsp+128h] [rbp+20h]

  v3 = *((_QWORD *)a2 + 17);
  v5 = *((_DWORD *)a2 + 16);
  v6 = a2;
  v51 = *((_QWORD *)a2 + 4);
  v50 = *((_QWORD *)a3 + 5);
  v46 = *((_DWORD *)a2 + 20);
  v45 = *((_DWORD *)a2 + 23);
  v44 = v5;
  v55 = 0;
  v39 = 0;
  if ( v3 )
  {
    v55 = *(_QWORD *)(v3 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v3 + 72) == a3 )
    {
      v39 = 1;
      v55 = *(_QWORD *)(v3 + 64) == (_QWORD)a2;
    }
  }
  v7 = *((_QWORD *)a2 + 18);
  v48 = v7;
  v56 = 0;
  v40 = 0;
  if ( v7 )
  {
    v56 = *(_QWORD *)(v7 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v7 + 72) == a3 )
    {
      v40 = 1;
      v56 = *(_QWORD *)(v7 + 64) == (_QWORD)a2;
    }
  }
  v8 = *((_QWORD *)a2 + 19);
  v49 = v8;
  v57 = 0;
  v41 = 0;
  if ( v8 )
  {
    v57 = *(_QWORD *)(v8 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v8 + 72) == a3 )
    {
      v41 = 1;
      v57 = *(_QWORD *)(v8 + 64) == (_QWORD)a2;
    }
  }
  v9 = *((_QWORD *)a2 + 20);
  v38 = 0;
  v42 = 0;
  if ( v9 )
  {
    v31 = *(_QWORD *)(v9 + 64) == (_QWORD)a2;
    v38 = *(_QWORD *)(v9 + 64) == (_QWORD)v6;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v9 + 72) == a3 )
    {
      v42 = 1;
      v38 = v31;
    }
  }
  v10 = v5 - 3;
  v52 = (struct _SLIST_ENTRY *)*((_QWORD *)v6 + 16);
  v11 = 0;
  v12 = 0;
  v53 = *((_QWORD *)a3 + 15);
  ++**((_QWORD **)this + 10);
  v13 = *((_DWORD *)v6 + 21);
  do
  {
    v14 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v6 + 15);
    v15 = 0LL;
    v16 = (VIDMM_RECYCLE_HEAP_MGR *)(*((_QWORD *)v6 + 9) + 72LL);
    if ( v14 != v16 )
      v15 = (__int64)v14 - 120;
    v47 = v15;
    if ( v10 <= 2 )
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v16, v6);
    if ( v6 == a3 )
      v11 = 1;
    v43 = v11;
    if ( !v12 )
    {
      v12 = 1;
      goto LABEL_24;
    }
    v17 = *((unsigned int *)v6 + 21);
    if ( (_DWORD)v17 )
    {
      v17 = (unsigned int)(v17 - 1);
      if ( (_DWORD)v17 )
      {
        v18 = (unsigned int)(v17 - 1);
        if ( (_DWORD)v18 )
        {
          if ( (_DWORD)v18 == 1 )
          {
            if ( !v13 && g_IsInternalRelease )
            {
              v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v14, v15);
              v32[5] = 0LL;
              v32[6] = 0LL;
              v32[7] = 0LL;
              v32[3] = 270LL;
              v32[4] = 9LL;
              WdLogEvent5_WdCriticalError(v32);
            }
            if ( v13 == 1 || v13 == 2 )
              v13 = 3;
          }
        }
        else
        {
          if ( !v13 && g_IsInternalRelease )
          {
            v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v14, v15);
            v33[5] = 0LL;
            v33[6] = 0LL;
            v33[7] = 0LL;
            v33[3] = 270LL;
            v33[4] = 9LL;
            WdLogEvent5_WdCriticalError(v33);
          }
          if ( v13 == 1 )
            v13 = 2;
        }
        goto LABEL_24;
      }
      if ( v13 )
        goto LABEL_24;
    }
    else if ( !v13 )
    {
      goto LABEL_24;
    }
    if ( g_IsInternalRelease )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v14, v15);
      v34[3] = 270LL;
      v34[4] = 9LL;
      v34[5] = 0LL;
      v34[6] = 0LL;
      v34[7] = 0LL;
      WdLogEvent5_WdCriticalError(v34);
    }
LABEL_24:
    v19 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
    v20 = *(_QWORD *)(v19 + 8);
    if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0p(v19, &EventRecycleRangeDestroy, v15, v6);
    v21 = WdLogNewEntry5_WdEvent(v19, v14);
    *(_QWORD *)(v21 + 24) = v6;
    WdLogEvent5_WdEvent(v21);
    v22 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v6 + 9);
    v23 = (*(_QWORD *)v22)-- == 1LL;
    if ( v23 )
      VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v22);
    v24 = *(_QWORD *)(v20 + 1312);
    ++*(_DWORD *)(v24 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v24) >= *(_WORD *)(v24 + 16) )
    {
      ++*(_DWORD *)(v24 + 32);
      (*(void (__fastcall **)(struct VIDMM_RECYCLE_RANGE *, __int64))(v24 + 56))(v6, v24);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v24, (PSLIST_ENTRY)v6);
    }
    v11 = v43;
    v25 = (struct VIDMM_RECYCLE_RANGE *)v47;
    if ( v43 )
      v25 = v6;
    v6 = v25;
  }
  while ( !v43 );
  v26 = (struct VIDMM_RECYCLE_BLOCK *)*((_QWORD *)this + 10);
  v27 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v26 + 4) + 8LL) + 1312LL);
  ++*(_DWORD *)(v27 + 20);
  v28 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v27);
  if ( v28
    || (v35 = *(unsigned int *)(v27 + 44),
        ++*(_DWORD *)(v27 + 24),
        (v28 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(v27 + 48))(
                               *(unsigned int *)(v27 + 36),
                               v35,
                               *(unsigned int *)(v27 + 40),
                               v27)) != 0LL) )
  {
    VIDMM_RECYCLE_RANGE::Init((VIDMM_RECYCLE_RANGE *)v28, v26, v51, v50);
  }
  v30 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)this + 10);
  v23 = (*(_QWORD *)v30)-- == 1LL;
  if ( v23 )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v30);
  *((_DWORD *)&v28[5].Next + 3) = v45;
  LODWORD(v28[5].Next) = v46;
  LODWORD(v28[4].Next) = v44;
  HIDWORD(v28[5].Next) = v13;
  *((_QWORD *)&v28[8].Next + 1) = v3;
  v28[9].Next = (struct _SLIST_ENTRY *)v48;
  *((_QWORD *)&v28[9].Next + 1) = v49;
  v28[10].Next = (struct _SLIST_ENTRY *)v9;
  if ( v55 )
    *(_QWORD *)(v3 + 64) = v28;
  if ( v39 )
    *(_QWORD *)(v3 + 72) = v28;
  if ( v56 )
    *(_QWORD *)(v48 + 64) = v28;
  if ( v40 )
    *(_QWORD *)(v48 + 72) = v28;
  if ( v57 )
    *(_QWORD *)(v49 + 64) = v28;
  if ( v41 )
    *(_QWORD *)(v49 + 72) = v28;
  if ( v38 )
    *(_QWORD *)(v9 + 64) = v28;
  if ( v42 )
    *(_QWORD *)(v9 + 72) = v28;
  v28[8].Next = v52;
  v52->Next = (PSLIST_ENTRY)((char *)v28 + 120);
  *((_QWORD *)&v28[7].Next + 1) = v53;
  *(_QWORD *)(v53 + 8) = (char *)v28 + 120;
  if ( v44 >= 3 )
  {
    if ( v44 > 4 )
    {
      if ( v44 == 5 )
        VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
          *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL),
          (struct VIDMM_RECYCLE_RANGE *)v28);
    }
    else
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL),
        (struct VIDMM_RECYCLE_RANGE *)v28);
    }
  }
  if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
  {
    v36 = *((_QWORD *)this + 10);
    v37 = *(_QWORD *)(v36 + 32);
    McTemplateK0pppppppqq(
      v37,
      v36,
      v29,
      **(_QWORD **)(*(_QWORD *)(v37 + 8) + 8LL),
      v28,
      v36,
      *(_QWORD *)(v36 + 56),
      v37,
      v28[2].Next,
      *((_QWORD *)&v28[2].Next + 1),
      *(_DWORD *)v37,
      LODWORD(v28[4].Next));
  }
}
