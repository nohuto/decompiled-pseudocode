/*
 * XREFs of ??1?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAA@XZ @ 0x180060EB8
 * Callers:
 *     _CAudioSrv::_CAudioSrv_::_1_::dtor$2 @ 0x180060F61 (_CAudioSrv--_CAudioSrv_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::~CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>(
        __int64 a1)
{
  ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll(a1);
}
