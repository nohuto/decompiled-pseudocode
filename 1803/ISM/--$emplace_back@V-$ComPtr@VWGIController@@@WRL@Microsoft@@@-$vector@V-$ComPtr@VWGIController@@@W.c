/*
 * XREFs of ??$emplace_back@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VWGIController@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@$$QEAV234@@Z @ 0x180076EB4
 * Callers:
 *     ?OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x180076CD0 (-OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Inp.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800779D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerIn.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@PEAV123@00AEAV?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180077CC0 (--$_Uninitialized_move_al_unchecked@PEAV-$ComPtr@VWGIController@@@WRL@Microsoft@@PEAV123@V-$allo.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<WGIController>>::emplace_back<Microsoft::WRL::ComPtr<WGIController>>(
        WGIController ***a1,
        WGIController **a2)
{
  WGIController **v4; // rcx
  WGIController **v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r12
  WGIController **v11; // r14
  size_t v12; // rcx
  WGIController *v13; // rax
  WGIController **v14; // rax
  __int64 v15; // rdx
  WGIController **v16; // rbx
  WGIController **v17; // r15
  WGIController *v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx

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
    if ( v10 )
    {
      if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
        std::_Default_allocate_traits<1>::_Fail();
      v12 = 8 * v10;
      if ( 8 * v10 < 0x1000 )
      {
        v11 = (WGIController **)operator new(v12);
      }
      else
      {
        if ( v12 + 39 < v12 )
          std::_Default_allocate_traits<1>::_Fail();
        v13 = (WGIController *)operator new(v12 + 39);
        v11 = (WGIController **)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v11 - 1) = v13;
      }
    }
    else
    {
      v11 = 0LL;
    }
    try
    {
      v14 = &v11[v6];
      *v14 = 0LL;
      if ( v14 != a2 )
      {
        *v14 = *a2;
        *a2 = 0LL;
      }
      std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<WGIController> *,Microsoft::WRL::ComPtr<WGIController> *,std::allocator<Microsoft::WRL::ComPtr<WGIController>>>(
        *a1,
        a1[1],
        v11);
    }
    catch ( ... )
    {
      v22 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v11[v6]);
      std::_Default_allocator_traits<std::allocator<Microsoft::WRL::ComPtr<WGIController>>>::destroy<Microsoft::WRL::ComPtr<WGIController>>(
        v23,
        v22);
      std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>>::deallocate(
        v24,
        (unsigned __int64)v11,
        v10);
      throw;
    }
    v16 = *a1;
    if ( !*a1 )
      goto LABEL_33;
    v17 = a1[1];
    if ( v16 != v17 )
    {
      do
      {
        v18 = *v16;
        if ( *v16 )
        {
          *v16 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v18);
        }
        ++v16;
      }
      while ( v16 != v17 );
      v16 = *a1;
    }
    v19 = a1[2] - v16;
    if ( v19 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v19 < 0x1000 )
      {
LABEL_32:
        operator delete(v16);
LABEL_33:
        *a1 = v11;
        a1[1] = &v11[v7];
        a1[2] = &v11[v10];
        return (__int64)(a1[1] - 1);
      }
      if ( ((unsigned __int8)v16 & 0x1F) == 0 )
      {
        v20 = (unsigned __int64)*(v16 - 1);
        if ( v20 < (unsigned __int64)v16 && (unsigned __int64)v16 - v20 - 8 <= 0x1F )
        {
          v16 = (WGIController **)*(v16 - 1);
          goto LABEL_32;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(0x1FFFFFFFFFFFFFFFLL, v15);
    __debugbreak();
  }
  *v5 = 0LL;
  if ( v5 != a2 )
  {
    *v5 = *a2;
    *a2 = 0LL;
  }
  return (__int64)a1[1]++;
}
