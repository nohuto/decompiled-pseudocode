/*
 * XREFs of ?Uninitialize@XamlTaskbarManager@@UEAAXXZ @ 0x180120820
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18007866C (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

void __fastcall XamlTaskbarManager::Uninitialize(XamlTaskbarManager *this)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = SmartCookie::Unregister((XamlTaskbarManager *)((char *)this + 144));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x57,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
      (const char *)(unsigned int)v1);
}
