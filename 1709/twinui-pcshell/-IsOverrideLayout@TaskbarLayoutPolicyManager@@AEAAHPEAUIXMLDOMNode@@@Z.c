/*
 * XREFs of ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x18008B130
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180088B30 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180089198 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x18008BCD0 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ??1_bstr_t@@QEAA@XZ @ 0x18008CA5C (--1_bstr_t@@QEAA@XZ.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x18008CAC4 (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ?GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x1801BFDE0 (-GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV-$shared_ptr@V-$ba.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_BOOL8 __fastcall TaskbarLayoutPolicyManager::IsOverrideLayout(const unsigned __int16 **this, struct IXMLDOMNode *a2)
{
  int StringAttributeValue; // ebx
  BOOL v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int128 v9; // [rsp+28h] [rbp-18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+18h] BYREF
  char v11; // [rsp+60h] [rbp+20h] BYREF

  v10 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IXMLDOMNode *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_2933bf86_7b36_11d2_b20e_00c04f983e60,
         &v10) < 0 )
  {
LABEL_11:
    v4 = 0;
    goto LABEL_12;
  }
  v9 = 0LL;
  _bstr_t::_bstr_t((_bstr_t *)&v11, this[16]);
  StringAttributeValue = StartLayout::GetStringAttributeValue(v10, &v11, &v9);
  _bstr_t::~_bstr_t((_bstr_t *)&v11);
  if ( StringAttributeValue < 0 )
  {
    if ( *((_QWORD *)&v9 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v6 = *((_QWORD *)&v9 + 1);
        (***((void (__fastcall ****)(_QWORD))&v9 + 1))(*((_QWORD *)&v9 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v9 + 1) + 8LL))(*((_QWORD *)&v9 + 1));
      }
    }
    goto LABEL_11;
  }
  v4 = std::wstring::compare(v9, L"Replace") == 0;
  if ( *((_QWORD *)&v9 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v5 = *((_QWORD *)&v9 + 1);
      (***((void (__fastcall ****)(_QWORD))&v9 + 1))(*((_QWORD *)&v9 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v9 + 1) + 8LL))(*((_QWORD *)&v9 + 1));
    }
  }
LABEL_12:
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v4;
}
