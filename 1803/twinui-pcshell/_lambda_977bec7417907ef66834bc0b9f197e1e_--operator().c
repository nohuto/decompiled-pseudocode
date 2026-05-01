/*
 * XREFs of _lambda_977bec7417907ef66834bc0b9f197e1e_::operator() @ 0x180089A9C
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180023088 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUVie.c)
 * Callees:
 *     ?GetAppUserModelId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x18001C2C0 (-GetAppUserModelId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800227EC (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAPEAUI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_977bec7417907ef66834bc0b9f197e1e_::operator()(__int64 a1)
{
  CWinRTApplicationView *v2; // rcx
  __int64 (__fastcall *v3)(CWinRTApplicationView *, unsigned __int16 **); // rax
  int AppUserModelId; // eax
  unsigned int v5; // ebx
  const WCHAR *v6; // rbx
  unsigned __int64 v8; // r9
  int LaunchPosition; // eax
  LPCWCH lpString1[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  lpString1[0] = 0LL;
  lpString1[1] = (LPCWCH)-1LL;
  lpString1[2] = (LPCWCH)-1LL;
  v2 = **(CWinRTApplicationView ***)a1;
  v3 = *(__int64 (__fastcall **)(CWinRTApplicationView *, unsigned __int16 **))(*(_QWORD *)v2 + 136LL);
  if ( v3 == CWinRTApplicationView::GetAppUserModelId )
    AppUserModelId = CWinRTApplicationView::GetAppUserModelId(v2, (unsigned __int16 **)lpString1);
  else
    AppUserModelId = v3(v2, (unsigned __int16 **)lpString1);
  v5 = AppUserModelId;
  if ( AppUserModelId < 0 )
  {
    v8 = (unsigned int)AppUserModelId;
  }
  else
  {
    v6 = lpString1[0];
    if ( CompareStringOrdinal(lpString1[0], -1, L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App", -1, 1) != 2
      && CompareStringOrdinal(v6, -1, L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App", -1, 1) != 2
      || (LaunchPosition = CDesktopPositioner::_GetLaunchPosition(
                             *(_QWORD *)(a1 + 8),
                             **(CWinRTApplicationView ***)a1,
                             **(_DWORD **)(a1 + 16),
                             **(__int64 ***)(a1 + 24)),
          v5 = LaunchPosition,
          LaunchPosition >= 0) )
    {
      v5 = 0;
      goto LABEL_7;
    }
    v8 = (unsigned int)LaunchPosition;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x492,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)v8);
LABEL_7:
  if ( lpString1[0] )
    CoTaskMemFree((LPVOID)lpString1[0]);
  return v5;
}
