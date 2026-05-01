/*
 * XREFs of ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x1801719EC
 * Callers:
 *     ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180170F80 (-OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z @ 0x180172180 (-ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x180018630 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18006BC78 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x18006CB74 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ??$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x18006CC80 (--$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x18006D050 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18006D2B0 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18007C598 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?GetPeopleBarScreenEdge@CShoulderTapExperienceManager@@AEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x180170D04 (-GetPeopleBarScreenEdge@CShoulderTapExperienceManager@@AEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CShoulderTapExperienceManager::Reactivate(CShoulderTapExperienceManager *this, unsigned __int8 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r8
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // r8
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // r8
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // r8
  int v40; // eax
  int PeopleBarScreenEdge; // eax
  __int64 v42; // rax
  __int64 v43; // r8
  int v44; // eax
  unsigned int v45; // ebx
  unsigned int v46; // esi
  __int64 v47; // rax
  __int64 v48; // r8
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // r8
  int v52; // eax
  int v53; // eax
  __int64 v54; // rax
  int v55; // eax
  HSTRING v57; // [rsp+48h] [rbp-9h] BYREF
  unsigned int v58; // [rsp+50h] [rbp-1h] BYREF
  HSTRING v59[2]; // [rsp+58h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+17h] BYREF
  __int64 v61; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v59[1] = (HSTRING)-2LL;
  v59[0] = 0LL;
  v61 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v4 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v61,
         (__int64 *)v59);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v57 = v59[0];
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v57);
    v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
           (__int64)&hstringHeader,
           (const WCHAR **)&off_18034C500);
    v8 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
           *(HSTRING *)(v6 + 24),
           v7,
           *((_QWORD *)this + 32));
    v5 = v8;
    if ( v8 < 0 )
    {
      v9 = (unsigned int)v8;
      v10 = 107LL;
      goto LABEL_46;
    }
    v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_18034C4F8);
    v13 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
            *(HSTRING *)(v11 + 24),
            v12,
            *((_QWORD *)this + 33));
    v5 = v13;
    if ( v13 < 0 )
    {
      v9 = (unsigned int)v13;
      v10 = 108LL;
      goto LABEL_46;
    }
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_18034C4C8);
    v16 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
            *(HSTRING *)(v14 + 24),
            v15,
            *((_QWORD *)this + 34));
    v5 = v16;
    if ( v16 < 0 )
    {
      v9 = (unsigned int)v16;
      v10 = 109LL;
      goto LABEL_46;
    }
    v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_18034C4E0);
    v19 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
            *(HSTRING *)(v17 + 24),
            v18,
            *((_QWORD *)this + 35));
    v5 = v19;
    if ( v19 < 0 )
    {
      v9 = (unsigned int)v19;
      v10 = 110LL;
      goto LABEL_46;
    }
    v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_18034C4D8);
    v22 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
            *(HSTRING *)(v20 + 24),
            v21,
            *((_DWORD *)this + 72));
    v5 = v22;
    if ( v22 < 0 )
    {
      v9 = (unsigned int)v22;
      v10 = 111LL;
      goto LABEL_46;
    }
    v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_18034C4B0);
    v25 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
            *(HSTRING *)(v23 + 24),
            v24,
            *((_DWORD *)this + 73));
    v5 = v25;
    if ( v25 < 0 )
    {
      v9 = (unsigned int)v25;
      v10 = 112LL;
      goto LABEL_46;
    }
    v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_18034C4A8);
    v28 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
            *(HSTRING *)(v26 + 24),
            v27,
            *((_DWORD *)this + 74));
    v5 = v28;
    if ( v28 < 0 )
    {
      v9 = (unsigned int)v28;
      v10 = 113LL;
      goto LABEL_46;
    }
    v29 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_18034C4C0);
    v31 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
            *(HSTRING *)(v29 + 24),
            v30,
            *((_QWORD *)this + 38));
    v5 = v31;
    if ( v31 < 0 )
    {
      v9 = (unsigned int)v31;
      v10 = 114LL;
      goto LABEL_46;
    }
    v32 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_18034C4B8);
    v34 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
            *(HSTRING *)(v32 + 24),
            v33,
            *((_QWORD *)this + 39));
    v5 = v34;
    if ( v34 < 0 )
    {
      v9 = (unsigned int)v34;
      v10 = 115LL;
      goto LABEL_46;
    }
    v35 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_18034C488);
    v37 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
            *(HSTRING *)(v35 + 24),
            v36,
            *((_QWORD *)this + 40));
    v5 = v37;
    if ( v37 < 0 )
    {
      v9 = (unsigned int)v37;
      v10 = 116LL;
      goto LABEL_46;
    }
    v38 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_18034C490);
    v40 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
            &v57,
            *(_QWORD *)(v38 + 24),
            v39,
            a2);
    v5 = v40;
    if ( v40 < 0 )
    {
      v9 = (unsigned int)v40;
      v10 = 117LL;
      goto LABEL_46;
    }
    v58 = -1;
    PeopleBarScreenEdge = CShoulderTapExperienceManager::GetPeopleBarScreenEdge(
                            this,
                            (enum EDGEUI_TRAYSTUCKPLACE *)&v58);
    v5 = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v9 = (unsigned int)PeopleBarScreenEdge;
      v10 = 121LL;
      goto LABEL_46;
    }
    v42 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_18034C4D0);
    v44 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
            *(HSTRING *)(v42 + 24),
            v43,
            v58);
    v5 = v44;
    if ( v44 < 0 )
    {
      v9 = (unsigned int)v44;
      v10 = 122LL;
      goto LABEL_46;
    }
    v45 = 184;
    v46 = 184;
    if ( v58 != -1 )
    {
      switch ( v58 )
      {
        case 0u:
          goto LABEL_35;
        case 1u:
LABEL_34:
          v46 = 202;
          goto LABEL_36;
        case 2u:
LABEL_35:
          v45 = 202;
LABEL_36:
          v47 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  (__int64)&hstringHeader,
                  (const WCHAR **)&off_18034C4A0);
          v49 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
                  *(HSTRING *)(v47 + 24),
                  v48,
                  v45);
          v5 = v49;
          if ( v49 >= 0 )
          {
            v50 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                    (__int64)&hstringHeader,
                    (const WCHAR **)&off_18034C498);
            v52 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
                    *(HSTRING *)(v50 + 24),
                    v51,
                    v46);
            v5 = v52;
            if ( v52 >= 0 )
            {
              v53 = CSingleViewShellExperience::Show(
                      (__int64)this + 40,
                      (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)1);
              v5 = v53;
              if ( v53 >= 0 )
              {
                v54 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                        (__int64)&hstringHeader,
                        (const WCHAR **)&off_18034C4F0);
                v55 = ExperienceManagerUtils::RaiseReactivatedEvent(
                        *((ExperienceManagerUtils **)this + 8),
                        (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 42),
                        *((HSTRING *)this + 6),
                        *((HSTRING *)this + 7),
                        *(HSTRING *)(v54 + 24),
                        v59[0]);
                v5 = v55;
                if ( v55 >= 0 )
                {
                  v5 = 0;
LABEL_47:
                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v57);
                  goto LABEL_48;
                }
                v9 = (unsigned int)v55;
                v10 = 153LL;
              }
              else
              {
                v9 = (unsigned int)v53;
                v10 = 152LL;
              }
            }
            else
            {
              v9 = (unsigned int)v52;
              v10 = 149LL;
            }
          }
          else
          {
            v9 = (unsigned int)v49;
            v10 = 148LL;
          }
LABEL_46:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v10,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
            (const char *)v9);
          goto LABEL_47;
        case 3u:
          goto LABEL_34;
      }
    }
    v5 = -2147024809;
    v9 = 2147942487LL;
    v10 = 145LL;
    goto LABEL_46;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x68,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_48:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v59);
  return v5;
}
