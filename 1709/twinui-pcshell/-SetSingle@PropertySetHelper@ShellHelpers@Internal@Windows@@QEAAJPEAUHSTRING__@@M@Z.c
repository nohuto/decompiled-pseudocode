/*
 * XREFs of ?SetSingle@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@M@Z @ 0x18003D4E4
 * Callers:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_NW4ApplicationViewMode@ViewManagement@UI@Windows@@MM_KPEAUIPropertySet@Collections@Foundation@7@PEAUIAsyncCallback@@@Z @ 0x180041168 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_N.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIPropertyValueStatics@Foundation@4@@Z @ 0x18003D1E8 (-_GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIProperty.c)
 *     ?_SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyValue@Foundation@4@@Z @ 0x18003D258 (-_SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyV.c)
 *     ??_9IPropertyValueStatics@Foundation@Windows@@$BHA@AA @ 0x18004709C (--_9IPropertyValueStatics@Foundation@Windows@@$BHA@AA.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::SetSingle(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        float a3)
{
  int PropertyValueFactory; // eax
  __int64 v6; // rdx
  int v7; // ebx
  struct Windows::Foundation::IPropertyValueStatics *v8; // rcx
  int v9; // eax
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **); // rcx
  int v11; // eax
  struct Windows::Foundation::IPropertyValue *v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **); // rcx
  struct Windows::Foundation::IPropertyValueStatics *v14; // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **); // [rsp+20h] [rbp-30h] BYREF
  struct Windows::Foundation::IPropertyValue *v17[3]; // [rsp+28h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct Windows::Foundation::IPropertyValueStatics *v19; // [rsp+88h] [rbp+38h] BYREF

  v17[1] = (struct Windows::Foundation::IPropertyValue *)-2LL;
  v19 = 0LL;
  PropertyValueFactory = Windows::Internal::ShellHelpers::PropertySetHelper::_GetPropertyValueFactory(this, &v19);
  v7 = PropertyValueFactory;
  if ( PropertyValueFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x50,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)PropertyValueFactory);
LABEL_3:
    v8 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValueStatics *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return (unsigned int)v7;
  }
  v16 = 0LL;
  v9 =  Windows::Foundation::IPropertyValueStatics::`vcall'{112,{flat}}(v19, v6, &v16);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x52,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v9);
LABEL_7:
    v10 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **)))(*v10)[2])(v10);
    }
    goto LABEL_3;
  }
  v17[0] = 0LL;
  v11 = (**v16)(v16, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, v17);
  v7 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x54,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v11);
    v12 = v17[0];
    goto LABEL_11;
  }
  v7 = Windows::Internal::ShellHelpers::PropertySetHelper::_SetPropVal(this, a2, v17[0]);
  v12 = v17[0];
  if ( v7 < 0 )
  {
LABEL_11:
    if ( v12 )
    {
      v17[0] = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    goto LABEL_7;
  }
  if ( v17[0] )
  {
    v17[0] = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **)))(*v13)[2])(v13);
  }
  v14 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValueStatics *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return 0;
}
