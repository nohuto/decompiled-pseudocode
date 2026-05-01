/*
 * XREFs of _lambda_4f9db91f7b3ef4e45d712402b4d08f96_::__lambda_4f9db91f7b3ef4e45d712402b4d08f96_ @ 0x180113D60
 * Callers:
 *     _PeoplePaneViewManager::NotifyListeners_::_1_::dtor$1 @ 0x1801EDD69 (_PeoplePaneViewManager--NotifyListeners_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall lambda_4f9db91f7b3ef4e45d712402b4d08f96_::__lambda_4f9db91f7b3ef4e45d712402b4d08f96_(_QWORD *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[2];
  if ( v2 )
  {
    CoTaskMemFree(v2);
    a1[2] = 0LL;
  }
  a1[3] = 0LL;
  a1[4] = 0LL;
}
