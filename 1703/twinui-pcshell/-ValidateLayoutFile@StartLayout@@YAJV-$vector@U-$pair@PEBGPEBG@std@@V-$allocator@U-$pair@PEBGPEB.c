/*
 * XREFs of ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x180173E70
 * Callers:
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1800888EC (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180088A38 (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1800CCDD8 (-ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1800CCEFC (-ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x180004D30 (-_com_issue_error@@YAXJ@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180081924 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?_Buy@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAA_N_K@Z @ 0x180089CB4 (-_Buy@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@AEAA_N_K@Z.c)
 *     ??$_Uninitialized_copy_al_unchecked1@PEAU?$pair@PEBGPEBG@std@@PEAU12@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@YAPEAU?$pair@PEBGPEBG@0@PEAU10@00AEAU?$_Wrap_alloc@V?$allocator@U?$pair@PEBGPEBG@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18008A600 (--$_Uninitialized_copy_al_unchecked1@PEAU-$pair@PEBGPEBG@std@@PEAU12@V-$allocator@U-$pair@PEBGPE.c)
 *     ??1_bstr_t@@QEAA@XZ @ 0x18008A634 (--1_bstr_t@@QEAA@XZ.c)
 *     ?LoadSchema@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAPEAUIXMLDOMSchemaCollection@@@Z @ 0x180173CAC (-LoadSchema@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@.c)
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x18017431C (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1801950F4 (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall StartLayout::ValidateLayoutFile(_OWORD **a1, __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // eax
  __int64 v8; // rcx
  unsigned __int16 *v9; // rbx
  int v10; // edi
  int v11; // eax
  __int64 v12; // rdi
  LPCWCH *v13; // rax
  LPCWCH *v14; // r15
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rdi
  CHAR *lpMultiByteStr; // rsi
  __int64 v19; // rcx
  void (*v20)(void); // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  const char *cbMultiByte; // [rsp+28h] [rbp-41h]
  const char *cbMultiBytea; // [rsp+28h] [rbp-41h]
  unsigned __int16 *v25; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v26[2]; // [rsp+48h] [rbp-21h] BYREF
  VARIANTARG pvarg; // [rsp+58h] [rbp-11h] BYREF
  VARIANTARG v28; // [rsp+70h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  __int64 v30; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v31; // [rsp+E8h] [rbp+7Fh] BYREF

  v26[1] = -2LL;
  v25 = 0LL;
  v26[0] = &pvarg;
  memset(&pvarg, 0, sizeof(pvarg));
  if ( std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Buy(&pvarg, a1[1] - *a1) )
    pvarg.llVal = (LONGLONG)std::_Uninitialized_copy_al_unchecked1<std::pair<unsigned short const *,unsigned short const *> *,std::pair<unsigned short const *,unsigned short const *> *,std::allocator<std::pair<unsigned short const *,unsigned short const *>>>(
                              *a1,
                              a1[1],
                              *(_OWORD **)&pvarg.vt);
  v4 = StartLayout::LoadSchema((__int64)&pvarg, &v25);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1B9,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)v4);
LABEL_5:
    if ( v25 )
      (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v25 + 16LL))(v25);
    if ( *a1 )
    {
      std::_Deallocate((char *)*a1, a1[2] - *a1, 0x10uLL);
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    return v5;
  }
  v30 = 0LL;
  v7 = (**a2)(a2, &GUID_2933bf95_7b36_11d2_b20e_00c04f983e60, &v30);
  v5 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1BD,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)v7);
    v8 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    goto LABEL_5;
  }
  pvarg.vt = 9;
  v9 = v25;
  pvarg.llVal = (LONGLONG)v25;
  if ( v25 )
    (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v25 + 8LL))(v25);
  v28 = pvarg;
  v10 = (*(__int64 (__fastcall **)(__int64, VARIANTARG *))(*(_QWORD *)v30 + 624LL))(v30, &v28);
  if ( VariantClear(&pvarg) < 0 )
    _com_issue_error();
  if ( v10 >= 0 )
  {
    v31 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 632LL))(v30, &v31);
    v10 = v11;
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1C1,
        (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
        (const char *)(unsigned int)v11);
    if ( v10 == 1 )
    {
      v26[0] = 0LL;
      v12 = v31;
      v13 = (LPCWCH *)operator new(0x18uLL);
      v14 = v13;
      v26[0] = v13;
      if ( v13 )
      {
        v13[1] = 0LL;
        *((_DWORD *)v13 + 4) = 1;
        *v13 = 0LL;
      }
      else
      {
        v14 = 0LL;
      }
      v26[0] = v14;
      if ( !v14 )
        _com_issue_error();
      v15 = (*(__int64 (__fastcall **)(__int64, LPCWCH *))(*(_QWORD *)v12 + 72LL))(v12, v14);
      v10 = v15;
      if ( v15 >= 0 )
      {
        v16 = -1LL;
        do
          ++v16;
        while ( (*v14)[v16] );
        v17 = 2 * v16 + 2;
        lpMultiByteStr = (CHAR *)operator new[](v17);
        WideCharToMultiByte(0, 0x400u, *v14, -1, lpMultiByteStr, v17, 0LL, 0LL);
        wil::details::in1diag3::Log_Win32Msg(
          retaddr,
          (void *)0x1CC,
          (unsigned int)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
          (const char *)0x5B9,
          (unsigned int)"Error parsing layout file",
          cbMultiByte);
        wil::details::in1diag3::Log_Win32Msg(
          retaddr,
          (void *)0x1CD,
          (unsigned int)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
          (const char *)0x5B9,
          (unsigned int)lpMultiByteStr,
          cbMultiBytea);
        v10 = wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)0x1CE,
                (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
                (const char *)0x5B9);
        _bstr_t::~_bstr_t((_bstr_t *)v26);
        v19 = v31;
        if ( !v31 )
          goto LABEL_38;
        v31 = 0LL;
        v20 = *(void (**)(void))(*(_QWORD *)v19 + 16LL);
        goto LABEL_37;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1C6,
        (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
        (const char *)(unsigned int)v15);
      _bstr_t::~_bstr_t((_bstr_t *)v26);
    }
    else if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D0,
        (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
        (const char *)(unsigned int)v10);
    }
    v21 = v31;
    if ( !v31 )
      goto LABEL_38;
    v31 = 0LL;
    v20 = *(void (**)(void))(*(_QWORD *)v21 + 16LL);
LABEL_37:
    v20();
    goto LABEL_38;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x1BE,
    (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
    (const char *)(unsigned int)v10);
LABEL_38:
  v22 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  if ( v9 )
    (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( *a1 )
  {
    std::_Deallocate((char *)*a1, a1[2] - *a1, 0x10uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return (unsigned int)v10;
}
