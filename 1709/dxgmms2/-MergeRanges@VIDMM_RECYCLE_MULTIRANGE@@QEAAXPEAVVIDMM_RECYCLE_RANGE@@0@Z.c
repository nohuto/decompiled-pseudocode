/*
 * XREFs of ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C006A7C0
 * Callers:
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C006B290 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 * Callees:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0002560 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p @ 0x1C00215B4 (McTemplateK0p.c)
 *     McTemplateK0pppppppqq @ 0x1C0023270 (McTemplateK0pppppppqq.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0068534 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00685D4 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C006C530 (-Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::MergeRanges(
        VIDMM_RECYCLE_BLOCK **this,
        struct VIDMM_RECYCLE_RANGE *a2,
        struct VIDMM_RECYCLE_RANGE *a3)
{
  unsigned __int64 v3; // rax
  struct VIDMM_RECYCLE_RANGE *v4; // rbx
  int v5; // edx
  VIDMM_RECYCLE_MULTIRANGE *v7; // r8
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // r10d
  bool v13; // r13
  char v14; // r12
  __int64 v15; // rdx
  struct VIDMM_RECYCLE_RANGE *v16; // r9
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  int v19; // eax
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rax
  VIDMM_RECYCLE_BLOCK *v24; // rcx
  bool v25; // zf
  __int64 v26; // rdi
  struct VIDMM_RECYCLE_BLOCK *v27; // rsi
  __int64 v28; // rdi
  PSLIST_ENTRY v29; // rbx
  __int64 v30; // r8
  VIDMM_RECYCLE_BLOCK *v31; // rcx
  char v32; // al
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 (__fastcall *v35)(__int64, __int64, __int64, __int64); // rax
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  char v40; // [rsp+60h] [rbp-A8h]
  bool v41; // [rsp+61h] [rbp-A7h]
  bool v42; // [rsp+62h] [rbp-A6h]
  bool v43; // [rsp+63h] [rbp-A5h]
  bool v44; // [rsp+64h] [rbp-A4h]
  unsigned int v45; // [rsp+68h] [rbp-A0h]
  int v46; // [rsp+6Ch] [rbp-9Ch]
  int v47; // [rsp+70h] [rbp-98h]
  int v48; // [rsp+74h] [rbp-94h]
  struct VIDMM_RECYCLE_RANGE *v49; // [rsp+78h] [rbp-90h]
  unsigned __int64 v50; // [rsp+80h] [rbp-88h]
  unsigned __int64 v51; // [rsp+88h] [rbp-80h]
  __int64 v52; // [rsp+90h] [rbp-78h]
  __int64 v53; // [rsp+98h] [rbp-70h]
  struct _SLIST_ENTRY *v54; // [rsp+A0h] [rbp-68h]
  __int64 v55; // [rsp+A8h] [rbp-60h]
  bool v57; // [rsp+118h] [rbp+10h]
  bool v58; // [rsp+120h] [rbp+18h]
  char v59; // [rsp+128h] [rbp+20h]

  v3 = *((_QWORD *)a2 + 4);
  v4 = a2;
  v5 = *((_DWORD *)a2 + 16);
  v51 = v3;
  v7 = (VIDMM_RECYCLE_MULTIRANGE *)this;
  v46 = v5;
  v8 = *((_QWORD *)v4 + 17);
  v50 = *((_QWORD *)a3 + 5);
  v48 = *((_DWORD *)v4 + 20);
  v47 = *((_DWORD *)v4 + 23);
  v57 = 0;
  v59 = 0;
  if ( v8 )
  {
    v57 = *(_QWORD *)(v8 + 64) == (_QWORD)v4;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v8 + 72) == a3 )
    {
      v59 = 1;
      v57 = *(_QWORD *)(v8 + 64) == (_QWORD)v4;
    }
  }
  v9 = *((_QWORD *)v4 + 18);
  v58 = 0;
  v40 = 0;
  if ( v9 )
  {
    v58 = *(_QWORD *)(v9 + 64) == (_QWORD)v4;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v9 + 72) == a3 )
    {
      v40 = 1;
      v58 = *(_QWORD *)(v9 + 64) == (_QWORD)v4;
    }
  }
  v10 = *((_QWORD *)v4 + 19);
  v52 = v10;
  v41 = 0;
  v42 = 0;
  if ( v10 )
  {
    v41 = *(_QWORD *)(v10 + 64) == (_QWORD)v4;
    v42 = *(_QWORD *)(v10 + 72) == (_QWORD)a3;
  }
  v11 = *((_QWORD *)v4 + 20);
  v53 = v11;
  v43 = 0;
  v44 = 0;
  if ( v11 )
  {
    v43 = *(_QWORD *)(v11 + 64) == (_QWORD)v4;
    v44 = *(_QWORD *)(v11 + 72) == (_QWORD)a3;
  }
  v12 = v5 - 3;
  v54 = (struct _SLIST_ENTRY *)*((_QWORD *)v4 + 16);
  v13 = 1;
  v55 = *((_QWORD *)a3 + 15);
  v45 = v5 - 3;
  ++*(_QWORD *)this[10];
  v14 = 0;
  while ( 1 )
  {
    v15 = *((_QWORD *)v4 + 15);
    v16 = 0LL;
    if ( v15 != *((_QWORD *)v4 + 9) + 72LL )
      v16 = (struct VIDMM_RECYCLE_RANGE *)(v15 - 120);
    v49 = v16;
    if ( v12 <= 2 )
    {
      v15 = *((_QWORD *)v4 + 13);
      v17 = (_QWORD *)((char *)v4 + 104);
      if ( *(struct VIDMM_RECYCLE_RANGE **)(v15 + 8) != (struct VIDMM_RECYCLE_RANGE *)((char *)v4 + 104)
        || (v18 = (_QWORD *)*((_QWORD *)v4 + 14), (_QWORD *)*v18 != v17) )
      {
        __fastfail(3u);
      }
      *v18 = v15;
      *(_QWORD *)(v15 + 8) = v18;
      *v17 = 0LL;
      v19 = *((_DWORD *)v4 + 16);
      *((_QWORD *)v4 + 14) = 0LL;
      *((_QWORD *)v4 + 12) = 0LL;
      if ( v19 == 5 )
      {
        v20 = *((_QWORD *)v4 + 4) - *((_QWORD *)v4 + 5);
        if ( (__int64)(v20 + _InterlockedExchangeAdd64(
                               &VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit,
                               v20)) < 0
          && g_IsInternalRelease )
        {
          goto LABEL_70;
        }
      }
      else if ( (unsigned int)(v19 - 3) <= 1 )
      {
        v20 = *((_QWORD *)v4 + 4) - *((_QWORD *)v4 + 5);
        if ( (__int64)(v20 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock, v20)) < 0 )
        {
          if ( g_IsInternalRelease )
          {
LABEL_70:
            v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v15, v7);
            v33[3] = 270LL;
            v33[4] = 9LL;
            v33[5] = 0LL;
            v33[6] = 0LL;
            v33[7] = 0LL;
            WdLogEvent5_WdCriticalError(v33);
            v7 = (VIDMM_RECYCLE_MULTIRANGE *)this;
          }
        }
      }
    }
    v13 = v13 && (*((_BYTE *)v4 + 84) & 1) != 0;
    if ( v14 || (*((_BYTE *)v4 + 84) & 2) != 0 )
      v14 = 1;
    v21 = *(_QWORD *)(*((_QWORD *)v7 + 10) + 32LL);
    v22 = *(_QWORD *)(v21 + 8);
    if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0p(v21, &EventRecycleRangeDestroy, (__int64)v7, v4);
    v23 = WdLogNewEntry5_WdEvent(v21, v15);
    *(_QWORD *)(v23 + 24) = v4;
    WdLogEvent5_WdEvent(v23);
    v24 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v4 + 9);
    v25 = (*(_QWORD *)v24)-- == 1LL;
    if ( v25 )
      VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v24);
    v26 = *(_QWORD *)(v22 + 1168);
    ++*(_DWORD *)(v26 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v26) >= *(_WORD *)(v26 + 16) )
    {
      ++*(_DWORD *)(v26 + 32);
      (*(void (__fastcall **)(struct VIDMM_RECYCLE_RANGE *, __int64))(v26 + 56))(v4, v26);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v26, (PSLIST_ENTRY)v4);
    }
    if ( v4 == a3 )
      break;
    v4 = v49;
    v7 = (VIDMM_RECYCLE_MULTIRANGE *)this;
    v12 = v45;
  }
  v27 = this[10];
  v28 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v27 + 4) + 8LL) + 1168LL);
  ++*(_DWORD *)(v28 + 20);
  v29 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v28);
  if ( v29
    || (v34 = *(unsigned int *)(v28 + 44),
        v35 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v28 + 48),
        v36 = *(unsigned int *)(v28 + 40),
        v37 = *(unsigned int *)(v28 + 36),
        ++*(_DWORD *)(v28 + 24),
        (v29 = (PSLIST_ENTRY)v35(v37, v34, v36, v28)) != 0LL) )
  {
    VIDMM_RECYCLE_RANGE::Init((VIDMM_RECYCLE_RANGE *)v29, v27, v51, v50);
  }
  v31 = this[10];
  v25 = (*(_QWORD *)v31)-- == 1LL;
  if ( v25 )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v31);
  *((_DWORD *)&v29[5].Next + 3) = v47;
  LODWORD(v29[5].Next) = v48;
  LODWORD(v29[4].Next) = v46;
  if ( v13 )
    BYTE4(v29[5].Next) |= 1u;
  v32 = (2 * v14) | BYTE4(v29[5].Next) & 0xFD;
  *((_QWORD *)&v29[8].Next + 1) = v8;
  BYTE4(v29[5].Next) = v32;
  *((_QWORD *)&v29[9].Next + 1) = v52;
  v29[9].Next = (struct _SLIST_ENTRY *)v9;
  v29[10].Next = (struct _SLIST_ENTRY *)v53;
  if ( v57 )
    *(_QWORD *)(v8 + 64) = v29;
  if ( v59 )
    *(_QWORD *)(v8 + 72) = v29;
  if ( v58 )
    *(_QWORD *)(v9 + 64) = v29;
  if ( v40 )
    *(_QWORD *)(v9 + 72) = v29;
  if ( v41 )
    *(_QWORD *)(v52 + 64) = v29;
  if ( v42 )
    *(_QWORD *)(v52 + 72) = v29;
  if ( v43 )
    *(_QWORD *)(v53 + 64) = v29;
  if ( v44 )
    *(_QWORD *)(v53 + 72) = v29;
  v29[8].Next = v54;
  v54->Next = (PSLIST_ENTRY)((char *)v29 + 120);
  *((_QWORD *)&v29[7].Next + 1) = v55;
  *(_QWORD *)(v55 + 8) = (char *)v29 + 120;
  if ( v46 >= 3 )
  {
    if ( v46 <= 4 )
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this[10] + 4) + 8LL),
        (struct VIDMM_RECYCLE_RANGE *)v29);
    }
    else if ( v46 == 5 )
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this[10] + 4) + 8LL),
        (struct VIDMM_RECYCLE_RANGE *)v29);
    }
  }
  if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
  {
    v38 = (__int64)this[10];
    v39 = *(_QWORD *)(v38 + 32);
    McTemplateK0pppppppqq(
      v39,
      v38,
      v30,
      **(_QWORD **)(*(_QWORD *)(v39 + 8) + 8LL),
      v29,
      v38,
      *(_QWORD *)(v38 + 56),
      v39,
      v29[2].Next,
      *((_QWORD *)&v29[2].Next + 1),
      *(_DWORD *)v39,
      LODWORD(v29[4].Next));
  }
}
