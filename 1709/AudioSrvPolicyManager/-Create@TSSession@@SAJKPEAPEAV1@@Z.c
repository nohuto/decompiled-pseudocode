/*
 * XREFs of ?Create@TSSession@@SAJKPEAPEAV1@@Z @ 0x18001ABA8
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C164 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A80 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18001AF04 (--1TSSession@@QEAA@XZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointVolumeStateManager@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800258F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpoint.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180025AF8 (-_Init@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@2@PEAU32@0@Z @ 0x1800264B8 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180027058 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall TSSession::Create(int a1, struct TSSession **a2)
{
  TSSession *v4; // rax
  TSSession *v5; // r15
  TSSession *v6; // rdi
  int Interface; // esi
  __int64 v8; // rcx
  struct IVolumeProvider *v9; // r12
  _DWORD *v10; // rax
  _DWORD *v11; // rbx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = (TSSession *)operator new(0x138uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_DWORD *)v4 + 8) = 0;
    *((_QWORD *)v4 + 5) = 0LL;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 0LL;
    *((_QWORD *)v4 + 8) = 0LL;
    *((_QWORD *)v4 + 9) = 0LL;
    *((_QWORD *)v4 + 10) = 0LL;
    *((_QWORD *)v4 + 11) = 0LL;
    *((_DWORD *)v4 + 24) = 10;
    *((_QWORD *)v4 + 13) = 0LL;
    *((_QWORD *)v4 + 14) = 0LL;
    *((_QWORD *)v4 + 15) = 0LL;
    *((_QWORD *)v4 + 16) = 0LL;
    *((_QWORD *)v4 + 17) = 0LL;
    *((_DWORD *)v4 + 36) = 10;
    *((_QWORD *)v4 + 19) = 0LL;
    *((_QWORD *)v4 + 20) = 0LL;
    *((_DWORD *)v4 + 42) = 0;
    *((_QWORD *)v4 + 22) = 0LL;
    *((_QWORD *)v4 + 23) = 0LL;
    *((_QWORD *)v4 + 24) = 0LL;
    *((_QWORD *)v4 + 25) = 0LL;
    *((_QWORD *)v4 + 26) = 0LL;
    *((_DWORD *)v4 + 54) = 10;
    *((_DWORD *)v4 + 56) = 1065353216;
    *((_DWORD *)v4 + 57) = 1;
    *((_QWORD *)v4 + 29) = 0LL;
    *((_QWORD *)v4 + 30) = 0LL;
    *((_QWORD *)v4 + 31) = 0LL;
    *((_QWORD *)v4 + 32) = 0LL;
    *((_QWORD *)v4 + 33) = 0LL;
    *((_QWORD *)v4 + 34) = 0LL;
    *((_QWORD *)v4 + 35) = 0LL;
    *((_DWORD *)v4 + 72) = 0;
    *((_DWORD *)v4 + 74) = 0;
    *((_DWORD *)v4 + 76) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5;
  if ( !v5 )
  {
    Interface = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB2,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_22;
  }
  *(_DWORD *)v5 = a1;
  v8 = *((_QWORD *)v5 + 30);
  *((_QWORD *)v5 + 30) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = g_pVolumeProvider;
  *((_QWORD *)v5 + 30) = 0LL;
  v10 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( !v10 )
  {
    Interface = -2147024882;
LABEL_20:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xB5,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)Interface);
    goto LABEL_22;
  }
  v10[3] = 1;
  *(_QWORD *)v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IEndpointVolumeStateManager>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v11 = &CEndpointVolumeStateManager::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v11 + 4), 0, 0);
  v11[14] = 0;
  *((_QWORD *)v11 + 8) = 0LL;
  *((_QWORD *)v11 + 9) = 0LL;
  *((_QWORD *)v11 + 8) = std::_List_alloc<std::_List_base_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>::_Buynode0(
                           v12,
                           0LL,
                           0LL);
  *((_QWORD *)v11 + 10) = 0LL;
  *((_QWORD *)v11 + 11) = 0LL;
  *((_QWORD *)v11 + 12) = 0LL;
  v11[14] = 1065353216;
  std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::_Init(
    v11 + 14,
    8LL);
  *((_QWORD *)v11 + 15) = v9;
  if ( v9 )
    (*(void (__fastcall **)(struct IVolumeProvider *))(*(_QWORD *)v9 + 8LL))(v9);
  Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointVolumeStateManager>::QueryInterface(
                v11,
                &GUID_59d5b9a9_5e6e_4cd4_baae_95ad8d257a28,
                (char *)v5 + 240);
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v11 + 48LL))(v11, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    v6 = v5;
  }
  if ( Interface < 0 )
    goto LABEL_20;
  v6 = 0LL;
  *a2 = v5;
  Interface = 0;
LABEL_22:
  if ( v6 )
  {
    TSSession::~TSSession(v6);
    operator delete(v6, (const struct std::nothrow_t *)0x138);
  }
  return (unsigned int)Interface;
}
