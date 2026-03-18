/*
 * XREFs of ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0066A48
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C0065C28 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 * Callees:
 *     ?VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C006883C (-VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009DF90 (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009E140 (-BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM.c)
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009E300 (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009EA28 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_HEAP::LookupSufficientRange(
        VIDMM_RECYCLE_HEAP *this,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  struct _RTL_BALANCED_NODE *v4; // rbx
  int v6; // eax
  int AlignedRange; // eax
  int v9; // eax
  _QWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  char v12; // [rsp+30h] [rbp-18h]

  v4 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  v11[0] = a2;
  v11[1] = a3;
  v12 = a4;
  if ( v4 )
  {
    while ( 1 )
    {
      AlignedRange = VidMmFindAlignedRange(v11, v4);
      if ( AlignedRange >= 0 )
      {
        if ( AlignedRange <= 0 )
        {
LABEL_14:
          if ( v4 )
          {
            if ( !LODWORD(v4[1].Children[0]) )
            {
              VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(this, LODWORD(v4[3].ParentValue), v4);
              return VIDMM_RECYCLE_HEAP::BuildIdleLockedMultirangeForRange(this, (struct VIDMM_RECYCLE_RANGE *)v4);
            }
            return (struct VIDMM_RECYCLE_MULTIRANGE *)v4;
          }
          break;
        }
        v4 = v4->Children[1];
      }
      else
      {
        v4 = v4->Children[0];
      }
      if ( !v4 )
        goto LABEL_14;
    }
  }
  v4 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 7);
  if ( !v4 )
    goto LABEL_3;
  while ( 1 )
  {
    v9 = VidMmFindAlignedRange(v11, v4);
    if ( v9 >= 0 )
      break;
    v4 = v4->Children[0];
LABEL_19:
    if ( !v4 )
      goto LABEL_22;
  }
  if ( v9 > 0 )
  {
    v4 = v4->Children[1];
    goto LABEL_19;
  }
LABEL_22:
  if ( v4 )
  {
    if ( !LODWORD(v4[1].Children[0]) )
    {
      VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(this, LODWORD(v4[3].ParentValue), v4);
      return VIDMM_RECYCLE_HEAP::BuildIdleCommittedMultirangeForRange(this, (struct VIDMM_RECYCLE_RANGE *)v4);
    }
    return (struct VIDMM_RECYCLE_MULTIRANGE *)v4;
  }
LABEL_3:
  v4 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    do
    {
      v6 = VidMmFindAlignedRange(v11, v4);
      if ( v6 < 0 )
      {
        v4 = v4->Children[0];
      }
      else
      {
        if ( v6 <= 0 )
          break;
        v4 = v4->Children[1];
      }
    }
    while ( v4 );
    if ( v4 )
    {
      if ( !LODWORD(v4[1].Children[0]) )
      {
        VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(this, LODWORD(v4[3].ParentValue), v4);
        return VIDMM_RECYCLE_HEAP::BuildIdleFreeMultirangeForRange(this, (struct VIDMM_RECYCLE_RANGE *)v4);
      }
      return (struct VIDMM_RECYCLE_MULTIRANGE *)v4;
    }
  }
  return 0LL;
}
