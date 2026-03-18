/*
 * XREFs of ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00685D4
 * Callers:
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C006A7C0 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C006C62C (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C006C8E4 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C006C9B4 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C006CCB0 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  VIDMM_RECYCLE_HEAP_MGR **v3; // r8
  VIDMM_RECYCLE_HEAP_MGR *v4; // rdx
  unsigned __int64 v5; // rcx
  _QWORD *v6; // rax

  *((_QWORD *)a2 + 12) = *((_QWORD *)this + 178) + (unsigned int)dword_1C0040360;
  v3 = (VIDMM_RECYCLE_HEAP_MGR **)*((_QWORD *)this + 177);
  v4 = (struct VIDMM_RECYCLE_RANGE *)((char *)a2 + 104);
  if ( *v3 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1408) )
    __fastfail(3u);
  *(_QWORD *)v4 = (char *)this + 1408;
  *((_QWORD *)v4 + 1) = v3;
  *v3 = v4;
  *((_QWORD *)this + 177) = v4;
  if ( !_InterlockedExchange((volatile __int32 *)this + 346, 1) && !*((_DWORD *)this + 358) )
    KeSetTimer((PKTIMER)((char *)this + 1224), (LARGE_INTEGER)-2000000LL, (PKDPC)((char *)this + 1288));
  v5 = *((_QWORD *)a2 + 5) - *((_QWORD *)a2 + 4);
  if ( (__int64)(v5 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit, v5)) < 0 )
  {
    if ( g_IsInternalRelease )
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4, v3);
      v6[5] = 0LL;
      v6[6] = 0LL;
      v6[7] = 0LL;
      v6[3] = 270LL;
      v6[4] = 9LL;
      WdLogEvent5_WdCriticalError(v6);
    }
  }
}
