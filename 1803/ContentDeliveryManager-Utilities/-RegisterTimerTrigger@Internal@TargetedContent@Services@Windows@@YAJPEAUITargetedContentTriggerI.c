/*
 * XREFs of ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006A680
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x180032A18 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x180069008 (-ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_tra.c)
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006940C (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskConditionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006A224 (-GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA-AW4TaskConditionF.c)
 *     ?GetTaskOptionsFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskOptionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006A26C (-GetTaskOptionsFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA-AW4TaskOptionFlags@.c)
 *     ?GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA?AU_FILETIME@@PEB_W_N@Z @ 0x18009FD08 (-GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA-AU_FILETIME@@PEB_W_N@Z.c)
 *     ?RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDateTime@Foundation@Windows@@IIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800A2A80 (-RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDat.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Services::TargetedContent::Internal::RegisterTimerTrigger(__int64 a1, __int64 *a2)
{
  int v4; // eax
  CreativeFramework::CommonHelper::StringUtils *StringRawBuffer; // rax
  const wchar_t *v6; // rdx
  bool v7; // r8
  unsigned __int64 FileTimeFromString; // rax
  unsigned __int64 v9; // rbx
  void **v10; // rdx
  const WCHAR *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // r9d
  const char *v15; // r9
  volatile signed __int32 *v16; // rdi
  volatile signed __int32 *v18; // rdi
  HSTRING string; // [rsp+50h] [rbp-E8h] BYREF
  unsigned int v20; // [rsp+58h] [rbp-E0h]
  const WCHAR *v21; // [rsp+60h] [rbp-D8h] BYREF
  __int64 *v22; // [rsp+68h] [rbp-D0h]
  __int64 v23; // [rsp+70h] [rbp-C8h]
  __int64 v24; // [rsp+78h] [rbp-C0h] BYREF
  void *v25[3]; // [rsp+88h] [rbp-B0h] BYREF
  unsigned __int64 v26; // [rsp+A0h] [rbp-98h]
  void *v27[3]; // [rsp+A8h] [rbp-90h] BYREF
  unsigned __int64 v28; // [rsp+C0h] [rbp-78h]
  _BYTE v29[32]; // [rsp+C8h] [rbp-70h] BYREF
  _BYTE v30[32]; // [rsp+E8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  v23 = -2LL;
  v22 = a2;
  try
  {
    WindowsDeleteString(0LL);
    string = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 64LL))(a1, &string);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1BB,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v4);
      JUMPOUT(0x18006A931LL);
    }
    StringRawBuffer = (CreativeFramework::CommonHelper::StringUtils *)WindowsGetStringRawBuffer(string, 0LL);
    FileTimeFromString = (unsigned __int64)CreativeFramework::CommonHelper::StringUtils::GetFileTimeFromString(
                                             StringRawBuffer,
                                             v6,
                                             v7);
    v9 = (unsigned int)FileTimeFromString + (HIDWORD(FileTimeFromString) << 32);
    Windows::Services::TargetedContent::Internal::GetTaskOptionsFlagsForTrigger(a1);
    Windows::Services::TargetedContent::Internal::GetTaskConditionFlagsForTrigger(a1);
    Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger(v27, a1);
    v10 = v27;
    if ( v28 >= 8 )
      v10 = (void **)v27[0];
    Windows::Services::TargetedContent::Internal::ResolveCDMTaskName(v25, (__int64)v10);
    v11 = (const WCHAR *)v25;
    if ( v26 >= 8 )
      v11 = (const WCHAR *)v25[0];
    v21 = v11;
    std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
      &v24,
      a2);
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v29, (const WCHAR **)&off_1800E4428);
    v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v30, &v21);
    CreativeFramework::CommonHelper::RegisterBackgroundTaskWithAlarmTrigger(
      *(_QWORD *)(v13 + 24),
      *(_QWORD *)(v12 + 24),
      v9,
      v14);
    if ( v26 >= 8 )
      operator delete(v25[0]);
    v26 = 7LL;
    v25[2] = 0LL;
    LOWORD(v25[0]) = 0;
    if ( v28 >= 8 )
      operator delete(v27[0]);
    v28 = 7LL;
    v27[2] = 0LL;
    LOWORD(v27[0]) = 0;
    WindowsDeleteString(string);
    string = 0LL;
  }
  catch ( ... )
  {
    v20 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x1C7,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
            v15);
    v18 = (volatile signed __int32 *)v22[1];
    if ( v18 && _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
    return v20;
  }
  v16 = (volatile signed __int32 *)a2[1];
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  return 0LL;
}
