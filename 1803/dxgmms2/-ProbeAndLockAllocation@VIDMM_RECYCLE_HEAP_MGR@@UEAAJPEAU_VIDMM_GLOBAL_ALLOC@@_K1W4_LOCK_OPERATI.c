/*
 * XREFs of ?ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C006DDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001D00 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0001D64 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001D8C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C006FEE0 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C00ADED8 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::ProbeAndLockAllocation(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        enum _LOCK_OPERATION a5,
        struct VIDMM_SEGMENT *a6,
        char a7)
{
  __int64 v7; // rax
  struct DXGFASTMUTEX *v8; // rdi
  VIDMM_RECYCLE_MULTIRANGE *v12; // r15
  int v13; // ebx
  __int64 v15; // rax
  enum _LOCK_OPERATION v16; // [rsp+20h] [rbp-58h]
  enum _LOCK_OPERATION v17; // [rsp+20h] [rbp-58h]
  char *v18; // [rsp+40h] [rbp-38h] BYREF
  char v19; // [rsp+48h] [rbp-30h]

  v7 = *((_QWORD *)a2 + 13);
  v8 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328);
  v18 = (char *)this + 1328;
  v19 = 0;
  v12 = *(VIDMM_RECYCLE_MULTIRANGE **)(v7 + 24);
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    v15 = WdLogNewEntry5_WdAssertion(-1328LL, a2);
    *(_QWORD *)(v15 + 24) = 508LL;
    WdLogEvent5_WdAssertion(v15);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v18);
  v13 = VIDMM_RECYCLE_MULTIRANGE::Lock(v12, a2, a3, a4, v16, a6, a7);
  if ( v19 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v18);
  if ( v13 < 0 )
  {
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(0);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v18, v8);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v18);
    v13 = VIDMM_RECYCLE_MULTIRANGE::Lock(v12, a2, a3, a4, v17, a6, a7);
    if ( v19 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v18);
  }
  return (unsigned int)v13;
}
