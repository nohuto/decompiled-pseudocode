/*
 * XREFs of ??1?$CComPtr@UIKsControl@@@ATL@@QEAA@XZ @ 0x180021394
 * Callers:
 *     _IsEUCountry_::_1_::dtor$1 @ 0x180028E27 (_IsEUCountry_--_1_--dtor$1.c)
 *     _CVolumeLimitTrackerImpl::IsEndpointTracked_::_1_::dtor$0 @ 0x180028EA5 (_CVolumeLimitTrackerImpl--IsEndpointTracked_--_1_--dtor$0.c)
 *     _CDriverListener::HandleShellWarningAccepted_::_1_::dtor$1 @ 0x180028EC9 (_CDriverListener--HandleShellWarningAccepted_--_1_--dtor$1.c)
 *     _CTrackedEndpoint::CTrackedEndpoint_::_1_::dtor$2 @ 0x180028EF5 (_CTrackedEndpoint--CTrackedEndpoint_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComPtr<IKsControl>::~CComPtr<IKsControl>(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
