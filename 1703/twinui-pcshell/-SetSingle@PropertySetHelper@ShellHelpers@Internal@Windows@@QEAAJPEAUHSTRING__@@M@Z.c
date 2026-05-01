/*
 * XREFs of ?SetSingle@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@M@Z @ 0x18003C398
 * Callers:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_NW4ApplicationViewMode@ViewManagement@UI@Windows@@MM_KPEAUIPropertySet@Collections@Foundation@7@PEAUIAsyncCallback@@@Z @ 0x18003F7A8 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_N.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyValue@Foundation@4@@Z @ 0x18003BFF8 (-_SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyV.c)
 *     ??_9IPropertyValueStatics@Foundation@Windows@@$BHA@AA @ 0x1800461EC (--_9IPropertyValueStatics@Foundation@Windows@@$BHA@AA.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::SetSingle(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        float a3)
{
  HRESULT v5; // eax
  int ActivationFactory; // eax
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **); // rcx
  int v12; // eax
  struct Windows::Foundation::IPropertyValue *v13; // rcx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **); // rcx
  __int64 v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-60h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **); // [rsp+28h] [rbp-58h] BYREF
  struct Windows::Foundation::IPropertyValue *v19[2]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-40h] BYREF
  HSTRING string; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v19[1] = (struct Windows::Foundation::IPropertyValue *)-2LL;
  v17 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v17);
  v8 = ActivationFactory;
  string = 0LL;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x49,
      (__int64)"internal\\shell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)ActivationFactory);
LABEL_5:
    v9 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    return (unsigned int)v8;
  }
  v18 = 0LL;
  v10 =  Windows::Foundation::IPropertyValueStatics::`vcall'{112,{flat}}(v17, v7, &v18);
  v8 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4B,
      (__int64)"internal\\shell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v10);
LABEL_9:
    v11 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **)))(*v11)[2])(v11);
    }
    goto LABEL_5;
  }
  v19[0] = 0LL;
  v12 = (**v18)(v18, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, v19);
  v8 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4D,
      (__int64)"internal\\shell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v12);
    v13 = v19[0];
    goto LABEL_13;
  }
  v8 = Windows::Internal::ShellHelpers::PropertySetHelper::_SetPropVal(this, a2, v19[0]);
  v13 = v19[0];
  if ( v8 < 0 )
  {
LABEL_13:
    if ( v13 )
    {
      v19[0] = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    goto LABEL_9;
  }
  if ( v19[0] )
  {
    v19[0] = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **)))(*v14)[2])(v14);
  }
  v15 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return 0;
}
