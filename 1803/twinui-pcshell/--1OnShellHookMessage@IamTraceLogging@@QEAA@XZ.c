/*
 * XREFs of ??1OnShellHookMessage@IamTraceLogging@@QEAA@XZ @ 0x1800F651C
 * Callers:
 *     _CApplicationManager::OnShellHookMessage_::_1_::dtor$3 @ 0x1800B3F54 (_CApplicationManager--OnShellHookMessage_--_1_--dtor$3.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180010008 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall IamTraceLogging::OnShellHookMessage::~OnShellHookMessage(IamTraceLogging::OnShellHookMessage *this)
{
  *(_QWORD *)this = &IamTraceLogging::OnShellHookMessage::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
