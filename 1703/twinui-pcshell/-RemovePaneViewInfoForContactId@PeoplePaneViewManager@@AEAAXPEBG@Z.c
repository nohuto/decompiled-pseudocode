/*
 * XREFs of ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1800E9BF8
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x1800E7FB0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z.c)
 *     _lambda_f748ab983864a1d9251a0884a7c17331_::operator() @ 0x1800E8390 (_lambda_f748ab983864a1d9251a0884a7c17331_--operator().c)
 *     wil::details::ScopeExitFn__lambda_fcbd89be9b7923d32122df07f02d86f9___::_ScopeExitFn__lambda_fcbd89be9b7923d32122df07f02d86f9___ @ 0x1800EBBA0 (wil--details--ScopeExitFn__lambda_fcbd89be9b7923d32122df07f02d86f9___--_ScopeExitFn__lambda_fcbd.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?erase@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@@Z @ 0x1800EBBC4 (-erase@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@UPeoplePaneV.c)
 */

void __fastcall PeoplePaneViewManager::RemovePaneViewInfoForContactId(RTL_SRWLOCK *this, const unsigned __int16 *a2)
{
  char *i; // r8
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r11
  unsigned __int64 v8; // r10
  const unsigned __int16 *v9; // r9
  int v10; // eax
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+48h] [rbp+10h] BYREF

  wil::srwlock::lock_exclusive(this + 12, &SRWLock);
  for ( i = (char *)this[13].Ptr; i != this[14].Ptr; i += 16 )
  {
    v5 = *(_QWORD **)i;
    if ( !*(_DWORD *)(*(_QWORD *)i + 60LL) )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( a2[v6] );
      v7 = v5 + 2;
      if ( v5[3] >= 8uLL )
        v5 = (_QWORD *)*v5;
      v8 = *v7;
      v9 = a2;
      if ( v6 < *v7 )
        v8 = v6;
      if ( v8 )
      {
        while ( *(_WORD *)v5 == *v9 )
        {
          v5 = (_QWORD *)((char *)v5 + 2);
          ++v9;
          if ( !--v8 )
            goto LABEL_12;
        }
        v10 = *(_WORD *)v5 < *v9 ? -1 : 1;
      }
      else
      {
LABEL_12:
        v10 = 0;
      }
      if ( !v10 && *v7 >= v6 && *v7 <= v6 )
        break;
    }
  }
  if ( i != this[14].Ptr )
    std::vector<std::shared_ptr<PeoplePaneViewInfo>>::erase(&this[13], &v12, i);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
