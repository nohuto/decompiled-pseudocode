/*
 * XREFs of ??$SetValue@M@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJMPEAPEAUIInspectable@@@ZM@Z @ 0x18011CEA0
 * Callers:
 *     ?SetSizeHintHeight@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@M@Z @ 0x180121694 (-SetSizeHintHeight@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Wi.c)
 *     ?SetSizeHintWidth@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@M@Z @ 0x180121734 (-SetSizeHintWidth@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Win.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIPropertyValue@Foundation@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001B084 (--$As@UIPropertyValue@Foundation@Windows@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPt.c)
 *     ?GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIPropertyValueStatics@Foundation@4@@Z @ 0x18006C7D4 (-GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIPropertyV.c)
 *     ?SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyValue@Foundation@4@@Z @ 0x18006D520 (-SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9ISwitchItemController@@$BHA@AA @ 0x1800AE850 (--_9ISwitchItemController@@$BHA@AA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<float>(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        UAPViewWrapper *a3)
{
  Windows::Internal::ShellHelpers::PropertySetHelper *v5; // rcx
  int PropertyValueFactory; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  struct Windows::Foundation::IPropertyValueStatics *v11; // [rsp+20h] [rbp-30h] BYREF
  struct Windows::Foundation::IPropertyValue *v12[3]; // [rsp+28h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  UAPViewWrapper *v14; // [rsp+70h] [rbp+20h] BYREF

  v14 = a3;
  v12[1] = (struct Windows::Foundation::IPropertyValue *)-2LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  PropertyValueFactory = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropertyValueFactory(v5, &v11);
  v7 = PropertyValueFactory;
  if ( PropertyValueFactory >= 0 )
  {
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v14);
    v8 =  ISwitchItemController::`vcall'{112,{flat}}((__int64)v11);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v12[0] = 0LL;
      v9 = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::IPropertyValue>(&v14, (__int64 *)v12);
      v7 = v9;
      if ( v9 >= 0 )
      {
        v7 = Windows::Internal::ShellHelpers::PropertySetHelper::SetPropVal(this, a2, v12[0]);
        if ( v7 >= 0 )
          v7 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x54,
          (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
          (const char *)(unsigned int)v9);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v12);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x52,
        (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v14);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)PropertyValueFactory);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return (unsigned int)v7;
}
