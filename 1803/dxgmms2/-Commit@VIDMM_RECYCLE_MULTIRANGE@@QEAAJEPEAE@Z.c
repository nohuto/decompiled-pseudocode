/*
 * XREFs of ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C0070168
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C007047C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C006F3E8 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0071C60 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C0071CF0 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0071E9C (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C007ADE4 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Commit(struct _SLIST_ENTRY *this, unsigned __int8 a2, unsigned __int8 *a3)
{
  VIDMM_RECYCLE_RANGE *i; // rdi
  int v6; // esi
  struct VIDMM_RECYCLE_RANGE *j; // rax

  for ( i = (VIDMM_RECYCLE_RANGE *)this[4].Next; ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v6 = VIDMM_RECYCLE_RANGE::Commit(i, a2);
    if ( v6 < 0 )
      break;
    if ( i == *((VIDMM_RECYCLE_RANGE **)&this[4].Next + 1) )
    {
      for ( j = (struct VIDMM_RECYCLE_RANGE *)this[4].Next; ; j = VIDMM_RECYCLE_RANGE::GetNextRange(j) )
      {
        *((_QWORD *)j + 17) = 0LL;
        *((_QWORD *)j + 18) = 0LL;
        *((_QWORD *)j + 19) = 0LL;
        *((_QWORD *)j + 20) = this;
        if ( j == *((struct VIDMM_RECYCLE_RANGE **)&this[4].Next + 1) )
          break;
      }
      *((_DWORD *)&this[13].Next + 2) = 3;
      VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(this);
      return 0LL;
    }
  }
  while ( i != (VIDMM_RECYCLE_RANGE *)this[4].Next )
  {
    i = VIDMM_RECYCLE_RANGE::GetPreviousRange(i);
    VIDMM_RECYCLE_RANGE::Decommit(i);
  }
  return (unsigned int)v6;
}
