/*
 * XREFs of ?IsSessionStarted@PhoneCallAudio@@UEAAJPEAH@Z @ 0x1800FAA90
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 */

__int64 __fastcall PhoneCallAudio::IsSessionStarted(struct _RTL_CRITICAL_SECTION *this, int *a2)
{
  unsigned int v4; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  v4 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 5);
  if ( a2 )
    *a2 = HIDWORD(this[1].SpinCount);
  else
    v4 = -2147467261;
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
