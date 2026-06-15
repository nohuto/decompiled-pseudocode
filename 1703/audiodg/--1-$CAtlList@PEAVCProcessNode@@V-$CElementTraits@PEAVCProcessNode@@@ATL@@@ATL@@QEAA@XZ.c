/*
 * XREFs of ??1?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAA@XZ @ 0x140031060
 * Callers:
 *     _CPipeInstance::_CPipeInstance_::_1_::dtor$0 @ 0x140021460 (_CPipeInstance--_CPipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$0 @ 0x1400217C0 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$0 @ 0x1400219A0 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateDevicePipeInstance_::_1_::dtor$0 @ 0x140021CA0 (_CPipeInstance--CreateDevicePipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstance_::_1_::dtor$0 @ 0x14003F2DF (_CPipeInstance--CreateBridgeStreamPipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$0 @ 0x14003F80D (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::~CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>(
        __int64 a1)
{
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(a1);
}
