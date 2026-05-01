/*
 * XREFs of _lambda_46851bff5b4673daf3d019eee80c73b2_::operator() @ 0x180088554
 * Callers:
 *     wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___ @ 0x180026130 (wil--ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802B5BA4 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1802B5C08 (--$_Insert_hint@AEAU-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU-$_Tree_.c)
 *     ?EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z @ 0x1802B680C (-EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_46851bff5b4673daf3d019eee80c73b2_::operator()(struct IImmersiveMonitor ***a1)
{
  int v2; // eax
  struct IImmersiveMonitor **v3; // rbx
  __int64 result; // rax
  __int64 *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r10
  char v8; // r9
  struct IImmersiveMonitor *v9; // rbx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  struct IImmersiveMonitor **v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r9
  char v18; // r8
  __int64 v19; // rax
  struct IApplicationFrame *v20; // rdi
  int v21; // [rsp+20h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v23; // [rsp+70h] [rbp+20h] BYREF
  struct IApplicationFrame *v24; // [rsp+78h] [rbp+28h] BYREF
  struct IApplicationFrame *v25; // [rsp+80h] [rbp+30h] BYREF

  v2 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, unsigned int *))(*(_QWORD *)**a1 + 24LL))(**a1, &v23);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1E7,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v2,
      v21);
    __debugbreak();
  }
  v3 = a1[1];
  result = (__int64)v3[17];
  v5 = *(__int64 **)(result + 8);
  v6 = result;
  if ( *((_BYTE *)v5 + 25) )
    goto LABEL_13;
  do
  {
    v7 = (__int64)v5;
    if ( *((_DWORD *)v5 + 8) < v23 )
    {
      v8 = 1;
      v5 = (__int64 *)v5[2];
    }
    else
    {
      v8 = 0;
      v5 = (__int64 *)*v5;
    }
    if ( !v8 )
      v6 = v7;
  }
  while ( !*((_BYTE *)v5 + 25) );
  if ( v6 == result || v23 < *(_DWORD *)(v6 + 32) )
LABEL_13:
    v6 = (__int64)v3[17];
  if ( v6 == result )
  {
    v24 = 0LL;
    v9 = v3[16];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    v10 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, struct IApplicationFrame **))(*(_QWORD *)v9 + 24LL))(
            v9,
            &v24);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1EE,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v10,
        v21);
      __debugbreak();
    }
    v11 = WindowSizeConverter::EnsurePosition(retaddr, **a1, v24);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1F6,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v11,
        v21);
      __debugbreak();
    }
    v13 = a1[1];
    v14 = (__int64)v13[17];
    v15 = *(_QWORD *)(v14 + 8);
    v16 = v14;
    if ( *(_BYTE *)(v15 + 25) )
      goto LABEL_29;
    v12 = v23;
    do
    {
      v17 = v15;
      if ( *(_DWORD *)(v15 + 32) >= v23 )
      {
        v18 = 0;
        v15 = *(_QWORD *)v15;
      }
      else
      {
        v18 = 1;
        v15 = *(_QWORD *)(v15 + 16);
      }
      if ( !v18 )
        v16 = v17;
    }
    while ( !*(_BYTE *)(v15 + 25) );
    if ( v16 == v14 || v23 < *(_DWORD *)(v16 + 32) )
    {
LABEL_29:
      v25 = (struct IApplicationFrame *)&v23;
      v19 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
              v13 + 17,
              v12,
              &v25);
      std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::_Insert_hint<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>,void *> *>(
        (_DWORD)v13 + 136,
        (unsigned int)&v25,
        v16,
        v19 + 32,
        v19);
      v16 = (__int64)v25;
    }
    v20 = v24;
    if ( *(struct IApplicationFrame **)(v16 + 40) != v24 )
    {
      v25 = v24;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v25);
      v25 = *(struct IApplicationFrame **)(v16 + 40);
      *(_QWORD *)(v16 + 40) = v20;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    }
    return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
  }
  return result;
}
