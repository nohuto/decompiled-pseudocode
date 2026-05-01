/*
 * XREFs of ?RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ @ 0x18018DF2C
 * Callers:
 *     ?EnableSessionIdleNotifications@DesktopSingleViewShellExperiencePersonality@@UEAAJPEAUIServiceProvider@@@Z @ 0x18018DE90 (-EnableSessionIdleNotifications@DesktopSingleViewShellExperiencePersonality@@UEAAJPEAUIServicePr.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UITaskbarLayoutParserTest@@UIPWSLayoutParser@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002AD10 (-Release@-$RuntimeClass@U-$InterfaceList@U-$ChainInterfaces@UITaskbarLayoutParserTest@@UIPWSLayo.c)
 *     ?OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z @ 0x180180808 (-OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z.c)
 *     MakeSessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___ @ 0x18018E5D0 (MakeSessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DesktopSingleViewShellExperiencePersonality::RegisterSessionIdleDetector(
        DesktopSingleViewShellExperiencePersonality *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // esi
  int v5; // eax
  _QWORD v7[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v9; // [rsp+50h] [rbp+8h] BYREF
  volatile signed __int32 *v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 1) + 96LL);
  v7[0] = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v7[1] = this;
  MakeSessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_(&v10, v7);
  v3 = (*(__int64 (__fastcall **)(_QWORD, volatile signed __int32 *, char *))(**((_QWORD **)this + 3) + 32LL))(
         *((_QWORD *)this + 3),
         v10,
         (char *)this + 32);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), &v9);
    if ( v5 >= 0 )
      CSingleViewShellExperience::OnSessionIdleStateChanged(*((CSingleViewShellExperience **)this + 1), v9);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5E,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
        (const char *)(unsigned int)v5);
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x58,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
      (const char *)(unsigned int)v3);
  }
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<ITaskbarLayoutParserTest,IPWSLayoutParser,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v10);
  return v4;
}
