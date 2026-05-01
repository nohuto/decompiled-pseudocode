/*
 * XREFs of ??$emplace_back@UItem@AgileRegistrationList@@@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAX$$QEAUItem@AgileRegistrationList@@@Z @ 0x180025128
 * Callers:
 *     ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x180025454 (-Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@CAXXZ @ 0x18002478C (-_Xlength@-$vector@V-$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V-$allocator.c)
 *     ??$_Uninitialized_move_al_unchecked1@PEAUItem@AgileRegistrationList@@PEAU12@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAPEAUItem@AgileRegistrationList@@PEAU12@00AEAU?$_Wrap_alloc@V?$allocator@UItem@AgileRegistrationList@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180024FB0 (--$_Uninitialized_move_al_unchecked1@PEAUItem@AgileRegistrationList@@PEAU12@V-$allocator@UItem@A.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<AgileRegistrationList::Item>::emplace_back<AgileRegistrationList::Item>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  char *v12; // r14
  size_t v13; // rcx
  void *v14; // rax
  char *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v7 = (v5 - *a1) >> 4;
    if ( v7 == 0xFFFFFFFFFFFFFFFLL )
      std::vector<wil::com_ptr_t<IThumbnailEvents,wil::err_exception_policy>>::_Xlength();
    v8 = v7 + 1;
    v9 = (v4 - *a1) >> 4;
    v10 = v9 >> 1;
    if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
    {
      v11 = v10 + v9;
      if ( v10 + v9 < v8 )
        v11 = v7 + 1;
    }
    else
    {
      v11 = v7 + 1;
    }
    if ( v11 )
    {
      if ( v11 > 0xFFFFFFFFFFFFFFFLL )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v13 = 16 * v11;
      if ( 16 * v11 < 0x1000 )
      {
        v12 = (char *)operator new(v13);
      }
      else
      {
        if ( v13 + 39 < v13 )
        {
          std::_Xbad_alloc();
          __debugbreak();
        }
        v14 = operator new(v13 + 39);
        v12 = (char *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *((_QWORD *)v12 - 1) = v14;
      }
    }
    else
    {
      v12 = 0LL;
    }
    try
    {
      v15 = &v12[16 * v7];
      if ( v15 )
      {
        *(_DWORD *)v15 = *(_DWORD *)a2;
        v16 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)(a2 + 8) = 0LL;
        *((_QWORD *)v15 + 1) = v16;
      }
      std::_Uninitialized_move_al_unchecked1<AgileRegistrationList::Item *,AgileRegistrationList::Item *,std::allocator<AgileRegistrationList::Item>>(
        *a1,
        a1[1],
        (__int64)v12);
    }
    catch ( ... )
    {
      v20 = std::_Unfancy<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>((__int64)&v12[16 * v7]);
      std::_Wrap_alloc<std::allocator<AgileRegistrationList::Item>>::destroy<AgileRegistrationList::Item>(v21, v20);
      std::_Wrap_alloc<std::allocator<AgileRegistrationList::Item>>::deallocate(v22, v12, v11);
      throw;
    }
    v17 = *a1;
    if ( *a1 )
    {
      v18 = a1[1];
      while ( v17 != v18 )
      {
        v19 = *(_QWORD *)(v17 + 8);
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        v17 += 16LL;
      }
      std::_Deallocate((char *)*a1, (a1[2] - *a1) >> 4, 0x10uLL);
    }
    *a1 = (__int64)v12;
    a1[1] = (__int64)&v12[16 * v8];
    a1[2] = (__int64)&v12[16 * v11];
  }
  else
  {
    if ( v5 )
    {
      *(_DWORD *)v5 = *(_DWORD *)a2;
      v6 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)(v5 + 8) = v6;
    }
    a1[1] += 16LL;
  }
}
