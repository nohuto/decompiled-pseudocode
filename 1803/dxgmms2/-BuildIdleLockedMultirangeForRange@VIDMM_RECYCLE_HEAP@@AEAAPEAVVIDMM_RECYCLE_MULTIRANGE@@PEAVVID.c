/*
 * XREFs of ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00AD810
 * Callers:
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0071208 (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C006D734 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C006D7A4 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0070330 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_HEAP::BuildIdleLockedMultirangeForRange(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  PSLIST_ENTRY Multirange; // rsi
  PSLIST_ENTRY v6; // rax
  VIDMM_RECYCLE_HEAP_MGR *v7; // rcx
  __int64 v8; // rbp
  struct _SLIST_ENTRY *v9; // rdx
  PSLIST_ENTRY v10; // rax
  __int64 v11; // r14

  Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                 *((_QWORD *)this + 1),
                 2u,
                 *((_QWORD *)a2 + 9),
                 *((_QWORD *)a2 + 4),
                 *((_QWORD *)a2 + 5));
  if ( !Multirange )
    return 0LL;
  v6 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
         *((_QWORD *)this + 1),
         1u,
         *((_QWORD *)a2 + 9),
         *((_QWORD *)a2 + 4),
         *((_QWORD *)a2 + 5));
  v7 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 1);
  v8 = (__int64)v6;
  if ( !v6 )
  {
    v9 = Multirange;
LABEL_5:
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(v7, v9);
    return 0LL;
  }
  v10 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
          (__int64)v7,
          0,
          *((_QWORD *)a2 + 9),
          *((_QWORD *)a2 + 4),
          *((_QWORD *)a2 + 5));
  v11 = (__int64)v10;
  if ( !v10 )
  {
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)this + 1), Multirange);
    v7 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 1);
    v9 = (struct _SLIST_ENTRY *)v8;
    goto LABEL_5;
  }
  Multirange[4].Next = (struct _SLIST_ENTRY *)a2;
  *(_QWORD *)(v8 + 64) = a2;
  v10[4].Next = (struct _SLIST_ENTRY *)a2;
  *((_QWORD *)&Multirange[4].Next + 1) = a2;
  *(_QWORD *)(v8 + 72) = a2;
  *((_QWORD *)&v10[4].Next + 1) = a2;
  *((_QWORD *)a2 + 19) = Multirange;
  *((_QWORD *)a2 + 18) = v8;
  *((_QWORD *)a2 + 17) = v10;
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 0LL, (__int64)Multirange);
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 1LL, v8);
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 2LL, v11);
  return (struct VIDMM_RECYCLE_MULTIRANGE *)Multirange;
}
