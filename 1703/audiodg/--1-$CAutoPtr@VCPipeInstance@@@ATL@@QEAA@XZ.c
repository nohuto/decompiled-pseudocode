/*
 * XREFs of ??1?$CAutoPtr@VCPipeInstance@@@ATL@@QEAA@XZ @ 0x140031234
 * Callers:
 *     _CSubmixImpl::CreateStream_::_1_::dtor$1 @ 0x140020B7C (_CSubmixImpl--CreateStream_--_1_--dtor$1.c)
 *     _CSubmixImpl::_CSubmixImpl_::_1_::dtor$1 @ 0x140020CC0 (_CSubmixImpl--_CSubmixImpl_--_1_--dtor$1.c)
 *     _CSubmixImpl::CSubmixImpl_::_1_::dtor$1 @ 0x140020D80 (_CSubmixImpl--CSubmixImpl_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$11 @ 0x140021920 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$11.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$7 @ 0x140021ADC (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$7.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstance_::_1_::dtor$4 @ 0x14003F303 (_CPipeInstance--CreateBridgeStreamPipeInstance_--_1_--dtor$4.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$6 @ 0x14003F869 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$6.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$1 @ 0x140043E9C (_CStreamGroup--CreateBridgeStream_--_1_--dtor$1.c)
 *     _CFormatConverterPipe::Initialize_::_1_::dtor$0 @ 0x1400454E4 (_CFormatConverterPipe--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
CPipeInstance *__fastcall ATL::CAutoPtr<CPipeInstance>::~CAutoPtr<CPipeInstance>(CPipeInstance **a1)
{
  return ATL::CAutoPtr<CPipeInstance>::Free(a1);
}
