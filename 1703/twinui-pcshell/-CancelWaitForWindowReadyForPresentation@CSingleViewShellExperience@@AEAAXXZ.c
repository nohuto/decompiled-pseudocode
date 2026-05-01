/*
 * XREFs of ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x180182EA0
 * Callers:
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1801800AC (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x180180EEC (-ResetViews@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x180181CB0 (-OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowSta.c)
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180181FD4 (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18018300C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Start@PEBGPEBG_N@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0$$QEA_N@Z @ 0x180184C28 (--$Start@PEBGPEBG_N@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@SA-AV.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18018B014 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18018B440 (--1-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18018BE38 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation(HSTRING *this)
{
  int v2; // eax
  int v3; // eax
  __int64 v4; // rcx
  _QWORD v5[3]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v6[40]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A0h] [rbp+98h]

  v5[2] = -2LL;
  v5[0] = WindowsGetStringRawBuffer(this[2], 0LL);
  v5[1] = WindowsGetStringRawBuffer(this[1], 0LL);
  SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation::Start<unsigned short const *,unsigned short const *,bool>((SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation *)v6);
  if ( this[15] )
  {
    v5[0] = 0LL;
    v2 = (**(__int64 (__fastcall ***)(HSTRING, GUID *, _QWORD *))this[3])(
           this[3],
           &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
           v5);
    if ( v2 >= 0 )
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD, HSTRING))(*(_QWORD *)v5[0] + 88LL))(v5[0], this[15]);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x392,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v3);
      this[15] = 0LL;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x390,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v2);
    }
    v4 = v5[0];
    if ( v5[0] )
    {
      v5[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v6);
  v6[0] = &SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v6);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v6);
}
