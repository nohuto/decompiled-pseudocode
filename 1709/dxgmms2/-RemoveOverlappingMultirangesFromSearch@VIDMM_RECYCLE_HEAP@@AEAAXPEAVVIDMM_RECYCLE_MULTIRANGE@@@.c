/*
 * XREFs of ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C006A2D4
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C00695D0 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 * Callees:
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C006A168 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C006CEB8 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::RemoveOverlappingMultirangesFromSearch(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2)
{
  struct VIDMM_RECYCLE_RANGE *i; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct VIDMM_RECYCLE_MULTIRANGE *v8; // rsi
  struct VIDMM_RECYCLE_MULTIRANGE *v9; // rsi
  struct VIDMM_RECYCLE_MULTIRANGE *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v5 = WdLogNewEntry5_WdEvent(this, a2);
    *(_QWORD *)(v5 + 24) = i;
    WdLogEvent5_WdEvent(v5);
    if ( *((_DWORD *)a2 + 54) )
    {
      v10 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)i + 17);
      if ( v10 )
      {
        v11 = WdLogNewEntry5_WdEvent(v7, v6);
        *(_QWORD *)(v11 + 24) = v10;
        WdLogEvent5_WdEvent(v11);
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(this, v10, a2);
        *((_QWORD *)i + 17) = 0LL;
      }
    }
    if ( *((_DWORD *)a2 + 54) != 1 )
    {
      v8 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)i + 18);
      if ( v8 )
      {
        v12 = WdLogNewEntry5_WdEvent(v7, v6);
        *(_QWORD *)(v12 + 24) = v8;
        WdLogEvent5_WdEvent(v12);
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(this, v8, a2);
        *((_QWORD *)i + 18) = 0LL;
      }
    }
    if ( *((_DWORD *)a2 + 54) != 2 )
    {
      v9 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)i + 19);
      if ( v9 )
      {
        v13 = WdLogNewEntry5_WdEvent(v7, v6);
        *(_QWORD *)(v13 + 24) = v9;
        WdLogEvent5_WdEvent(v13);
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(this, v9, a2);
        *((_QWORD *)i + 19) = 0LL;
      }
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
      break;
  }
}
