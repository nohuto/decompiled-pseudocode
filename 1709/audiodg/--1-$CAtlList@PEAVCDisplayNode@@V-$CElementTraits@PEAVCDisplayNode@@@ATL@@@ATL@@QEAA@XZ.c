/*
 * XREFs of ??1?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAA@XZ @ 0x140030F7C
 * Callers:
 *     _PublishDeviceGraphWnfState_::_1_::dtor$0 @ 0x1400208E0 (_PublishDeviceGraphWnfState_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::~CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>(
        __int64 a1)
{
  ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(a1);
}
