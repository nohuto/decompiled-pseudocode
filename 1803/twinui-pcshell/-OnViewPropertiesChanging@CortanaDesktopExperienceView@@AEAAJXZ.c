/*
 * XREFs of ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180064B10
 * Callers:
 *     ?OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1800618D0 (-OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 *     ?ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x180066450 (-ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FA24 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x180061B68 (-IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ @ 0x180061BBC (-EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180062350 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180064498 (-ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?get_DesiredSize@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUSize@Foundation@Windows@@@Z @ 0x180068220 (-get_DesiredSize@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUSize@Foundation@Windows@@@Z.c)
 *     ?get_PropertySet@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180068280 (-get_PropertySet@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAPEAUIPropertySet@Collections@Founda.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18006CF20 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800750CC (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007523C (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18007DE3C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnSuggestionsShown@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180085400 (-OnSuggestionsShown@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnSuggestionsHidden@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180085450 (-OnSuggestionsHidden@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180085E80 (-IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18008AAB0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180093D88 (-reset@-$shared_object@V-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BFI@AA @ 0x1800A365C (--_9IPropertyValue@Foundation@Windows@@$BFI@AA.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$03@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18015AAA4 (--$_TlgWriteActivityAutoStop@$0A@$03@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CortanaDesktopExperienceView::OnViewPropertiesChanging(CortanaDesktopExperienceView *this)
{
  int *v2; // rbx
  void *v3; // rsi
  __int64 v4; // rbx
  const GUID *v5; // rax
  TwinUI::Cortana::ShellExperienceView *v6; // rcx
  __int64 (__fastcall *v7)(TwinUI::Cortana::ShellExperienceView *__hidden, struct Windows::Foundation::Collections::IPropertySet **); // rax
  int PropertySet; // eax
  int PropVal; // ebx
  int v10; // r14d
  HRESULT v11; // eax
  int v12; // eax
  struct Windows::Foundation::IPropertyValue *v13; // rcx
  int v14; // eax
  int v15; // r15d
  HRESULT v16; // eax
  int v17; // eax
  CortanaFlightingHelpers *v18; // rcx
  int v19; // eax
  char v20; // bl
  bool v21; // si
  int v22; // eax
  TwinUI::Cortana::ShellExperienceView *v23; // rcx
  struct Windows::Foundation::Size *v24; // rdx
  __int64 (__fastcall *v25)(TwinUI::Cortana::ShellExperienceView *__hidden, struct Windows::Foundation::Size *); // rax
  int DesiredSize; // eax
  char IsViewVisible; // al
  int v28; // eax
  struct Windows::Foundation::Collections::IPropertySet *v29; // rcx
  CortanaExperienceManagerNotification *v31; // rcx
  __int64 v32; // rax
  void (__fastcall *v33)(CortanaExperienceManagerNotification *__hidden); // rax
  float v34; // xmm0_4
  float v35; // xmm1_4
  int v36; // ebx
  HMONITOR v37; // r8
  HMONITOR v38; // r8
  int v39; // eax
  HANDLE ProcessHeap; // rax
  int UserDataCount; // [rsp+28h] [rbp-E0h]
  struct Windows::Foundation::IPropertyValue *v42; // [rsp+38h] [rbp-D0h] BYREF
  struct Windows::Foundation::IPropertyValue *v43; // [rsp+40h] [rbp-C8h] BYREF
  int v44; // [rsp+48h] [rbp-C0h] BYREF
  int v45; // [rsp+4Ch] [rbp-BCh] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v46; // [rsp+50h] [rbp-B8h] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp-B0h] BYREF
  WINBOOL v48; // [rsp+5Ch] [rbp-ACh] BYREF
  WINBOOL v49[2]; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID Context; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID v51; // [rsp+70h] [rbp-98h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v52; // [rsp+78h] [rbp-90h] BYREF
  LPVOID v53; // [rsp+80h] [rbp-88h] BYREF
  PSRWLOCK SRWLock; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+90h] [rbp-78h] BYREF
  __int64 v56; // [rsp+A0h] [rbp-68h]
  RECT rc; // [rsp+A8h] [rbp-60h] BYREF
  void **v58; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v59[3]; // [rsp+C0h] [rbp-48h] BYREF
  int v60; // [rsp+D8h] [rbp-30h]
  int *v61; // [rsp+E0h] [rbp-28h]
  int *v62; // [rsp+E8h] [rbp-20h]
  int v63; // [rsp+F0h] [rbp-18h] BYREF
  char v64; // [rsp+F4h] [rbp-14h]
  _BYTE v65[32]; // [rsp+F8h] [rbp-10h] BYREF
  int v66; // [rsp+118h] [rbp+10h] BYREF
  const char *v67; // [rsp+120h] [rbp+18h]
  LPVOID lpMem; // [rsp+128h] [rbp+20h]
  char v69; // [rsp+130h] [rbp+28h]
  __int64 v70; // [rsp+138h] [rbp+30h]
  _BYTE v71[144]; // [rsp+140h] [rbp+38h] BYREF
  _QWORD v72[3]; // [rsp+1D0h] [rbp+C8h] BYREF
  __int64 v73; // [rsp+1E8h] [rbp+E0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+1F8h] [rbp+F0h] BYREF
  HSTRING string; // [rsp+210h] [rbp+108h] BYREF
  HSTRING_HEADER v76; // [rsp+218h] [rbp+110h] BYREF
  HSTRING v77; // [rsp+230h] [rbp+128h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+238h] [rbp+130h] BYREF
  void *v79; // [rsp+248h] [rbp+140h]
  int v80; // [rsp+250h] [rbp+148h]
  int v81; // [rsp+254h] [rbp+14Ch]
  WINBOOL *v82; // [rsp+258h] [rbp+150h]
  __int64 v83; // [rsp+260h] [rbp+158h]
  wil::details::in1diag3 *retaddr; // [rsp+2A0h] [rbp+198h]

  v56 = -2LL;
  v59[0] = 0LL;
  v59[1] = &v58;
  v59[2] = 0LL;
  v60 = 0;
  v61 = &v66;
  v62 = &v63;
  v63 = 0;
  v64 = 0;
  v69 = 0;
  v66 = 0;
  v67 = "CortanaExperienceManager_OnViewPropertiesChanging";
  lpMem = 0LL;
  v70 = 1LL;
  v72[0] = 0LL;
  memset_0(v71, 0, sizeof(v71));
  v72[1] = 0LL;
  v72[2] = 0LL;
  v73 = 0LL;
  v58 = &CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v58,
    &SRWLock);
  v2 = v62;
  Context = 0LL;
  v3 = &qword_180438828;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_180438828;
    qword_180438828 = &LockScreenServiceLogging::`vftable';
    qword_180438840 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438828, qword_180438840);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &qword_180438828);
  }
  if ( **((_DWORD **)Context + 1) <= 4u )
    *((_QWORD *)v2 + 1) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v2 + 2));
  *v2 = 1;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v51 = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v48, &v51) && v48 )
  {
    v51 = &qword_180438828;
    qword_180438828 = &LockScreenServiceLogging::`vftable';
    qword_180438840 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438828, qword_180438840);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &qword_180438828);
  }
  v4 = *((_QWORD *)v51 + 1);
  if ( *(_DWORD *)v4 > 4u )
  {
    v49[0] = GetCurrentThreadId();
    v82 = v49;
    v83 = 4LL;
    v5 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v58);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18038C203 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&EventDescriptor.Level = 260;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v4 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v79 = &unk_18038C20E;
    v80 = 77;
    v81 = 1;
    EventWriteTransfer(*(_QWORD *)(v4 + 32), &EventDescriptor, (LPCGUID)(v62 + 2), v5, 3u, &UserData);
  }
  if ( !v60 )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v59);
  v46 = 0LL;
  v6 = (TwinUI::Cortana::ShellExperienceView *)*((_QWORD *)this + 18);
  v7 = *(__int64 (__fastcall **)(TwinUI::Cortana::ShellExperienceView *__hidden, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v6 + 64LL);
  if ( v7 == TwinUI::Cortana::ShellExperienceView::get_PropertySet )
    PropertySet = TwinUI::Cortana::ShellExperienceView::get_PropertySet(v6, &v46);
  else
    PropertySet = v7(v6, &v46);
  PropVal = PropertySet;
  if ( PropertySet < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45C,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)PropertySet,
      UserDataCount);
    goto LABEL_51;
  }
  v52 = v46;
  if ( v46 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v46 + 8LL))(v46);
  v10 = *((_DWORD *)this + 34);
  string = 0LL;
  v11 = WindowsCreateStringReference(L"WindowMode", 0xAu, &hstringHeader, &string);
  if ( v11 < 0 )
  {
    RaiseException(v11, 1u, 0, 0LL);
    goto LABEL_69;
  }
  v44 = 0;
  v42 = 0LL;
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v52,
              string,
              &v42);
  LODWORD(v3) = 47;
  if ( PropVal < 0 )
  {
LABEL_70:
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v42);
    goto LABEL_26;
  }
  v12 =  Windows::Foundation::IPropertyValue::`vcall'{88,{flat}}(v42, &v44);
  PropVal = v12;
  if ( v12 < 0 )
  {
LABEL_69:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)(unsigned int)v3,
      (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v12,
      UserDataCount);
    goto LABEL_70;
  }
  v13 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  PropVal = 0;
LABEL_26:
  v14 = v44;
  if ( PropVal < 0 )
    v14 = 0;
  *((_DWORD *)this + 34) = v14;
  v15 = *((_DWORD *)this + 33);
  v77 = 0LL;
  v16 = WindowsCreateStringReference(L"ViewMode", 8u, &v76, &v77);
  if ( v16 < 0 )
  {
    RaiseException(v16, 1u, 0, 0LL);
    goto LABEL_72;
  }
  v45 = 0;
  v43 = 0LL;
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v52,
              v77,
              &v43);
  if ( PropVal < 0 )
  {
LABEL_73:
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v43);
    goto LABEL_34;
  }
  v17 =  Windows::Foundation::IPropertyValue::`vcall'{88,{flat}}(v43, &v45);
  PropVal = v17;
  if ( v17 < 0 )
  {
LABEL_72:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)(unsigned int)v3,
      (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v17,
      UserDataCount);
    goto LABEL_73;
  }
  v18 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(CortanaFlightingHelpers *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  PropVal = 0;
LABEL_34:
  v19 = v45;
  if ( PropVal < 0 )
    v19 = 0;
  *((_DWORD *)this + 33) = v19;
  v20 = *((_DWORD *)this + 34) != 3;
  if ( CortanaFlightingHelpers::IsImmersiveSearchEnabled(v18) && *((_DWORD *)this + 33) == 6 )
    v20 = 0;
  v21 = 0;
  v22 = *((_DWORD *)this + 34);
  if ( v10 == 9 )
  {
    if ( v22 != 9 )
    {
      v21 = 1;
      *((_BYTE *)this + 209) = 0;
    }
  }
  else if ( v22 == 9 )
  {
    *((_BYTE *)this + 209) = 1;
  }
  if ( v20 != *((_BYTE *)this + 128) )
  {
    *((_BYTE *)this + 128) = v20;
    v31 = (CortanaExperienceManagerNotification *)*((_QWORD *)this + 12);
    v32 = *(_QWORD *)v31;
    if ( v20 )
    {
      v33 = *(void (__fastcall **)(CortanaExperienceManagerNotification *__hidden))(v32 + 120);
      if ( v33 == CortanaExperienceManagerNotification::OnSuggestionsShown )
      {
        CortanaExperienceManagerNotification::OnSuggestionsShown(v31);
        goto LABEL_41;
      }
    }
    else
    {
      v33 = *(void (__fastcall **)(CortanaExperienceManagerNotification *__hidden))(v32 + 128);
      if ( v33 == CortanaExperienceManagerNotification::OnSuggestionsHidden )
      {
        CortanaExperienceManagerNotification::OnSuggestionsHidden(v31);
        goto LABEL_41;
      }
    }
    ((void (*)(void))v33)();
  }
LABEL_41:
  if ( *((_BYTE *)this + 240) )
  {
    v34 = *((float *)this + 43);
    rc.left = (int)v34;
    v35 = *((float *)this + 44);
    rc.top = (int)v35;
    rc.right = (int)(float)(v34 + *((float *)this + 45));
    rc.bottom = (int)(float)(v35 + *((float *)this + 46));
    v36 = (unsigned int)MonitorFromRect(&rc, 0);
    *((float *)this + 47) = (float)(int)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                          (ExperienceManagerUtils *)0x1AC,
                                          v36,
                                          v37);
    *((float *)this + 48) = (float)(int)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                          (ExperienceManagerUtils *)0x1EC,
                                          v36,
                                          v38);
LABEL_45:
    IsViewVisible = CortanaDesktopExperienceView::IsViewVisible(this);
    v28 = CortanaDesktopExperienceView::PositionCortanaWindow(this, IsViewVisible, v21);
    if ( v28 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x48D,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v28,
        UserDataCount);
    if ( v15 == 3 )
    {
      CortanaDesktopExperienceView::EnsureForegroundRightsForAmbientModeIfNeeded(this);
      if ( *((_DWORD *)this + 33) == 4 )
      {
        v39 = CortanaDesktopExperienceView::ReturnForegroundToLockScreenCurtainIfNeeded(this);
        if ( v39 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x49B,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v39,
            UserDataCount);
      }
    }
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop((CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart *)&v58);
    PropVal = 0;
    goto LABEL_49;
  }
  v23 = (TwinUI::Cortana::ShellExperienceView *)*((_QWORD *)this + 18);
  v24 = (CortanaDesktopExperienceView *)((char *)this + 188);
  v25 = *(__int64 (__fastcall **)(TwinUI::Cortana::ShellExperienceView *__hidden, struct Windows::Foundation::Size *))(*(_QWORD *)v23 + 48LL);
  if ( v25 == TwinUI::Cortana::ShellExperienceView::get_DesiredSize )
    DesiredSize = TwinUI::Cortana::ShellExperienceView::get_DesiredSize(v23, v24);
  else
    DesiredSize = v25(v23, v24);
  PropVal = DesiredSize;
  if ( DesiredSize >= 0 )
    goto LABEL_45;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x48B,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)DesiredSize,
    UserDataCount);
LABEL_49:
  if ( v52 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v52 + 16LL))(v52);
LABEL_51:
  v29 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v29 + 16LL))(v29);
  }
  v58 = &CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy((CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart *)&v58);
  wil::details::shared_object<wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v73);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)v72);
  if ( v69 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
    v69 = 0;
  }
  lpMem = 0LL;
  if ( v63 == 1 )
  {
    v63 = 2;
    v53 = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v49[1], &v53) && v49[1] )
    {
      v53 = &qword_180438828;
      qword_180438828 = &LockScreenServiceLogging::`vftable';
      qword_180438840 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438828, qword_180438840);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &qword_180438828);
    }
    _TlgWriteActivityAutoStop<0,4>(*((_QWORD *)v53 + 1), v65);
  }
  v63 = 3;
  if ( v60 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v59);
  return (unsigned int)PropVal;
}
