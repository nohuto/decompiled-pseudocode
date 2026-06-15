/*
 * XREFs of ?ShowWarningDialog@CVolumeLimitTrackerImpl@@IEAAJXZ @ 0x18002C128
 * Callers:
 *     ?UpdateTrackingState@CVolumeLimitTrackerImpl@@UEAAJXZ @ 0x18002BC20 (-UpdateTrackingState@CVolumeLimitTrackerImpl@@UEAAJXZ.c)
 *     ?UpdateTotalTrackedTime@CVolumeLimitTrackerImpl@@IEAAJXZ @ 0x18002BE18 (-UpdateTotalTrackedTime@CVolumeLimitTrackerImpl@@IEAAJXZ.c)
 * Callees:
 *     ?LowerEndpointVolumes@CVolumeLimitTrackerImpl@@IEAAJXZ @ 0x18002BFE4 (-LowerEndpointVolumes@CVolumeLimitTrackerImpl@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x180034E70 (__security_check_cookie.c)
 */

__int64 __fastcall CVolumeLimitTrackerImpl::ShowWarningDialog(CVolumeLimitTrackerImpl *this)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp-18h] BYREF

  v3 = 1;
  result = (unsigned int)RtlPublishWnfStateData(WNF_AVLC_SHOW_VOLUMELIMITWARNING, 0LL, &v3, 4LL, 0LL) | 0x10000000;
  if ( (int)result >= 0 )
    return CVolumeLimitTrackerImpl::LowerEndpointVolumes(this);
  return result;
}
