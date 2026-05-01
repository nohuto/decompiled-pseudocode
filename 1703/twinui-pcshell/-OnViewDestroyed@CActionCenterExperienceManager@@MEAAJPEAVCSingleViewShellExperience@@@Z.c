/*
 * XREFs of ?OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180093BD0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180033754 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18008D8A4 (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180090BE8 (--1-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Launch@CActionCenterExperienceManager@@AEAAJXZ @ 0x180092BE4 (-Launch@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180095F08 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180096318 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@I@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@$$QEAI@Z @ 0x180096E10 (--$Start@I@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@S.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_225a8ef33fe169d3693d3572a43b01bf___ @ 0x1800972BC (Windows--Internal--ComTaskPool--WrapWithTask__lambda_225a8ef33fe169d3693d3572a43b01bf___.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18018329C (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CActionCenterExperienceManager::OnViewDestroyed(
        CActionCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  IUnknown *v3; // rbx
  DWORD CurrentThreadId; // eax
  int v5; // ebx
  __int64 v6; // rcx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  HRESULT v9; // eax
  int v10; // eax
  const struct _TlgProvider_t *v11; // rax
  int v13[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C8h]
  _QWORD v15[40]; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+188h] [rbp+80h] BYREF
  HSTRING string; // [rsp+1A0h] [rbp+98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v14 = -2LL;
  v13[0] = *((_DWORD *)this + 58);
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::Start<unsigned int>((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity *)v15);
  *((_DWORD *)this + 59) = *((_DWORD *)this + 58);
  *((_DWORD *)this + 58) = 2;
  v3 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_225a8ef33fe169d3693d3572a43b01bf___(v13);
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v3, 0LL);
  v6 = *(_QWORD *)v13;
  if ( *(_QWORD *)v13 )
  {
    *(_QWORD *)v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v5 >= 0 )
  {
    string = 0LL;
    v9 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.ActionCenter", 0x2Du, &hstringHeader, &string);
    if ( v9 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
      __debugbreak();
    }
    v10 = CSingleViewShellExperience::SetArgs((HSTRING *)this + 2, string);
    v5 = v10;
    if ( v10 < 0 )
    {
      v8 = 1262LL;
LABEL_13:
      v7 = (unsigned int)v10;
      goto LABEL_14;
    }
    if ( *((_DWORD *)this + 59) == 1 )
    {
      v13[0] = 1;
      SHRegGetBOOL(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
        L"AllowAutoAppRestartOnCrash",
        v13);
      if ( v13[0] )
      {
        v10 = CActionCenterExperienceManager::Launch((CActionCenterExperienceManager *)((char *)this - 96));
        v5 = v10;
        if ( v10 < 0 )
        {
          v8 = 1272LL;
          goto LABEL_13;
        }
        v11 = NotificationCenterLogging::Provider();
        if ( *(_DWORD *)v11 > 5u )
          TlgWrite(v11, &unk_1801F73EA, (LPCGUID)(v15[6] + 8LL), 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&hstringHeader);
      }
    }
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v15);
    v5 = 0;
    goto LABEL_18;
  }
  v7 = (unsigned int)v5;
  v8 = 1259LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)v7);
LABEL_18:
  v15[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v15);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v15);
  return (unsigned int)v5;
}
