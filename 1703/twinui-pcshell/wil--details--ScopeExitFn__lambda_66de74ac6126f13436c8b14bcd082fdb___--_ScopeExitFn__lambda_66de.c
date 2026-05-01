/*
 * XREFs of wil::details::ScopeExitFn__lambda_66de74ac6126f13436c8b14bcd082fdb___::_ScopeExitFn__lambda_66de74ac6126f13436c8b14bcd082fdb___ @ 0x18007D83C
 * Callers:
 *     _CWin32ApplicationView::GetCloakableWindows_::_1_::dtor$1 @ 0x18019B353 (_CWin32ApplicationView--GetCloakableWindows_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::ScopeExitFn__lambda_66de74ac6126f13436c8b14bcd082fdb___::_ScopeExitFn__lambda_66de74ac6126f13436c8b14bcd082fdb___(
        __int64 a1)
{
  __int64 v1; // rbx

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_QWORD *)a1 + 184LL;
    *(_BYTE *)(a1 + 8) = 0;
    if ( *(_QWORD *)v1 )
    {
      CoTaskMemFree(*(LPVOID *)v1);
      *(_QWORD *)v1 = 0LL;
    }
    *(_QWORD *)(v1 + 8) = 0LL;
    *(_QWORD *)(v1 + 24) = 0LL;
  }
}
