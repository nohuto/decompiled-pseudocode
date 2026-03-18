/*
 * XREFs of ?CheckLowestAddress@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00B1EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_SEGMENT::CheckLowestAddress(
        VIDMM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        bool *a3,
        _QWORD *a4)
{
  __int64 v4; // rax
  __int64 v6; // rax

  if ( a2 )
  {
    if ( *((_QWORD *)a2 + 17) )
      v4 = *((_QWORD *)a2 + 18);
    else
      v4 = *((_QWORD *)a2 + 27);
    *a4 = v4;
    return 3221225473LL;
  }
  else
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v6 + 24) = 6309LL;
    WdLogEvent5_WdAssertion(v6);
    return 3221226021LL;
  }
}
