/*
 * XREFs of ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180097FD0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSize@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAUSize@Foundation@4@@Z @ 0x18008FE1C (-GetSize@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAUSize@Foundatio.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18008FEE8 (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?StartActivity@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXPEBG@Z @ 0x1800920AC (-StartActivity@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180094B10 (--1-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x1800990F8 (-PositionView@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009C0F8 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009C508 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x1801D040C (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CActionCenterExperienceManager::OnEventQueued(
        CActionCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        HSTRING a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  const unsigned __int16 *StringRawBuffer; // r14
  char v7; // si
  int v8; // eax
  const struct _TlgProvider_t *v9; // rax
  const void *v10; // rdx
  __int64 v11; // rax
  int Size; // eax
  wil::details::in1diag3 *v13; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  int v17; // ebx
  const struct _TlgProvider_t *v18; // rax
  _QWORD v20[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v21[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+78h] [rbp-90h]
  int *v23; // [rsp+80h] [rbp-88h]
  int *v24; // [rsp+88h] [rbp-80h]
  int v25; // [rsp+90h] [rbp-78h] BYREF
  char v26; // [rsp+94h] [rbp-74h]
  int v27; // [rsp+B8h] [rbp-50h] BYREF
  const char *v28; // [rsp+C0h] [rbp-48h]
  __int64 v29; // [rsp+C8h] [rbp-40h]
  char v30; // [rsp+D0h] [rbp-38h]
  __int64 v31; // [rsp+D8h] [rbp-30h]
  _BYTE v32[144]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v33; // [rsp+170h] [rbp+68h]
  __int64 v34; // [rsp+178h] [rbp+70h]
  __int64 v35; // [rsp+180h] [rbp+78h]
  __int64 v36; // [rsp+188h] [rbp+80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+198h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v20[1] = -2LL;
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  v21[1] = 0LL;
  v21[2] = v21;
  v21[3] = 0LL;
  LODWORD(v22) = 0;
  v23 = &v27;
  v24 = &v25;
  v25 = 0;
  v26 = 0;
  v30 = 0;
  v27 = 0;
  v28 = "EM_EventQueuedActivity";
  v29 = 0LL;
  v7 = 1;
  v31 = 1LL;
  v33 = 0LL;
  v34 = 0LL;
  memset(v32, 0, sizeof(v32));
  v35 = 0LL;
  v36 = 0LL;
  v21[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_EventQueuedActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_EventQueuedActivity::StartActivity(
    (NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_EventQueuedActivity *)v21,
    StringRawBuffer);
  if ( CompareStringOrdinal(StringRawBuffer, -1, L"SipVisibilityChanged", -1, 0) == 2 )
  {
    v8 = CActionCenterExperienceManager::PositionView((char *)this - 104, *((unsigned int *)this + 58));
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x516,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_27;
    }
    v9 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v9 <= 5u )
      goto LABEL_27;
    v10 = &unk_1802597C2;
LABEL_26:
    TlgWrite(v9, v10, (LPCGUID)(v24 + 2), 0LL, 2u, &pData);
    goto LABEL_27;
  }
  if ( CompareStringOrdinal(StringRawBuffer, -1, L"InitializationComplete", -1, 0) == 2 )
  {
    CSingleViewShellExperience::LaunchCompleted((CActionCenterExperienceManager *)((char *)this + 16));
    v9 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v9 <= 5u )
      goto LABEL_27;
    v10 = &unk_18025979C;
    goto LABEL_26;
  }
  if ( CompareStringOrdinal(StringRawBuffer, -1, L"ResetViewSize", -1, 0) != 2 )
  {
    v9 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v9 <= 5u )
      goto LABEL_27;
    v10 = &unk_180259780;
    goto LABEL_26;
  }
  v20[0] = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a4 + 8LL))(a4);
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&pData, (const WCHAR **)&off_1802146D0);
  Size = Windows::Internal::ShellHelpers::PropertySetHelper::GetSize(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)v20,
           *(HSTRING *)(v11 + 24),
           (CActionCenterExperienceManager *)((char *)this + 60));
  v13 = retaddr;
  if ( Size >= 0 )
  {
    v16 = CActionCenterExperienceManager::PositionView((char *)this - 104, *((unsigned int *)this + 58));
    v17 = v16;
    if ( v16 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x61F,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
    v13 = retaddr;
    if ( v17 >= 0 )
      goto LABEL_19;
    v14 = (unsigned int)v17;
    v15 = 1317LL;
  }
  else
  {
    v14 = (unsigned int)Size;
    v15 = 1316LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v13,
    (void *)v15,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)v14);
  v7 = 0;
LABEL_19:
  if ( v7 )
  {
    v18 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v18 > 5u )
      TlgWrite(v18, &unk_180259763, (LPCGUID)(v24 + 2), 0LL, 2u, &pData);
  }
  if ( v20[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20[0] + 16LL))(v20[0]);
LABEL_27:
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v21);
  v21[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_EventQueuedActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v21);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v21);
  return 0LL;
}
