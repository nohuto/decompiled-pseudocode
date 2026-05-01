/*
 * XREFs of ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18018C438
 * Callers:
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x1801817FC (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18018ADF4 (--1-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18018AF04 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018C300 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     _lambda_69e066523f5234eeae6ba20c33bcef6c_::__lambda_69e066523f5234eeae6ba20c33bcef6c_ @ 0x18018C7E8 (_lambda_69e066523f5234eeae6ba20c33bcef6c_--__lambda_69e066523f5234eeae6ba20c33bcef6c_.c)
 *     ??$Start@PEBGPEBGPEBG@Reactivate@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG00@Z @ 0x18018CC58 (--$Start@PEBGPEBGPEBG@Reactivate@SingleViewExperienceTelemetry@@SA-AV01@$$QEAPEBG00@Z.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_69e066523f5234eeae6ba20c33bcef6c___ @ 0x18018CD28 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_69e066523f5234eeae6ba20c33bcef6c___.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18018D360 (--0-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ExperienceManagerUtils::RaiseReactivatedEvent(
        ExperienceManagerUtils *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING string,
        HSTRING a6)
{
  int v8; // r12d
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v10; // rdx
  int v11; // ebx
  __int64 v12; // rdi
  HRESULT v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  PCWSTR v17; // rbx
  __int64 v18; // rcx
  PCWSTR v19; // rcx
  PCWSTR v20; // rcx
  __int64 v21; // rax
  HSTRING v22; // rbx
  IUnknown **v23; // rax
  PCWSTR v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  PCWSTR StringRawBuffer; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C0h]
  HSTRING newString; // [rsp+48h] [rbp-B8h] BYREF
  HRESULT v32; // [rsp+50h] [rbp-B0h]
  PCWSTR v33; // [rsp+58h] [rbp-A8h]
  PCWSTR v34; // [rsp+60h] [rbp-A0h]
  __int64 v35; // [rsp+68h] [rbp-98h]
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  HSTRING v37; // [rsp+78h] [rbp-88h] BYREF
  HRESULT v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+88h] [rbp-78h]
  __int64 v40; // [rsp+90h] [rbp-70h]
  void **v41; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v42[40]; // [rsp+1D0h] [rbp+D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+368h] [rbp+268h]

  v35 = -2LL;
  v8 = (int)a2;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v33 = WindowsGetStringRawBuffer(a4, 0LL);
  v34 = WindowsGetStringRawBuffer(a3, 0LL);
  SingleViewExperienceTelemetry::Reactivate::Start<unsigned short const *,unsigned short const *,unsigned short const *>((SingleViewExperienceTelemetry::Reactivate *)v42);
  v11 = -2147023496;
  if ( this )
  {
    v12 = ExperienceManagerUtils::WindowFromViewWrapper(this, v10);
    if ( !v12 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x94,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
        (const char *)0x80070578LL);
      goto LABEL_35;
    }
    WindowsDeleteString(0LL);
    newString = 0LL;
    v13 = WindowsDuplicateString(string, &newString);
    v11 = v13;
    v32 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x9C,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
        (const char *)(unsigned int)v13);
LABEL_34:
      WindowsDeleteString(newString);
      newString = 0LL;
      goto LABEL_35;
    }
    v14 = 0LL;
    v29 = 0LL;
    if ( a6 )
    {
      StringRawBuffer = 0LL;
      v15 = RoCreatePropertySetSerializer(&StringRawBuffer);
      v11 = v15;
      if ( v15 < 0 )
      {
        v16 = 163LL;
        goto LABEL_13;
      }
      v17 = StringRawBuffer;
      v18 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      v15 = (*(__int64 (__fastcall **)(PCWSTR, HSTRING, __int64 *))(*(_QWORD *)v17 + 48LL))(v17, a6, &v29);
      v11 = v15;
      if ( v15 < 0 )
      {
        v16 = 164LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v16,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
          (const char *)(unsigned int)v15);
        v19 = StringRawBuffer;
        if ( StringRawBuffer )
        {
          StringRawBuffer = 0LL;
          (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v19 + 16LL))(v19);
        }
LABEL_32:
        v26 = v29;
        if ( v29 )
        {
          v29 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        goto LABEL_34;
      }
      v20 = StringRawBuffer;
      if ( StringRawBuffer )
      {
        StringRawBuffer = 0LL;
        (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v14 = v29;
      v11 = v32;
    }
    v21 = 0LL;
    v30 = 0LL;
    v36 = v12;
    v37 = 0LL;
    v38 = v11;
    if ( v11 >= 0 )
    {
      v22 = newString;
      WindowsDeleteString(0LL);
      v37 = 0LL;
      v38 = WindowsDuplicateString(v22, &v37);
      v14 = v29;
      v21 = v30;
    }
    v39 = v14;
    if ( v14 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v21 = v30;
    }
    v40 = v21;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      &v41,
      v42);
    v41 = &SingleViewExperienceTelemetry::Reactivate::`vftable';
    v23 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_69e066523f5234eeae6ba20c33bcef6c___(
                         &StringRawBuffer,
                         &v36);
    v11 = Windows::Internal::ComTaskPool::RunTask(0, 2u, v8, 0, *v23, 0LL);
    v24 = StringRawBuffer;
    if ( StringRawBuffer )
    {
      StringRawBuffer = 0LL;
      (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v24 + 16LL))(v24);
    }
    lambda_69e066523f5234eeae6ba20c33bcef6c_::__lambda_69e066523f5234eeae6ba20c33bcef6c_(&v36);
    if ( v11 >= 0 )
      v11 = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xCD,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
        (const char *)(unsigned int)v11);
    v25 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    goto LABEL_32;
  }
LABEL_35:
  v42[0] = &SingleViewExperienceTelemetry::Reactivate::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v42);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v42);
  return (unsigned int)v11;
}
