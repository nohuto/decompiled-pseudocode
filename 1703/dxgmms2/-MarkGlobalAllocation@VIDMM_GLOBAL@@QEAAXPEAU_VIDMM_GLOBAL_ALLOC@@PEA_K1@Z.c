/*
 * XREFs of ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0056110
 * Callers:
 *     ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004AA94 (-OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00561E0 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0092834 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C00A3D08 (-TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C005B708 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
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
  _QWORD **v12; // rsi
  _QWORD *v13; // rbx
  struct VIDMM_ALLOC *v14; // rbp

  DXGFASTMUTEX::Acquire(a2[40]);
  v10 = (DXGFASTMUTEX *)(a2 + 37);
  v11 = a2[37];
  while ( v11 != v10 )
  {
    v12 = (_QWORD **)((char *)v11 - 16);
    v11 = *(DXGFASTMUTEX **)v11;
    v13 = *v12;
    if ( *v12 != v12 )
    {
      do
      {
        v14 = (struct VIDMM_ALLOC *)(v13 - 5);
        v13 = (_QWORD *)*v13;
        if ( (*((_BYTE *)v14 + 28) & 3) == 2 )
        {
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v8) + 24) = v14;
          VIDMM_GLOBAL::NotifyAllocationEviction(this, v14, 0, a3, a4);
        }
      }
      while ( v13 != v12 );
      v10 = (DXGFASTMUTEX *)(a2 + 37);
    }
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2[40], v7, v9);
}
