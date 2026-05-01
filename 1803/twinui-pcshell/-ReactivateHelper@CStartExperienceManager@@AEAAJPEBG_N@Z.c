/*
 * XREFs of ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z @ 0x180076D48
 * Callers:
 *     ?UnDimStart@CStartExperienceManager@@UEAAJXZ @ 0x180076AE0 (-UnDimStart@CStartExperienceManager@@UEAAJXZ.c)
 *     ?DimStart@CStartExperienceManager@@UEAAJXZ @ 0x180076B10 (-DimStart@CStartExperienceManager@@UEAAJXZ.c)
 *     ?OnIdleStateChanged@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@_N@Z @ 0x180173C10 (-OnIdleStateChanged@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@_N@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x180018630 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18006D2B0 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18007C598 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CStartExperienceManager::ReactivateHelper(
        CStartExperienceManager *this,
        const unsigned __int16 *a2,
        unsigned __int8 a3)
{
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rax
  int v12; // [rsp+28h] [rbp-29h]
  HSTRING v13; // [rsp+48h] [rbp-9h] BYREF
  HSTRING v14; // [rsp+50h] [rbp-1h] BYREF
  const WCHAR *v15[2]; // [rsp+58h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+17h] BYREF
  __int64 v17; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v15[1] = (const WCHAR *)-2LL;
  v15[0] = a2;
  v13 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v5 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v17,
         &v13);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x347,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v5,
      v12);
  }
  else
  {
    v14 = v13;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v14);
    v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
           (__int64)&hstringHeader,
           (const WCHAR **)off_18031DF50);
    v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(&v14, *(_QWORD *)(v7 + 24), v8, a3);
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x349,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v9,
        v12);
    }
    else
    {
      v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, v15);
      v6 = ExperienceManagerUtils::RaiseReactivatedEvent(
             *((ExperienceManagerUtils **)this + 41),
             (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 108),
             *((HSTRING *)this + 39),
             *((HSTRING *)this + 40),
             *(HSTRING *)(v10 + 24),
             v13);
      if ( v6 >= 0 )
        v6 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  return (unsigned int)v6;
}
