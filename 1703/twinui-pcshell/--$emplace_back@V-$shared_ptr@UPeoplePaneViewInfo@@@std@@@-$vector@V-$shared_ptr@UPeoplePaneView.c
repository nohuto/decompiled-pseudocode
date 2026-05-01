/*
 * XREFs of ??$emplace_back@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@@Z @ 0x1800EC560
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x1800E7FB0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z.c)
 *     ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x1800E8600 (-LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@CAXXZ @ 0x18002478C (-_Xlength@-$vector@V-$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V-$allocator.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$_Uninitialized_move_al_unchecked1@PEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@PEAV12@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@YAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@0@PEAV10@00AEAU?$_Wrap_alloc@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800ED3B8 (--$_Uninitialized_move_al_unchecked1@PEAV-$shared_ptr@UPeoplePaneViewInfo@@@std@@PEAV12@V-$alloc.c)
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<std::shared_ptr<PeoplePaneViewInfo>>::emplace_back<std::shared_ptr<PeoplePaneViewInfo>>(
        char **a1,
        _QWORD *a2)
{
  char *v4; // rcx
  char *v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  char *v11; // r14
  size_t v12; // rcx
  void *v13; // rax
  char *v14; // rcx
  char *v15; // rbx
  char *v16; // r13
  volatile signed __int32 *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v6 = (v5 - *a1) >> 4;
    if ( v6 == 0xFFFFFFFFFFFFFFFLL )
      std::vector<wil::com_ptr_t<IThumbnailEvents,wil::err_exception_policy>>::_Xlength();
    v7 = v6 + 1;
    v8 = (v4 - *a1) >> 4;
    v9 = v8 >> 1;
    if ( v8 <= 0xFFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    else
    {
      v10 = v6 + 1;
    }
    if ( v10 )
    {
      if ( v10 > 0xFFFFFFFFFFFFFFFLL )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v12 = 16 * v10;
      if ( 16 * v10 < 0x1000 )
      {
        v11 = (char *)operator new(v12);
      }
      else
      {
        if ( v12 + 39 < v12 )
        {
          std::_Xbad_alloc();
          __debugbreak();
        }
        v13 = operator new(v12 + 39);
        v11 = (char *)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *((_QWORD *)v11 - 1) = v13;
      }
    }
    else
    {
      v11 = 0LL;
    }
    try
    {
      v14 = &v11[16 * v6];
      if ( v14 )
      {
        *(_QWORD *)v14 = *a2;
        *((_QWORD *)v14 + 1) = a2[1];
        *a2 = 0LL;
        a2[1] = 0LL;
      }
      std::_Uninitialized_move_al_unchecked1<std::shared_ptr<PeoplePaneViewInfo> *,std::shared_ptr<PeoplePaneViewInfo> *,std::allocator<std::shared_ptr<PeoplePaneViewInfo>>>(
        *a1,
        a1[1],
        v11);
    }
    catch ( ... )
    {
      v18 = std::_Unfancy<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>((__int64)&v11[16 * v6]);
      std::_Wrap_alloc<std::allocator<std::shared_ptr<PeoplePaneViewInfo>>>::destroy<std::shared_ptr<PeoplePaneViewInfo>>(
        v19,
        v18);
      std::_Wrap_alloc<std::allocator<AgileRegistrationList::Item>>::deallocate(v20, v11, v10);
      throw;
    }
    v15 = *a1;
    if ( *a1 )
    {
      v16 = a1[1];
      while ( v15 != v16 )
      {
        v17 = (volatile signed __int32 *)*((_QWORD *)v15 + 1);
        if ( v17 )
        {
          if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
            if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          }
        }
        v15 += 16;
      }
      std::_Deallocate(*a1, (a1[2] - *a1) >> 4, 0x10uLL);
    }
    *a1 = v11;
    a1[1] = &v11[16 * v7];
    a1[2] = &v11[16 * v10];
  }
  else
  {
    if ( v5 )
    {
      *(_QWORD *)v5 = *a2;
      *((_QWORD *)v5 + 1) = a2[1];
      *a2 = 0LL;
      a2[1] = 0LL;
    }
    a1[1] += 16;
  }
}
