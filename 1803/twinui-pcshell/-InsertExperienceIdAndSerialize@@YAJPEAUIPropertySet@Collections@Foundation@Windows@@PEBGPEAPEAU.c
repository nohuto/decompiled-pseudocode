/*
 * XREFs of ?InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUIBuffer@Streams@Storage@4@@Z @ 0x18007FB94
 * Callers:
 *     ActivateExperienceWithPropertySetCore__lambda_1494137edbeae93f79446e9df68cd743___ @ 0x18007F74C (ActivateExperienceWithPropertySetCore__lambda_1494137edbeae93f79446e9df68cd743___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x18006CB74 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall InsertExperienceIdAndSerialize(
        struct Windows::Foundation::Collections::IPropertySet *a1,
        const unsigned __int16 *a2,
        struct Windows::Storage::Streams::IBuffer **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // [rsp+28h] [rbp-29h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v15; // [rsp+30h] [rbp-21h] BYREF
  const WCHAR *v16[2]; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v17[32]; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v18[32]; // [rsp+68h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v16[1] = (const WCHAR *)-2LL;
  v16[0] = a2;
  *a3 = 0LL;
  v15 = a1;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v15);
  if ( a2
    && (v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v17, v16),
        v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v18, (const WCHAR **)&off_18034C758),
        v13 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v15,
                *(HSTRING *)(v11 + 24),
                v12,
                *(_QWORD *)(v10 + 24)),
        v7 = v13,
        v13 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v13,
      v14);
  }
  else
  {
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    v6 = RoCreatePropertySetSerializer(&v14);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
        (const char *)(unsigned int)v6,
        v14);
    }
    else
    {
      v16[0] = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet *, struct Windows::Storage::Streams::IBuffer **))(*(_QWORD *)v14 + 48LL))(
             v14,
             a1,
             a3);
      v7 = v8;
      if ( v8 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4D,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
          (const char *)(unsigned int)v8,
          v14);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v16);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  return v7;
}
