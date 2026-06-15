/*
 * XREFs of ?IsPhoneTopologyValid@AudioDeviceMgr@@UEAAHXZ @ 0x180116CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 */

_BOOL8 __fastcall AudioDeviceMgr::IsPhoneTopologyValid(AudioDeviceMgr *this)
{
  BOOL v2; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 88));
  v2 = *((_QWORD *)this + 10) != 0LL;
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
