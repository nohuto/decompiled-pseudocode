/*
 * XREFs of ??_GCDisplayNode@@QEAAPEAXI@Z @ 0x14004346C
 * Callers:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400055C0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??1?$CAutoPtr@VCDisplayNode@@@ATL@@QEAA@XZ @ 0x140043400 (--1-$CAutoPtr@VCDisplayNode@@@ATL@@QEAA@XZ.c)
 *     ?GetDisplayNode@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAVCProcessNode@@PEAPEAVCDisplayNode@@@Z @ 0x140043B90 (-GetDisplayNode@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x140030F1C (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 */

CDisplayNode *__fastcall CDisplayNode::`scalar deleting destructor'(CDisplayNode *this)
{
  ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll((__int64)this + 56);
  ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll((__int64)this + 8);
  operator delete(this);
  return this;
}
