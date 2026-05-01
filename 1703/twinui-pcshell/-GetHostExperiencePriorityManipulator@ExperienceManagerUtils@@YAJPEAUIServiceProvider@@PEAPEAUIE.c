/*
 * XREFs of ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x18018CA1C
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180091414 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
        ExperienceManagerUtils *this,
        struct IServiceProvider *a2,
        struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **a3)
{
  __int64 v5; // rbx
  __int64 *v6; // rax
  int v7; // eax
  int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rbx
  HRESULT v12; // eax
  int v13; // eax
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD); // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, struct IServiceProvider *); // rcx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, struct IServiceProvider *); // rcx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, _QWORD); // rcx
  __int64 v20; // rcx
  __int64 (__fastcall ***v22)(_QWORD, GUID *, _QWORD); // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, struct IServiceProvider *); // [rsp+38h] [rbp-48h] BYREF
  __int64 v24[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v24[1] = -2LL;
  v24[0] = 0LL;
  v5 = *(_QWORD *)this;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v24);
  v7 = (*(__int64 (__fastcall **)(ExperienceManagerUtils *, GUID *, GUID *, __int64 *))(v5 + 24))(
         this,
         &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
         &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
         v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = (unsigned int)v7;
    v10 = 327LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)v9);
    goto LABEL_24;
  }
  v11 = v24[0];
  v22 = 0LL;
  string = 0LL;
  v12 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.Host", 0x25u, &hstringHeader, &string);
  if ( v12 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
  v13 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v11 + 48LL))(v11, string, &v22);
  v8 = v13;
  string = 0LL;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x150,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v13);
LABEL_7:
    v14 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD)))(*v14)[2])(v14);
    }
    goto LABEL_20;
  }
  v23 = 0LL;
  v15 = (**v22)(v22, &GUID_2410129c_64a0_4b85_9e61_12caec38d6ef, &v23);
  v8 = v15;
  if ( v15 < 0 )
  {
    v16 = 338LL;
    goto LABEL_11;
  }
  v15 = (**v23)(v23, &GUID_fdae1e57_9570_4461_bab5_532c0f899149, a2);
  v8 = v15;
  if ( v15 < 0 )
  {
    v16 = 339LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v16,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v15);
    v17 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct IServiceProvider *)))(*v17)[2])(v17);
    }
    goto LABEL_7;
  }
  v18 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct IServiceProvider *)))(*v18)[2])(v18);
  }
  v19 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD)))(*v19)[2])(v19);
  }
  v8 = 0;
LABEL_20:
  if ( v8 < 0 )
  {
    v9 = (unsigned int)v8;
    v10 = 328LL;
    goto LABEL_22;
  }
  v8 = 0;
LABEL_24:
  v20 = v24[0];
  if ( v24[0] )
  {
    v24[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return (unsigned int)v8;
}
