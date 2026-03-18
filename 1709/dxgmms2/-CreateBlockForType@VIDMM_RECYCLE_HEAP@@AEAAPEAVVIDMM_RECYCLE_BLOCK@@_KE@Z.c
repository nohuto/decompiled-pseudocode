/*
 * XREFs of ?CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z @ 0x1C006953C
 * Callers:
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C006A400 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0002560 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C006CFAC (-Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z.c)
 *     ??0VIDMM_RECYCLE_BLOCK@@QEAA@PEAVVIDMM_RECYCLE_HEAP@@@Z @ 0x1C006D49C (--0VIDMM_RECYCLE_BLOCK@@QEAA@PEAVVIDMM_RECYCLE_HEAP@@@Z.c)
 */

struct VIDMM_RECYCLE_BLOCK *__fastcall VIDMM_RECYCLE_HEAP::CreateBlockForType(
        VIDMM_RECYCLE_HEAP *this,
        unsigned __int64 a2,
        unsigned __int8 a3)
{
  VIDMM_RECYCLE_BLOCK *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  VIDMM_RECYCLE_BLOCK *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax

  v6 = (VIDMM_RECYCLE_BLOCK *)operator new[](0x70uLL, 0x31316956u, PagedPool);
  if ( v6 )
    v9 = VIDMM_RECYCLE_BLOCK::VIDMM_RECYCLE_BLOCK(v6, this);
  else
    v9 = 0LL;
  if ( v9 )
  {
    if ( *((_BYTE *)this + 16) )
      a2 = (a2 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
    if ( (int)VIDMM_RECYCLE_BLOCK::Allocate(v9, a2, a3) >= 0 )
      return v9;
    _InterlockedIncrement(&dword_1C00405D0);
    v14 = WdLogNewEntry5_WdLowResource(v11, v10);
    *(_QWORD *)(v14 + 24) = 8626LL;
    WdLogEvent5_WdLowResource(v14);
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v9);
  }
  else
  {
    _InterlockedIncrement(&dword_1C00405D0);
    v13 = WdLogNewEntry5_WdLowResource(v8, v7);
    *(_QWORD *)(v13 + 24) = 8608LL;
    WdLogEvent5_WdLowResource(v13);
  }
  return 0LL;
}
