/*
 * XREFs of ?IsTimerStarted@RoutingTimer@@UEAAHXZ @ 0x18005F9B0
 * Callers:
 *     ?GetPhoneCallAudioState@PhoneCallAudio@@AEAA?AW4_PhoneCallAudioState@@XZ @ 0x18005595C (-GetPhoneCallAudioState@PhoneCallAudio@@AEAA-AW4_PhoneCallAudioState@@XZ.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 */

_BOOL8 __fastcall RoutingTimer::IsTimerStarted(RoutingTimer *this)
{
  BOOL v2; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    &lpCriticalSection,
    *((_QWORD *)this + 3));
  v2 = *((_QWORD *)this + 4) != 0LL;
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
