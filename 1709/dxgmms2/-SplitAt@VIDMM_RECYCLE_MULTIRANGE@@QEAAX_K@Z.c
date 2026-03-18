/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C006B38C
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C00695D0 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C006A010 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C006A6D0 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C006B614 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C006C390 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C006C62C (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C006CEB8 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C006CED8 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::SplitAt(VIDMM_RECYCLE_MULTIRANGE *this, __int64 a2)
{
  char v2; // di
  struct VIDMM_RECYCLE_RANGE *NextRange; // rbx
  unsigned __int64 i; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // r12
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // r15
  PSLIST_ENTRY v13; // rbp
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(__int64, __int64, __int64, __int64); // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r8
  struct _RTL_BALANCED_NODE *v23; // rbx
  ULONG_PTR v24; // rax
  struct _RTL_BALANCED_NODE *v25; // rax
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rax
  ULONG_PTR v29[2]; // [rsp+30h] [rbp-58h] BYREF
  char v30; // [rsp+40h] [rbp-48h]
  unsigned int v31; // [rsp+90h] [rbp+8h] BYREF
  __int64 v32; // [rsp+98h] [rbp+10h]

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
    LOBYTE(v31) = 1;
    VIDMM_RECYCLE_RANGE::SplitAt(NextRange, i - v6, (bool *)&v31);
    if ( !(_BYTE)v31 )
    {
      v28 = WdLogNewEntry5_WdWarning(v7);
      *(_QWORD *)(v28 + 24) = this;
      *(_QWORD *)(v28 + 32) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
      WdLogEvent5_WdWarning(v28);
      return;
    }
    if ( NextRange == *((struct VIDMM_RECYCLE_RANGE **)this + 9) && *((_QWORD *)NextRange + 5) != *((_QWORD *)this + 5) )
      *((_QWORD *)this + 9) = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
    v8 = *((_QWORD *)NextRange + 15);
    PreviousRange = NextRange;
    v10 = *((_QWORD *)NextRange + 9);
    NextRange = 0LL;
    if ( v8 != v10 + 72 )
      NextRange = (struct VIDMM_RECYCLE_RANGE *)(v8 - 120);
  }
  v11 = *((_QWORD *)this + 10);
  v32 = *((_QWORD *)this + 5);
  v31 = *((_DWORD *)this + 54);
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 32) + 8LL) + 1176LL);
  ++*(_DWORD *)(v12 + 20);
  v13 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v12);
  if ( v13
    || (v14 = *(unsigned int *)(v12 + 44),
        v15 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v12 + 48),
        v16 = *(unsigned int *)(v12 + 40),
        v17 = *(unsigned int *)(v12 + 36),
        ++*(_DWORD *)(v12 + 24),
        (v13 = (PSLIST_ENTRY)v15(v17, v14, v16, v12)) != 0LL) )
  {
    VIDMM_RECYCLE_MULTIRANGE::Init(v13, v31, v11, i, v32);
    v13[4].Next = (struct _SLIST_ENTRY *)NextRange;
    *((_QWORD *)&v13[4].Next + 1) = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = PreviousRange;
    *((_QWORD *)this + 5) = i;
    VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)v13);
    v19 = *((unsigned int *)this + 54);
    if ( (_DWORD)v19 )
    {
      v26 = v19 - 1;
      if ( v26 )
      {
        if ( v26 != 1 )
          return;
        v27 = 0LL;
      }
      else
      {
        v27 = 1LL;
      }
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(*(_QWORD **)(*((_QWORD *)this + 10) + 32LL), v27, (__int64)v13);
      return;
    }
    v20 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
    v21 = WdLogNewEntry5_WdEvent(v19, v18);
    *(_QWORD *)(v21 + 24) = v13;
    *(_QWORD *)(v21 + 32) = 2LL;
    WdLogEvent5_WdEvent(v21);
    v23 = *(struct _RTL_BALANCED_NODE **)(v20 + 64);
    v24 = *((_QWORD *)&v13[3].Next + 1);
    v29[0] = *((_QWORD *)&v13[2].Next + 1) - (unsigned __int64)v13[2].Next;
    v29[1] = v24;
    v30 = 0;
    if ( !v23 )
      goto LABEL_15;
    while ( 1 )
    {
      if ( (int)VidMmCompareForInsertAlignedRange(v29, v23) >= 0 )
      {
        v25 = v23->Children[1];
        if ( !v25 )
        {
          v2 = 1;
LABEL_15:
          LOBYTE(v22) = v2;
          RtlAvlInsertNodeEx(v20 + 64, v23, v22, v13);
          *((_DWORD *)&v13[5].Next + 2) = 2;
          return;
        }
      }
      else
      {
        v25 = v23->Children[0];
        if ( !v23->Children[0] )
          goto LABEL_15;
      }
      v23 = v25;
    }
  }
}
