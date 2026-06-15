/*
 * XREFs of ??1?$CAutoPtr@VCPipeInstance@@@ATL@@QEAA@XZ @ 0x140030C98
 * Callers:
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$11 @ 0x140020660 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$11.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$7 @ 0x1400207A4 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$7.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$1 @ 0x14002147C (_CSubmixImpl--CreateStream_--_1_--dtor$1.c)
 *     _CSubmixImpl::_CSubmixImpl_::_1_::dtor$1 @ 0x140021580 (_CSubmixImpl--_CSubmixImpl_--_1_--dtor$1.c)
 *     _CSubmixImpl::CSubmixImpl_::_1_::dtor$1 @ 0x140021632 (_CSubmixImpl--CSubmixImpl_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstance_::_1_::dtor$4 @ 0x14003FE0F (_CPipeInstance--CreateBridgeStreamPipeInstance_--_1_--dtor$4.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$6 @ 0x14004035E (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$6.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$1 @ 0x140044848 (_CStreamGroup--CreateBridgeStream_--_1_--dtor$1.c)
 *     _CFormatConverterPipe::Initialize_::_1_::dtor$0 @ 0x140046268 (_CFormatConverterPipe--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LPVOID *__fastcall ATL::CAutoPtr<CPipeInstance>::~CAutoPtr<CPipeInstance>(LPVOID **a1)
{
  return ATL::CAutoPtr<CPipeInstance>::Free(a1);
}
