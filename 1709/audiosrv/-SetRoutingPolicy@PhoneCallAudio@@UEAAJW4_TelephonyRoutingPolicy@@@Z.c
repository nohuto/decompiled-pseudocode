/*
 * XREFs of ?SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1800C8C50
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1800C7FA4 (-DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x1800C84A4 (-IsInCall@PhoneCallAudio@@AEAAHXZ.c)
 *     ?UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ @ 0x1800C8F88 (-UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::SetRoutingPolicy(__int64 a1)
{
  PhoneCallAudio *v1; // rdi
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  v1 = (PhoneCallAudio *)(a1 - 8);
  v2 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)(a1 - 8 + 128));
  if ( !PhoneCallAudio::IsInCall(v1) )
  {
    *((_DWORD *)v1 + 21) = 1;
    v3 = PhoneCallAudio::UpdatePhoneCallAudioState(v1);
    if ( v3 < 0 )
      v2 = v3;
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v2 >= 0 )
  {
    v4 = PhoneCallAudio::DoSetPhoneCallAudioActiveEndpoint((__int64)v1);
    v2 = 0;
    if ( v4 < 0 )
      return (unsigned int)v4;
  }
  return (unsigned int)v2;
}
