/*
 * XREFs of wil::details::ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___::_ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___ @ 0x1800EBABC
 * Callers:
 *     ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x1800E8600 (-LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z.c)
 *     _PeoplePaneViewManager::LaunchPeopleShare_::_1_::dtor$3 @ 0x18019DAEA (_PeoplePaneViewManager--LaunchPeopleShare_--_1_--dtor$3.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?erase@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@@Z @ 0x1800EBBC4 (-erase@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@UPeoplePaneV.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___::_ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rbx
  _WORD *Ptr; // rsi
  char *i; // r8
  _QWORD *v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 *v6; // r11
  unsigned __int64 v7; // r10
  _WORD *v8; // r9
  int v9; // eax
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF
  char v11; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    v1 = *a1;
    Ptr = a1[1]->Ptr;
    wil::srwlock::lock_exclusive(*a1 + 12, &SRWLock);
    for ( i = (char *)v1[13].Ptr; i != v1[14].Ptr; i += 16 )
    {
      v4 = *(_QWORD **)i;
      if ( *(_DWORD *)(*(_QWORD *)i + 60LL) == 1 && !v4[6] )
      {
        v5 = -1LL;
        do
          ++v5;
        while ( Ptr[v5] );
        v6 = v4 + 2;
        if ( v4[3] >= 8uLL )
          v4 = (_QWORD *)*v4;
        v7 = *v6;
        v8 = Ptr;
        if ( v5 < *v6 )
          v7 = v5;
        if ( v7 )
        {
          while ( *(_WORD *)v4 == *v8 )
          {
            v4 = (_QWORD *)((char *)v4 + 2);
            ++v8;
            if ( !--v7 )
              goto LABEL_14;
          }
          v9 = *(_WORD *)v4 < *v8 ? -1 : 1;
        }
        else
        {
LABEL_14:
          v9 = 0;
        }
        if ( !v9 && *v6 >= v5 && *v6 <= v5 )
          break;
      }
    }
    if ( i != v1[14].Ptr )
      std::vector<std::shared_ptr<PeoplePaneViewInfo>>::erase(&v1[13], &v11, i);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
}
