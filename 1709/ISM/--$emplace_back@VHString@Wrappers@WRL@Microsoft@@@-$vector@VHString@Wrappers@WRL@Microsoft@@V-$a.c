/*
 * XREFs of ??$emplace_back@VHString@Wrappers@WRL@Microsoft@@@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180098528
 * Callers:
 *     EnumerateDevices @ 0x180090968 (EnumerateDevices.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAVHString@Wrappers@WRL@Microsoft@@PEAV1234@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@YAPEAVHString@Wrappers@WRL@Microsoft@@PEAV1234@00AEAU?$_Wrap_alloc@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18009901C (--$_Uninitialized_move_al_unchecked@PEAVHString@Wrappers@WRL@Microsoft@@PEAV1234@V-$allocator@VH.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::Wrappers::HString>::emplace_back<Microsoft::WRL::Wrappers::HString>(
        HSTRING **a1,
        HSTRING *a2)
{
  HSTRING *v4; // rcx
  HSTRING *v5; // rdi
  __int64 v6; // rdi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  HSTRING *v11; // rax
  HSTRING *v12; // r15
  HSTRING *v13; // rax
  HSTRING *v14; // rdi
  HSTRING *v15; // r14
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  HSTRING *v22; // [rsp+90h] [rbp+18h]

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v6 = v5 - *a1;
    if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v7 = v6 + 1;
    v8 = v4 - *a1;
    v9 = v8 >> 1;
    if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    else
    {
      v10 = v6 + 1;
    }
    v11 = (HSTRING *)std::_Allocate(v10, 8uLL);
    v12 = v11;
    v22 = v11;
    try
    {
      v13 = &v11[v6];
      if ( v13 )
      {
        *v13 = *a2;
        *a2 = 0LL;
      }
      std::_Uninitialized_move_al_unchecked<Microsoft::WRL::Wrappers::HString *,Microsoft::WRL::Wrappers::HString *,std::allocator<Microsoft::WRL::Wrappers::HString>>(
        *a1,
        a1[1],
        v12);
    }
    catch ( ... )
    {
      v19 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v22[v6]);
      std::_Wrap_alloc<std::allocator<Microsoft::WRL::Wrappers::HString>>::destroy<Microsoft::WRL::Wrappers::HString>(
        v20,
        v19);
      std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>>::deallocate(
        v21,
        v22,
        v10);
      throw;
    }
    v14 = *a1;
    if ( !*a1 )
      goto LABEL_27;
    v15 = a1[1];
    while ( v14 != v15 )
    {
      WindowsDeleteString(*v14);
      *v14++ = 0LL;
    }
    v16 = (unsigned __int64)*a1;
    v17 = a1[2] - *a1;
    if ( v17 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v17 < 0x1000 )
      {
LABEL_25:
        operator delete((void *)v16);
LABEL_27:
        *a1 = v12;
        a1[1] = &v12[v7];
        a1[2] = &v12[v10];
        return;
      }
      if ( (v16 & 0x1F) == 0 )
      {
        v18 = *(_QWORD *)(v16 - 8);
        if ( v18 < v16 )
        {
          v16 = v16 - v18 - 8;
          if ( v16 <= 0x1F )
          {
            v16 = v18;
            goto LABEL_25;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v16);
    __debugbreak();
  }
  if ( v5 )
  {
    *v5 = *a2;
    *a2 = 0LL;
  }
  ++a1[1];
}
