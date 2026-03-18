/*
 * XREFs of ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064AF0
 * Callers:
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C00645F0 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C0066C90 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0067D2C (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067F38 (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C00689B8 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0068ECC (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0068FEC (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C0069074 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  VIDMM_RECYCLE_HEAP_MGR **v3; // r8
  VIDMM_RECYCLE_HEAP_MGR *v4; // rdx
  unsigned __int64 v5; // rcx
  _QWORD *v6; // rax

  *((_QWORD *)a2 + 12) = *((_QWORD *)this + 178) + (unsigned int)dword_1C003C324;
  v3 = (VIDMM_RECYCLE_HEAP_MGR **)*((_QWORD *)this + 175);
  v4 = (struct VIDMM_RECYCLE_RANGE *)((char *)a2 + 104);
  if ( *v3 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1392) )
    __fastfail(3u);
  *(_QWORD *)v4 = (char *)this + 1392;
  *((_QWORD *)v4 + 1) = v3;
  *v3 = v4;
  *((_QWORD *)this + 175) = v4;
  if ( !_InterlockedExchange((volatile __int32 *)this + 346, 1) && !*((_DWORD *)this + 358) )
    KeSetTimer((PKTIMER)((char *)this + 1224), (LARGE_INTEGER)-2000000LL, (PKDPC)((char *)this + 1288));
  v5 = *((_QWORD *)a2 + 5) - *((_QWORD *)a2 + 4);
  if ( (__int64)(v5 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock, v5)) < 0 )
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
