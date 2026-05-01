/*
 * XREFs of ?v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x1801E2850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180110E88 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SendViewStateToWindow@LegacyViewWrapper@@AEAAX_N@Z @ 0x1801E26B4 (-SendViewStateToWindow@LegacyViewWrapper@@AEAAX_N@Z.c)
 *     ?SendVisibilityToWindow@LegacyViewWrapper@@AEAAXW4Visibility@@@Z @ 0x1801E2730 (-SendVisibilityToWindow@LegacyViewWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?GetVisibility@NavigationLevelHelper@LegacyViewWrapper@@QEBA?AW4Visibility@@XZ @ 0x1801E3494 (-GetVisibility@NavigationLevelHelper@LegacyViewWrapper@@QEBA-AW4Visibility@@XZ.c)
 */

void __fastcall LegacyViewWrapper::v_OnWindowCreated(__int64 a1, int a2)
{
  __int64 v2; // rsi
  const char *v4; // r9
  int Visibility; // eax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1 + 544;
  if ( *(_DWORD *)(a1 + 544) )
  {
    if ( a2 != 1 )
    {
      if ( *(_DWORD *)(a1 + 560) == 1 && !GetWindowRect(*(HWND *)(a1 + 264), (LPRECT)(a1 + 200)) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0xA8,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\ntuserviewwrapper.cpp",
          v4);
      LegacyViewWrapper::SendViewStateToWindow((LegacyViewWrapper *)(a1 - 8), 0);
      Visibility = LegacyViewWrapper::NavigationLevelHelper::GetVisibility(v2);
      LegacyViewWrapper::SendVisibilityToWindow(a1 - 8, Visibility);
      v6 = *(_QWORD *)(a1 + 192);
      if ( v6 )
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 168) + 520LL) + 152LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 168) + 520LL),
          v6,
          *(unsigned int *)(a1 + 264));
    }
  }
  else
  {
    PostMessageW(*(HWND *)(a1 + 264), 0x10u, 0LL, 0LL);
  }
}
