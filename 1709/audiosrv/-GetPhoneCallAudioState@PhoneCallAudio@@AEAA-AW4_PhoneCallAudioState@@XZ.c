/*
 * XREFs of ?GetPhoneCallAudioState@PhoneCallAudio@@AEAA?AW4_PhoneCallAudioState@@XZ @ 0x1800C8304
 * Callers:
 *     ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x1800C84A4 (-IsInCall@PhoneCallAudio@@AEAAHXZ.c)
 *     ?UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ @ 0x1800C8F88 (-UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::GetPhoneCallAudioState(__int64 a1)
{
  unsigned int v2; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v5; // [rsp+30h] [rbp-18h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)(a1 + 128));
  if ( *(_DWORD *)(a1 + 76)
    || *(_DWORD *)(a1 + 100)
    || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 16LL))(*(_QWORD *)(a1 + 64)) )
  {
    v2 = 1;
  }
  else if ( *(_DWORD *)(a1 + 84) )
  {
    v2 = 2;
  }
  else
  {
    v2 = 0;
  }
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
