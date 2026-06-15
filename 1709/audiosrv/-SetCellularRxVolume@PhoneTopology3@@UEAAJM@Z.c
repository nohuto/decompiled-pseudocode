/*
 * XREFs of ?SetCellularRxVolume@PhoneTopology3@@UEAAJM@Z @ 0x1800ECB60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18005EDAC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneTopology3::SetCellularRxVolume(PhoneTopology3 *this, float a2)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v5; // [rsp+28h] [rbp-40h]
  __int64 v6; // [rsp+30h] [rbp-38h]
  unsigned __int16 v7[8]; // [rsp+38h] [rbp-30h] BYREF

  v6 = -2LL;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 152));
  *((float *)this + 49) = a2;
  if ( *((_QWORD *)this + 5) )
  {
    StringCchPrintfW(v7, 5uLL, (size_t *)L"%1.2f", a2);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 40LL))(*((_QWORD *)this + 5));
  }
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
