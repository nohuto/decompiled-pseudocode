/*
 * XREFs of ??1?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAA@XZ @ 0x14002F854
 * Callers:
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$0 @ 0x14001F960 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$0 @ 0x1400204C0 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateDevicePipeInstance_::_1_::dtor$0 @ 0x140020660 (_CPipeInstance--CreateDevicePipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstance_::_1_::dtor$0 @ 0x14003DDAB (_CPipeInstance--CreateBridgeStreamPipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$0 @ 0x14003E2D6 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::~CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>(
        __int64 a1)
{
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(a1);
}
