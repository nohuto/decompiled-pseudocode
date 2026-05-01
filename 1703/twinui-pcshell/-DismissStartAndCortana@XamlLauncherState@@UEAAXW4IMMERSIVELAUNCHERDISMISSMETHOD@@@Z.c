/*
 * XREFs of ?DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180155610
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180155370 (-HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall XamlLauncherState::DismissStartAndCortana(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  int v5; // ecx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 40);
  if ( v2 <= 0x11 )
  {
    v5 = 227872;
    if ( _bittest(&v5, v2) )
    {
      v6 = *(_QWORD *)(a1 + 80);
      if ( v6 && ((*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 24LL))(v6, &v10) < 0 || v10) )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 128LL))(*(_QWORD *)(a1 + 56));
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x28B,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v7);
      }
      else
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 24LL))(*(_QWORD *)(a1 + 72), 3LL);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x285,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v8);
        XamlLauncherState::HideStartAndCortana(a1, a2);
      }
    }
  }
}
