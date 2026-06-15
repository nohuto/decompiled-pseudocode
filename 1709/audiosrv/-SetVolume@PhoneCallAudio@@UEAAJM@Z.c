/*
 * XREFs of ?SetVolume@PhoneCallAudio@@UEAAJM@Z @ 0x1800C8CE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::SetVolume(struct _RTL_CRITICAL_SECTION *this, float a2)
{
  unsigned int v3; // edi
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  int v5; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v8; // [rsp+30h] [rbp-28h]

  v3 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 3);
  *(float *)&this[2].OwningThread = a2;
  DebugInfo = this[1].DebugInfo;
  if ( DebugInfo )
  {
    if ( LODWORD(this[1].LockSemaphore) )
    {
      v5 = (*(__int64 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&DebugInfo->Type + 32LL))(DebugInfo);
      if ( v5 < 0 )
        v3 = v5;
    }
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
