/*
 * XREFs of ?ReserveOutsideRangeIfDisplayableCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00A33F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindSegmentLocationOutsideRange@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00A1A8C (-FindSegmentLocationOutsideRange@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveOutsideRangeIfDisplayableCB(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        bool *a3,
        unsigned __int64 *a4)
{
  __int64 v4; // rbx
  int SegmentLocationOutsideRange; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  LODWORD(v4) = 0;
  if ( *((int *)a2 + 41) > 0 && (**((_DWORD **)a2 + 65) & 0x200) == 0 )
  {
    SegmentLocationOutsideRange = VIDMM_SEGMENT::FindSegmentLocationOutsideRange(this, a2, *a4, a4[1]);
    v4 = SegmentLocationOutsideRange;
    if ( SegmentLocationOutsideRange < 0 )
    {
      v8 = WdLogNewEntry5_WdWarning(v7, v6);
      *(_QWORD *)(v8 + 24) = v4;
      WdLogEvent5_WdWarning(v8);
    }
  }
  return (unsigned int)v4;
}
