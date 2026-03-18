/*
 * XREFs of ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009E300
 * Callers:
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0066A48 (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0064838 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C00648A8 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0065AD0 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00665D0 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C00676D0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C00691D0 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C00691F0 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

struct _SLIST_ENTRY *__fastcall VIDMM_RECYCLE_HEAP::BuildIdleLockedMultirangeForRange(
        VIDMM_RECYCLE_HEAP_MGR **this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  VIDMM_RECYCLE_RANGE *v4; // rcx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  __int64 v6; // r8
  PSLIST_ENTRY Multirange; // rbx
  __int64 v8; // rsi
  struct VIDMM_RECYCLE_RANGE *Next; // r14
  struct VIDMM_RECYCLE_RANGE *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  struct _SLIST_ENTRY *result; // rax

  VIDMM_RECYCLE_RANGE::GetPreviousRange(a2);
  NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(v4);
  Multirange = 0LL;
  v8 = 0LL;
  if ( v6 && *(_DWORD *)(v6 + 64) == 4 )
    Multirange = *(PSLIST_ENTRY *)(v6 + 152);
  if ( NextRange && *((_DWORD *)NextRange + 16) == 4 )
    v8 = *((_QWORD *)NextRange + 19);
  if ( Multirange )
  {
    if ( v8 )
    {
      Next = (struct VIDMM_RECYCLE_RANGE *)Multirange[4].Next;
      v10 = *(struct VIDMM_RECYCLE_RANGE **)(v8 + 72);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)this, 0LL, (__int64)Multirange);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)this, 0LL, v8);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(this[1], Multirange);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(this[1], (struct _SLIST_ENTRY *)v8);
      Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                     (__int64)this[1],
                     2u,
                     *((_QWORD *)a2 + 9),
                     (__int64)Multirange[2].Next,
                     *(_QWORD *)(v8 + 40));
      Multirange[4].Next = (struct _SLIST_ENTRY *)Next;
      *((_QWORD *)&Multirange[4].Next + 1) = v10;
      while ( 1 )
      {
        *((_QWORD *)Next + 19) = Multirange;
        if ( Next == v10 )
          break;
        Next = VIDMM_RECYCLE_RANGE::GetNextRange(Next);
      }
    }
    else
    {
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)this, 0LL, (__int64)Multirange);
      *((_QWORD *)&Multirange[4].Next + 1) = a2;
      v11 = *((_QWORD *)a2 + 5);
      *((_QWORD *)a2 + 19) = Multirange;
      *((_QWORD *)&Multirange[2].Next + 1) = v11;
    }
  }
  else if ( v8 )
  {
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)this, 0LL, v8);
    *(_QWORD *)(v8 + 64) = a2;
    Multirange = (PSLIST_ENTRY)v8;
    v12 = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 19) = v8;
    *(_QWORD *)(v8 + 32) = v12;
  }
  else
  {
    result = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
               (__int64)this[1],
               2u,
               *((_QWORD *)a2 + 9),
               *((_QWORD *)a2 + 4),
               *((_QWORD *)a2 + 5));
    Multirange = result;
    if ( !result )
      return result;
    result[4].Next = (struct _SLIST_ENTRY *)a2;
    *((_QWORD *)&result[4].Next + 1) = a2;
    *((_QWORD *)a2 + 19) = result;
  }
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 0LL, (__int64)Multirange);
  VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(Multirange, 0);
  return Multirange;
}
