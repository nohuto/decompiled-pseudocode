/*
 * XREFs of ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x18008E2E4
 * Callers:
 *     ?ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z @ 0x18008DF88 (-ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1_bstr_t@@QEAA@XZ @ 0x18008CA5C (--1_bstr_t@@QEAA@XZ.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x18008CAC4 (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ?GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x1801BFDE0 (-GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV-$shared_ptr@V-$ba.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall TaskbarLayoutParser::ParsePinnedAppNode(
        const unsigned __int16 **this,
        struct IXMLDOMNode *a2,
        struct ITaskbarLayoutItem **a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  char v8; // si
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  char v13; // bl
  int v14; // eax
  __int64 v15; // rdx
  int StringAttributeValue; // ebx
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct ITaskbarLayoutItem *v21; // rcx
  struct ITaskbarLayoutItem *v23; // [rsp+28h] [rbp-58h] BYREF
  __int64 v24; // [rsp+30h] [rbp-50h] BYREF
  __int128 v25; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v26[8]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v27[8]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v28[8]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v29; // [rsp+60h] [rbp-20h] BYREF
  __int64 v30; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  __int64 v32; // [rsp+D8h] [rbp+58h] BYREF

  v30 = -2LL;
  *a3 = 0LL;
  v23 = 0LL;
  v6 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( !v6 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4B,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutitem.cpp",
      (const char *)0x8007000ELL);
LABEL_42:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xC8,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_43;
  }
  *(_QWORD *)v6 = &Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  v8 = 1;
  v6[3] = 1;
  *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<ITaskbarLayoutItemInternal,ITaskbarLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v7 = &TaskbarLayoutItem::`vftable';
  *((_QWORD *)v7 + 2) = 0LL;
  *((_QWORD *)v7 + 3) = 0LL;
  *((_QWORD *)v7 + 4) = 0LL;
  *((_QWORD *)v7 + 5) = 0LL;
  *((_QWORD *)v7 + 6) = 0LL;
  *((_QWORD *)v7 + 7) = 0LL;
  v7[16] = 0;
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
  v9 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, struct ITaskbarLayoutItem **))v7)(
         v7,
         &GUID_8a2a3037_d907_4af5_996a_0262e73bbe8f,
         &v23);
  v10 = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutitem.cpp",
      (const char *)(unsigned int)v9);
  if ( v7 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v10 < 0 )
    goto LABEL_42;
  v24 = 0LL;
  v11 = (**(__int64 (__fastcall ***)(struct ITaskbarLayoutItem *, GUID *, __int64 *))v23)(
          v23,
          &GUID_983d5c32_6534_4fa1_8383_a8430e19de76,
          &v24);
  v10 = v11;
  if ( v11 >= 0 )
  {
    v32 = 0LL;
    v12 = ((__int64 (__fastcall *)(struct IXMLDOMNode *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
            a2,
            &GUID_2933bf86_7b36_11d2_b20e_00c04f983e60,
            &v32);
    v10 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xCE,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
        (const char *)(unsigned int)v12);
LABEL_37:
      v19 = v32;
      if ( v32 )
      {
        v32 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      goto LABEL_39;
    }
    v25 = 0LL;
    v29 = 0LL;
    _bstr_t::_bstr_t((_bstr_t *)v27, this[2]);
    v13 = 1;
    if ( (int)StartLayout::GetStringAttributeValue(v32, v27, &v25) < 0 )
    {
      _bstr_t::_bstr_t((_bstr_t *)v26, this[3]);
      v13 = 3;
      if ( (int)StartLayout::GetStringAttributeValue(v32, v26, &v25) < 0 )
        v8 = 0;
    }
    if ( (v13 & 2) != 0 )
      _bstr_t::~_bstr_t((_bstr_t *)v26);
    _bstr_t::~_bstr_t((_bstr_t *)v27);
    if ( v8 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 48LL))(v24);
      v10 = v14;
      if ( v14 < 0 )
      {
        v15 = 212LL;
LABEL_24:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v15,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
          (const char *)(unsigned int)v14);
        goto LABEL_29;
      }
    }
    else
    {
      _bstr_t::_bstr_t((_bstr_t *)v28, this[4]);
      StringAttributeValue = StartLayout::GetStringAttributeValue(v32, v28, &v29);
      _bstr_t::~_bstr_t((_bstr_t *)v28);
      if ( StringAttributeValue < 0 )
      {
        v10 = -2147467259;
LABEL_29:
        if ( *((_QWORD *)&v29 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            v17 = *((_QWORD *)&v29 + 1);
            (***((void (__fastcall ****)(_QWORD))&v29 + 1))(*((_QWORD *)&v29 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 12), 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v29 + 1) + 8LL))(*((_QWORD *)&v29 + 1));
          }
        }
        if ( *((_QWORD *)&v25 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v25 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            v18 = *((_QWORD *)&v25 + 1);
            (***((void (__fastcall ****)(_QWORD))&v25 + 1))(*((_QWORD *)&v25 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 12), 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v25 + 1) + 8LL))(*((_QWORD *)&v25 + 1));
          }
        }
        goto LABEL_37;
      }
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 56LL))(v24);
      v10 = v14;
      if ( v14 < 0 )
      {
        v15 = 216LL;
        goto LABEL_24;
      }
    }
    if ( v23 )
      (*(void (__fastcall **)(struct ITaskbarLayoutItem *))(*(_QWORD *)v23 + 8LL))(v23);
    *a3 = v23;
    v10 = 0;
    goto LABEL_29;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xCB,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
    (const char *)(unsigned int)v11);
LABEL_39:
  v20 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
LABEL_43:
  v21 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(struct ITaskbarLayoutItem *))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return (unsigned int)v10;
}
