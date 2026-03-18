/*
 * XREFs of ?ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0064F10
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00113A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0011400 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0011428 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C006831C (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C006F4EC (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::ProbeAndLockAllocation(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        enum _LOCK_OPERATION a5,
        struct VIDMM_SEGMENT *a6,
        unsigned __int8 a7)
{
  __int64 v7; // rax
  struct DXGFASTMUTEX *v8; // rdi
  VIDMM_RECYCLE_MULTIRANGE *v12; // r15
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  enum _LOCK_OPERATION v22; // [rsp+20h] [rbp-58h]
  enum _LOCK_OPERATION v23; // [rsp+20h] [rbp-58h]
  char *v24; // [rsp+40h] [rbp-38h] BYREF
  char v25; // [rsp+48h] [rbp-30h]

  v7 = *((_QWORD *)a2 + 13);
  v8 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1184);
  v24 = (char *)this + 1184;
  v25 = 0;
  v12 = *(VIDMM_RECYCLE_MULTIRANGE **)(v7 + 24);
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1184LL )
  {
    v17 = WdLogNewEntry5_WdAssertion(-1184LL, a2);
    *(_QWORD *)(v17 + 24) = 453LL;
    WdLogEvent5_WdAssertion(v17);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v24, (__int64)a2, a3);
  v14 = VIDMM_RECYCLE_MULTIRANGE::Lock(v12, a2, a3, a4, v22, a6, a7);
  if ( v25 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v24, v13, v15);
  if ( v14 < 0 )
  {
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(0);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v24, v8);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v24, v18, v19);
    v14 = VIDMM_RECYCLE_MULTIRANGE::Lock(v12, a2, a3, a4, v23, a6, a7);
    if ( v25 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v24, v20, v21);
  }
  return (unsigned int)v14;
}
