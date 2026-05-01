/*
 * XREFs of ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x1800CE3DC
 * Callers:
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1800CD600 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1_bstr_t@@QEAA@XZ @ 0x18008A634 (--1_bstr_t@@QEAA@XZ.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x18008A69C (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ?GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x18017457C (-GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV-$shared_ptr@V-$ba.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall PWSLayoutParser::ParsePinnedAppNode(
        const unsigned __int16 **this,
        struct IXMLDOMNode *a2,
        struct IPenWorkspaceLayoutItem **a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // eax
  bool v12; // bl
  int v13; // eax
  __int64 v14; // rdx
  bool v15; // bl
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct IPenWorkspaceLayoutItem *v20; // rcx
  __int64 v22; // [rsp+20h] [rbp-50h] BYREF
  __int64 v23; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v24[8]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v25[8]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-30h]
  __int128 v27; // [rsp+48h] [rbp-28h] BYREF
  __int128 v28; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct IPenWorkspaceLayoutItem *v30; // [rsp+B8h] [rbp+48h] BYREF

  v26 = -2LL;
  *a3 = 0LL;
  v30 = 0LL;
  v6 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( !v6 )
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3D,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutitem.cpp",
      (const char *)0x8007000ELL);
LABEL_37:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xD4,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_38;
  }
  *v6 = &Microsoft::WRL::ChainInterfaces<IApplicationViewVisibilityDebouncedNotificationServicePrivate,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *((_DWORD *)v6 + 3) = 1;
  *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IPWSLayoutItemInternal,IPenWorkspaceLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v7 = &PWSLayoutItem::`vftable';
  v7[2] = 0LL;
  v7[3] = 0LL;
  v7[4] = 0LL;
  v7[5] = 0LL;
  v7[6] = 0LL;
  v7[7] = 0LL;
  (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
  (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  v8 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, struct IPenWorkspaceLayoutItem **))*v7)(
         v7,
         &GUID_c343e0c0_9666_444b_898f_cc498c7e521a,
         &v30);
  v9 = v8;
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutitem.cpp",
      (const char *)(unsigned int)v8);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  if ( v9 < 0 )
    goto LABEL_37;
  v23 = 0LL;
  v10 = (**(__int64 (__fastcall ***)(struct IPenWorkspaceLayoutItem *, GUID *, __int64 *))v30)(
          v30,
          &GUID_ec14b3b3_3cd8_428a_a455_490250210fd2,
          &v23);
  v9 = v10;
  if ( v10 >= 0 )
  {
    v22 = 0LL;
    v11 = ((__int64 (__fastcall *)(struct IXMLDOMNode *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
            a2,
            &GUID_2933bf86_7b36_11d2_b20e_00c04f983e60,
            &v22);
    v9 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xDA,
        (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)(unsigned int)v11);
LABEL_32:
      v18 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      goto LABEL_34;
    }
    v28 = 0LL;
    v27 = 0LL;
    _bstr_t::_bstr_t((_bstr_t *)v24, this[2]);
    v12 = (int)StartLayout::GetStringAttributeValue(v22, v24, &v28) >= 0;
    _bstr_t::~_bstr_t((_bstr_t *)v24);
    if ( v12 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 40LL))(v23);
      v9 = v13;
      if ( v13 < 0 )
      {
        v14 = 223LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
          (const char *)(unsigned int)v13);
        goto LABEL_24;
      }
    }
    else
    {
      _bstr_t::_bstr_t((_bstr_t *)v25, this[3]);
      v15 = (int)StartLayout::GetStringAttributeValue(v22, v25, &v27) >= 0;
      _bstr_t::~_bstr_t((_bstr_t *)v25);
      if ( !v15 )
      {
        v9 = -2147467259;
LABEL_24:
        if ( *((_QWORD *)&v27 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v27 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            v16 = *((_QWORD *)&v27 + 1);
            (***((void (__fastcall ****)(_QWORD))&v27 + 1))(*((_QWORD *)&v27 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v27 + 1) + 8LL))(*((_QWORD *)&v27 + 1));
          }
        }
        if ( *((_QWORD *)&v28 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v28 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            v17 = *((_QWORD *)&v28 + 1);
            (***((void (__fastcall ****)(_QWORD))&v28 + 1))(*((_QWORD *)&v28 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 12), 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v28 + 1) + 8LL))(*((_QWORD *)&v28 + 1));
          }
        }
        goto LABEL_32;
      }
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 48LL))(v23);
      v9 = v13;
      if ( v13 < 0 )
      {
        v14 = 227LL;
        goto LABEL_19;
      }
    }
    if ( v30 )
      (*(void (__fastcall **)(struct IPenWorkspaceLayoutItem *))(*(_QWORD *)v30 + 8LL))(v30);
    *a3 = v30;
    v9 = 0;
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xD7,
    (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
    (const char *)(unsigned int)v10);
LABEL_34:
  v19 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
LABEL_38:
  v20 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(struct IPenWorkspaceLayoutItem *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return (unsigned int)v9;
}
