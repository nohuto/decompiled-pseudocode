/*
 * XREFs of ??$LambdaEnumWindowsProc@V_lambda_df7356024bf744f3615be68a3ea90a6d_@@@EnumWindowsHelpers@@YAHPEAUHWND__@@_J@Z @ 0x1800817B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessWindowBool@QuadShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@AEAA_NPEAUHWND__@@@Z @ 0x180080E74 (-ProcessWindowBool@QuadShadowWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32.c)
 */

__int64 __fastcall EnumWindowsHelpers::LambdaEnumWindowsProc<_lambda_df7356024bf744f3615be68a3ea90a6d_>(
        HWND a1,
        __int64 a2)
{
  bool *v2; // rsi
  __int64 v5; // rcx
  __int64 v6; // rax

  if ( !**(_BYTE **)a2 )
  {
    v2 = *(bool **)a2;
    *v2 = !ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::QuadShadowWindowGatherer::ProcessWindowBool(
             (__int64)v2,
             a1);
  }
  v5 = *(_QWORD *)(a2 + 8);
  if ( a1 == *(HWND *)(v5 + 8) )
  {
    *(_BYTE *)v5 = 1;
  }
  else if ( !*(_BYTE *)v5 )
  {
    *(_QWORD *)(v5 + 8LL * *(int *)(v5 + 64) + 32) = a1;
    *(_DWORD *)(v5 + 64) = (*(_DWORD *)(v5 + 64) + 1) % 4;
  }
  v6 = *(_QWORD *)(a2 + 16);
  if ( a1 == *(HWND *)(v6 + 8) )
  {
    *(_BYTE *)v6 = 1;
  }
  else if ( *(_BYTE *)v6 )
  {
    *(_BYTE *)v6 = 0;
    *(_QWORD *)(v6 + 32) = a1;
  }
  return 1LL;
}
