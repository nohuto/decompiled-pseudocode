/*
 * XREFs of ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800936D0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetSize@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAUSize@Foundation@4@@Z @ 0x18008D7D8 (-GetSize@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAUSize@Foundatio.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18008D8A4 (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180090BE8 (--1-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x18009461C (-PositionView@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180095F08 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180096318 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@AEAPEBG@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@AEAPEBG@Z @ 0x180096D54 (--$Start@AEAPEBG@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetr.c)
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x180180E40 (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CActionCenterExperienceManager::OnEventQueued(
        CActionCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        HSTRING a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  const WCHAR *StringRawBuffer; // rsi
  int v7; // eax
  const struct _TlgProvider_t *v8; // rax
  const void *v9; // rdx
  HSTRING_HEADER *v10; // rax
  char v11; // di
  int Size; // eax
  wil::details::in1diag3 *v13; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  int v17; // ebx
  const struct _TlgProvider_t *v18; // rax
  struct Windows::Foundation::Collections::IPropertySet *v20; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C8h]
  __int64 v22; // [rsp+48h] [rbp-C0h]
  _QWORD v23[6]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+88h] [rbp-80h]
  HSTRING_HEADER pData; // [rsp+198h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v22 = -2LL;
  LODWORD(v21) = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  v20 = (struct Windows::Foundation::Collections::IPropertySet *)StringRawBuffer;
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_EventQueuedActivity::Start<unsigned short const * &>((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_EventQueuedActivity *)v23);
  if ( CompareStringOrdinal(StringRawBuffer, -1, L"SipVisibilityChanged", -1, 0) == 2 )
  {
    v7 = CActionCenterExperienceManager::PositionView((char *)this - 96, *((unsigned int *)this + 58));
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x480,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_27;
    }
    v8 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v8 <= 5u )
      goto LABEL_27;
    v9 = &unk_1801F75DF;
LABEL_26:
    TlgWrite(v8, v9, (LPCGUID)(v24 + 8), 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&pData);
    goto LABEL_27;
  }
  if ( CompareStringOrdinal(StringRawBuffer, -1, L"InitializationComplete", -1, 0) == 2 )
  {
    CSingleViewShellExperience::LaunchCompleted((CActionCenterExperienceManager *)((char *)this + 16));
    v8 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v8 <= 5u )
      goto LABEL_27;
    v9 = &unk_1801F75B9;
    goto LABEL_26;
  }
  if ( CompareStringOrdinal(StringRawBuffer, -1, L"ResetViewSize", -1, 0) != 2 )
  {
    v8 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v8 <= 5u )
      goto LABEL_27;
    v9 = &unk_1801F759D;
    goto LABEL_26;
  }
  v20 = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a4 + 8LL))(a4);
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&pData, (const WCHAR **)&off_1801BD020);
  v11 = 1;
  LODWORD(v21) = 1;
  Size = Windows::Internal::ShellHelpers::PropertySetHelper::GetSize(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v20,
           (HSTRING)v10[1].Reserved.Reserved1,
           (CActionCenterExperienceManager *)((char *)this + 60));
  v13 = retaddr;
  if ( Size >= 0 )
  {
    v16 = CActionCenterExperienceManager::PositionView((char *)this - 96, *((unsigned int *)this + 58));
    v17 = v16;
    if ( v16 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x579,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
    v13 = retaddr;
    if ( v17 >= 0 )
      goto LABEL_19;
    v14 = (unsigned int)v17;
    v15 = 1167LL;
  }
  else
  {
    v14 = (unsigned int)Size;
    v15 = 1166LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v13,
    (void *)v15,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)v14);
  v11 = 0;
LABEL_19:
  if ( v11 )
  {
    v18 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v18 > 5u )
      TlgWrite(v18, &unk_1801F7580, (LPCGUID)(v24 + 8), 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&pData);
  }
  if ( v20 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v20 + 16LL))(v20);
LABEL_27:
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v23);
  v23[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_EventQueuedActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v23);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v23);
  return 0LL;
}
