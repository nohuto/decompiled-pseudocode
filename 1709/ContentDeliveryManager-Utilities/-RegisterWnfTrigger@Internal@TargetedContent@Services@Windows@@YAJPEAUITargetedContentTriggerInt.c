/*
 * XREFs of ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180060150
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002F6D0 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x18005F0B4 (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x18005F104 (-ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_tra.c)
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005F548 (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA?AU_WNF_STATE_NAME@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005F948 (-GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA-AU_WNF_STATE_NAME@@PEAUITar.c)
 *     ?ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005FF1C (-ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AXPEAUHS.c)
 *     ?GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskConditionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800600B4 (-GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA-AW4TaskConditionF.c)
 *     ?GetTaskOptionsFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskOptionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800600FC (-GetTaskOptionsFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA-AW4TaskOptionFlags@.c)
 *     ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x180092BB4 (-RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_S.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180097570 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Windows::Services::TargetedContent::Internal::RegisterWnfTrigger(
        Windows::Services::TargetedContent::Internal *a1,
        __int64 a2)
{
  ULONG v4; // ebx
  int v5; // eax
  int v6; // eax
  __int16 v7; // si
  _QWORD *v8; // rdx
  char TaskOptionsFlagsForTrigger; // r12
  char TaskConditionFlagsForTrigger; // r13
  void **v11; // rdx
  const WCHAR *v12; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  const char *v16; // r9
  volatile signed __int32 *v17; // rdi
  volatile signed __int32 *v19; // rdi
  HSTRING string; // [rsp+50h] [rbp-128h] BYREF
  int v21; // [rsp+58h] [rbp-120h] BYREF
  int v22; // [rsp+5Ch] [rbp-11Ch] BYREF
  unsigned int v23; // [rsp+60h] [rbp-118h]
  LPVOID pv; // [rsp+68h] [rbp-110h] BYREF
  const WCHAR *v25; // [rsp+70h] [rbp-108h] BYREF
  int *v26; // [rsp+78h] [rbp-100h] BYREF
  HSTRING v27; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v28; // [rsp+88h] [rbp-F0h]
  __int64 v29; // [rsp+90h] [rbp-E8h]
  __int64 v30; // [rsp+98h] [rbp-E0h] BYREF
  void *v31[3]; // [rsp+A8h] [rbp-D0h] BYREF
  unsigned __int64 v32; // [rsp+C0h] [rbp-B8h]
  void *v33[3]; // [rsp+C8h] [rbp-B0h] BYREF
  unsigned __int64 v34; // [rsp+E0h] [rbp-98h]
  _QWORD v35[3]; // [rsp+E8h] [rbp-90h] BYREF
  _QWORD *v36; // [rsp+100h] [rbp-78h]
  _BYTE v37[32]; // [rsp+108h] [rbp-70h] BYREF
  _BYTE v38[32]; // [rsp+128h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  v29 = -2LL;
  v28 = a2;
  try
  {
    v4 = Windows::Services::TargetedContent::Internal::GetWnfStateForTrigger(
           a1,
           (struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *)a2).Data[0];
    v21 = 0;
    pv = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    v5 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal *, HSTRING *))(*(_QWORD *)a1 + 96LL))(
           a1,
           &string);
    if ( v5 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x185,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v5);
    v6 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal *, int *))(*(_QWORD *)a1 + 80LL))(
           a1,
           &v22);
    if ( v6 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x187,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v6);
    v7 = Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v22);
    if ( ((v7 & 2) != 0 || !WindowsIsStringEmpty(string)) && (v7 & 0x100) == 0 )
    {
      Windows::Services::TargetedContent::Internal::ResolvePredicateHandler(v35, (__int64)a1);
      v26 = &v21;
      v27 = string;
      if ( !v36 )
        std::_Xbad_function_call();
      (*(void (__fastcall **)(_QWORD *, HSTRING *, LPVOID *, int **))(*v36 + 16LL))(v36, &v27, &pv, &v26);
      if ( v36 )
      {
        v8 = v35;
        LOBYTE(v8) = v36 != v35;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v36 + 32LL))(v36, v8);
      }
    }
    TaskOptionsFlagsForTrigger = Windows::Services::TargetedContent::Internal::GetTaskOptionsFlagsForTrigger((__int64)a1);
    TaskConditionFlagsForTrigger = Windows::Services::TargetedContent::Internal::GetTaskConditionFlagsForTrigger((__int64)a1);
    Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger(v33, (__int64)a1);
    v11 = v33;
    if ( v34 >= 8 )
      v11 = (void **)v33[0];
    Windows::Services::TargetedContent::Internal::ResolveCDMTaskName(v31, (__int64)v11);
    v12 = (const WCHAR *)v31;
    if ( v32 >= 8 )
      v12 = (const WCHAR *)v31[0];
    v25 = v12;
    v13 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
            &v30,
            (__int64 *)a2);
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v37, (const WCHAR **)off_1800D4FF0);
    v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v38, &v25);
    CreativeFramework::CommonHelper::RegisterBackgroundTaskWithWnfTrigger(
      *(_QWORD *)(v15 + 24),
      *(_QWORD *)(v14 + 24),
      v4,
      (_DWORD)pv,
      v21,
      TaskConditionFlagsForTrigger,
      TaskOptionsFlagsForTrigger,
      (__int64)v13);
    if ( v32 >= 8 )
      operator delete(v31[0]);
    v32 = 7LL;
    v31[2] = 0LL;
    LOWORD(v31[0]) = 0;
    if ( v34 >= 8 )
      operator delete(v33[0]);
    v34 = 7LL;
    v33[2] = 0LL;
    LOWORD(v33[0]) = 0;
    WindowsDeleteString(string);
    string = 0LL;
    if ( pv )
      CoTaskMemFree(pv);
  }
  catch ( ... )
  {
    v23 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x197,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
            v16);
    v19 = *(volatile signed __int32 **)(v28 + 8);
    if ( v19 && _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
    return v23;
  }
  v17 = *(volatile signed __int32 **)(a2 + 8);
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  return 0LL;
}
