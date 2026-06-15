/*
 * XREFs of ?SetVolume@PhoneCallAudio@@UEAAJM@Z @ 0x1800FB5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::SetVolume(struct _RTL_CRITICAL_SECTION *this, float a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  int v5; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v8; // [rsp+30h] [rbp-28h]

  v3 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 5);
  *(float *)&this[2].LockSemaphore = a2;
  v4 = *(_QWORD *)&this[1].LockCount;
  if ( v4 )
  {
    if ( LODWORD(this[1].SpinCount) )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
      if ( v5 < 0 )
        v3 = v5;
    }
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
