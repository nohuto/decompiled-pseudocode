/*
 * XREFs of ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C006F868
 * Callers:
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C006EF50 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C006F4E8 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C0070E04 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner(
        VIDMM_RECYCLE_MULTIRANGE *this,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rdi
  int v5; // ecx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rax

  v3 = (_QWORD *)*((_QWORD *)this + 8);
  while ( 1 )
  {
    v5 = *((_DWORD *)this + 54);
    if ( v5 )
    {
      v7 = (unsigned int)(v5 - 1);
      if ( (_DWORD)v7 )
      {
        if ( (_DWORD)v7 == 1 )
        {
          v3[19] = this;
        }
        else
        {
          v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, a2, a3);
          v8[3] = 270LL;
          v8[4] = 52LL;
          v8[5] = 10LL;
          v8[6] = 0LL;
          v8[7] = 0LL;
          WdLogEvent5_WdCriticalError(v8);
        }
      }
      else
      {
        v3[18] = this;
      }
    }
    else
    {
      v3[17] = this;
    }
    if ( v3 == *((_QWORD **)this + 9) )
      break;
    a2 = v3[15];
    v6 = v3[9];
    v3 = 0LL;
    if ( a2 != v6 + 72 )
      v3 = (_QWORD *)(a2 - 120);
  }
}
