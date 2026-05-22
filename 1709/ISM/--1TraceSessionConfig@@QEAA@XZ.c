/*
 * XREFs of ??1TraceSessionConfig@@QEAA@XZ @ 0x180090F18
 * Callers:
 *     _GetHolographicInputSession_::_1_::dtor$3 @ 0x1800D0BCF (_GetHolographicInputSession_--_1_--dtor$3.c)
 *     _SpatialInputControllerCollection::OnFinalRelease_::_1_::dtor$3 @ 0x1800D0DFF (_SpatialInputControllerCollection--OnFinalRelease_--_1_--dtor$3.c)
 *     _SpatialInputControllerCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x1800D0E0B (_SpatialInputControllerCollection--OnDeviceAttach_--_1_--dtor$0.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180028C80 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??1?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAA@XZ @ 0x180096504 (--1-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessionProviderConfig@@@std@@@std@@Q.c)
 */

void __fastcall TraceSessionConfig::~TraceSessionConfig(TraceSessionConfig *this)
{
  std::vector<TraceSessionProviderConfig>::~vector<TraceSessionProviderConfig>((char *)this + 104);
  std::wstring::_Tidy_deallocate((unsigned __int64 *)this + 6);
  std::wstring::_Tidy_deallocate((unsigned __int64 *)this);
}
