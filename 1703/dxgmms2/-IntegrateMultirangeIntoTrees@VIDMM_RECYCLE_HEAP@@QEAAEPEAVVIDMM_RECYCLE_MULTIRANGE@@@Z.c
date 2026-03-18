/*
 * XREFs of ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00660D0
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C0065C28 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 *     ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0068420 (-Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0064838 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C00648A8 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0066BB0 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C00670E0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C00676D0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0068720 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C00691D0 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C00691F0 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009DE14 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

unsigned __int8 __fastcall VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2)
{
  struct VIDMM_RECYCLE_RANGE *NextRange; // rbx
  _QWORD *v3; // r14
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r13
  PSLIST_ENTRY v8; // r15
  struct _SLIST_ENTRY *v9; // rax
  struct _SLIST_ENTRY *v10; // rcx
  _QWORD *v11; // rdx
  struct _SLIST_ENTRY *v12; // rcx
  struct VIDMM_RECYCLE_RANGE *v13; // rsi
  __int64 *v14; // rdi
  __int64 v15; // r12
  __int64 v16; // r13
  PSLIST_ENTRY v17; // rsi
  struct _SLIST_ENTRY *v18; // rax
  struct _SLIST_ENTRY *v19; // rsi
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // rsi
  PSLIST_ENTRY v23; // rdi
  struct _SLIST_ENTRY *v24; // rax
  _QWORD **v25; // rsi
  _QWORD **v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rax
  struct _RTL_BALANCED_NODE *v30; // rbx
  struct _RTL_BALANCED_NODE *v31; // rax
  struct _SLIST_ENTRY *v32; // rcx
  _QWORD *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  VIDMM_RECYCLE_MULTIRANGE *v36; // r12
  __int64 v37; // r14
  _QWORD *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rax
  struct _RTL_BALANCED_NODE *v43; // rbx
  struct _RTL_BALANCED_NODE *v44; // rax
  char *v45; // rcx
  struct _SLIST_ENTRY *v46; // rcx
  struct _RTL_BALANCED_NODE *v48; // rax
  __int64 v49; // rdx
  __int64 (__fastcall *v50)(__int64, __int64, __int64, __int64); // rax
  __int64 v51; // r8
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 (__fastcall *v55)(__int64, __int64, __int64, __int64); // rax
  __int64 v56; // r8
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 (__fastcall *v59)(__int64, __int64, __int64, __int64); // rax
  __int64 v60; // r8
  __int64 v61; // rcx
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // r13
  PSLIST_ENTRY Multirange; // rax
  PSLIST_ENTRY v64; // r8
  struct _SLIST_ENTRY *v65; // rax
  struct _SLIST_ENTRY *v66; // r8
  _QWORD *v67; // rax
  _QWORD *v68; // rdi
  struct _SLIST_ENTRY *v69; // rdx
  struct VIDMM_RECYCLE_RANGE *i; // rdi
  int v71; // ecx
  int v72; // ecx
  __int64 v73; // rdx
  _QWORD *v74; // rax
  struct _RTL_BALANCED_NODE *v75; // rax
  _QWORD **v76; // [rsp+30h] [rbp-38h] BYREF
  struct _SLIST_ENTRY *v77; // [rsp+38h] [rbp-30h]
  signed __int64 v78; // [rsp+40h] [rbp-28h] BYREF
  __int64 v79; // [rsp+48h] [rbp-20h]
  char v80; // [rsp+50h] [rbp-18h]
  __int64 v83; // [rsp+C0h] [rbp+58h]
  __int64 v84; // [rsp+C0h] [rbp+58h]
  __int64 v85; // [rsp+C8h] [rbp+60h]

  v77 = (struct _SLIST_ENTRY *)&v76;
  v76 = &v76;
  NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
  v3 = (_QWORD *)*((_QWORD *)a2 + 9);
  v4 = *((_QWORD *)NextRange + 4);
  v5 = v3[5];
  v6 = *(_QWORD *)(*((_QWORD *)this + 1) + 1176LL);
  v7 = *((_QWORD *)NextRange + 9);
  ++*(_DWORD *)(v6 + 20);
  v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v6);
  if ( v8
    || (v58 = *(unsigned int *)(v6 + 44),
        v59 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v6 + 48),
        v60 = *(unsigned int *)(v6 + 40),
        v61 = *(unsigned int *)(v6 + 36),
        ++*(_DWORD *)(v6 + 24),
        (v8 = (PSLIST_ENTRY)v59(v61, v58, v60, v6)) != 0LL) )
  {
    VIDMM_RECYCLE_MULTIRANGE::Init(v8, 0LL, v7, v4, v5);
    v8[4].Next = (struct _SLIST_ENTRY *)NextRange;
    *((_QWORD *)&v8[4].Next + 1) = v3;
    v9 = (PSLIST_ENTRY)((char *)v8 + 200);
    *((_DWORD *)&v8[5].Next + 2) = 2;
    v10 = v77;
    if ( v77->Next != (struct _SLIST_ENTRY *)&v76 )
      __fastfail(3u);
    v8[13].Next = v77;
    v11 = &v76;
    v9->Next = (struct _SLIST_ENTRY *)&v76;
    v10->Next = v9;
    v77 = (PSLIST_ENTRY)((char *)v8 + 200);
    v12 = *(struct _SLIST_ENTRY **)(*((_QWORD *)a2 + 10) + 32LL);
    if ( (unsigned int)(LODWORD(v12->Next) - 3) <= 3 )
    {
      while ( 1 )
      {
LABEL_15:
        if ( *((_DWORD *)NextRange + 16) == 4 )
        {
          v20 = *((_QWORD *)NextRange + 5);
          v21 = *((_QWORD *)NextRange + 4);
          v84 = *((_QWORD *)NextRange + 9);
          v22 = *(_QWORD *)(*((_QWORD *)this + 1) + 1176LL);
          ++*(_DWORD *)(v22 + 20);
          v23 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v22);
          if ( !v23 )
          {
            v54 = *(unsigned int *)(v22 + 44);
            v55 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v22 + 48);
            v56 = *(unsigned int *)(v22 + 40);
            v57 = *(unsigned int *)(v22 + 36);
            ++*(_DWORD *)(v22 + 24);
            v23 = (PSLIST_ENTRY)v55(v57, v54, v56, v22);
            if ( !v23 )
              goto LABEL_69;
          }
          VIDMM_RECYCLE_MULTIRANGE::Init(v23, 2LL, v84, v21, v20);
          v23[4].Next = (struct _SLIST_ENTRY *)NextRange;
          *((_QWORD *)&v23[4].Next + 1) = NextRange;
          v24 = (PSLIST_ENTRY)((char *)v23 + 200);
          *((_QWORD *)NextRange + 19) = v23;
          *((_DWORD *)&v23[5].Next + 2) = 0;
          v12 = v77;
          if ( v77->Next != (struct _SLIST_ENTRY *)&v76 )
            __fastfail(3u);
          v23[13].Next = v77;
          v11 = &v76;
          v24->Next = (struct _SLIST_ENTRY *)&v76;
          v12->Next = v24;
          v77 = (PSLIST_ENTRY)((char *)v23 + 200);
        }
        *((_QWORD *)NextRange + 17) = v8;
        *((_QWORD *)NextRange + 20) = 0LL;
        if ( NextRange == (struct VIDMM_RECYCLE_RANGE *)v3 )
        {
          v25 = v76;
          *((_DWORD *)v76 - 28) = 3;
          v26 = v25 - 25;
          v27 = WdLogNewEntry5_WdEvent(v12, v11);
          *(_QWORD *)(v27 + 24) = v25 - 25;
          *(_QWORD *)(v27 + 32) = 2LL;
          WdLogEvent5_WdEvent(v27);
          LOBYTE(v28) = 0;
          v29 = (__int64)*(v25 - 18);
          v30 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 8);
          v78 = (char *)v26[5] - (char *)v26[4];
          v79 = v29;
          v80 = 0;
          if ( v30 )
          {
            while ( 1 )
            {
              if ( (int)VidMmCompareForInsertAlignedRange(&v78, v30) < 0 )
              {
                v31 = v30->Children[0];
                if ( !v30->Children[0] )
                {
                  LOBYTE(v28) = 0;
                  break;
                }
              }
              else
              {
                v31 = v30->Children[1];
                if ( !v31 )
                {
                  LOBYTE(v28) = 1;
                  break;
                }
              }
              v30 = v31;
            }
          }
          RtlAvlInsertNodeEx((char *)this + 64, v30, v28, v25 - 25);
          *((_DWORD *)v26 + 22) = 2;
          v32 = (struct _SLIST_ENTRY *)(v25 - 25);
          v33 = *v25;
          v36 = VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v32);
          if ( v33 == &v76 )
            return VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v36, 0);
LABEL_28:
          v37 = *((int *)v33 - 28);
          v38 = v33 - 25;
          *((_DWORD *)v33 - 28) = 3;
          v39 = WdLogNewEntry5_WdEvent(v35, v34);
          *(_QWORD *)(v39 + 24) = v33 - 25;
          *(_QWORD *)(v39 + 32) = v37;
          WdLogEvent5_WdEvent(v39);
          v42 = *(v33 - 18);
          v78 = v38[5] - v38[4];
          v79 = v42;
          v80 = 0;
          if ( !(_DWORD)v37 )
          {
            v43 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
            LOBYTE(v41) = 0;
            if ( v43 )
            {
              while ( 1 )
              {
                if ( (int)VidMmCompareForInsertAlignedRange(&v78, v43) < 0 )
                {
                  v48 = v43->Children[0];
                  if ( !v43->Children[0] )
                  {
                    LOBYTE(v41) = 0;
                    break;
                  }
                }
                else
                {
                  v48 = v43->Children[1];
                  if ( !v48 )
                  {
                    LOBYTE(v41) = 1;
                    break;
                  }
                }
                v43 = v48;
              }
            }
            v45 = (char *)this + 48;
            goto LABEL_38;
          }
          if ( (_DWORD)v37 != 1 )
          {
            if ( (_DWORD)v37 != 2 )
            {
              v74 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v37 - 1), v40, v41);
              v74[3] = 270LL;
              v74[4] = 52LL;
              v74[5] = 15LL;
              v74[6] = v37;
              v74[7] = 0LL;
              WdLogEvent5_WdCriticalError(v74);
              goto LABEL_39;
            }
            v43 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 8);
            LOBYTE(v41) = 0;
            if ( v43 )
            {
              while ( 1 )
              {
                if ( (int)VidMmCompareForInsertAlignedRange(&v78, v43) < 0 )
                {
                  v75 = v43->Children[0];
                  if ( !v43->Children[0] )
                  {
                    LOBYTE(v41) = 0;
                    break;
                  }
                }
                else
                {
                  v75 = v43->Children[1];
                  if ( !v75 )
                  {
                    LOBYTE(v41) = 1;
                    break;
                  }
                }
                v43 = v75;
              }
            }
            v45 = (char *)this + 64;
            goto LABEL_38;
          }
          v43 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 7);
          LOBYTE(v41) = 0;
          if ( !v43 )
            goto LABEL_37;
          while ( 1 )
          {
            if ( (int)VidMmCompareForInsertAlignedRange(&v78, v43) < 0 )
            {
              v44 = v43->Children[0];
              if ( !v43->Children[0] )
              {
                LOBYTE(v41) = 0;
                goto LABEL_37;
              }
            }
            else
            {
              v44 = v43->Children[1];
              if ( !v44 )
              {
                LOBYTE(v41) = 1;
LABEL_37:
                v45 = (char *)this + 56;
LABEL_38:
                RtlAvlInsertNodeEx(v45, v43, v41, v33 - 25);
LABEL_39:
                *((_DWORD *)v38 + 22) = v37;
                v46 = (struct _SLIST_ENTRY *)(v33 - 25);
                v33 = (_QWORD *)*v33;
                VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v46);
                if ( v33 == &v76 )
                  return VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v36, 0);
                goto LABEL_28;
              }
            }
            v43 = v44;
          }
        }
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      }
    }
    v13 = NextRange;
    v14 = 0LL;
    while ( 1 )
    {
      if ( *((_DWORD *)v13 + 16) )
      {
        if ( !v14 )
          v14 = (__int64 *)v13;
      }
      else if ( v14 )
      {
        PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(v13);
        Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                       *((_QWORD *)this + 1),
                       1u,
                       *((_QWORD *)NextRange + 9),
                       v14[4],
                       *((_QWORD *)PreviousRange + 5));
        v64 = Multirange;
        if ( !Multirange )
          goto LABEL_69;
        Multirange[4].Next = (struct _SLIST_ENTRY *)v14;
        *((_QWORD *)&Multirange[4].Next + 1) = PreviousRange;
        *((_DWORD *)&Multirange[5].Next + 2) = 1;
        while ( 1 )
        {
          v14[18] = (__int64)v64;
          if ( v14 == (__int64 *)PreviousRange )
            break;
          v14 = (__int64 *)VIDMM_RECYCLE_RANGE::GetNextRange((VIDMM_RECYCLE_RANGE *)v14);
        }
        v65 = v77;
        v66 = (PSLIST_ENTRY)((char *)v64 + 200);
        if ( v77->Next != (struct _SLIST_ENTRY *)&v76 )
          __fastfail(3u);
        *((_QWORD *)&v66->Next + 1) = v77;
        v12 = (struct _SLIST_ENTRY *)&v76;
        v66->Next = (struct _SLIST_ENTRY *)&v76;
        v14 = 0LL;
        v65->Next = v66;
        v77 = v66;
      }
      if ( v13 == (struct VIDMM_RECYCLE_RANGE *)v3 )
        break;
      v13 = VIDMM_RECYCLE_RANGE::GetNextRange(v13);
    }
    if ( !v14 )
      goto LABEL_15;
    v15 = v3[5];
    v83 = v14[4];
    v85 = *((_QWORD *)NextRange + 9);
    v16 = *(_QWORD *)(*((_QWORD *)this + 1) + 1176LL);
    ++*(_DWORD *)(v16 + 20);
    v17 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v16);
    if ( v17
      || (v49 = *(unsigned int *)(v16 + 44),
          v50 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v16 + 48),
          v51 = *(unsigned int *)(v16 + 40),
          v52 = *(unsigned int *)(v16 + 36),
          ++*(_DWORD *)(v16 + 24),
          (v17 = (PSLIST_ENTRY)v50(v52, v49, v51, v16)) != 0LL) )
    {
      VIDMM_RECYCLE_MULTIRANGE::Init(v17, 1LL, v85, v83, v15);
      v17[4].Next = (struct _SLIST_ENTRY *)v14;
      *((_QWORD *)&v17[4].Next + 1) = v3;
      *((_DWORD *)&v17[5].Next + 2) = 1;
      while ( 1 )
      {
        v14[18] = (__int64)v17;
        if ( v14 == v3 )
          break;
        v14 = (__int64 *)VIDMM_RECYCLE_RANGE::GetNextRange((VIDMM_RECYCLE_RANGE *)v14);
      }
      v18 = v77;
      v19 = (PSLIST_ENTRY)((char *)v17 + 200);
      if ( v77->Next != (struct _SLIST_ENTRY *)&v76 )
        __fastfail(3u);
      *((_QWORD *)&v19->Next + 1) = v77;
      v12 = (struct _SLIST_ENTRY *)&v76;
      v19->Next = (struct _SLIST_ENTRY *)&v76;
      v18->Next = v19;
      v77 = v19;
      goto LABEL_15;
    }
  }
LABEL_69:
  v67 = (_QWORD *)WdLogNewEntry5_WdWarning(v53, v11);
  v67[3] = *((_QWORD *)a2 + 10);
  v67[4] = *(_QWORD *)(*((_QWORD *)a2 + 8) + 32LL);
  v67[5] = *(_QWORD *)(*((_QWORD *)a2 + 9) + 40LL);
  v67[6] = **(_QWORD **)(*((_QWORD *)this + 1) + 8LL);
  WdLogEvent5_WdWarning(v67);
  v68 = v76;
  while ( v68 != &v76 )
  {
    v69 = (struct _SLIST_ENTRY *)(v68 - 25);
    v68 = (_QWORD *)*v68;
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)this + 1), v69);
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v71 = *((_DWORD *)i + 16);
    *((_QWORD *)i + 17) = 0LL;
    *((_QWORD *)i + 18) = 0LL;
    *((_QWORD *)i + 19) = 0LL;
    if ( v71 )
    {
      v72 = v71 - 4;
      if ( v72 )
      {
        if ( v72 != 1 )
          goto LABEL_79;
        v73 = 1LL;
      }
      else
      {
        v73 = 0LL;
      }
    }
    else
    {
      v73 = 2LL;
    }
    VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v73, i);
LABEL_79:
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
      break;
  }
  return 0;
}
