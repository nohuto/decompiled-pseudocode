/*
 * XREFs of ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1801D1504
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1801D0594 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$OnEventQueued_EventName@PEBGPEBGPEBG@OnEventQueued@SingleViewExperienceTelemetry@@SAX$$QEAPEBG00@Z @ 0x1801D3ECC (--$OnEventQueued_EventName@PEBGPEBGPEBG@OnEventQueued@SingleViewExperienceTelemetry@@SAX$$QEAPEB.c)
 *     ?StartActivity@OnEventQueued@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1801D57DC (-StartActivity@OnEventQueued@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801D9404 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvider.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801D9C14 (--1-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801D9D24 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSingleViewShellExperience::OnEventQueued(
        HSTRING *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *a2)
{
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  HSTRING string; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C8h] BYREF
  PCWSTR v14; // [rsp+48h] [rbp-C0h] BYREF
  PCWSTR v15; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v16[2]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v17[4]; // [rsp+68h] [rbp-A0h] BYREF
  int v18; // [rsp+88h] [rbp-80h]
  int *v19; // [rsp+90h] [rbp-78h]
  int *v20; // [rsp+98h] [rbp-70h]
  int v21; // [rsp+A0h] [rbp-68h] BYREF
  char v22; // [rsp+A4h] [rbp-64h]
  int v23; // [rsp+C8h] [rbp-40h] BYREF
  const char *v24; // [rsp+D0h] [rbp-38h]
  __int64 v25; // [rsp+D8h] [rbp-30h]
  char v26; // [rsp+E0h] [rbp-28h]
  __int64 v27; // [rsp+E8h] [rbp-20h]
  _BYTE v28[144]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v29; // [rsp+180h] [rbp+78h]
  __int64 v30; // [rsp+188h] [rbp+80h]
  __int64 v31; // [rsp+190h] [rbp+88h]
  __int64 v32; // [rsp+198h] [rbp+90h]
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v16[1] = -2LL;
  StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
  v5 = WindowsGetStringRawBuffer(this[1], 0LL);
  v17[1] = 0LL;
  v17[2] = v17;
  v17[3] = 0LL;
  v18 = 0;
  v19 = &v23;
  v20 = &v21;
  v21 = 0;
  v22 = 0;
  v26 = 0;
  v23 = 0;
  v24 = "OnEventQueued";
  v25 = 0LL;
  v27 = 1LL;
  v29 = 0LL;
  v30 = 0LL;
  memset(v28, 0, sizeof(v28));
  v31 = 0LL;
  v32 = 0LL;
  v17[0] = &SingleViewExperienceTelemetry::OnEventQueued::`vftable';
  SingleViewExperienceTelemetry::OnEventQueued::StartActivity(
    (SingleViewExperienceTelemetry::OnEventQueued *)v17,
    v5,
    StringRawBuffer);
  WindowsDeleteString(0LL);
  string = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, HSTRING *))(*(_QWORD *)a2 + 64LL))(
         a2,
         &string);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x270,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_11;
  }
  v14 = WindowsGetStringRawBuffer(string, 0LL);
  v15 = WindowsGetStringRawBuffer(this[2], 0LL);
  v16[0] = WindowsGetStringRawBuffer(this[1], 0LL);
  SingleViewExperienceTelemetry::OnEventQueued::OnEventQueued_EventName<unsigned short const *,unsigned short const *,unsigned short const *>(
    v16,
    &v15,
    &v14);
  v13 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, __int64 *))(*(_QWORD *)a2 + 72LL))(
         a2,
         &v13);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = 629LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_9;
  }
  v8 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *, HSTRING, __int64))(*(_QWORD *)this[11] + 88LL))(
         this[11],
         this,
         string,
         v13);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = 630LL;
    goto LABEL_7;
  }
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v17);
  v7 = 0;
LABEL_9:
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
LABEL_11:
  WindowsDeleteString(string);
  string = 0LL;
  v17[0] = &SingleViewExperienceTelemetry::OnEventQueued::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v17);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v17);
  return v7;
}
