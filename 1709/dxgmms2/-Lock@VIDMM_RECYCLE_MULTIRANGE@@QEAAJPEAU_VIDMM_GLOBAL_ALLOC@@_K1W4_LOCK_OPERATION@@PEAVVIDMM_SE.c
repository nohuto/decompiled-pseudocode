/*
 * XREFs of ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C006BDF0
 * Callers:
 *     ?ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0068980 (-ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATI.c)
 * Callees:
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C006B290 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C006B5D4 (-ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C006C62C (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C006CB90 (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C006CBE0 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C006CEB8 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C006CED8 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x1C00A6E5C (-SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Lock(
        VIDMM_RECYCLE_RANGE **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        VIDMM_RECYCLE_RANGE *a4,
        enum _LOCK_OPERATION a5,
        struct VIDMM_SEGMENT *a6,
        unsigned __int8 a7)
{
  VIDMM_RECYCLE_RANGE *v7; // r13
  __int64 v8; // rsi
  _QWORD *v11; // rax
  VIDMM_RECYCLE_RANGE *v12; // rcx
  VIDMM_RECYCLE_RANGE *i; // rdi
  int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 result; // rax
  struct VIDMM_RECYCLE_RANGE *NextRange; // rdi
  unsigned __int64 v20; // r14
  unsigned __int64 j; // rbp
  unsigned __int64 v22; // rax
  VIDMM_RECYCLE_RANGE *v23; // rcx
  __int64 v24; // r12
  struct VIDMM_RECYCLE_RANGE *v25; // rsi
  enum _LOCK_OPERATION v26; // r8d
  int v27; // r13d
  VIDMM_RECYCLE_RANGE *v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  int v32; // ebp
  enum _LOCK_OPERATION v33; // r8d
  VIDMM_RECYCLE_RANGE *v34; // rcx
  VIDMM_RECYCLE_RANGE *k; // rcx
  VIDMM_RECYCLE_RANGE *v36; // rax
  VIDMM_RECYCLE_RANGE *v37; // rbx
  VIDMM_RECYCLE_RANGE *PreviousRange; // rax
  VIDMM_RECYCLE_RANGE *v39; // rbx
  VIDMM_RECYCLE_RANGE *v40; // rax
  VIDMM_RECYCLE_RANGE *v41; // rbx
  unsigned __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // [rsp+60h] [rbp+8h]

  v7 = a4;
  v8 = a3;
  if ( *((_BYTE *)this + 130) )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v11[3] = 270LL;
    v11[4] = 52LL;
    v11[5] = 12LL;
    v11[6] = 0LL;
    v11[7] = 0LL;
    WdLogEvent5_WdCriticalError(v11);
  }
  if ( !v8 )
  {
    v12 = this[6];
    if ( v7 == (VIDMM_RECYCLE_RANGE *)(this[5] - v12) && v12 == this[4] )
    {
      for ( i = this[8]; ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
      {
        v14 = VIDMM_RECYCLE_RANGE::Lock(i, a2, (enum _LOCK_OPERATION)a3, a6);
        if ( v14 < 0 )
          break;
        if ( i == this[9] )
        {
          ++*((_DWORD *)this + 23);
          if ( a7 )
            *((_BYTE *)this + 129) = 1;
          else
            *((_BYTE *)this + 128) = 1;
          VIDMM_RECYCLE_MULTIRANGE::ZeroIfNeeded(this);
          v17 = (_QWORD *)WdLogNewEntry5_WdEvent(v16, v15);
          v17[4] = 0LL;
          goto LABEL_59;
        }
      }
      while ( i != this[8] )
      {
        i = VIDMM_RECYCLE_RANGE::GetPreviousRange(i);
        VIDMM_RECYCLE_RANGE::Unlock(i);
      }
      return (unsigned int)v14;
    }
  }
  NextRange = this[8];
  v20 = (unsigned __int64)this[6] + v8;
  for ( j = (unsigned __int64)v7 + v20; NextRange; NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange) )
  {
    if ( *((_QWORD *)NextRange + 5) > v20 )
      break;
  }
  v22 = *((_QWORD *)NextRange + 5);
  v23 = NextRange;
  v24 = *((_QWORD *)NextRange + 4);
  if ( v22 >= j )
  {
    if ( v20 == v24 )
    {
      if ( v22 == j )
      {
LABEL_47:
        result = VIDMM_RECYCLE_RANGE::Lock(v23, a2, (enum _LOCK_OPERATION)a3, a6);
        if ( (int)result < 0 )
          return result;
        goto LABEL_55;
      }
      LOBYTE(a5) = 1;
      VIDMM_RECYCLE_RANGE::SplitAt(NextRange, j - v24, (bool *)&a5);
    }
    else
    {
      v42 = v20 - v24;
      if ( v22 != j )
      {
        v23 = VIDMM_RECYCLE_RANGE::SplitMiddle(NextRange, v42, j - v24);
        goto LABEL_47;
      }
      LOBYTE(a5) = 1;
      VIDMM_RECYCLE_RANGE::SplitAt(NextRange, v42, (bool *)&a5);
      if ( (_BYTE)a5 )
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
    }
    v23 = NextRange;
    goto LABEL_47;
  }
  v25 = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
  if ( !v25 )
  {
LABEL_26:
    v29 = *((_QWORD *)v25 + 5);
    v45 = v29;
    if ( v20 != v24 )
    {
      v30 = v20 - *((_QWORD *)NextRange + 4);
      LOBYTE(a5) = 1;
      VIDMM_RECYCLE_RANGE::SplitAt(NextRange, v30, (bool *)&a5);
      if ( (_BYTE)a5 )
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      v29 = v45;
    }
    if ( v29 != j )
    {
      v31 = j - *((_QWORD *)v25 + 4);
      LOBYTE(a5) = 1;
      VIDMM_RECYCLE_RANGE::SplitAt(v25, v31, (bool *)&a5);
    }
    v32 = VIDMM_RECYCLE_RANGE::Lock(NextRange, a2, v26, a6);
    v34 = v25;
    if ( v32 < 0 )
    {
      while ( 1 )
      {
        PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(v34);
        v39 = PreviousRange;
        if ( PreviousRange == NextRange )
          break;
        VIDMM_RECYCLE_RANGE::Unlock(PreviousRange);
        v34 = v39;
      }
      return (unsigned int)v32;
    }
    v32 = VIDMM_RECYCLE_RANGE::Lock(v25, a2, v33, a6);
    if ( v32 < 0 )
    {
      for ( k = v25; ; k = v41 )
      {
        v40 = VIDMM_RECYCLE_RANGE::GetPreviousRange(k);
        v41 = v40;
        if ( v40 == NextRange )
          break;
        VIDMM_RECYCLE_RANGE::Unlock(v40);
      }
      VIDMM_RECYCLE_RANGE::Unlock(NextRange);
      return (unsigned int)v32;
    }
    v8 = a3;
LABEL_55:
    ++*((_DWORD *)this + 23);
    if ( a7 )
      *((_BYTE *)this + 129) = 1;
    else
      *((_BYTE *)this + 128) = 1;
    VIDMM_RECYCLE_MULTIRANGE::ZeroIfNeeded(this);
    v17 = (_QWORD *)WdLogNewEntry5_WdEvent(v44, v43);
    v17[4] = v8;
LABEL_59:
    v17[3] = this;
    v17[5] = v7;
    WdLogEvent5_WdEvent(v17);
    *((_DWORD *)this + 54) = 4;
    VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible((struct _SLIST_ENTRY *)this);
    return 0LL;
  }
  while ( 1 )
  {
    if ( *((_QWORD *)v25 + 5) >= j )
    {
LABEL_25:
      v7 = a4;
      goto LABEL_26;
    }
    v27 = VIDMM_RECYCLE_RANGE::Lock(v25, a2, v26, a6);
    v28 = v25;
    if ( v27 < 0 )
      break;
    v25 = VIDMM_RECYCLE_RANGE::GetNextRange(v25);
    if ( !v25 )
      goto LABEL_25;
  }
  while ( 1 )
  {
    v36 = VIDMM_RECYCLE_RANGE::GetPreviousRange(v28);
    v37 = v36;
    if ( v36 == NextRange )
      break;
    VIDMM_RECYCLE_RANGE::Unlock(v36);
    v28 = v37;
  }
  return (unsigned int)v27;
}
