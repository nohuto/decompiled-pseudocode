/*
 * XREFs of ?_Destroy@?$_Ref_count@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@EEAAXXZ @ 0x18016A4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count<TOUCH_TELEMETRY_UPDATE_INFO>::_Destroy(__int64 a1)
{
  WPF::ProcessHeapImpl::Free(*(void **)(a1 + 16));
}
