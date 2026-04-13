/*
 * XREFs of ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180058824
 * Callers:
 *     ?RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@1@Z @ 0x1800585A0 (-RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x180002708 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002F6D0 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180055F80 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04U.c)
 *     ?StartActivity@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x180056500 (-StartActivity@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@Content.c)
 *     ?Stop@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAX_NPEBD@Z @ 0x180056694 (-Stop@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 *     ?CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005836C (-CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCreativeRule@R.c)
 *     ??R?$_Func_class@JPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@U_Nil@7@U87@U87@U87@U87@@std@@QEBAJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@1@@Z @ 0x18005A410 (--R-$_Func_class@JPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18005A504 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_b1678f9b9404a342b907309c6392cb38___ @ 0x18005B830 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_b1678f9b9404a342b90.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de9e0eff18a9873___ @ 0x18005C400 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x18005F0B4 (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800610B4 (-CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsoft.c)
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x180061CD8 (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VISettingsContai.c)
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180062404 (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180063984 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 *     ?AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x18006A720 (-AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCreat.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B4307 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17 #try_helpers=1
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterTriggerInternal(
        __int64 a1,
        __int64 a2,
        HSTRING a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  int v9; // r13d
  __int64 *v10; // rdi
  _QWORD *v11; // rbx
  PCWSTR StringRawBuffer; // rax
  char v13; // r15
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  const WCHAR *v19; // rbx
  const WCHAR *v20; // rax
  int v21; // eax
  int v22; // eax
  volatile signed __int32 *v23; // rbx
  volatile signed __int32 *v24; // rbx
  volatile signed __int32 *v25; // rbx
  int v26; // eax
  int v27; // eax
  bool v28; // zf
  char v29; // al
  wchar_t **i; // rax
  wchar_t **v31; // rax
  wchar_t **v32; // rcx
  __int64 (__fastcall *v33)(wchar_t **, _QWORD *); // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  int v36; // eax
  _QWORD *v37; // rdx
  _QWORD *v38; // r13
  __int64 v39; // rbx
  _QWORD *v40; // rax
  volatile signed __int32 *v41; // rbx
  _DWORD *j; // rax
  char *v43; // rax
  char *v44; // rcx
  __int64 (__fastcall *v45)(char *, _QWORD *); // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  int v48; // eax
  _QWORD *v49; // rax
  int v50; // eax
  int v51; // eax
  _QWORD *v52; // rdx
  volatile signed __int32 *v53; // rbx
  volatile signed __int32 *v54; // rbx
  volatile signed __int32 *v55; // rbx
  __int64 v56; // [rsp+30h] [rbp-318h] BYREF
  HSTRING v57; // [rsp+38h] [rbp-310h] BYREF
  __int128 v58; // [rsp+40h] [rbp-308h]
  __int64 *v59; // [rsp+50h] [rbp-2F8h]
  int v60; // [rsp+60h] [rbp-2E8h] BYREF
  HSTRING v61; // [rsp+68h] [rbp-2E0h] BYREF
  HSTRING v62; // [rsp+70h] [rbp-2D8h] BYREF
  _QWORD *v63; // [rsp+78h] [rbp-2D0h]
  UINT32 v64; // [rsp+80h] [rbp-2C8h] BYREF
  HSTRING string; // [rsp+88h] [rbp-2C0h] BYREF
  UINT32 length; // [rsp+90h] [rbp-2B8h] BYREF
  HSTRING v67; // [rsp+98h] [rbp-2B0h] BYREF
  __int64 v68; // [rsp+A0h] [rbp-2A8h] BYREF
  volatile signed __int32 *v69; // [rsp+A8h] [rbp-2A0h]
  __int64 *v70; // [rsp+B0h] [rbp-298h]
  __int64 v71; // [rsp+B8h] [rbp-290h]
  __int64 v72; // [rsp+C0h] [rbp-288h]
  __int64 v73; // [rsp+C8h] [rbp-280h] BYREF
  __int64 v74; // [rsp+D8h] [rbp-270h] BYREF
  __int64 v75; // [rsp+E8h] [rbp-260h] BYREF
  __int64 v76; // [rsp+F8h] [rbp-250h] BYREF
  volatile signed __int32 *v77; // [rsp+100h] [rbp-248h]
  __int64 v78; // [rsp+108h] [rbp-240h] BYREF
  __int64 v79[3]; // [rsp+118h] [rbp-230h] BYREF
  __int128 v80; // [rsp+130h] [rbp-218h] BYREF
  __int128 v81; // [rsp+140h] [rbp-208h] BYREF
  __int64 *v82; // [rsp+150h] [rbp-1F8h]
  __int128 v83; // [rsp+160h] [rbp-1E8h]
  __int64 *v84; // [rsp+170h] [rbp-1D8h]
  char v85; // [rsp+178h] [rbp-1D0h]
  _QWORD v86[3]; // [rsp+180h] [rbp-1C8h] BYREF
  _QWORD *v87; // [rsp+198h] [rbp-1B0h]
  _QWORD v88[3]; // [rsp+1A0h] [rbp-1A8h] BYREF
  _QWORD *v89; // [rsp+1B8h] [rbp-190h]
  _QWORD v90[4]; // [rsp+1C0h] [rbp-188h] BYREF
  int v91; // [rsp+1E0h] [rbp-168h]
  int *v92; // [rsp+1E8h] [rbp-160h]
  int *v93; // [rsp+1F0h] [rbp-158h]
  int v94; // [rsp+1F8h] [rbp-150h] BYREF
  char v95; // [rsp+1FCh] [rbp-14Ch]
  int v96; // [rsp+220h] [rbp-128h] BYREF
  const char *v97; // [rsp+228h] [rbp-120h]
  __int64 v98; // [rsp+230h] [rbp-118h]
  char v99; // [rsp+238h] [rbp-110h]
  __int64 v100; // [rsp+240h] [rbp-108h]
  _QWORD v101[23]; // [rsp+248h] [rbp-100h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+348h] [rbp+0h]

  v72 = -2LL;
  v56 = a2;
  v67 = a3;
  v70 = a4;
  v63 = (_QWORD *)a5;
  v71 = a5;
  v6 = *a4;
  v90[1] = 0LL;
  v90[2] = v90;
  v90[3] = 0LL;
  v91 = 0;
  v92 = &v96;
  v93 = &v94;
  v94 = 0;
  v95 = 0;
  v99 = 0;
  v96 = 0;
  v97 = "TriggerManagerRegisterActivity";
  v98 = 0LL;
  v100 = 1LL;
  v101[18] = 0LL;
  v101[19] = 0LL;
  memset_0(v101, 0, 0x90uLL);
  v101[20] = 0LL;
  v101[21] = 0LL;
  v90[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::StartActivity(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity *)v90,
    (const char *)(v6 + 8));
  WindowsDeleteString(0LL);
  v57 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v56 + 144LL))(v56, &v57);
  if ( v7 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x87,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v7);
  v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v56 + 80LL))(v56, &v60);
  if ( v8 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x8A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v8);
  if ( !v60 )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x8B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)0x80070057LL);
  }
  v9 = Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption();
  Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainer(&v68, v56);
  v10 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
          &v73,
          &v68);
  *(_QWORD *)&v58 = v10;
  Windows::Services::TargetedContent::Internal::CreateTriggerKey(&string, v56);
  v11 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
          &v74,
          v10);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v13 = Windows::Services::TargetedContent::Internal::AlreadyRegistered(v11, StringRawBuffer);
  WindowsDeleteString(string);
  string = 0LL;
  v14 = (volatile signed __int32 *)v10[1];
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  if ( v13 )
  {
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::Stop(
      (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity *)v90,
      0,
      (const char *)(*a4 + 8));
    v15 = v69;
    if ( v69 )
    {
      if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
    WindowsDeleteString(v57);
    v57 = 0LL;
    v90[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::`vftable';
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v90);
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v90);
    v16 = (volatile signed __int32 *)a4[1];
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
    v17 = *(volatile signed __int32 **)(a5 + 8);
    if ( v17 && _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
    return 0LL;
  }
  else
  {
    v19 = WindowsGetStringRawBuffer(v57, &length);
    v20 = WindowsGetStringRawBuffer(v67, &v64);
    v21 = CompareStringOrdinal(v19, length, v20, v64, 1);
    v59 = a4;
    if ( v21 == 2 )
    {
      *(_QWORD *)&v58 = &v56;
      *((_QWORD *)&v58 + 1) = v90;
      v83 = v58;
      v84 = a4;
      v85 = 1;
      v62 = 0LL;
      WindowsDeleteString(0LL);
      v62 = 0LL;
      v26 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v56 + 48LL))(v56, &v62);
      if ( v26 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0xAB,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v26);
      v61 = 0LL;
      WindowsDeleteString(0LL);
      v61 = 0LL;
      v27 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v56 + 224LL))(v56, &v61);
      if ( v27 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0xAD,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v27);
      if ( !WindowsIsStringEmpty(v62) || (v28 = !WindowsIsStringEmpty(v61), v29 = 1, v28) )
        v29 = 0;
      if ( v29 )
      {
        wil::details::OriginateError();
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0xAE,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)0x80070057LL);
      }
      if ( (v9 & 8) != 0 )
      {
        for ( i = (wchar_t **)&unk_18015C3C0; ; i += 5 )
        {
          if ( i == &off_18015C410 )
          {
            v88[0] = &std::_Func_impl<std::_Callable_fun<long (*const)(Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>),0>,std::allocator<std::_Func_class<long,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,long,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
            v88[1] = Windows::Services::TargetedContent::Internal::NoopTriggerHandler;
            v89 = v88;
            goto LABEL_62;
          }
          if ( (v9 & *(_DWORD *)i) != 0 )
            break;
        }
        v31 = i + 1;
        v89 = 0LL;
        v32 = (wchar_t **)v31[3];
        if ( v32 )
        {
          v28 = v32 == v31;
          v33 = *(__int64 (__fastcall **)(wchar_t **, _QWORD *))*v32;
          if ( v28 )
            v34 = v33(v32, v88);
          else
            v34 = v33(v32, 0LL);
          v89 = (_QWORD *)v34;
        }
        else
        {
          v89 = 0LL;
        }
LABEL_62:
        v35 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
                &v75,
                a4);
        v36 = std::_Func_class<long,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::operator()(
                v88,
                v56,
                v35);
        if ( v36 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0xB3,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
            (const char *)(unsigned int)v36);
        if ( v89 )
        {
          v37 = v88;
          LOBYTE(v37) = v89 != v88;
          (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v89 + 32LL))(v89, v37);
        }
      }
      v28 = (v9 & 0x20) == 0;
      v38 = v63;
      if ( !v28 )
      {
        v39 = *v63;
        v40 = Windows::Services::TargetedContent::Internal::CreateCreativeRule(&v76, v56);
        CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::AddRule(v39, v40);
        v41 = v77;
        if ( v77 )
        {
          if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v41)(v41);
            if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
          }
        }
      }
      for ( j = &unk_18015C370; ; j += 18 )
      {
        if ( j == (_DWORD *)&unk_18015C3B8 )
        {
          v86[0] = &std::_Func_impl<std::_Callable_fun<long (*const)(Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>),0>,std::allocator<std::_Func_class<long,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,long,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
          v86[1] = Windows::Services::TargetedContent::Internal::NoopTriggerHandler;
          v87 = v86;
          goto LABEL_82;
        }
        if ( *j == v60 )
          break;
      }
      v43 = (char *)(j + 2);
      v87 = 0LL;
      v44 = (char *)*((_QWORD *)v43 + 3);
      if ( v44 )
      {
        v28 = v44 == v43;
        v45 = **(__int64 (__fastcall ***)(char *, _QWORD *))v44;
        if ( v28 )
          v46 = v45(v44, v86);
        else
          v46 = v45(v44, 0LL);
        v87 = (_QWORD *)v46;
      }
      else
      {
        v87 = 0LL;
      }
LABEL_82:
      v47 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
              &v78,
              a4);
      v48 = std::_Func_class<long,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::operator()(
              v86,
              v56,
              v47);
      if ( v48 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0xBC,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v48);
      v49 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
              v79,
              &v68);
      v50 = Windows::Services::TargetedContent::Internal::SetTriggerRegistration(v49, v56);
      if ( v50 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0xBE,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v50);
      *(_QWORD *)&v58 = v90;
      *((_QWORD *)&v58 + 1) = a4;
      v80 = v58;
      v51 = Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de9e0eff18a9873___(
              v56,
              &v80);
      if ( v51 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0xC3,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v51);
      v85 = 0;
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::Stop(
        (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity *)v90,
        1u,
        (const char *)(*a4 + 8));
      if ( v87 )
      {
        v52 = v86;
        LOBYTE(v52) = v87 != v86;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v87 + 32LL))(v87, v52);
        v87 = 0LL;
      }
      WindowsDeleteString(v61);
      v61 = 0LL;
      WindowsDeleteString(v62);
      v62 = 0LL;
      v53 = v69;
      if ( v69 )
      {
        if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v53)(v53);
          if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
        }
      }
      WindowsDeleteString(v57);
      v57 = 0LL;
      v90[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::`vftable';
      wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v90);
      wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v90);
      v54 = (volatile signed __int32 *)a4[1];
      if ( v54 )
      {
        if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v54)(v54);
          if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
        }
      }
      v55 = (volatile signed __int32 *)v38[1];
      if ( v55 )
      {
        if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v55)(v55);
          if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
        }
      }
      return 0LL;
    }
    else
    {
      *(_QWORD *)&v58 = v90;
      *((_QWORD *)&v58 + 1) = &v67;
      v81 = v58;
      v82 = a4;
      v22 = Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_b1678f9b9404a342b907309c6392cb38___(
              v56,
              &v81);
      if ( v22 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x9B,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v22);
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::Stop(
        (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity *)v90,
        0,
        (const char *)(*a4 + 8));
      v23 = v69;
      if ( v69 )
      {
        if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        }
      }
      WindowsDeleteString(v57);
      v57 = 0LL;
      v90[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::`vftable';
      wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v90);
      wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v90);
      v24 = (volatile signed __int32 *)a4[1];
      if ( v24 )
      {
        if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
        }
      }
      v25 = *(volatile signed __int32 **)(a5 + 8);
      if ( v25 )
      {
        if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
        }
      }
      return 2147483658LL;
    }
  }
}
