/*
 * XREFs of ?ProcessWindowBool@QuadShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@AEAA_NPEAUHWND__@@@Z @ 0x180080E74
 * Callers:
 *     ??$LambdaEnumWindowsProc@V_lambda_df7356024bf744f3615be68a3ea90a6d_@@@EnumWindowsHelpers@@YAHPEAUHWND__@@_J@Z @ 0x1800817B0 (--$LambdaEnumWindowsProc@V_lambda_df7356024bf744f3615be68a3ea90a6d_@@@EnumWindowsHelpers@@YAHPEA.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180002A20 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?IsEligibleToolWindow@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAHPEAUHWND__@@@Z @ 0x180080F9C (-IsEligibleToolWindow@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewM.c)
 *     ?CheckBorderWindowAlignment@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAJUtagRECT@@PEAUHWND__@@W4BorderWindowAlignment@12@PEAW4Alignment@2@@Z @ 0x180081014 (-CheckBorderWindowAlignment@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applicatio.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

bool __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::QuadShadowWindowGatherer::ProcessWindowBool(
        __int64 a1,
        HWND a2)
{
  int v2; // eax
  char *v6; // rcx
  RECT rcSrc1; // [rsp+30h] [rbp-238h] BYREF
  WCHAR ClassName[264]; // [rsp+40h] [rbp-228h] BYREF

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 < 0 )
  {
    if ( a2 == *(HWND *)(a1 + 8) )
      *(_DWORD *)(a1 + 4) = 0;
    return 1;
  }
  if ( v2 > 4 )
    return 1;
  *(_DWORD *)(a1 + 4) = v2 + 1;
  if ( !GetClassNameW(a2, ClassName, 260) )
    return 0;
  if ( *(int *)(a1 + 4) <= 4 )
  {
    if ( !(unsigned int)ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::IsEligibleToolWindow(a2) )
      return 0;
    rcSrc1 = *(RECT *)(a1 + 16);
    if ( (int)ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::CheckBorderWindowAlignment(
                &rcSrc1,
                a2) < 0 )
      return 0;
    v6 = (char *)(a1 + 64);
    if ( *(_DWORD *)(a1 + 4) == 1 )
    {
      if ( (int)StringCchCopyW(v6, 260LL, (char *)ClassName) < 0 )
        return 0;
    }
    else if ( CompareStringOrdinal((LPCWCH)v6, -1, ClassName, -1, 0) != 2 )
    {
      return 0;
    }
    *(_QWORD *)(a1 + 8LL * (*(_DWORD *)(a1 + 4) - 1) + 32) = a2;
    return 1;
  }
  return CompareStringOrdinal((LPCWCH)(a1 + 64), -1, ClassName, -1, 0) != 2;
}
