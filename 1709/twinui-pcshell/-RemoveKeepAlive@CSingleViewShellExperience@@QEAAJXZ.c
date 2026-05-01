/*
 * XREFs of ?RemoveKeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x1801D2524
 * Callers:
 *     ?RemoveKeepAlive@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x1800CF340 (-RemoveKeepAlive@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x1801D51C8 (-StartActivity@RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801D9E34 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801DA25C (--1-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801DAC3C (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DB6E4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::RemoveKeepAlive(
        CSingleViewShellExperience *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v3; // rcx
  int v4; // ebx
  HWND v5; // rsi
  unsigned int v6; // r14d
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v8; // rbx
  int v9; // eax
  int v10; // eax
  _QWORD v12[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v13[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+68h] [rbp-A0h]
  int *v15; // [rsp+70h] [rbp-98h]
  int *v16; // [rsp+78h] [rbp-90h]
  int v17; // [rsp+80h] [rbp-88h] BYREF
  char v18; // [rsp+84h] [rbp-84h]
  int v19; // [rsp+A8h] [rbp-60h] BYREF
  const char *v20; // [rsp+B0h] [rbp-58h]
  __int64 v21; // [rsp+B8h] [rbp-50h]
  char v22; // [rsp+C0h] [rbp-48h]
  __int64 v23; // [rsp+C8h] [rbp-40h]
  _BYTE v24[144]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v25; // [rsp+160h] [rbp+58h]
  __int64 v26; // [rsp+168h] [rbp+60h]
  __int64 v27; // [rsp+170h] [rbp+68h]
  __int64 v28; // [rsp+178h] [rbp+70h]
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v12[1] = -2LL;
  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    v5 = ExperienceManagerUtils::WindowFromViewWrapper(v3, a2);
    v6 = *((_DWORD *)this + 10);
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
    v8 = WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
    v13[1] = 0LL;
    v13[2] = v13;
    v13[3] = 0LL;
    LODWORD(v14) = 0;
    v15 = &v19;
    v16 = &v17;
    v17 = 0;
    v18 = 0;
    v22 = 0;
    v19 = 0;
    v20 = "RemoveKeepAlive";
    v21 = 0LL;
    v23 = 1LL;
    v25 = 0LL;
    v26 = 0LL;
    memset(v24, 0, sizeof(v24));
    v27 = 0LL;
    v28 = 0LL;
    v13[0] = &SingleViewExperienceTelemetry::RemoveKeepAlive::`vftable';
    SingleViewExperienceTelemetry::RemoveKeepAlive::StartActivity(
      (SingleViewExperienceTelemetry::RemoveKeepAlive *)v13,
      v8,
      StringRawBuffer,
      v6,
      v5);
    LOBYTE(v12[0]) = 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 10) + 56LL))(*((_QWORD *)this + 10), v12);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x37F,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v9);
    if ( LOBYTE(v12[0]) )
    {
      v4 = -2147019873;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x380,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)0x8007139FLL);
LABEL_18:
      v13[0] = &SingleViewExperienceTelemetry::RemoveKeepAlive::`vftable';
      wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v13);
      wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v13);
      return (unsigned int)v4;
    }
    if ( *((_DWORD *)this + 18) )
    {
      *((_DWORD *)this + 18) = 1;
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 336LL))(*((_QWORD *)this + 3), 1LL);
      v4 = v10;
      if ( v10 >= 0 )
      {
        *((_DWORD *)this + 19) = 1;
        v4 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x63,
          (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
          (const char *)(unsigned int)v10);
      }
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x7E,
          (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
          (const char *)(unsigned int)v4);
        goto LABEL_15;
      }
    }
    v4 = 0;
LABEL_15:
    if ( v4 >= 0 )
    {
      wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v13);
      v4 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x381,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v4);
    }
    goto LABEL_18;
  }
  v4 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x376,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)0x8000FFFFLL);
  return (unsigned int)v4;
}
