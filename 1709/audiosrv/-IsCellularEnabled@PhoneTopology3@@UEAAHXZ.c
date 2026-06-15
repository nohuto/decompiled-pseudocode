/*
 * XREFs of ?IsCellularEnabled@PhoneTopology3@@UEAAHXZ @ 0x1800EC0C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall PhoneTopology3::IsCellularEnabled(PhoneTopology3 *this)
{
  BOOL v2; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v5; // [rsp+30h] [rbp-28h]
  LPCRITICAL_SECTION v6; // [rsp+38h] [rbp-20h] BYREF
  char v7; // [rsp+40h] [rbp-18h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&v6,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 152));
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 64));
  v2 = *((_QWORD *)this + 15) || *((_QWORD *)this + 26);
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v7 )
    LeaveCriticalSection(v6);
  return v2;
}
