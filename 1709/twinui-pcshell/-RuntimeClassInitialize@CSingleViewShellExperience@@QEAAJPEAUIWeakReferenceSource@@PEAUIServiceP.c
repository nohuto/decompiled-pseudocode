/*
 * XREFs of ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1801CF740
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18009581C (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?GetExperienceManager@CortanaConversationExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x18009DB60 (-GetExperienceManager@CortanaConversationExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PE.c)
 *     ??$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIServiceProvider@@PEAUHSTRING__@@PEAUHSTRING__@@PEAUHSTRING__@@W4ZBID@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@$$QEAPEAUIServiceProvider@@$$QEAPEAUHSTRING__@@22$$QEAW4ZBID@@@Z @ 0x1800A9000 (--$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell.c)
 *     ?RuntimeClassInitialize@ImeNotificationExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800A9F44 (-RuntimeClassInitialize@ImeNotificationExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CTaskContinuityActivitiesExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800AAF14 (-RuntimeClassInitialize@CTaskContinuityActivitiesExperienceManager@@QEAAJPEAUIServiceProvider@@@.c)
 *     ?RuntimeClassInitialize@CPeopleBarFlyoutExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800AD3C4 (-RuntimeClassInitialize@CPeopleBarFlyoutExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800B1078 (-RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CPeopleTestExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800B2AEC (-RuntimeClassInitialize@CPeopleTestExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CShoulderTapExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800B3FAC (-RuntimeClassInitialize@CShoulderTapExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800B6434 (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800BCF2C (-RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CQuickConnectExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800C50E8 (-RuntimeClassInitialize@CQuickConnectExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800CA7A8 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046238 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z @ 0x1801CFB48 (-RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::RuntimeClassInitialize(
        HSTRING *newString,
        struct IWeakReferenceSource *a2,
        struct IServiceProvider *a3,
        HSTRING a4,
        HSTRING string)
{
  HSTRING *v9; // r14
  int v10; // ebx
  __int64 v11; // rdx
  HSTRING *v13; // rbx
  HRESULT v14; // eax
  unsigned int v15; // esi
  HSTRING v16; // rbx
  HSTRING v17; // rcx
  __int64 v18; // rcx
  HSTRING v19; // rcx
  HSTRING v20; // rdx
  HSTRING v21; // rbx
  HSTRING v22; // rcx
  __int64 v23; // rcx
  HSTRING *v24; // r15
  HRESULT v25; // eax
  HSTRING v26; // rcx
  int v27; // eax
  wil::details::in1diag3 *v28; // rcx
  __int64 v29; // rdx
  HSTRING v30; // rcx
  HSTRING v31; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v32[2]; // [rsp+38h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-30h] BYREF
  HSTRING v34; // [rsp+60h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]

  v32[1] = -2LL;
  v9 = newString + 1;
  if ( !a4 || a4 != *v9 )
  {
    WindowsDeleteString(*v9);
    *v9 = 0LL;
    v10 = WindowsDuplicateString(a4, v9);
    if ( v10 < 0 )
    {
      v11 = 61LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v11,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
  }
  v13 = newString + 2;
  if ( !string || string != *v13 )
  {
    WindowsDeleteString(*v13);
    *v13 = 0LL;
    v14 = WindowsDuplicateString(string, newString + 2);
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3E,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v14);
      return v15;
    }
  }
  v16 = *v13;
  if ( !v16 || v16 != *newString )
  {
    WindowsDeleteString(*newString);
    *newString = 0LL;
    v10 = WindowsDuplicateString(v16, newString);
    if ( v10 < 0 )
    {
      v11 = 63LL;
      goto LABEL_5;
    }
  }
  v17 = newString[12];
  newString[12] = 0LL;
  if ( v17 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v17 + 16LL))(v17);
  v32[0] = 0LL;
  v10 = ((__int64 (__fastcall *)(struct IWeakReferenceSource *, GUID *, _QWORD *))a2->lpVtbl->QueryInterface)(
          a2,
          &_uuidof__AUIWeakReferenceSource_Details_Platform__,
          v32);
  v18 = v32[0];
  if ( v10 < 0 )
    goto LABEL_17;
  v31 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, HSTRING *))(*(_QWORD *)v32[0] + 24LL))(v32[0], &v31);
  if ( v10 < 0 )
  {
    v19 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v18 = v32[0];
LABEL_17:
    if ( v18 )
    {
      v32[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    goto LABEL_32;
  }
  v20 = v31;
  v21 = v31;
  if ( v31 )
  {
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v31 + 8LL))(v31);
    v20 = v31;
  }
  v22 = newString[12];
  newString[12] = v21;
  if ( v22 )
  {
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v22 + 16LL))(v22);
    v20 = v31;
  }
  if ( v20 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v23 = v32[0];
  if ( v32[0] )
  {
    v32[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v10 = 0;
LABEL_32:
  if ( v10 < 0 )
  {
    v11 = 65LL;
    goto LABEL_5;
  }
  v24 = newString + 10;
  v10 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *, HSTRING *))(*(_QWORD *)newString[11] + 136LL))(
          newString[11],
          newString,
          newString + 10);
  if ( v10 < 0 )
  {
    v11 = 67LL;
    goto LABEL_5;
  }
  v34 = 0LL;
  v25 = WindowsCreateStringReference(L"Windows.Foundation.Collections.PropertySet", 0x2Au, &hstringHeader, &v34);
  if ( v25 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v25);
    __debugbreak();
  }
  v10 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
          (__int64)v34,
          (__int64 *)newString + 4);
  if ( v10 < 0 )
  {
    v11 = 70LL;
    goto LABEL_5;
  }
  if ( (~(*((_DWORD *)newString + 33) >> 4) & 1) != 0 )
  {
    v26 = newString[13];
    if ( v26 )
    {
      newString[13] = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, HSTRING *))a3->lpVtbl->QueryService)(
            a3,
            &GUID_be47f3f2_56c0_40dd_a5ad_ba88325ea0ce,
            &GUID_69bb2711_c5f2_41da_8d6d_448a336a24c5,
            newString + 13);
    if ( v10 < 0 )
    {
      v11 = 74LL;
      goto LABEL_5;
    }
  }
  v10 = CSingleViewShellExperience::RegisterAumid(
          (CSingleViewShellExperience *)newString,
          *v9,
          (struct EventRegistrationToken *)newString + 14);
  if ( v10 < 0 )
  {
    v11 = 77LL;
    goto LABEL_5;
  }
  if ( (*((_BYTE *)newString + 132) & 4) == 0 )
    goto LABEL_55;
  v31 = 0LL;
  v27 = (**(__int64 (__fastcall ***)(HSTRING, GUID *, HSTRING *))newString[13])(
          newString[13],
          &GUID_b18447e2_209d_43d3_add5_a3434f4d558b,
          &v31);
  v28 = retaddr;
  if ( v27 >= 0 )
  {
    v27 = (*(__int64 (__fastcall **)(HSTRING, HSTRING))(*(_QWORD *)v31 + 48LL))(v31, newString[14]);
    v28 = retaddr;
    if ( v27 >= 0 )
      goto LABEL_53;
    v29 = 86LL;
  }
  else
  {
    v29 = 84LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v28,
    (void *)v29,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v27);
LABEL_53:
  v30 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v30 + 16LL))(v30);
  }
LABEL_55:
  v10 = (*(__int64 (__fastcall **)(HSTRING, struct IServiceProvider *))(*(_QWORD *)*v24 + 16LL))(*v24, a3);
  if ( v10 < 0 )
  {
    v11 = 91LL;
    goto LABEL_5;
  }
  if ( (*((_BYTE *)newString + 132) & 1) != 0 )
  {
    v10 = (*(__int64 (__fastcall **)(HSTRING, struct IServiceProvider *))(*(_QWORD *)*v24 + 24LL))(*v24, a3);
    if ( v10 < 0 )
    {
      v11 = 97LL;
      goto LABEL_5;
    }
  }
  return 0LL;
}
