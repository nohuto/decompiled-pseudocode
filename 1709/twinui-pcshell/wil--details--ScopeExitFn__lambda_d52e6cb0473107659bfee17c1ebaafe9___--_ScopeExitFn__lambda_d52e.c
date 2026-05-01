/*
 * XREFs of wil::details::ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___::_ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___ @ 0x180115A00
 * Callers:
 *     ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x180111530 (-LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z.c)
 *     _PeoplePaneViewManager::LaunchPeopleShare_::_1_::dtor$2 @ 0x1801EDBC5 (_PeoplePaneViewManager--LaunchPeopleShare_--_1_--dtor$2.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x18008BCD0 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?erase@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@@Z @ 0x180115AC8 (-erase@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@UPeoplePaneV.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___::_ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rdi
  RTL_SRWLOCK *v2; // rsi
  char *Ptr; // rbp
  char *v4; // rbx
  RTL_SRWLOCK *v5; // r14
  char *i; // rdi
  __int64 v7; // rcx
  char v8; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    v1 = *a1;
    v2 = *a1 + 16;
    Ptr = (char *)a1[1]->Ptr;
    AcquireSRWLockExclusive(v2);
    v4 = (char *)v1[18].Ptr;
    v5 = v1 + 17;
    for ( i = (char *)v1[17].Ptr; i != v4; i += 16 )
    {
      v7 = *(_QWORD *)i;
      if ( *(_DWORD *)(*(_QWORD *)i + 60LL) == 1
        && !*(_QWORD *)(v7 + 48)
        && !(unsigned int)std::wstring::compare((char *)v7, Ptr) )
      {
        break;
      }
    }
    if ( i != v4 )
      std::vector<std::shared_ptr<PeoplePaneViewInfo>>::erase(v5, &v8, i);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
}
