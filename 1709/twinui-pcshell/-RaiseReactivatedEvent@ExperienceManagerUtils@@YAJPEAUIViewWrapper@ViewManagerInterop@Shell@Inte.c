/*
 * XREFs of ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x1801DB81C
 * Callers:
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x1801D0EBC (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801D9C14 (--1-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801D9D24 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DB6E4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     _lambda_69e066523f5234eeae6ba20c33bcef6c_::__lambda_69e066523f5234eeae6ba20c33bcef6c_ @ 0x1801DBC6C (_lambda_69e066523f5234eeae6ba20c33bcef6c_--__lambda_69e066523f5234eeae6ba20c33bcef6c_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c___::CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c_____lambda_69e066523f5234eeae6ba20c33bcef6c___ @ 0x1801DC290 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c___--CTaskW.c)
 *     ?StartActivity@Reactivate@SingleViewExperienceTelemetry@@QEAAXPEBG00@Z @ 0x1801DC470 (-StartActivity@Reactivate@SingleViewExperienceTelemetry@@QEAAXPEBG00@Z.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1801DC690 (--0-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  const unsigned __int16 *StringRawBuffer; // r14
  const unsigned __int16 *v10; // rsi
  const unsigned __int16 *v11; // rbx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v12; // rdx
  int v13; // edi
  __int64 v14; // rbx
  HRESULT v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  IUnknown *v19; // rcx
  IUnknown *v20; // rcx
  __int64 v21; // rax
  HSTRING v22; // rbx
  IUnknown *v23; // rbx
  void *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v28; // [rsp+30h] [rbp-D0h] BYREF
  IUnknown *v29; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C0h]
  HSTRING newString; // [rsp+48h] [rbp-B8h] BYREF
  HRESULT v32; // [rsp+50h] [rbp-B0h]
  int v33; // [rsp+58h] [rbp-A8h]
  __int64 v34; // [rsp+60h] [rbp-A0h]
  _QWORD v35[4]; // [rsp+70h] [rbp-90h] BYREF
  int v36; // [rsp+90h] [rbp-70h]
  int *v37; // [rsp+98h] [rbp-68h]
  int *v38; // [rsp+A0h] [rbp-60h]
  int v39; // [rsp+A8h] [rbp-58h] BYREF
  char v40; // [rsp+ACh] [rbp-54h]
  int v41; // [rsp+D0h] [rbp-30h] BYREF
  const char *v42; // [rsp+D8h] [rbp-28h]
  __int64 v43; // [rsp+E0h] [rbp-20h]
  char v44; // [rsp+E8h] [rbp-18h]
  __int64 v45; // [rsp+F0h] [rbp-10h]
  _BYTE v46[144]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v47; // [rsp+188h] [rbp+88h]
  __int64 v48; // [rsp+190h] [rbp+90h]
  __int64 v49; // [rsp+198h] [rbp+98h]
  __int64 v50; // [rsp+1A0h] [rbp+A0h]
  __int64 v51; // [rsp+1B0h] [rbp+B0h] BYREF
  HSTRING v52; // [rsp+1B8h] [rbp+B8h] BYREF
  HRESULT v53; // [rsp+1C0h] [rbp+C0h]
  __int64 v54; // [rsp+1C8h] [rbp+C8h]
  __int64 v55; // [rsp+1D0h] [rbp+D0h]
  void **v56; // [rsp+1D8h] [rbp+D8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+368h] [rbp+268h]

  v34 = -2LL;
  v33 = (int)a2;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v10 = WindowsGetStringRawBuffer(a4, 0LL);
  v11 = WindowsGetStringRawBuffer(a3, 0LL);
  v35[1] = 0LL;
  v35[2] = v35;
  v35[3] = 0LL;
  v36 = 0;
  v37 = &v41;
  v38 = &v39;
  v39 = 0;
  v40 = 0;
  v44 = 0;
  v41 = 0;
  v42 = "Reactivate";
  v43 = 0LL;
  v45 = 1LL;
  v47 = 0LL;
  v48 = 0LL;
  memset(v46, 0, sizeof(v46));
  v49 = 0LL;
  v50 = 0LL;
  v35[0] = &SingleViewExperienceTelemetry::Reactivate::`vftable';
  SingleViewExperienceTelemetry::Reactivate::StartActivity(
    (SingleViewExperienceTelemetry::Reactivate *)v35,
    v11,
    v10,
    StringRawBuffer);
  v13 = -2147023496;
  if ( this )
  {
    v14 = ExperienceManagerUtils::WindowFromViewWrapper(this, v12);
    if ( !v14 )
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
    v15 = WindowsDuplicateString(string, &newString);
    v13 = v15;
    v32 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x9C,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
        (const char *)(unsigned int)v15);
LABEL_34:
      WindowsDeleteString(newString);
      newString = 0LL;
      goto LABEL_35;
    }
    v16 = 0LL;
    v28 = 0LL;
    if ( a6 )
    {
      v29 = 0LL;
      v17 = RoCreatePropertySetSerializer(&v29);
      v13 = v17;
      if ( v17 < 0 )
      {
        v18 = 163LL;
        goto LABEL_11;
      }
      v17 = ((__int64 (__fastcall *)(IUnknown *, HSTRING, __int64 *))v29->lpVtbl[2].QueryInterface)(v29, a6, &v28);
      v13 = v17;
      if ( v17 < 0 )
      {
        v18 = 164LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v18,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
          (const char *)(unsigned int)v17);
        v19 = v29;
        if ( v29 )
        {
          v29 = 0LL;
          ((void (__fastcall *)(IUnknown *))v19->lpVtbl->Release)(v19);
        }
LABEL_32:
        v26 = v28;
        if ( v28 )
        {
          v28 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        goto LABEL_34;
      }
      v20 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        ((void (__fastcall *)(IUnknown *))v20->lpVtbl->Release)(v20);
      }
      v16 = v28;
      v13 = v32;
    }
    v21 = 0LL;
    v30 = 0LL;
    v51 = v14;
    v52 = 0LL;
    v53 = v13;
    if ( v13 >= 0 )
    {
      v22 = newString;
      WindowsDeleteString(0LL);
      v52 = 0LL;
      v53 = WindowsDuplicateString(v22, &v52);
      v16 = v28;
      v21 = v30;
    }
    v54 = v16;
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      v21 = v30;
    }
    v55 = v21;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      &v56,
      v35);
    v56 = &SingleViewExperienceTelemetry::Reactivate::`vftable';
    v23 = 0LL;
    v24 = operator new(0x170uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v24 )
      v23 = (IUnknown *)Windows::Internal::ComTaskPool::CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c___::CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c_____lambda_69e066523f5234eeae6ba20c33bcef6c___(
                          v24,
                          &v51);
    v29 = v23;
    v13 = Windows::Internal::ComTaskPool::RunTask(0, 2u, v33, 0, v23, 0LL);
    if ( v23 )
      ((void (__fastcall *)(IUnknown *))v23->lpVtbl->Release)(v23);
    lambda_69e066523f5234eeae6ba20c33bcef6c_::__lambda_69e066523f5234eeae6ba20c33bcef6c_(&v51);
    if ( v13 >= 0 )
      v13 = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xCD,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
        (const char *)(unsigned int)v13);
    v25 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    goto LABEL_32;
  }
LABEL_35:
  v35[0] = &SingleViewExperienceTelemetry::Reactivate::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v35);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v35);
  return (unsigned int)v13;
}
