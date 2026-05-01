/*
 * XREFs of ??$SetValue@N@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJNPEAPEAUIInspectable@@@ZN@Z @ 0x18006C9A8
 * Callers:
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180076730 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIPropertyValue@Foundation@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001B084 (--$As@UIPropertyValue@Foundation@Windows@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPt.c)
 *     ?GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIPropertyValueStatics@Foundation@4@@Z @ 0x18006C7D4 (-GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIPropertyV.c)
 *     ?SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyValue@Foundation@4@@Z @ 0x18006D520 (-SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9IDCompThumbnail@@$BHI@AA @ 0x1800A5630 (--_9IDCompThumbnail@@$BHI@AA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<double>(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        UAPViewWrapper *a3)
{
  Windows::Internal::ShellHelpers::PropertySetHelper *v5; // rcx
  int PropertyValueFactory; // eax
  int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  struct Windows::Foundation::IPropertyValueStatics *v12; // [rsp+20h] [rbp-30h] BYREF
  struct Windows::Foundation::IPropertyValue *v13[3]; // [rsp+28h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  UAPViewWrapper *v15; // [rsp+70h] [rbp+20h] BYREF

  v15 = a3;
  v13[1] = (struct Windows::Foundation::IPropertyValue *)-2LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  PropertyValueFactory = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropertyValueFactory(v5, &v12);
  v7 = PropertyValueFactory;
  if ( PropertyValueFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)PropertyValueFactory,
      (int)v12);
  }
  else
  {
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v15);
    v9 =  IDCompThumbnail::`vcall'{120,{flat}}(v12, v8, &v15);
    v7 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x52,
        (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
        (const char *)(unsigned int)v9,
        (int)v12);
    }
    else
    {
      v13[0] = 0LL;
      v10 = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::IPropertyValue>(&v15, (__int64 *)v13);
      v7 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x54,
          (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
          (const char *)(unsigned int)v10,
          (int)v12);
      }
      else
      {
        v7 = Windows::Internal::ShellHelpers::PropertySetHelper::SetPropVal(this, a2, v13[0]);
        if ( v7 >= 0 )
          v7 = 0;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v13);
    }
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v15);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return (unsigned int)v7;
}
