/*
 * XREFs of ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x180088D14
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180086780 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180086CC0 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 * Callees:
 *     ??1_bstr_t@@QEAA@XZ @ 0x18008A634 (--1_bstr_t@@QEAA@XZ.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x18008A69C (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ?GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x18017457C (-GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV-$shared_ptr@V-$ba.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_BOOL8 __fastcall TaskbarLayoutPolicyManager::IsOverrideLayout(const unsigned __int16 **this, struct IXMLDOMNode *a2)
{
  bool v3; // bl
  const wchar_t *v4; // rcx
  unsigned __int64 v5; // r8
  __int64 *v6; // rax
  __int64 v7; // r9
  const wchar_t *v8; // rdx
  int v9; // eax
  BOOL v10; // esi
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rcx
  _QWORD v15[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v16; // [rsp+30h] [rbp-10h] BYREF
  __int64 v17; // [rsp+68h] [rbp+28h] BYREF
  char v18; // [rsp+70h] [rbp+30h] BYREF
  __int64 v19; // [rsp+78h] [rbp+38h] BYREF

  v15[1] = -2LL;
  v17 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IXMLDOMNode *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_2933bf86_7b36_11d2_b20e_00c04f983e60,
         &v17) < 0 )
  {
LABEL_25:
    v10 = 0;
    goto LABEL_26;
  }
  v16 = 0LL;
  _bstr_t::_bstr_t((_bstr_t *)&v18, this[14]);
  v3 = (int)StartLayout::GetStringAttributeValue(v17, &v18, &v16) >= 0;
  _bstr_t::~_bstr_t((_bstr_t *)&v18);
  if ( !v3 )
  {
    if ( *((_QWORD *)&v16 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v12 = *((_QWORD *)&v16 + 1);
        (***((void (__fastcall ****)(_QWORD))&v16 + 1))(*((_QWORD *)&v16 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v16 + 1) + 8LL))(*((_QWORD *)&v16 + 1));
      }
    }
    goto LABEL_25;
  }
  v4 = (const wchar_t *)v16;
  if ( *(_QWORD *)(v16 + 24) >= 8uLL )
    v4 = *(const wchar_t **)v16;
  v19 = 7LL;
  v5 = *(_QWORD *)(v16 + 16);
  v15[0] = v5;
  v6 = &v19;
  if ( v5 <= 7 )
    v6 = v15;
  v7 = *v6;
  v8 = L"Replace";
  if ( *v6 )
  {
    while ( *v4 == *v8 )
    {
      ++v4;
      ++v8;
      if ( !--v7 )
        goto LABEL_12;
    }
    v9 = *v4 < *v8 ? -1 : 1;
  }
  else
  {
LABEL_12:
    v9 = 0;
  }
  if ( !v9 )
  {
    if ( v5 >= 7 )
      v9 = v5 > 7;
    else
      v9 = -1;
  }
  v10 = v9 == 0;
  if ( *((_QWORD *)&v16 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v11 = *((_QWORD *)&v16 + 1);
      (***((void (__fastcall ****)(_QWORD))&v16 + 1))(*((_QWORD *)&v16 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v16 + 1) + 8LL))(*((_QWORD *)&v16 + 1));
    }
  }
LABEL_26:
  v13 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v10;
}
