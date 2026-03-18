/*
 * XREFs of ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0069A90
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C00695D0 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 *     ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C006C188 (-Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C006827C (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C00682EC (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C006A6D0 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C006ACA0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C006B290 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C006C390 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C006CEB8 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C006CED8 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00A6138 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
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
  _QWORD **v20; // rsi
  _QWORD **v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rax
  struct _RTL_BALANCED_NODE *v25; // rbx
  struct _RTL_BALANCED_NODE *v26; // rax
  struct _SLIST_ENTRY *v27; // rcx
  _QWORD *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  VIDMM_RECYCLE_MULTIRANGE *v31; // r12
  __int64 v32; // r14
  _QWORD *v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  signed __int64 v37; // rcx
  __int64 v38; // rax
  struct _RTL_BALANCED_NODE *v39; // rdi
  struct _RTL_BALANCED_NODE *v40; // rax
  char *v41; // rcx
  struct _SLIST_ENTRY *v42; // rcx
  struct _RTL_BALANCED_NODE *v44; // rax
  __int64 v45; // r12
  __int64 v46; // r13
  __int64 v47; // rsi
  PSLIST_ENTRY v48; // rdi
  struct _SLIST_ENTRY *v49; // rax
  __int64 v50; // rdx
  __int64 (__fastcall *v51)(__int64, __int64, __int64, __int64); // rax
  __int64 v52; // r8
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 (__fastcall *v56)(__int64, __int64, __int64, __int64); // rax
  __int64 v57; // r8
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 (__fastcall *v60)(__int64, __int64, __int64, __int64); // rax
  __int64 v61; // r8
  __int64 v62; // rcx
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // r13
  PSLIST_ENTRY Multirange; // rax
  PSLIST_ENTRY v65; // r8
  struct _SLIST_ENTRY *v66; // rax
  struct _SLIST_ENTRY *v67; // r8
  _QWORD *v68; // rax
  _QWORD *v69; // rdi
  _QWORD *v70; // rdx
  struct VIDMM_RECYCLE_RANGE *i; // rdi
  int v72; // ecx
  int v73; // ecx
  __int64 v74; // rdx
  _QWORD *v75; // rax
  struct _RTL_BALANCED_NODE *v76; // rax
  _QWORD **v77; // [rsp+30h] [rbp-38h] BYREF
  struct _SLIST_ENTRY *v78; // [rsp+38h] [rbp-30h]
  signed __int64 v79; // [rsp+40h] [rbp-28h] BYREF
  __int64 v80; // [rsp+48h] [rbp-20h]
  char v81; // [rsp+50h] [rbp-18h]
  __int64 v84; // [rsp+C0h] [rbp+58h]
  __int64 v85; // [rsp+C0h] [rbp+58h]
  __int64 v86; // [rsp+C8h] [rbp+60h]

  v78 = (struct _SLIST_ENTRY *)&v77;
  v77 = &v77;
  NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
  v3 = (_QWORD *)*((_QWORD *)a2 + 9);
  v4 = *((_QWORD *)NextRange + 4);
  v5 = v3[5];
  v6 = *(_QWORD *)(*((_QWORD *)this + 1) + 1176LL);
  v7 = *((_QWORD *)NextRange + 9);
  ++*(_DWORD *)(v6 + 20);
  v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v6);
  if ( v8
    || (v59 = *(unsigned int *)(v6 + 44),
        v60 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v6 + 48),
        v61 = *(unsigned int *)(v6 + 40),
        v62 = *(unsigned int *)(v6 + 36),
        ++*(_DWORD *)(v6 + 24),
        (v8 = (PSLIST_ENTRY)v60(v62, v59, v61, v6)) != 0LL) )
  {
    VIDMM_RECYCLE_MULTIRANGE::Init(v8, 0LL, v7, v4, v5);
    v8[4].Next = (struct _SLIST_ENTRY *)NextRange;
    *((_QWORD *)&v8[4].Next + 1) = v3;
    v9 = (PSLIST_ENTRY)((char *)v8 + 200);
    *((_DWORD *)&v8[5].Next + 2) = 2;
    v10 = v78;
    if ( v78->Next != (struct _SLIST_ENTRY *)&v77 )
      __fastfail(3u);
    v8[13].Next = v78;
    v11 = &v77;
    v9->Next = (struct _SLIST_ENTRY *)&v77;
    v10->Next = v9;
    v78 = (PSLIST_ENTRY)((char *)v8 + 200);
    v12 = *(struct _SLIST_ENTRY **)(*((_QWORD *)a2 + 10) + 32LL);
    if ( (unsigned int)(LODWORD(v12->Next) - 3) <= 3 )
    {
      while ( 1 )
      {
LABEL_15:
        if ( *((_DWORD *)NextRange + 16) == 4 )
        {
          v45 = *((_QWORD *)NextRange + 5);
          v46 = *((_QWORD *)NextRange + 4);
          v85 = *((_QWORD *)NextRange + 9);
          v47 = *(_QWORD *)(*((_QWORD *)this + 1) + 1176LL);
          ++*(_DWORD *)(v47 + 20);
          v48 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v47);
          if ( !v48 )
          {
            v55 = *(unsigned int *)(v47 + 44);
            v56 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v47 + 48);
            v57 = *(unsigned int *)(v47 + 40);
            v58 = *(unsigned int *)(v47 + 36);
            ++*(_DWORD *)(v47 + 24);
            v48 = (PSLIST_ENTRY)v56(v58, v55, v57, v47);
            if ( !v48 )
              goto LABEL_68;
          }
          VIDMM_RECYCLE_MULTIRANGE::Init(v48, 2LL, v85, v46, v45);
          v48[4].Next = (struct _SLIST_ENTRY *)NextRange;
          *((_QWORD *)&v48[4].Next + 1) = NextRange;
          v49 = (PSLIST_ENTRY)((char *)v48 + 200);
          *((_QWORD *)NextRange + 19) = v48;
          *((_DWORD *)&v48[5].Next + 2) = 0;
          v12 = v78;
          if ( v78->Next != (struct _SLIST_ENTRY *)&v77 )
            __fastfail(3u);
          v48[13].Next = v78;
          v11 = &v77;
          v49->Next = (struct _SLIST_ENTRY *)&v77;
          v12->Next = v49;
          v78 = (PSLIST_ENTRY)((char *)v48 + 200);
        }
        *((_QWORD *)NextRange + 17) = v8;
        *((_QWORD *)NextRange + 20) = 0LL;
        if ( NextRange == (struct VIDMM_RECYCLE_RANGE *)v3 )
        {
          v20 = v77;
          *((_DWORD *)v77 - 28) = 3;
          v21 = v20 - 25;
          v22 = WdLogNewEntry5_WdEvent(v12, v11);
          *(_QWORD *)(v22 + 24) = v20 - 25;
          *(_QWORD *)(v22 + 32) = 2LL;
          WdLogEvent5_WdEvent(v22);
          LOBYTE(v23) = 0;
          v24 = (__int64)*(v20 - 18);
          v25 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 8);
          v79 = (char *)v21[5] - (char *)v21[4];
          v80 = v24;
          v81 = 0;
          if ( v25 )
          {
            while ( 1 )
            {
              if ( (int)VidMmCompareForInsertAlignedRange(&v79, v25) < 0 )
              {
                v26 = v25->Children[0];
                if ( !v25->Children[0] )
                {
                  LOBYTE(v23) = 0;
                  break;
                }
              }
              else
              {
                v26 = v25->Children[1];
                if ( !v26 )
                {
                  LOBYTE(v23) = 1;
                  break;
                }
              }
              v25 = v26;
            }
          }
          RtlAvlInsertNodeEx((char *)this + 64, v25, v23, v20 - 25);
          *((_DWORD *)v21 + 22) = 2;
          v27 = (struct _SLIST_ENTRY *)(v20 - 25);
          v28 = *v20;
          v31 = VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v27);
          if ( v28 == &v77 )
            return VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v31, v29);
LABEL_25:
          v32 = *((int *)v28 - 28);
          v33 = v28 - 25;
          *((_DWORD *)v28 - 28) = 3;
          v34 = WdLogNewEntry5_WdEvent(v30, v29);
          *(_QWORD *)(v34 + 24) = v28 - 25;
          *(_QWORD *)(v34 + 32) = v32;
          WdLogEvent5_WdEvent(v34);
          v37 = v33[5] - v33[4];
          v38 = *(v28 - 18);
          v79 = v37;
          v80 = v38;
          v81 = 0;
          if ( (_DWORD)v32 != 1 )
          {
            if ( !(_DWORD)v32 )
            {
              v39 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
              LOBYTE(v36) = 0;
              if ( v39 )
              {
                while ( 1 )
                {
                  if ( (int)VidMmCompareForInsertAlignedRange(&v79, v39) < 0 )
                  {
                    v44 = v39->Children[0];
                    if ( !v39->Children[0] )
                    {
                      LOBYTE(v36) = 0;
                      break;
                    }
                  }
                  else
                  {
                    v44 = v39->Children[1];
                    if ( !v44 )
                    {
                      LOBYTE(v36) = 1;
                      break;
                    }
                  }
                  v39 = v44;
                }
              }
              v41 = (char *)this + 48;
              goto LABEL_34;
            }
            if ( (_DWORD)v32 != 2 )
            {
              v75 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v35, v36);
              v75[3] = 270LL;
              v75[4] = 52LL;
              v75[5] = 15LL;
              v75[6] = v32;
              v75[7] = 0LL;
              WdLogEvent5_WdCriticalError(v75);
              goto LABEL_35;
            }
            v39 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 8);
            LOBYTE(v36) = 0;
            if ( v39 )
            {
              while ( 1 )
              {
                if ( (int)VidMmCompareForInsertAlignedRange(&v79, v39) < 0 )
                {
                  v76 = v39->Children[0];
                  if ( !v39->Children[0] )
                  {
                    LOBYTE(v36) = 0;
                    break;
                  }
                }
                else
                {
                  v76 = v39->Children[1];
                  if ( !v76 )
                  {
                    LOBYTE(v36) = 1;
                    break;
                  }
                }
                v39 = v76;
              }
            }
            v41 = (char *)this + 64;
            goto LABEL_34;
          }
          v39 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 7);
          LOBYTE(v36) = 0;
          if ( !v39 )
            goto LABEL_33;
          while ( 1 )
          {
            if ( (int)VidMmCompareForInsertAlignedRange(&v79, v39) < 0 )
            {
              v40 = v39->Children[0];
              if ( !v39->Children[0] )
              {
                LOBYTE(v36) = 0;
                goto LABEL_33;
              }
            }
            else
            {
              v40 = v39->Children[1];
              if ( !v40 )
              {
                LOBYTE(v36) = 1;
LABEL_33:
                v41 = (char *)this + 56;
LABEL_34:
                RtlAvlInsertNodeEx(v41, v39, v36, v28 - 25);
LABEL_35:
                *((_DWORD *)v33 + 22) = v32;
                v42 = (struct _SLIST_ENTRY *)(v28 - 25);
                v28 = (_QWORD *)*v28;
                VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v42);
                if ( v28 == &v77 )
                  return VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v31, v29);
                goto LABEL_25;
              }
            }
            v39 = v40;
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
        v65 = Multirange;
        if ( !Multirange )
          goto LABEL_68;
        Multirange[4].Next = (struct _SLIST_ENTRY *)v14;
        *((_QWORD *)&Multirange[4].Next + 1) = PreviousRange;
        *((_DWORD *)&Multirange[5].Next + 2) = 1;
        while ( 1 )
        {
          v14[18] = (__int64)v65;
          if ( v14 == (__int64 *)PreviousRange )
            break;
          v14 = (__int64 *)VIDMM_RECYCLE_RANGE::GetNextRange((VIDMM_RECYCLE_RANGE *)v14);
        }
        v66 = v78;
        v67 = (PSLIST_ENTRY)((char *)v65 + 200);
        if ( v78->Next != (struct _SLIST_ENTRY *)&v77 )
          __fastfail(3u);
        *((_QWORD *)&v67->Next + 1) = v78;
        v12 = (struct _SLIST_ENTRY *)&v77;
        v67->Next = (struct _SLIST_ENTRY *)&v77;
        v14 = 0LL;
        v66->Next = v67;
        v78 = v67;
      }
      if ( v13 == (struct VIDMM_RECYCLE_RANGE *)v3 )
        break;
      v13 = VIDMM_RECYCLE_RANGE::GetNextRange(v13);
    }
    if ( !v14 )
      goto LABEL_15;
    v15 = v3[5];
    v84 = v14[4];
    v86 = *((_QWORD *)NextRange + 9);
    v16 = *(_QWORD *)(*((_QWORD *)this + 1) + 1176LL);
    ++*(_DWORD *)(v16 + 20);
    v17 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v16);
    if ( v17
      || (v50 = *(unsigned int *)(v16 + 44),
          v51 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v16 + 48),
          v52 = *(unsigned int *)(v16 + 40),
          v53 = *(unsigned int *)(v16 + 36),
          ++*(_DWORD *)(v16 + 24),
          (v17 = (PSLIST_ENTRY)v51(v53, v50, v52, v16)) != 0LL) )
    {
      VIDMM_RECYCLE_MULTIRANGE::Init(v17, 1LL, v86, v84, v15);
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
      v18 = v78;
      v19 = (PSLIST_ENTRY)((char *)v17 + 200);
      if ( v78->Next != (struct _SLIST_ENTRY *)&v77 )
        __fastfail(3u);
      *((_QWORD *)&v19->Next + 1) = v78;
      v12 = (struct _SLIST_ENTRY *)&v77;
      v19->Next = (struct _SLIST_ENTRY *)&v77;
      v18->Next = v19;
      v78 = v19;
      goto LABEL_15;
    }
  }
LABEL_68:
  v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v54);
  v68[3] = *((_QWORD *)a2 + 10);
  v68[4] = *(_QWORD *)(*((_QWORD *)a2 + 8) + 32LL);
  v68[5] = *(_QWORD *)(*((_QWORD *)a2 + 9) + 40LL);
  v68[6] = **(_QWORD **)(*((_QWORD *)this + 1) + 8LL);
  WdLogEvent5_WdWarning(v68);
  v69 = v77;
  while ( v69 != &v77 )
  {
    v70 = v69 - 25;
    v69 = (_QWORD *)*v69;
    *((_DWORD *)v70 + 22) = 3;
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)this + 1), (struct _SLIST_ENTRY *)v70);
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v72 = *((_DWORD *)i + 16);
    *((_QWORD *)i + 17) = 0LL;
    *((_QWORD *)i + 18) = 0LL;
    *((_QWORD *)i + 19) = 0LL;
    *((_QWORD *)i + 20) = 0LL;
    if ( v72 )
    {
      v73 = v72 - 4;
      if ( v73 )
      {
        if ( v73 != 1 )
          goto LABEL_78;
        v74 = 1LL;
      }
      else
      {
        v74 = 0LL;
      }
    }
    else
    {
      v74 = 2LL;
    }
    VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v74, i);
LABEL_78:
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
      break;
  }
  return 0;
}
