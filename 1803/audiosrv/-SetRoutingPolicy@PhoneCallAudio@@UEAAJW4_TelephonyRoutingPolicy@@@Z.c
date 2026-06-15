/*
 * XREFs of ?SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1800FB530
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ @ 0x1800559FC (-UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1800FA288 (-DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x1800FAA14 (-IsInCall@PhoneCallAudio@@AEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::SetRoutingPolicy(__int64 a1, int a2)
{
  PhoneCallAudio *v3; // rdi
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v9; // [rsp+30h] [rbp-18h]

  v3 = (PhoneCallAudio *)(a1 - 8);
  v4 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)(a1 - 8 + 208));
  if ( !PhoneCallAudio::IsInCall(v3) )
  {
    *((_DWORD *)v3 + 23) = 1;
    v5 = PhoneCallAudio::UpdatePhoneCallAudioState(v3);
    if ( v5 < 0 )
      v4 = v5;
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v4 >= 0 )
  {
    v6 = PhoneCallAudio::DoSetPhoneCallAudioActiveEndpoint((__int64)v3, a2);
    v4 = 0;
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  return (unsigned int)v4;
}
