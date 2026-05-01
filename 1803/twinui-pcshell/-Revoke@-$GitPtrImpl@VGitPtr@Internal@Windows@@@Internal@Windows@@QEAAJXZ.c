/*
 * XREFs of ?Revoke@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@QEAAJXZ @ 0x180138B58
 * Callers:
 *     ??$CreateGitHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@2@PEAPEAU342@@Z @ 0x180137FA8 (--$CreateGitHelper@U-$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@P.c)
 *     ??_E?$GitInvokeHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@UEAAPEAXI@Z @ 0x180138500 (--_E-$GitInvokeHelper@U-$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows.c)
 *     ??_E?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAAPEAXI@Z @ 0x180138570 (--_E-$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::Revoke(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_DWORD *)(a1 + 8) )
  {
    result = *(unsigned int *)(a1 + 12);
    if ( (int)result >= 0 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_180438B10 + 32LL))(qword_180438B10);
  }
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}
