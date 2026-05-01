/*
 * XREFs of wil::ResultFromException__lambda_ad3df784e05b04cbdb34881b2f8587dd___ @ 0x1801034B8
 * Callers:
 *     ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800FE06C (-_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$emplace_back@AEBV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@Z @ 0x1800EB914 (--$emplace_back@AEBV-$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VMonitorFrame@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::ResultFromException__lambda_ad3df784e05b04cbdb34881b2f8587dd___(__int64 **a1)
{
  RTL_SRWLOCK *v2; // rbx
  wil *v3; // rcx
  unsigned int v4; // r8d
  __int64 result; // rax
  _QWORD v6[7]; // [rsp+0h] [rbp-38h] BYREF

  v6[4] = -2LL;
  try
  {
    v2 = (RTL_SRWLOCK *)(*a1 + 39);
    AcquireSRWLockExclusive(v2);
    std::vector<Microsoft::WRL::ComPtr<MonitorFrame>>::emplace_back<Microsoft::WRL::ComPtr<MonitorFrame> const &>(
      (__int64 **)*a1 + 36,
      a1[1]);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v3, v6, v4);
  }
  return result;
}
