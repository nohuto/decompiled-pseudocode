/*
 * XREFs of ActivateExperienceWithPropertySetCore__lambda_7bec014655fe4d535cb5642aa7e0e9b0___ @ 0x18018F5E8
 * Callers:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18018EF10 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z @ 0x18003C0D8 (-SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180043D94 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CoCreateActivationManagerAndSetProperties@@YAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIApplicationActivationManagerPriv@@@Z @ 0x18018ECC4 (-CoCreateActivationManagerAndSetProperties@@YAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIAppl.c)
 *     ?InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUIBuffer@Streams@Storage@4@@Z @ 0x18018EDA0 (-InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAU.c)
 *     ??$Make@VCImmersiveWindowFactory@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveWindowFactory@@@12@XZ @ 0x18018FB9C (--$Make@VCImmersiveWindowFactory@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCImmersiveWindowFactory.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ActivateExperienceWithPropertySetCore__lambda_7bec014655fe4d535cb5642aa7e0e9b0_(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  HRESULT v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  __int64 v12; // r14
  int inserted; // eax
  int v14; // eax
  struct IApplicationActivationManagerPriv *v15; // r15
  int v16; // edx
  unsigned int v17; // esi
  char *v18; // rdi
  HSTRING_HEADER *v19; // rbx
  HSTRING_HEADER *v20; // rax
  int v21; // eax
  int v22; // edi
  struct Windows::Storage::Streams::IBuffer *v23; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v24; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v25; // rcx
  struct Windows::Storage::Streams::IBuffer *v27; // [rsp+48h] [rbp-59h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v28; // [rsp+50h] [rbp-51h] BYREF
  struct IApplicationActivationManagerPriv *v29; // [rsp+58h] [rbp-49h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v30; // [rsp+60h] [rbp-41h] BYREF
  __int64 v31; // [rsp+68h] [rbp-39h] BYREF
  char v32; // [rsp+70h] [rbp-31h] BYREF
  __int64 v33; // [rsp+78h] [rbp-29h]
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-21h] BYREF
  HSTRING string; // [rsp+98h] [rbp-9h] BYREF
  HSTRING_HEADER v36; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v37; // [rsp+B8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v33 = -2LL;
  v28 = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
  if ( v7 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
  v8 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         (__int64)string,
         (__int64 *)&v28);
  v9 = v8;
  string = 0LL;
  if ( v8 >= 0 )
  {
    v30 = v28;
    if ( v28 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v28 + 8LL))(v28);
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_1801BD268);
    v11 = Windows::Internal::ShellHelpers::PropertySetHelper::SetBoolean(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
            (HSTRING)v10[1].Reserved.Reserved1,
            a3 & 1);
    v9 = v11;
    string = 0LL;
    if ( v11 >= 0 )
    {
      Microsoft::WRL::Details::Make<CImmersiveWindowFactory>(&v31);
      v12 = v31;
      if ( v31 )
      {
        *(_BYTE *)(v31 + 73) = a3 & 1;
        v27 = 0LL;
        inserted = InsertExperienceIdAndSerialize(v28, a1, &v27);
        v9 = inserted;
        if ( inserted >= 0 )
        {
          v29 = 0LL;
          v14 = CoCreateActivationManagerAndSetProperties(v27, &v29);
          v9 = v14;
          v15 = v29;
          if ( v14 >= 0 )
          {
            v16 = ((((a3 >> 1) & 1) << 17) + 16777222) | 0x8000000;
            if ( (a3 & 4) == 0 )
              v16 = (((a3 >> 1) & 1) << 17) + 16777222;
            v17 = v16 & 0xFFFFFFFB;
            if ( (a3 & 8) == 0 )
              v17 = v16;
            v18 = &v32;
            if ( *(_QWORD *)(a4 + 24) )
              v18 = *(char **)(a4 + 24);
            v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v36, (const WCHAR **)(a4 + 8));
            v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)a4);
            v21 = (*(__int64 (__fastcall **)(struct IApplicationActivationManagerPriv *, PVOID, __int64, PVOID, _QWORD, unsigned int, char *))(*(_QWORD *)v15 + 32LL))(
                    v15,
                    v20[1].Reserved.Reserved1,
                    v12,
                    v19[1].Reserved.Reserved1,
                    *(_QWORD *)(a4 + 16),
                    v17,
                    v18);
            v22 = v21;
            string = 0LL;
            v37 = 0LL;
            if ( v21 < 0 )
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xE0,
                (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
                (const char *)(unsigned int)v21);
            v9 = -2144927150;
            if ( v22 != -2144927150 )
            {
              v9 = -2144927149;
              if ( v22 != -2144927149 )
              {
                if ( v22 < 0 )
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x97,
                    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
                    (const char *)(unsigned int)v22);
                v9 = v22;
              }
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x7A,
              (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
              (const char *)(unsigned int)v14);
          }
          if ( v15 )
          {
            v29 = 0LL;
            (*(void (__fastcall **)(struct IApplicationActivationManagerPriv *))(*(_QWORD *)v15 + 16LL))(v15);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x77,
            (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
            (const char *)(unsigned int)inserted);
        }
        v23 = v27;
        if ( v27 )
        {
          v27 = 0LL;
          (*(void (__fastcall **)(struct Windows::Storage::Streams::IBuffer *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
      else
      {
        v9 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x73,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
          (const char *)0x8007000ELL);
      }
      if ( v12 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x6F,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
        (const char *)(unsigned int)v11);
    }
    v24 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v24 + 16LL))(v24);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x67,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v8);
  }
  v25 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return v9;
}
