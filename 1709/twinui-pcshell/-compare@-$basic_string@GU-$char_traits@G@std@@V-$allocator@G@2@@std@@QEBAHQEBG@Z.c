/*
 * XREFs of ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x18008BCD0
 * Callers:
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x18008B130 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x180111DC0 (-ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z.c)
 *     ?PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x1801121C0 (-PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z.c)
 *     ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1801130CC (-RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 *     ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18011315C (-FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePaneViewInf.c)
 *     wil::details::ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___::_ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___ @ 0x180115A00 (wil--details--ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___--_ScopeExitFn__lambda_d52e.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::compare(char *a1, char *a2)
{
  unsigned __int64 v2; // r8
  char *v3; // r9
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rax
  signed __int64 v6; // r9
  unsigned __int16 v7; // cx
  __int64 result; // rax

  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)&a2[2 * v2] );
  v3 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v3 = *(char **)a1;
  v4 = *((_QWORD *)a1 + 2);
  v5 = v4;
  if ( v2 < v4 )
    v5 = v2;
  if ( v5 )
  {
    v6 = v3 - a2;
    while ( 1 )
    {
      v7 = *(_WORD *)&a2[v6];
      if ( v7 != *(_WORD *)a2 )
        break;
      a2 += 2;
      if ( !--v5 )
        goto LABEL_11;
    }
    result = v7 < *(_WORD *)a2 ? -1 : 1;
  }
  else
  {
LABEL_11:
    result = 0LL;
  }
  if ( !(_DWORD)result )
  {
    if ( v4 >= v2 )
      return v4 > v2;
    else
      return 0xFFFFFFFFLL;
  }
  return result;
}
