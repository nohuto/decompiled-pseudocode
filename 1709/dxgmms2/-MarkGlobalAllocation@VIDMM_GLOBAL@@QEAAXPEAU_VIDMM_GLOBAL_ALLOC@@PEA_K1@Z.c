/*
 * XREFs of ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0058D60
 * Callers:
 *     ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004ED2C (-OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0058E30 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009A168 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C00AC2D4 (-TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00024F4 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C005EA98 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MarkGlobalAllocation(
        VIDMM_GLOBAL *this,
        DXGFASTMUTEX **a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  DXGFASTMUTEX *v10; // r15
  DXGFASTMUTEX *v11; // rdi
  DXGFASTMUTEX *v12; // rsi
  _QWORD **v13; // rsi
  _QWORD *v14; // rbx
  struct VIDMM_ALLOC *v15; // rbp

  DXGFASTMUTEX::Acquire(a2[40]);
  v10 = (DXGFASTMUTEX *)(a2 + 37);
  v11 = a2[37];
  while ( v11 != v10 )
  {
    v12 = v11;
    v11 = *(DXGFASTMUTEX **)v11;
    v13 = (_QWORD **)((char *)v12 - 16);
    v14 = *v13;
    if ( *v13 != v13 )
    {
      do
      {
        v15 = (struct VIDMM_ALLOC *)(v14 - 5);
        v14 = (_QWORD *)*v14;
        if ( (*((_BYTE *)v15 + 28) & 3) == 2 )
        {
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v8) + 24) = v15;
          VIDMM_GLOBAL::NotifyAllocationEviction(this, v15, 0, a3, a4);
        }
      }
      while ( v14 != v13 );
      v10 = (DXGFASTMUTEX *)(a2 + 37);
    }
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2[40], v7, v9);
}
