/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613__&___ptr64_::Run @ 0x18006E0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x180067A08 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 *     ?_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x18006B2C8 (-_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoper.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613______ptr64_::Run(
        __int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rcx

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(v3 + 220) == 1 )
  {
    CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen(v3 + 216, 2u, v2);
    v4 = *(_QWORD *)(a1 + 24);
    if ( *(_BYTE *)(v4 + 60) )
      CFrameApplicationPresentation::_SetFrameCloakSerialized(v4, 0);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
}
