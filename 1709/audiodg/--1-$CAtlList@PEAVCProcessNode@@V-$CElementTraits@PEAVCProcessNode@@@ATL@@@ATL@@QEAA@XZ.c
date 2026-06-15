/*
 * XREFs of ??1?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAA@XZ @ 0x140030824
 * Callers:
 *     _CPipeInstance::CreateDevicePipeInstance_::_1_::dtor$0 @ 0x1400204E0 (_CPipeInstance--CreateDevicePipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$0 @ 0x140020540 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$0 @ 0x1400206E0 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::_CPipeInstance_::_1_::dtor$0 @ 0x140020940 (_CPipeInstance--_CPipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstance_::_1_::dtor$0 @ 0x14003FDEB (_CPipeInstance--CreateBridgeStreamPipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$0 @ 0x140040302 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::~CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>(
        __int64 a1)
{
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(a1);
}
