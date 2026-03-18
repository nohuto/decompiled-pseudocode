/*
 * XREFs of ?GetMDLForRange@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX_K1@Z @ 0x1C00686D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001215C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00121BC (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00121E4 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z @ 0x1C006B688 (-GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z.c)
 */

struct _MDL *__fastcall VIDMM_RECYCLE_HEAP_MGR::GetMDLForRange(
        VIDMM_RECYCLE_HEAP_MGR *this,
        VIDMM_RECYCLE_MULTIRANGE *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  struct _MDL *MDLForRange; // rbx
  __int64 v11; // r8
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1184));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13, v7, v8);
  MDLForRange = VIDMM_RECYCLE_MULTIRANGE::GetMDLForRange(a2, a3, a4);
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13, v9, v11);
  return MDLForRange;
}
