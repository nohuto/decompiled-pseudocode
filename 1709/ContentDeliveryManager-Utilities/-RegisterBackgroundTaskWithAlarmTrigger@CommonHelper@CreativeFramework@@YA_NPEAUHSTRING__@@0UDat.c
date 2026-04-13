/*
 * XREFs of ?RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDateTime@Foundation@Windows@@IIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x180092FFC
 * Callers:
 *     ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180060500 (-RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerI.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002F6D0 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180092314 (-RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgro.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall CreativeFramework::CommonHelper::RegisterBackgroundTaskWithAlarmTrigger(
        HSTRING a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        __int64 *a8)
{
  HRESULT v11; // eax
  int ActivationFactory; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rbx
  __int64 *v17; // rax
  char v18; // si
  volatile signed __int32 *v19; // rbx
  __int64 v21; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v22; // [rsp+48h] [rbp-99h] BYREF
  __int128 v23; // [rsp+50h] [rbp-91h]
  int v24; // [rsp+60h] [rbp-81h]
  __int64 v25; // [rsp+68h] [rbp-79h] BYREF
  __int64 v26; // [rsp+70h] [rbp-71h]
  __int64 v27[3]; // [rsp+78h] [rbp-69h] BYREF
  __int128 v28; // [rsp+90h] [rbp-51h] BYREF
  int v29; // [rsp+A0h] [rbp-41h]
  __int64 v30; // [rsp+B0h] [rbp-31h]
  __int64 *v31; // [rsp+B8h] [rbp-29h]
  HSTRING_HEADER hstringHeader; // [rsp+C0h] [rbp-21h] BYREF
  HSTRING string; // [rsp+D8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+37h]

  v30 = -2LL;
  v31 = a8;
  v21 = 0LL;
  string = 0LL;
  v11 = WindowsCreateStringReference(
          L"Windows.ApplicationModel.Background.AlarmTrigger",
          0x30u,
          &hstringHeader,
          &string);
  if ( v11 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
  v21 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_4725971e_c31d_4857_b33b_50779cf665c1, &v21);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x104,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory);
  v22 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _BYTE, bool, __int64 *))(*(_QWORD *)v21 + 48LL))(
          v21,
          a3,
          0LL,
          2LL,
          0,
          (a7 & 8) != 0,
          &v22);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x10D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  *(_QWORD *)&v23 = 0LL;
  *((_QWORD *)&v23 + 1) = 0x4805800000000LL;
  v24 = 1100;
  v28 = v23;
  v29 = 1100;
  v14 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v22 + 48LL))(v22, &v28);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x112,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  v26 = 0LL;
  v15 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v22)(
          v22,
          &GUID_84b3a058_6027_4b87_9790_bdf3f757dbd7,
          &v25);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15FD,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v15);
    __debugbreak();
  }
  v16 = v25;
  v26 = v25;
  v17 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
          v27,
          a8);
  v18 = CreativeFramework::CommonHelper::RegisterBackgroundTaskIfNeeded(a1, a2, v16, a6, 0, v17);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v19 = (volatile signed __int32 *)a8[1];
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( !_InterlockedDecrement(v19 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  return v18;
}
