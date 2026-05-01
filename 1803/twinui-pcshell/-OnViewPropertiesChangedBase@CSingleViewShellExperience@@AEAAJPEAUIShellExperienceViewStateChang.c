/*
 * XREFs of ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18006ADAC
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18006B1D0 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnViewPropertiesChanging@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180068670 (-OnViewPropertiesChanging@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperienc.c)
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18006ABC8 (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?OnViewPropertiesChanging@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180077500 (-OnViewPropertiesChanging@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CSingleViewShellExperience::OnViewPropertiesChangedBase(
        CSingleViewShellExperience *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *a2)
{
  char v3; // r13
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdi
  HRESULT v9; // eax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rdi
  __int64 *v13; // r15
  int v14; // eax
  int v15; // esi
  __int64 v16; // r14
  __int64 v17; // rcx
  int v18; // eax
  int v19; // edi
  int v20; // eax
  __int64 v21; // rsi
  HRESULT v22; // eax
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  __int64 v25; // rsi
  __int64 *v26; // r15
  int v27; // r13d
  __int64 v28; // r14
  __int64 v29; // rcx
  int v30; // eax
  TwinUI::Cortana::ShellExperienceView *v31; // rcx
  __int64 (__fastcall *v32)(TwinUI::Cortana::ShellExperienceView *, struct CSingleViewShellExperience *); // rax
  __int64 v33; // rcx
  int v35; // r8d
  WINBOOL v36; // edx
  __int64 v37; // r9
  __int64 v38; // rdx
  int v39; // [rsp+28h] [rbp-49h]
  __int64 v40; // [rsp+30h] [rbp-41h] BYREF
  __int64 v41; // [rsp+38h] [rbp-39h] BYREF
  __int64 v42; // [rsp+40h] [rbp-31h] BYREF
  __int64 v43; // [rsp+48h] [rbp-29h] BYREF
  int v44; // [rsp+50h] [rbp-21h]
  __int64 *v45; // [rsp+58h] [rbp-19h]
  _QWORD v46[2]; // [rsp+60h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-1h] BYREF
  HSTRING string; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v46[1] = -2LL;
  v3 = 0;
  v40 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, __int64 *))(*(_QWORD *)a2 + 72LL))(
         a2,
         &v40);
  v5 = v4;
  if ( v4 < 0 )
  {
    v37 = (unsigned int)v4;
    v38 = 548LL;
LABEL_55:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v38,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v37,
      v39);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
    return v5;
  }
  if ( !v40 )
  {
    v5 = -2147467259;
    v37 = 2147500037LL;
    v38 = 550LL;
    goto LABEL_55;
  }
  v6 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v40;
  if ( v6 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v41 = 0LL;
  v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 4))(
         *((_QWORD *)this + 4),
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v41);
  v5 = v7;
  if ( v7 >= 0 )
  {
    v43 = 0LL;
    v44 = 0;
    *((_DWORD *)this + 11) = 0;
    *((_DWORD *)this + 12) = 0;
    v8 = v41;
    v45 = &v43;
    v46[0] = 0LL;
    string = 0LL;
    v9 = WindowsCreateStringReference(L"desiredSize", 0xBu, &hstringHeader, &string);
    if ( v9 < 0 )
    {
      RaiseException(v9, 1u, 0, 0LL);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD *))(*(_QWORD *)v8 + 48LL))(v8, string, v46);
      v11 = retaddr;
      if ( v10 >= 0 )
      {
        v3 = 1;
        goto LABEL_9;
      }
    }
    wil::details::in1diag3::_Log_Hr(
      v11,
      (void *)0x232,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v10,
      v39);
LABEL_9:
    string = 0LL;
    v12 = v46[0];
    v13 = v45;
    LODWORD(v40) = 3;
    if ( v46[0] )
    {
      v14 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v46[0])(
              v46[0],
              &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
              &v42);
      v15 = v14;
      if ( v14 < 0 )
      {
        if ( v14 == -2147467262 )
        {
          v16 = v12;
          v15 = 3;
        }
        else
        {
          v16 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
      else
      {
        v16 = v42;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        v15 = 7;
      }
    }
    else
    {
      v16 = 0LL;
      v15 = 0;
    }
    v17 = *v13;
    *v13 = v16;
    v18 = *((_DWORD *)v13 + 2);
    *((_DWORD *)v13 + 2) = v15;
    if ( v17 && ((v18 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    v19 = -2147467261;
    if ( v3 )
    {
      if ( this == (CSingleViewShellExperience *)-44LL )
      {
        v20 = -2147467261;
      }
      else
      {
        v42 = 0LL;
        *(_QWORD *)((char *)this + 44) = 0LL;
        if ( v44 == 7 )
        {
          v20 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v43 + 192LL))(v43, (char *)this + 44);
        }
        else
        {
          v20 = -2147316576;
          if ( v44 < 0 )
            v20 = v44;
        }
      }
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x234,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v20,
          v39);
    }
    *((_BYTE *)this + 52) = 0;
    v21 = v41;
    v45 = &v43;
    v46[0] = 0LL;
    string = 0LL;
    v22 = WindowsCreateStringReference(L"fullScreen", 0xAu, &hstringHeader, &string);
    if ( v22 < 0 )
    {
      RaiseException(v22, 1u, 0, 0LL);
    }
    else
    {
      v23 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD *))(*(_QWORD *)v21 + 48LL))(v21, string, v46);
      v24 = retaddr;
      if ( v23 >= 0 )
      {
        LOBYTE(v39) = 1;
LABEL_22:
        string = 0LL;
        v25 = v46[0];
        v26 = v45;
        if ( v46[0] )
        {
          v27 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v46[0])(
                  v46[0],
                  &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
                  &v42);
          if ( v27 < 0 )
          {
            if ( v27 == -2147467262 )
            {
              v28 = v25;
            }
            else
            {
              v28 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
              LODWORD(v40) = v27;
            }
          }
          else
          {
            v28 = v42;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
            LODWORD(v40) = 7;
          }
        }
        else
        {
          v28 = 0LL;
          LODWORD(v40) = 0;
        }
        v29 = *v26;
        *v26 = v28;
        v30 = *((_DWORD *)v26 + 2);
        *((_DWORD *)v26 + 2) = v40;
        if ( v29 && ((v30 - 3) & 0xFFFFFFFB) == 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        if ( (_BYTE)v39 )
        {
          if ( this != (CSingleViewShellExperience *)-52LL )
          {
            *((_BYTE *)this + 52) = 0;
            if ( v44 == 7 )
            {
              v19 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v43 + 144LL))(v43, (char *)this + 52);
            }
            else
            {
              v19 = -2147316576;
              if ( v44 < 0 )
                v19 = v44;
            }
          }
          if ( v19 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x23A,
              (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
              (const char *)(unsigned int)v19,
              v39);
        }
        v31 = (TwinUI::Cortana::ShellExperienceView *)*((_QWORD *)this + 11);
        v32 = *(__int64 (__fastcall **)(TwinUI::Cortana::ShellExperienceView *, struct CSingleViewShellExperience *))(*(_QWORD *)v31 + 16LL);
        if ( v32 == TwinUI::Cortana::ShellExperienceView::OnViewPropertiesChanging )
        {
          TwinUI::Cortana::ShellExperienceView::OnViewPropertiesChanging(v31, this);
        }
        else if ( v32 == CStartExperienceManager::OnViewPropertiesChanging )
        {
          CStartExperienceManager::OnViewPropertiesChanging(v31, this);
        }
        else
        {
          v32(v31, this);
        }
        if ( !*((_DWORD *)this + 10) && *((_QWORD *)this + 3) )
        {
          *((_DWORD *)this + 10) = 1;
          v35 = *((_DWORD *)this + 16);
          v36 = *((_DWORD *)this + 17) & 1 | 2;
          if ( (*((_DWORD *)this + 17) & 2) == 0 )
            v36 = *((_DWORD *)this + 17) & 1;
          if ( (*((_BYTE *)this + 68) & 4) != 0 )
            v36 |= 4u;
          *((_QWORD *)this + 8) = 0LL;
          if ( v35 == 1 )
            CSingleViewShellExperience::ShowViewAsync((__int64)this, v36);
        }
        v5 = 0;
        if ( v43 && ((v44 - 3) & 0xFFFFFFFB) == 0 )
          (*(void (**)(void))(*(_QWORD *)v43 + 16LL))();
        goto LABEL_40;
      }
    }
    wil::details::in1diag3::_Log_Hr(
      v24,
      (void *)0x238,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v23,
      v39);
    LOBYTE(v39) = 0;
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x22B,
    (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v7,
    v39);
LABEL_40:
  v33 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  return v5;
}
