/*
 * XREFs of wil::ResultFromException__lambda_ad3df784e05b04cbdb34881b2f8587dd___ @ 0x1800DEA74
 * Callers:
 *     ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800D9E64 (-_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$emplace_back@AEBV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@Z @ 0x1800DE8D0 (--$emplace_back@AEBV-$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VMonitorFrame@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::ResultFromException__lambda_ad3df784e05b04cbdb34881b2f8587dd___(__int64 **a1)
{
  unsigned int v2; // r8d
  wil *v3; // rcx
  __int64 result; // rax
  _QWORD v5[7]; // [rsp+0h] [rbp-38h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  v5[4] = -2LL;
  try
  {
    wil::srwlock::lock_exclusive((RTL_SRWLOCK *)*a1 + 32, &SRWLock);
    std::vector<Microsoft::WRL::ComPtr<MonitorFrame>>::emplace_back<Microsoft::WRL::ComPtr<MonitorFrame> const &>(
      (__int64 **)*a1 + 29,
      a1[1]);
    v3 = (wil *)SRWLock;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(SRWLock) = wil::ResultFromCaughtException(v3, v5, v2);
    return (unsigned int)SRWLock;
  }
  return result;
}
