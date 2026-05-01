/*
 * XREFs of ?RemoveKeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x180182C94
 * Callers:
 *     ?RemoveKeepAlive@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x1800C1770 (-RemoveKeepAlive@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Start@PEBGPEBGIAEBQEAUHWND__@@@RemoveKeepAlive@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0$$QEAIAEBQEAUHWND__@@@Z @ 0x180184B4C (--$Start@PEBGPEBGIAEBQEAUHWND__@@@RemoveKeepAlive@SingleViewExperienceTelemetry@@SA-AV01@$$QEAPE.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18018B014 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18018B440 (--1-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18018BE38 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018C300 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::RemoveKeepAlive(
        CSingleViewShellExperience *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v3; // rcx
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  char v8; // [rsp+38h] [rbp-D0h] BYREF
  int v9; // [rsp+3Ch] [rbp-CCh]
  __int64 v10[5]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v11[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v10[3] = -2LL;
  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    v10[0] = (__int64)ExperienceManagerUtils::WindowFromViewWrapper(v3, a2);
    v9 = *((_DWORD *)this + 10);
    v10[1] = (__int64)WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
    v10[2] = (__int64)WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
    SingleViewExperienceTelemetry::RemoveKeepAlive::Start<unsigned short const *,unsigned short const *,unsigned int,HWND__ * const &>(
      (SingleViewExperienceTelemetry::RemoveKeepAlive *)v11,
      (__int64)v10);
    v8 = 0;
    v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 10) + 56LL))(*((_QWORD *)this + 10), &v8);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x37E,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v5);
    if ( v8 )
    {
      v4 = -2147019873;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x37F,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)0x8007139FLL);
LABEL_18:
      v11[0] = &SingleViewExperienceTelemetry::RemoveKeepAlive::`vftable';
      wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v11);
      wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v11);
      return (unsigned int)v4;
    }
    if ( *((_DWORD *)this + 18) )
    {
      *((_DWORD *)this + 18) = 1;
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 336LL))(*((_QWORD *)this + 3), 1LL);
      v4 = v6;
      if ( v6 >= 0 )
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
          (const char *)(unsigned int)v6);
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
      wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v11);
      v4 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x380,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v4);
    }
    goto LABEL_18;
  }
  v4 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x375,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)0x8000FFFFLL);
  return (unsigned int)v4;
}
