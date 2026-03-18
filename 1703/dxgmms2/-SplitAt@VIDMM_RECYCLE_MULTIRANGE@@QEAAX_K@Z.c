/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C00677D8
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C0065C28 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0065AD0 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0066BB0 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0067AC0 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0068720 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C00689B8 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C00691D0 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C00691F0 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::SplitAt(VIDMM_RECYCLE_MULTIRANGE *this, __int64 a2)
{
  char v2; // di
  struct VIDMM_RECYCLE_RANGE *NextRange; // rbx
  unsigned __int64 i; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // r12
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // r15
  PSLIST_ENTRY v14; // rbp
  __int64 v15; // rdx
  __int64 (__fastcall *v16)(__int64, __int64, __int64, __int64); // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r8
  struct _RTL_BALANCED_NODE *v24; // rbx
  __int64 v25; // rax
  struct _RTL_BALANCED_NODE *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r8
  struct _RTL_BALANCED_NODE *v31; // rbx
  __int64 v32; // rax
  struct _RTL_BALANCED_NODE *v33; // rax
  __int64 v34; // rax
  ULONG_PTR v35; // [rsp+30h] [rbp-58h] BYREF
  __int64 v36; // [rsp+38h] [rbp-50h]
  char v37; // [rsp+40h] [rbp-48h]
  unsigned int v38; // [rsp+90h] [rbp+8h] BYREF
  __int64 v39; // [rsp+98h] [rbp+10h]

  v2 = 0;
  NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  for ( i = a2 + *((_QWORD *)this + 4); NextRange; NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange) )
  {
    if ( *((_QWORD *)NextRange + 4) <= i && *((_QWORD *)NextRange + 5) > i )
      break;
  }
  v6 = *((_QWORD *)NextRange + 4);
  if ( v6 == i )
  {
    PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(NextRange);
  }
  else
  {
    LOBYTE(v38) = 1;
    VIDMM_RECYCLE_RANGE::SplitAt(NextRange, i - v6, (bool *)&v38);
    if ( !(_BYTE)v38 )
    {
      v34 = WdLogNewEntry5_WdWarning(v8, v7);
      *(_QWORD *)(v34 + 24) = this;
      *(_QWORD *)(v34 + 32) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
      WdLogEvent5_WdWarning(v34);
      return;
    }
    if ( NextRange == *((struct VIDMM_RECYCLE_RANGE **)this + 9) && *((_QWORD *)NextRange + 5) != *((_QWORD *)this + 5) )
      *((_QWORD *)this + 9) = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
    v9 = *((_QWORD *)NextRange + 15);
    PreviousRange = NextRange;
    v11 = *((_QWORD *)NextRange + 9);
    NextRange = 0LL;
    if ( v9 != v11 + 72 )
      NextRange = (struct VIDMM_RECYCLE_RANGE *)(v9 - 120);
  }
  v12 = *((_QWORD *)this + 10);
  v39 = *((_QWORD *)this + 5);
  v38 = *((_DWORD *)this + 54);
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 32) + 8LL) + 1176LL);
  ++*(_DWORD *)(v13 + 20);
  v14 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v13);
  if ( v14
    || (v15 = *(unsigned int *)(v13 + 44),
        v16 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v13 + 48),
        v17 = *(unsigned int *)(v13 + 40),
        v18 = *(unsigned int *)(v13 + 36),
        ++*(_DWORD *)(v13 + 24),
        (v14 = (PSLIST_ENTRY)v16(v18, v15, v17, v13)) != 0LL) )
  {
    VIDMM_RECYCLE_MULTIRANGE::Init(v14, v38, v12, i, v39);
    v14[4].Next = (struct _SLIST_ENTRY *)NextRange;
    *((_QWORD *)&v14[4].Next + 1) = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = PreviousRange;
    *((_QWORD *)this + 5) = i;
    VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)v14);
    v20 = *((unsigned int *)this + 54);
    if ( !(_DWORD)v20 )
    {
      v21 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
      v22 = WdLogNewEntry5_WdEvent(v20, v19);
      *(_QWORD *)(v22 + 24) = v14;
      *(_QWORD *)(v22 + 32) = 2LL;
      WdLogEvent5_WdEvent(v22);
      v24 = *(struct _RTL_BALANCED_NODE **)(v21 + 64);
      v25 = *((_QWORD *)&v14[3].Next + 1);
      v35 = *((_QWORD *)&v14[2].Next + 1) - (unsigned __int64)v14[2].Next;
      v36 = v25;
      v37 = 0;
      if ( !v24 )
        goto LABEL_15;
      while ( 1 )
      {
        if ( (int)VidMmCompareForInsertAlignedRange(&v35, v24) >= 0 )
        {
          v26 = v24->Children[1];
          if ( !v26 )
          {
            v2 = 1;
LABEL_15:
            LOBYTE(v23) = v2;
            RtlAvlInsertNodeEx(v21 + 64, v24, v23, v14);
            *((_DWORD *)&v14[5].Next + 2) = 2;
            return;
          }
        }
        else
        {
          v26 = v24->Children[0];
          if ( !v24->Children[0] )
            goto LABEL_15;
        }
        v24 = v26;
      }
    }
    v27 = (unsigned int)(v20 - 1);
    if ( !(_DWORD)v27 )
    {
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(*(_QWORD **)(*((_QWORD *)this + 10) + 32LL), 1LL, (__int64)v14);
      return;
    }
    if ( (_DWORD)v27 == 1 )
    {
      v28 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
      v29 = WdLogNewEntry5_WdEvent(v27, v19);
      *(_QWORD *)(v29 + 24) = v14;
      *(_QWORD *)(v29 + 32) = 0LL;
      WdLogEvent5_WdEvent(v29);
      LOBYTE(v30) = 0;
      v31 = *(struct _RTL_BALANCED_NODE **)(v28 + 48);
      v32 = *((_QWORD *)&v14[3].Next + 1);
      v35 = *((_QWORD *)&v14[2].Next + 1) - (unsigned __int64)v14[2].Next;
      v36 = v32;
      v37 = 0;
      if ( v31 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(&v35, v31) >= 0 )
          {
            v33 = v31->Children[1];
            if ( !v33 )
            {
              LOBYTE(v30) = 1;
              break;
            }
          }
          else
          {
            v33 = v31->Children[0];
            if ( !v31->Children[0] )
            {
              LOBYTE(v30) = 0;
              break;
            }
          }
          v31 = v33;
        }
      }
      RtlAvlInsertNodeEx(v28 + 48, v31, v30, v14);
      *((_DWORD *)&v14[5].Next + 2) = 0;
    }
  }
}
