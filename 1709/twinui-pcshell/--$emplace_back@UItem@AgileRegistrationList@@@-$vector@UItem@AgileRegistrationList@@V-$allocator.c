/*
 * XREFs of ??$emplace_back@UItem@AgileRegistrationList@@@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAX$$QEAUItem@AgileRegistrationList@@@Z @ 0x1800259D4
 * Callers:
 *     ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x180025B60 (-Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x180025030 (-_Xlength@-$vector@V-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAUItem@AgileRegistrationList@@PEAU12@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAPEAUItem@AgileRegistrationList@@PEAU12@00AEAU?$_Wrap_alloc@V?$allocator@UItem@AgileRegistrationList@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800258AC (--$_Uninitialized_move_al_unchecked@PEAUItem@AgileRegistrationList@@PEAU12@V-$allocator@UItem@Ag.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180027864 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<AgileRegistrationList::Item>::emplace_back<AgileRegistrationList::Item>(
        __int64 *a1,
        __int64 a2,
        bool a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // r12
  char *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r14
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // [rsp+98h] [rbp+20h]

  v5 = a1[2];
  v6 = a1[1];
  if ( v5 == v6 )
  {
    v8 = (v6 - *a1) >> 4;
    if ( v8 == 0xFFFFFFFFFFFFFFFLL )
      std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>>::_Xlength();
    v9 = v8 + 1;
    v10 = (v5 - *a1) >> 4;
    v11 = v10 >> 1;
    if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
    {
      v12 = v11 + v10;
      if ( v11 + v10 < v9 )
        v12 = v8 + 1;
    }
    else
    {
      v12 = v8 + 1;
    }
    v13 = std::_Allocate(v12, 0x10uLL, a3);
    v14 = (__int64)v13;
    v26 = v13;
    try
    {
      v15 = (char *)&v13[2 * v8];
      if ( v15 )
      {
        *(_DWORD *)v15 = *(_DWORD *)a2;
        v16 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)(a2 + 8) = 0LL;
        *((_QWORD *)v15 + 1) = v16;
      }
      std::_Uninitialized_move_al_unchecked<AgileRegistrationList::Item *,AgileRegistrationList::Item *,std::allocator<AgileRegistrationList::Item>>(
        *a1,
        a1[1],
        v14);
    }
    catch ( ... )
    {
      v23 = std::_Unfancy<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>((__int64)&v26[2 * v8]);
      std::_Wrap_alloc<std::allocator<AgileRegistrationList::Item>>::destroy<AgileRegistrationList::Item>(v24, v23);
      std::_Wrap_alloc<std::allocator<AgileRegistrationList::Item>>::deallocate(v25, v26, v12);
      throw;
    }
    v17 = *a1;
    if ( !*a1 )
      goto LABEL_29;
    v18 = a1[1];
    while ( v17 != v18 )
    {
      v19 = *(_QWORD *)(v17 + 8);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      v17 += 16LL;
    }
    v20 = *a1;
    v21 = (a1[2] - *a1) >> 4;
    if ( v21 <= 0xFFFFFFFFFFFFFFFLL )
    {
      if ( 16 * v21 < 0x1000 )
      {
LABEL_27:
        operator delete((void *)v20);
LABEL_29:
        *a1 = v14;
        a1[1] = v14 + 16 * v9;
        a1[2] = v14 + 16 * v12;
        return;
      }
      if ( (v20 & 0x1F) == 0 )
      {
        v22 = *(_QWORD *)(v20 - 8);
        if ( v22 < v20 )
        {
          v20 = v20 - v22 - 8;
          if ( v20 <= 0x1F )
          {
            v20 = v22;
            goto LABEL_27;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v20);
    __debugbreak();
  }
  if ( v6 )
  {
    *(_DWORD *)v6 = *(_DWORD *)a2;
    v7 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(v6 + 8) = v7;
  }
  a1[1] += 16LL;
}
