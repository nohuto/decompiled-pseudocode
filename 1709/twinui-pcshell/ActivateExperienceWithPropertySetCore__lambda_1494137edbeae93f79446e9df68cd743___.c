/*
 * XREFs of ActivateExperienceWithPropertySetCore__lambda_1494137edbeae93f79446e9df68cd743___ @ 0x1801DE044
 * Callers:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1801DDD24 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z @ 0x18003D338 (-SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046238 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$Make@VCImmersiveWindowFactory@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveWindowFactory@@@12@XZ @ 0x1801CE554 (--$Make@VCImmersiveWindowFactory@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCImmersiveWindowFact.c)
 *     ?CoCreateActivationManagerAndSetProperties@@YAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIApplicationActivationManagerPriv@@@Z @ 0x1801DDAD0 (-CoCreateActivationManagerAndSetProperties@@YAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIAppl.c)
 *     ?InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUIBuffer@Streams@Storage@4@@Z @ 0x1801DDBB4 (-InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAU.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ActivateExperienceWithPropertySetCore__lambda_1494137edbeae93f79446e9df68cd743_(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  HRESULT v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // r14
  int inserted; // eax
  int v14; // eax
  struct IApplicationActivationManagerPriv *v15; // r15
  int v16; // edx
  int v17; // ecx
  unsigned int v18; // esi
  char *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  int v22; // eax
  int v23; // edi
  struct Windows::Storage::Streams::IBuffer *v24; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v25; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v26; // rcx
  struct Windows::Storage::Streams::IBuffer *v28; // [rsp+48h] [rbp-59h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v29; // [rsp+50h] [rbp-51h] BYREF
  struct IApplicationActivationManagerPriv *v30; // [rsp+58h] [rbp-49h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v31; // [rsp+60h] [rbp-41h] BYREF
  __int64 v32; // [rsp+68h] [rbp-39h] BYREF
  char v33; // [rsp+70h] [rbp-31h] BYREF
  __int64 v34; // [rsp+78h] [rbp-29h]
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-21h] BYREF
  HSTRING string; // [rsp+98h] [rbp-9h] BYREF
  _BYTE v37[24]; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v38; // [rsp+B8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v34 = -2LL;
  v29 = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
  if ( v7 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
  v8 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         (__int64)string,
         (__int64 *)&v29);
  v9 = v8;
  string = 0LL;
  if ( v8 >= 0 )
  {
    v31 = v29;
    if ( v29 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v29 + 8LL))(v29);
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_180214A90);
    v11 = Windows::Internal::ShellHelpers::PropertySetHelper::SetBoolean(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v31,
            *(HSTRING *)(v10 + 24),
            a3 & 1);
    v9 = v11;
    string = 0LL;
    if ( v11 >= 0 )
    {
      Microsoft::WRL::Details::Make<CImmersiveWindowFactory,>(&v32);
      v12 = v32;
      if ( v32 )
      {
        *(_BYTE *)(v32 + 129) = a3 & 1;
        v28 = 0LL;
        inserted = InsertExperienceIdAndSerialize(v29, a1, &v28);
        v9 = inserted;
        if ( inserted >= 0 )
        {
          v30 = 0LL;
          v14 = CoCreateActivationManagerAndSetProperties(v28, &v30);
          v9 = v14;
          v15 = v30;
          if ( v14 >= 0 )
          {
            v16 = ((((a3 >> 1) & 1) << 17) + 16777222) | 0x8000000;
            if ( (a3 & 4) == 0 )
              v16 = (((a3 >> 1) & 1) << 17) + 16777222;
            v17 = v16 | 0x10000000;
            if ( (a3 & 0x10) == 0 )
              v17 = v16;
            v18 = v17 & 0xFFFFFFFB;
            if ( (a3 & 8) == 0 )
              v18 = v17;
            v19 = &v33;
            if ( *(_QWORD *)(a4 + 24) )
              v19 = *(char **)(a4 + 24);
            v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v37, (const WCHAR **)(a4 + 8));
            v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                    (__int64)&hstringHeader,
                    (const WCHAR **)a4);
            v22 = (*(__int64 (__fastcall **)(struct IApplicationActivationManagerPriv *, _QWORD, __int64, _QWORD, _QWORD, unsigned int, char *))(*(_QWORD *)v15 + 32LL))(
                    v15,
                    *(_QWORD *)(v21 + 24),
                    v12,
                    *(_QWORD *)(v20 + 24),
                    *(_QWORD *)(a4 + 16),
                    v18,
                    v19);
            v23 = v22;
            string = 0LL;
            v38 = 0LL;
            if ( v22 < 0 )
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xE6,
                (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
                (const char *)(unsigned int)v22);
            v9 = -2144927150;
            if ( v23 != -2144927150 )
            {
              v9 = -2144927149;
              if ( v23 != -2144927149 )
              {
                if ( v23 < 0 )
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x9D,
                    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
                    (const char *)(unsigned int)v23);
                v9 = v23;
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
            v30 = 0LL;
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
        v24 = v28;
        if ( v28 )
        {
          v28 = 0LL;
          (*(void (__fastcall **)(struct Windows::Storage::Streams::IBuffer *))(*(_QWORD *)v24 + 16LL))(v24);
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
        v32 = 0LL;
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
    v25 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v25 + 16LL))(v25);
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
  v26 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v26 + 16LL))(v26);
  }
  return v9;
}
