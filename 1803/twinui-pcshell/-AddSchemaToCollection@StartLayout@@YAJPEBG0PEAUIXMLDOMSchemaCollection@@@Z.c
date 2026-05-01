/*
 * XREFs of ?AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x1802FBC34
 * Callers:
 *     ?LoadSchema@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAPEAUIXMLDOMSchemaCollection@@@Z @ 0x1802FBE70 (-LoadSchema@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x180100340 (-_com_issue_error@@YAXJ@Z.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x180145920 (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x180149858 (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ??0_variant_t@@QEAA@PEAUIDispatch@@_N@Z @ 0x1802FBC00 (--0_variant_t@@QEAA@PEAUIDispatch@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall StartLayout::AddSchemaToCollection(
        StartLayout *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        struct IXMLDOMSchemaCollection *a4)
{
  HRESULT v7; // eax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  const struct std::nothrow_t *v11; // rdx
  LPVOID v12; // rbx
  int v13; // eax
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  _variant_t *v16; // rax
  _QWORD *v17; // rdx
  const struct std::nothrow_t *v18; // rdx
  HRESULT v19; // eax
  LPVOID ppv; // [rsp+38h] [rbp-29h] BYREF
  struct IDispatch *v22; // [rsp+40h] [rbp-21h] BYREF
  _bstr_t::Data_t *v23; // [rsp+48h] [rbp-19h] BYREF
  _bstr_t::Data_t *v24[3]; // [rsp+50h] [rbp-11h] BYREF
  __int128 v25; // [rsp+68h] [rbp+7h] BYREF
  __int64 v26; // [rsp+78h] [rbp+17h]
  VARIANTARG pvarg; // [rsp+88h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  __int16 v29; // [rsp+E0h] [rbp+7Fh] BYREF

  v24[1] = (_bstr_t::Data_t *)-2LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v7 = CoCreateInstance(
         &GUID_88d96a05_f192_11d4_a65f_0040963251e5,
         0LL,
         1u,
         &GUID_2933bf81_7b36_11d2_b20e_00c04f983e60,
         &ppv);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 504LL))(ppv, 0LL);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 24LL;
      goto LABEL_5;
    }
    _bstr_t::_bstr_t((_bstr_t *)&v23, a2);
    if ( v23 )
      v10 = *(_QWORD *)v23;
    else
      v10 = 0LL;
    (*(void (__fastcall **)(LPVOID, __int64, __int16 *))(*(_QWORD *)ppv + 520LL))(ppv, v10, &v29);
    if ( v29 != -1 )
    {
      v8 = -2147467259;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D,
        (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
        (const char *)0x80004005LL);
LABEL_22:
      _bstr_t::_Free(&v23, v11);
      goto LABEL_23;
    }
    v22 = 0LL;
    v12 = ppv;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    v13 = (*(__int64 (__fastcall **)(LPVOID, struct IDispatch **))(*(_QWORD *)v12 + 360LL))(v12, &v22);
    v8 = v13;
    if ( v13 >= 0 )
    {
      v16 = _variant_t::_variant_t((_variant_t *)&pvarg, v22);
      v25 = *(_OWORD *)v16;
      v26 = *((_QWORD *)v16 + 2);
      v17 = *(_QWORD **)_bstr_t::_bstr_t((_bstr_t *)v24, (const unsigned __int16 *)this);
      if ( v17 )
        v17 = (_QWORD *)*v17;
      v8 = (*(__int64 (__fastcall **)(const unsigned __int16 *, _QWORD *, __int128 *))(*(_QWORD *)a3 + 56LL))(
             a3,
             v17,
             &v25);
      _bstr_t::_Free(v24, v18);
      v19 = VariantClear(&pvarg);
      if ( v19 < 0 )
        _com_issue_error((char *)(unsigned int)v19);
      if ( v8 >= 0 )
      {
        v8 = 0;
        goto LABEL_21;
      }
      v14 = (unsigned int)v8;
      v15 = 33LL;
    }
    else
    {
      v14 = (unsigned int)v13;
      v15 = 32LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)v14);
LABEL_21:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    goto LABEL_22;
  }
  v9 = 23LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
    (const char *)(unsigned int)v7);
LABEL_23:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)v8;
}
