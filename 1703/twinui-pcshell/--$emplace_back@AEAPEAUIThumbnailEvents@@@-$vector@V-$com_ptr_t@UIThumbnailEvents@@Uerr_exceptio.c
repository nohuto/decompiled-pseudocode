/*
 * XREFs of ??$emplace_back@AEAPEAUIThumbnailEvents@@@?$vector@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXAEAPEAUIThumbnailEvents@@@Z @ 0x180167334
 * Callers:
 *     ?AddThumbnailEventHandler@ThumbnailInteropDevice@@UEAAJPEAUIThumbnailEvents@@@Z @ 0x180166B50 (-AddThumbnailEventHandler@ThumbnailInteropDevice@@UEAAJPEAUIThumbnailEvents@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@CAXXZ @ 0x18002478C (-_Xlength@-$vector@V-$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V-$allocator.c)
 *     ??$_Uninitialized_move_al_unchecked1@PEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@PEAV12@00AEAU?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800247A0 (--$_Uninitialized_move_al_unchecked1@PEAV-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<wil::com_ptr_t<IThumbnailEvents,wil::err_exception_policy>>::emplace_back<IThumbnailEvents * &>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  _QWORD *v12; // rsi
  size_t v13; // rcx
  void *v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // rdi
  __int64 *v18; // r15
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v7 = v5 - *a1;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      std::vector<wil::com_ptr_t<IThumbnailEvents,wil::err_exception_policy>>::_Xlength();
    v8 = v7 + 1;
    v9 = v4 - *a1;
    v10 = v9 >> 1;
    if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
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
      if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v13 = 8 * v11;
      if ( 8 * v11 < 0x1000 )
      {
        v12 = operator new(v13);
      }
      else
      {
        if ( v13 + 39 < v13 )
        {
          std::_Xbad_alloc();
          __debugbreak();
        }
        v14 = operator new(v13 + 39);
        v12 = (_QWORD *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v12 - 1) = v14;
      }
    }
    else
    {
      v12 = 0LL;
    }
    try
    {
      v15 = &v12[v7];
      if ( v15 )
      {
        v16 = *a2;
        *v15 = *a2;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      }
      std::_Uninitialized_move_al_unchecked1<wil::com_ptr_t<IAgileReference,wil::err_exception_policy> *,wil::com_ptr_t<IAgileReference,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>>(
        *a1,
        a1[1],
        v12);
    }
    catch ( ... )
    {
      v19 = (_QWORD *)std::_Unfancy<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>((__int64)&v12[v7]);
      std::_Wrap_alloc<std::allocator<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>>::destroy<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>(
        v20,
        v19);
      std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>>>>>>::deallocate(
        v21,
        v12,
        v11);
      throw;
    }
    v17 = *a1;
    if ( *a1 )
    {
      v18 = a1[1];
      while ( v17 != v18 )
      {
        if ( *v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)*v17 + 16LL))(*v17);
        ++v17;
      }
      std::_Deallocate((char *)*a1, a1[2] - *a1, 8uLL);
    }
    *a1 = v12;
    a1[1] = &v12[v8];
    a1[2] = &v12[v11];
  }
  else
  {
    if ( v5 )
    {
      v6 = *a2;
      *v5 = *a2;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    }
    ++a1[1];
  }
}
