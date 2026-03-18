/*
 * XREFs of ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0070F70
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C007047C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C0070E04 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0071E9C (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::RemoveOverlappingMultirangesFromSearch(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2)
{
  struct VIDMM_RECYCLE_RANGE *i; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  struct VIDMM_RECYCLE_MULTIRANGE *v9; // rsi
  __int64 v10; // rax
  struct VIDMM_RECYCLE_MULTIRANGE *v11; // rsi
  struct VIDMM_RECYCLE_MULTIRANGE *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax

  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v5 = WdLogNewEntry5_WdEvent(this, a2);
    *(_QWORD *)(v5 + 24) = i;
    WdLogEvent5_WdEvent(v5);
    v8 = *((_DWORD *)a2 + 54);
    if ( v8 )
    {
      v9 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)i + 17);
      if ( v9 )
      {
        v10 = WdLogNewEntry5_WdEvent(v7, v6);
        *(_QWORD *)(v10 + 24) = v9;
        WdLogEvent5_WdEvent(v10);
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(this, v9, a2);
        *((_QWORD *)i + 17) = 0LL;
        v8 = *((_DWORD *)a2 + 54);
      }
    }
    if ( v8 != 1 )
    {
      v11 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)i + 18);
      if ( v11 )
      {
        v13 = WdLogNewEntry5_WdEvent(v7, v6);
        *(_QWORD *)(v13 + 24) = v11;
        WdLogEvent5_WdEvent(v13);
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(this, v11, a2);
        *((_QWORD *)i + 18) = 0LL;
        v8 = *((_DWORD *)a2 + 54);
      }
    }
    if ( v8 != 2 )
    {
      v12 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)i + 19);
      if ( v12 )
      {
        v14 = WdLogNewEntry5_WdEvent(v7, v6);
        *(_QWORD *)(v14 + 24) = v12;
        WdLogEvent5_WdEvent(v14);
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(this, v12, a2);
        *((_QWORD *)i + 19) = 0LL;
      }
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
      break;
  }
}
