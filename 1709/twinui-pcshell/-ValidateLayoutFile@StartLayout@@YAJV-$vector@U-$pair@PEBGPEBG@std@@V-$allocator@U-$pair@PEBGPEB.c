/*
 * XREFs of ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1801BF7E0
 * Callers:
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18008ADF4 (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18008AECC (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1800EFC38 (-ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1800EFD54 (-ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x18000506C (-_com_issue_error@@YAXJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x18008BC2C (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAXXZ @ 0x18008C1B8 (-_Tidy@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@AEAAXXZ.c)
 *     ??1_bstr_t@@QEAA@XZ @ 0x18008CA5C (--1_bstr_t@@QEAA@XZ.c)
 *     McTemplateU0z @ 0x1801BF534 (McTemplateU0z.c)
 *     ?AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x1801BF5B8 (-AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801E2A80 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall StartLayout::ValidateLayoutFile(
        unsigned __int64 *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  unsigned __int64 *v4; // r14
  LPVOID v5; // rdi
  HRESULT v6; // eax
  struct IXMLDOMSchemaCollection *v7; // r9
  int v8; // esi
  __int64 v9; // rdx
  LPVOID v10; // rcx
  unsigned __int64 i; // rbx
  int v12; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  int v17; // ebx
  __int64 v18; // rsi
  const wchar_t **v19; // rax
  const wchar_t **v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // [rsp+38h] [rbp-39h] BYREF
  LPVOID v29; // [rsp+40h] [rbp-31h]
  __int64 v30; // [rsp+48h] [rbp-29h]
  unsigned __int64 *v31; // [rsp+50h] [rbp-21h]
  VARIANTARG pvarg; // [rsp+58h] [rbp-19h] BYREF
  VARIANTARG v33[3]; // [rsp+78h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  __int64 v35; // [rsp+E8h] [rbp+77h] BYREF
  LPVOID ppv; // [rsp+F0h] [rbp+7Fh] BYREF

  v30 = -2LL;
  v4 = std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
         v33,
         a1);
  v31 = v4;
  v5 = 0LL;
  v29 = 0LL;
  ppv = 0LL;
  v6 = CoCreateInstance(
         &GUID_88d96a07_f192_11d4_a65f_0040963251e5,
         0LL,
         1u,
         &GUID_373984c8_b845_449b_91e7_45ac83036ade,
         &ppv);
  v8 = v6;
  if ( v6 >= 0 )
  {
    for ( i = *v4; i != v4[1]; i += 16LL )
    {
      v6 = StartLayout::AddSchemaToCollection(
             *(StartLayout **)i,
             *(const unsigned __int16 **)(i + 8),
             (const unsigned __int16 *)ppv,
             v7);
      v8 = v6;
      if ( v6 < 0 )
      {
        v9 = 45LL;
        goto LABEL_3;
      }
    }
    v5 = ppv;
    if ( ppv )
    {
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 8LL))(ppv);
      v5 = ppv;
    }
    v29 = v5;
    if ( v5 )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v5 + 16LL))(v5);
    }
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy(v4);
    v8 = 0;
  }
  else
  {
    v9 = 41LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)v6);
    v10 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v10 + 16LL))(v10);
    }
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy(v4);
  }
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x38,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)v8);
LABEL_23:
    if ( v5 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v5 + 16LL))(v5);
LABEL_48:
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy(a1);
    return (unsigned int)v8;
  }
  v35 = 0LL;
  v12 = (**a2)(a2, &GUID_2933bf95_7b36_11d2_b20e_00c04f983e60, &v35);
  v8 = v12;
  if ( v12 < 0 )
  {
    v13 = (unsigned int)v12;
    v14 = 60LL;
    goto LABEL_21;
  }
  pvarg.vt = 9;
  pvarg.llVal = (LONGLONG)v5;
  if ( v5 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v5 + 8LL))(v5);
  v33[0] = pvarg;
  v8 = (*(__int64 (__fastcall **)(__int64, VARIANTARG *))(*(_QWORD *)v35 + 624LL))(v35, v33);
  if ( VariantClear(&pvarg) < 0 )
    _com_issue_error();
  if ( v8 < 0 )
  {
    v13 = (unsigned int)v8;
    v14 = 61LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v14,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)v13);
    v15 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    goto LABEL_23;
  }
  v28 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v35 + 632LL))(v35, &v28);
  v17 = v16;
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x40,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)v16);
  if ( v17 == 1 )
  {
    ppv = 0LL;
    v18 = v28;
    v19 = (const wchar_t **)operator new(0x18uLL);
    v20 = v19;
    ppv = v19;
    if ( v19 )
    {
      v19[1] = 0LL;
      *((_DWORD *)v19 + 4) = 1;
      *v19 = 0LL;
    }
    else
    {
      v20 = 0LL;
    }
    ppv = v20;
    if ( !v20 )
      _com_issue_error();
    (*(void (__fastcall **)(__int64, const wchar_t **))(*(_QWORD *)v18 + 72LL))(v18, v20);
    if ( (Microsoft_Windows_ShellCommon_StartLayoutPopulationEnableBits & 4) != 0 )
      McTemplateU0z(v22, v21, *v20);
    _bstr_t::~_bstr_t((_bstr_t *)&ppv);
    v23 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v24 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    if ( v5 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v5 + 16LL))(v5);
    v8 = -2147023431;
    goto LABEL_48;
  }
  if ( v17 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)v17);
  v26 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  v27 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  if ( v5 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v5 + 16LL))(v5);
  std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy(a1);
  return (unsigned int)v17;
}
