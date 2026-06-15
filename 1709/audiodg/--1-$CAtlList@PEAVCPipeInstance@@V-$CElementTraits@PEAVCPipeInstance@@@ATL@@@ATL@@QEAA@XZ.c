/*
 * XREFs of ??1?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAA@XZ @ 0x1400309D8
 * Callers:
 *     _CPipeInstance::_CPipeInstance_::_1_::dtor$1 @ 0x140020950 (_CPipeInstance--_CPipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::_CPipeInstance_::_1_::dtor$7 @ 0x1400209BF (_CPipeInstance--_CPipeInstance_--_1_--dtor$7.c)
 *     _CAudioDeviceGraph::_CAudioDeviceGraph_::_1_::dtor$3 @ 0x140021197 (_CAudioDeviceGraph--_CAudioDeviceGraph_--_1_--dtor$3.c)
 *     _CAudioDeviceGraph::CAudioDeviceGraph_::_1_::dtor$3 @ 0x140021239 (_CAudioDeviceGraph--CAudioDeviceGraph_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::~CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>(
        __int64 a1)
{
  ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll(a1);
}
