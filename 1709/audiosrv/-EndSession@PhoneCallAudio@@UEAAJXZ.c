/*
 * XREFs of ?EndSession@PhoneCallAudio@@UEAAJXZ @ 0x1800C7FE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x1800C84A4 (-IsInCall@PhoneCallAudio@@AEAAHXZ.c)
 *     ?UpdateCommsPreferredEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x1800C8F08 (-UpdateCommsPreferredEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_000.c)
 *     ?UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ @ 0x1800C8F88 (-UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneCallAudio::EndSession(struct _RTL_CRITICAL_SECTION *this)
{
  unsigned int v2; // ebx
  int *v3; // r8
  ULONG_PTR *p_SpinCount; // rdi
  int *v5; // r8
  int v6; // eax
  int v7; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v10; // [rsp+30h] [rbp-28h]
  LPCRITICAL_SECTION v11; // [rsp+38h] [rbp-20h] BYREF
  char v12; // [rsp+40h] [rbp-18h]

  v2 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&v11,
    this + 3);
  if ( HIDWORD(this[1].LockSemaphore) )
  {
    HIDWORD(this[1].LockSemaphore) = 0;
    p_SpinCount = &this[-1].SpinCount;
    PhoneCallAudio::UpdateCommsPreferredEndpoint((PhoneCallAudio *)p_SpinCount, eRender, v3);
    PhoneCallAudio::UpdateCommsPreferredEndpoint((PhoneCallAudio *)p_SpinCount, eCapture, v5);
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)(p_SpinCount + 16));
    if ( !(unsigned int)PhoneCallAudio::IsInCall((PhoneCallAudio *)p_SpinCount) )
      (**(void (__fastcall ***)(ULONG_PTR))p_SpinCount[8])(p_SpinCount[8]);
    v6 = PhoneCallAudio::UpdatePhoneCallAudioState((PhoneCallAudio *)p_SpinCount);
    v7 = 0;
    if ( v6 < 0 )
      v7 = v6;
    if ( v10 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v7 < 0 )
      v2 = v7;
  }
  if ( v12 )
    LeaveCriticalSection(v11);
  return v2;
}
