/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIVolumeLimitTracker@@@WRL@Microsoft@@UEAA@XZ @ 0x18001A578
 * Callers:
 *     _CAastPreStartContext::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x180028AEB (_CAastPreStartContext--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _TSSession::Create_::_1_::dtor$28 @ 0x180028B3B (_TSSession--Create_--_1_--dtor$28.c)
 *     _CVolumeLimitTrackerImpl::CVolumeLimitTrackerImpl_::_1_::dtor$0 @ 0x180028E4B (_CVolumeLimitTrackerImpl--CVolumeLimitTrackerImpl_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVolumeLimitTracker>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVolumeLimitTracker>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}
