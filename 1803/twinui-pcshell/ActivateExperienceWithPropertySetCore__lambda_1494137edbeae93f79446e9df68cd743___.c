/*
 * XREFs of ActivateExperienceWithPropertySetCore__lambda_1494137edbeae93f79446e9df68cd743___ @ 0x18007F74C
 * Callers:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18007FCC0 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Release@CImmersiveWindowFactory@@UEAAKXZ @ 0x180027320 (-Release@CImmersiveWindowFactory@@UEAAKXZ.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18006D2B0 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18007C598 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     _lambda_1494137edbeae93f79446e9df68cd743_::operator() @ 0x18007F984 (_lambda_1494137edbeae93f79446e9df68cd743_--operator().c)
 *     ?CoCreateActivationManagerAndSetProperties@@YAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIApplicationActivationManagerPriv@@@Z @ 0x18007FA44 (-CoCreateActivationManagerAndSetProperties@@YAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIAppl.c)
 *     ?InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUIBuffer@Streams@Storage@4@@Z @ 0x18007FB94 (-InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAU.c)
 *     ??$Make@VCImmersiveWindowFactory@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveWindowFactory@@@12@XZ @ 0x18007FC70 (--$Make@VCImmersiveWindowFactory@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCImmersiveWindowFact.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall ActivateExperienceWithPropertySetCore__lambda_1494137edbeae93f79446e9df68cd743_(
        unsigned __int16 *a1,
        __int64 a2,
        char a3,
        __int64 a4)
{
  struct Windows::Foundation::Collections::IPropertySet *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // eax
  CImmersiveWindowFactory *v13; // rdi
  int inserted; // eax
  int v15; // eax
  int v16; // edx
  int v17; // r8d
  unsigned int v18; // edx
  __int64 v19; // r9
  int v20; // eax
  unsigned int v21; // esi
  __int64 (__fastcall *v22)(CImmersiveWindowFactory *); // rax
  struct Windows::Foundation::Collections::IPropertySet *v24; // [rsp+20h] [rbp-60h] BYREF
  struct IApplicationActivationManagerPriv *v25; // [rsp+28h] [rbp-58h] BYREF
  struct Windows::Storage::Streams::IBuffer *v26; // [rsp+30h] [rbp-50h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v27; // [rsp+38h] [rbp-48h] BYREF
  CImmersiveWindowFactory *v28[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  __int64 v30; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v28[1] = (CImmersiveWindowFactory *)-2LL;
  v24 = 0LL;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v24);
  v7 = v24;
  if ( !v24 )
  {
    v30 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v8 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v30,
           (__int64 *)&v24);
    v9 = v8;
    v30 = 0LL;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x67,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
        (const char *)(unsigned int)v8,
        (int)v24);
      goto LABEL_27;
    }
    v7 = v24;
  }
  v27 = v7;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v27);
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          (__int64)&hstringHeader,
          (const WCHAR **)&off_180319C78);
  v12 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
          &v27,
          *(_QWORD *)(v10 + 24),
          v11,
          a3 & 1);
  v9 = v12;
  v30 = 0LL;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v12,
      (int)v24);
  }
  else
  {
    Microsoft::WRL::Details::Make<CImmersiveWindowFactory,>(v28);
    v13 = v28[0];
    if ( v28[0] )
    {
      *((_BYTE *)v28[0] + 105) = a3 & 1;
      v26 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v26);
      inserted = InsertExperienceIdAndSerialize(v24, a1, &v26);
      v9 = inserted;
      if ( inserted < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x77,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
          (const char *)(unsigned int)inserted,
          (int)v24);
      }
      else
      {
        v25 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
        v15 = CoCreateActivationManagerAndSetProperties(v26, &v25);
        v9 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7A,
            (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
            (const char *)(unsigned int)v15,
            (int)v24);
        }
        else
        {
          v16 = ((a3 & 4) << 25) | 0x11000006;
          if ( (a3 & 0x10) == 0 )
            v16 = ((a3 & 4) << 25) | 0x1000006;
          v17 = v16 | 0x40000000;
          if ( (a3 & 0x20) == 0 )
            v17 = v16;
          v18 = v17 | 0x400000;
          if ( (a3 & 0x40) == 0 )
            v18 = v17;
          v19 = v18 & 0xFFFFFFFB;
          if ( (a3 & 8) == 0 )
            v19 = v18;
          v20 = lambda_1494137edbeae93f79446e9df68cd743_::operator()(a4, v25, v13, v19);
          v21 = v20;
          v9 = -2144927150;
          if ( v20 != -2144927150 )
          {
            v9 = -2144927149;
            if ( v20 != -2144927149 )
            {
              if ( v20 < 0 )
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xA3,
                  (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
                  (const char *)(unsigned int)v20,
                  (int)v24);
              v9 = v21;
            }
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v26);
    }
    else
    {
      v9 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x73,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
        (const char *)0x8007000ELL,
        (int)v24);
    }
    if ( v13 )
    {
      v28[0] = 0LL;
      v22 = *(__int64 (__fastcall **)(CImmersiveWindowFactory *))(*(_QWORD *)v13 + 16LL);
      if ( v22 == CImmersiveWindowFactory::Release )
        CImmersiveWindowFactory::Release(v13);
      else
        v22(v13);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
LABEL_27:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
  return v9;
}
