/*
 * XREFs of ??1?$CAutoPtr@VCPipeInstance@@@ATL@@QEAA@XZ @ 0x14002FCBC
 * Callers:
 *     _CSubmixImpl::CreateStream_::_1_::dtor$1 @ 0x14001F7FC (_CSubmixImpl--CreateStream_--_1_--dtor$1.c)
 *     _CSubmixImpl::CSubmixImpl_::_1_::dtor$1 @ 0x14001F8FC (_CSubmixImpl--CSubmixImpl_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$7 @ 0x14001FA24 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$7.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$11 @ 0x1400205E0 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$11.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstance_::_1_::dtor$4 @ 0x14003DDCF (_CPipeInstance--CreateBridgeStreamPipeInstance_--_1_--dtor$4.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$6 @ 0x14003E332 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$6.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$1 @ 0x14004313B (_CStreamGroup--CreateBridgeStream_--_1_--dtor$1.c)
 *     _CFormatConverterPipe::Initialize_::_1_::dtor$0 @ 0x140044668 (_CFormatConverterPipe--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
CPipeInstance *__fastcall ATL::CAutoPtr<CPipeInstance>::~CAutoPtr<CPipeInstance>(CPipeInstance **a1)
{
  return ATL::CAutoPtr<CPipeInstance>::Free(a1);
}
