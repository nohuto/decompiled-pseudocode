/*
 * XREFs of ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C006861C
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C0065C28 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 * Callees:
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C00676D0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00684CC (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0068FEC (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C0069074 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C00691D0 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C00691F0 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Commit(struct _SLIST_ENTRY *this, unsigned __int8 a2, unsigned __int8 *a3)
{
  VIDMM_RECYCLE_RANGE *i; // rdi
  int v7; // esi
  struct VIDMM_RECYCLE_RANGE *Next; // rcx
  char v9; // r8
  char v10; // al

  for ( i = (VIDMM_RECYCLE_RANGE *)this[4].Next; ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v7 = VIDMM_RECYCLE_RANGE::Commit(i, a2);
    if ( v7 < 0 )
    {
      while ( i != (VIDMM_RECYCLE_RANGE *)this[4].Next )
      {
        i = VIDMM_RECYCLE_RANGE::GetPreviousRange(i);
        VIDMM_RECYCLE_RANGE::Decommit(i);
      }
      return (unsigned int)v7;
    }
    if ( i == *((VIDMM_RECYCLE_RANGE **)&this[4].Next + 1) )
      break;
  }
  Next = (struct VIDMM_RECYCLE_RANGE *)this[4].Next;
  v9 = 0;
  while ( 1 )
  {
    *((_QWORD *)Next + 17) = 0LL;
    *((_QWORD *)Next + 18) = 0LL;
    *((_QWORD *)Next + 19) = 0LL;
    v10 = *((_BYTE *)Next + 84);
    *((_QWORD *)Next + 20) = this;
    if ( !v10 )
      v9 = 1;
    if ( Next == *((struct VIDMM_RECYCLE_RANGE **)&this[4].Next + 1) )
      break;
    Next = VIDMM_RECYCLE_RANGE::GetNextRange(Next);
  }
  if ( v9 && (dword_1C003C338 || *a3) )
    VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory((VIDMM_RECYCLE_MULTIRANGE *)this);
  *((_DWORD *)&this[13].Next + 2) = 3;
  VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(this, 0);
  return 0LL;
}
