/*
 * XREFs of ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x1800C87AC
 * Callers:
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1800C8D70 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x1800C84A4 (-IsInCall@PhoneCallAudio@@AEAAHXZ.c)
 *     ?UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ @ 0x1800C8F88 (-UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ.c)
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
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 128));
  *((_DWORD *)this + 21) = 0;
  if ( PhoneCallAudio::IsInCall(this) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 8LL))(*((_QWORD *)this + 8));
  v2 = PhoneCallAudio::UpdatePhoneCallAudioState(this);
  v3 = 0;
  if ( v2 < 0 )
    v3 = v2;
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
