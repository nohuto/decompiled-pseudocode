/*
 * XREFs of ?SetGhostVisualStyleInternal@CImmersiveApp@@UEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0001@@@Z @ 0x18009DE10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18010A5EC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil.c)
 */

__int64 __fastcall CImmersiveApp::SetGhostVisualStyleInternal(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 result; // rax

  v2 = a2;
  if ( (_DWORD)a2 != *(_DWORD *)(a1 + 344) )
  {
    LOBYTE(a2) = 3;
    result = wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::ReportUsageToService(a1, a2);
    if ( *(_DWORD *)(a1 + 348) )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 288) + 40LL))(
                 *(_QWORD *)(a1 + 288),
                 2 - (unsigned int)(v2 != 0));
    *(_DWORD *)(a1 + 344) = v2;
  }
  return result;
}
