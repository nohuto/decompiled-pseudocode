/*
 * XREFs of ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1801130CC
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1801108F0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 *     wil::details::lambda_call__lambda_775175a9645b33416709a85652ff8f3a___::_lambda_call__lambda_775175a9645b33416709a85652ff8f3a___ @ 0x180115AA4 (wil--details--lambda_call__lambda_775175a9645b33416709a85652ff8f3a___--_lambda_call__lambda_7751.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_20c41668bf63e4a56980cdec2b4f71f2___::Run @ 0x180117B70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_20c41668bf63e4a56980cdec2b4f71f2___--Run.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x18008BCD0 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?erase@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@@Z @ 0x180115AC8 (-erase@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@UPeoplePaneV.c)
 */

void __fastcall PeoplePaneViewManager::RemovePaneViewInfoForContactId(RTL_SRWLOCK *this, char *a2)
{
  RTL_SRWLOCK *v2; // rsi
  char **Ptr; // rbx
  RTL_SRWLOCK *v6; // r14
  char **i; // rdi
  char v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = this + 16;
  AcquireSRWLockExclusive(this + 16);
  Ptr = (char **)this[18].Ptr;
  v6 = this + 17;
  for ( i = (char **)this[17].Ptr; i != Ptr && (*((_DWORD *)*i + 15) || (unsigned int)std::wstring::compare(*i, a2)); i += 2 )
    ;
  if ( i != Ptr )
    std::vector<std::shared_ptr<PeoplePaneViewInfo>>::erase(v6, &v8, i);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
