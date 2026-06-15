/*
 * XREFs of ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x1800FADB8
 * Callers:
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1800FB660 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 * Callees:
 *     ?UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ @ 0x1800559FC (-UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x1800FAA14 (-IsInCall@PhoneCallAudio@@AEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::OnPhoneCallStarted(PhoneCallAudio *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+30h] [rbp-18h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 208));
  *((_DWORD *)this + 23) = 0;
  if ( PhoneCallAudio::IsInCall(this) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 8LL))(*((_QWORD *)this + 9));
  v2 = PhoneCallAudio::UpdatePhoneCallAudioState(this);
  v3 = 0;
  if ( v2 < 0 )
    v3 = v2;
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
