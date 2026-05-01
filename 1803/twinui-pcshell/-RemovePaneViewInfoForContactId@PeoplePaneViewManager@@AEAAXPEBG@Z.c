/*
 * XREFs of ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1801C4300
 * Callers:
 *     wil::details::lambda_call__lambda_775175a9645b33416709a85652ff8f3a___::_lambda_call__lambda_775175a9645b33416709a85652ff8f3a___ @ 0x1801C083C (wil--details--lambda_call__lambda_775175a9645b33416709a85652ff8f3a___--_lambda_call__lambda_7751.c)
 *     _lambda_ebd42d67d4ed24c24d65003e6952ebf6_::operator() @ 0x1801C0DBC (_lambda_ebd42d67d4ed24c24d65003e6952ebf6_--operator().c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1801C34A0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x18014999C (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?erase@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@@Z @ 0x1801C5624 (-erase@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@UPeoplePaneV.c)
 */

void __fastcall PeoplePaneViewManager::RemovePaneViewInfoForContactId(RTL_SRWLOCK *this, unsigned __int16 *a2)
{
  RTL_SRWLOCK *v2; // rdi
  __int64 **Ptr; // rsi
  RTL_SRWLOCK *v6; // r14
  __int64 **i; // rbx
  char v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = this + 16;
  AcquireSRWLockExclusive(this + 16);
  Ptr = (__int64 **)this[18].Ptr;
  v6 = this + 17;
  for ( i = (__int64 **)this[17].Ptr;
        i != Ptr && (*((_DWORD *)*i + 15) || (unsigned int)std::wstring::compare(*i, a2));
        i += 2 )
  {
    ;
  }
  if ( i != Ptr )
    std::vector<std::shared_ptr<PeoplePaneViewInfo>>::erase(v6, &v8, i);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
