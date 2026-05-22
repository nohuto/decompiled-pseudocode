/*
 * XREFs of ??1TraceSessionConfig@@QEAA@XZ @ 0x180070D2C
 * Callers:
 *     _GetHolographicInputSession_::_1_::dtor$3 @ 0x1800E7392 (_GetHolographicInputSession_--_1_--dtor$3.c)
 *     _SpatialRimDeviceCollection::OnFinalRelease_::_1_::dtor$0 @ 0x1800E73FC (_SpatialRimDeviceCollection--OnFinalRelease_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x1800E7408 (_SpatialRimDeviceCollection--OnDeviceAttach_--_1_--dtor$0.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??1?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAA@XZ @ 0x18007197C (--1-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessionProviderConfig@@@std@@@std@@Q.c)
 */

void __fastcall TraceSessionConfig::~TraceSessionConfig(TraceSessionConfig *this)
{
  std::vector<TraceSessionProviderConfig>::~vector<TraceSessionProviderConfig>((char *)this + 104);
  std::wstring::_Tidy_deallocate((unsigned __int64 *)this + 6);
  std::wstring::_Tidy_deallocate((unsigned __int64 *)this);
}
