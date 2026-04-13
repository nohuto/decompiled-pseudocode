/*
 * XREFs of ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006A2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x180032A18 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x180068FB8 (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x180069008 (-ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_tra.c)
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006940C (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA?AU_WNF_STATE_NAME@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006979C (-GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA-AU_WNF_STATE_NAME@@PEAUITar.c)
 *     ?ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180069FDC (-ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AXPEAUHS.c)
 *     ?GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskConditionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006A224 (-GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA-AW4TaskConditionF.c)
 *     ?GetTaskOptionsFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskOptionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006A26C (-GetTaskOptionsFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA-AW4TaskOptionFlags@.c)
 *     ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800A2620 (-RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_S.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800A45F0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Windows::Services::TargetedContent::Internal::RegisterWnfTrigger(
        Windows::Services::TargetedContent::Internal *a1,
        __int64 a2)
{
  ULONG v4; // ebx
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int16 v8; // si
  _QWORD *v9; // rdx
  char TaskOptionsFlagsForTrigger; // r12
  char TaskConditionFlagsForTrigger; // r13
  void **v12; // rdx
  const WCHAR *v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  const char *v17; // r9
  volatile signed __int32 *v18; // rdi
  volatile signed __int32 *v20; // rdi
  HSTRING string; // [rsp+50h] [rbp-128h] BYREF
  int v22; // [rsp+58h] [rbp-120h] BYREF
  int v23; // [rsp+5Ch] [rbp-11Ch] BYREF
  unsigned int v24; // [rsp+60h] [rbp-118h]
  LPVOID pv; // [rsp+68h] [rbp-110h] BYREF
  const WCHAR *v26; // [rsp+70h] [rbp-108h] BYREF
  int *v27; // [rsp+78h] [rbp-100h] BYREF
  HSTRING v28; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v29; // [rsp+88h] [rbp-F0h]
  __int64 v30; // [rsp+90h] [rbp-E8h]
  __int64 v31; // [rsp+98h] [rbp-E0h] BYREF
  void *v32[3]; // [rsp+A8h] [rbp-D0h] BYREF
  unsigned __int64 v33; // [rsp+C0h] [rbp-B8h]
  void *v34[3]; // [rsp+C8h] [rbp-B0h] BYREF
  unsigned __int64 v35; // [rsp+E0h] [rbp-98h]
  _QWORD v36[3]; // [rsp+E8h] [rbp-90h] BYREF
  _QWORD *v37; // [rsp+100h] [rbp-78h]
  _BYTE v38[32]; // [rsp+108h] [rbp-70h] BYREF
  _BYTE v39[32]; // [rsp+128h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  v30 = -2LL;
  v29 = a2;
  try
  {
    v4 = Windows::Services::TargetedContent::Internal::GetWnfStateForTrigger(
           a1,
           (struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *)a2).Data[0];
    v22 = 0;
    pv = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    v5 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal *, HSTRING *))(*(_QWORD *)a1 + 96LL))(
           a1,
           &string);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1A4,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v5);
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal *, int *))(*(_QWORD *)a1 + 80LL))(
             a1,
             &v23);
      v7 = retaddr;
      if ( v6 >= 0 )
      {
        v8 = Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v23);
        if ( (v8 & 2) == 0 && WindowsIsStringEmpty(string) || (v8 & 0x100) != 0 )
        {
LABEL_10:
          TaskOptionsFlagsForTrigger = Windows::Services::TargetedContent::Internal::GetTaskOptionsFlagsForTrigger((__int64)a1);
          TaskConditionFlagsForTrigger = Windows::Services::TargetedContent::Internal::GetTaskConditionFlagsForTrigger((__int64)a1);
          Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger(v34, (__int64)a1);
          v12 = v34;
          if ( v35 >= 8 )
            v12 = (void **)v34[0];
          Windows::Services::TargetedContent::Internal::ResolveCDMTaskName(v32, (__int64)v12);
          v13 = (const WCHAR *)v32;
          if ( v33 >= 8 )
            v13 = (const WCHAR *)v32[0];
          v26 = v13;
          v14 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
                  &v31,
                  (__int64 *)a2);
          v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  (__int64)v38,
                  (const WCHAR **)off_1800E44A0);
          v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v39, &v26);
          CreativeFramework::CommonHelper::RegisterBackgroundTaskWithWnfTrigger(
            *(_QWORD *)(v16 + 24),
            *(_QWORD *)(v15 + 24),
            v4,
            (_DWORD)pv,
            v22,
            TaskConditionFlagsForTrigger,
            TaskOptionsFlagsForTrigger,
            (__int64)v14);
          if ( v33 >= 8 )
            operator delete(v32[0]);
          v33 = 7LL;
          v32[2] = 0LL;
          LOWORD(v32[0]) = 0;
          if ( v35 >= 8 )
            operator delete(v34[0]);
          v35 = 7LL;
          v34[2] = 0LL;
          LOWORD(v34[0]) = 0;
          WindowsDeleteString(string);
          string = 0LL;
          if ( pv )
            CoTaskMemFree(pv);
          goto LABEL_35;
        }
        Windows::Services::TargetedContent::Internal::ResolvePredicateHandler(v36, (__int64)a1);
        v27 = &v22;
        v28 = string;
        if ( v37 )
        {
          (*(void (__fastcall **)(_QWORD *, HSTRING *, LPVOID *, int **))(*v37 + 16LL))(v37, &v28, &pv, &v27);
          if ( v37 )
          {
            v9 = v36;
            LOBYTE(v9) = v37 != v36;
            (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v37 + 32LL))(v37, v9);
          }
          goto LABEL_10;
        }
LABEL_32:
        std::_Xbad_function_call();
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x1A6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_32;
  }
  catch ( ... )
  {
    v24 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x1B6,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
            v17);
    v20 = *(volatile signed __int32 **)(v29 + 8);
    if ( v20 && _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
    return v24;
  }
LABEL_35:
  v18 = *(volatile signed __int32 **)(a2 + 8);
  if ( v18 )
  {
    if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  return 0LL;
}
