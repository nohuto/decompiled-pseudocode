/*
 * XREFs of ?RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDateTime@Foundation@Windows@@IIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800A2A80
 * Callers:
 *     ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006A680 (-RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerI.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004050 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x180032A18 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A1D28 (-RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgro.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
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
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  int v16; // eax
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // rbx
  __int64 *v20; // rax
  char v21; // si
  volatile signed __int32 *v22; // rbx
  __int64 v24; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v25; // [rsp+48h] [rbp-99h] BYREF
  __int128 v26; // [rsp+50h] [rbp-91h]
  int v27; // [rsp+60h] [rbp-81h]
  __int64 v28; // [rsp+68h] [rbp-79h] BYREF
  __int64 v29; // [rsp+70h] [rbp-71h]
  __int64 v30[3]; // [rsp+78h] [rbp-69h] BYREF
  __int128 v31; // [rsp+90h] [rbp-51h] BYREF
  int v32; // [rsp+A0h] [rbp-41h]
  __int64 v33; // [rsp+B0h] [rbp-31h]
  __int64 *v34; // [rsp+B8h] [rbp-29h]
  HSTRING_HEADER hstringHeader; // [rsp+C0h] [rbp-21h] BYREF
  HSTRING string; // [rsp+D8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+37h]

  v33 = -2LL;
  v34 = a8;
  v24 = 0LL;
  string = 0LL;
  v11 = WindowsCreateStringReference(
          L"Windows.ApplicationModel.Background.AlarmTrigger",
          0x30u,
          &hstringHeader,
          &string);
  if ( v11 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
    goto LABEL_18;
  }
  v24 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_4725971e_c31d_4857_b33b_50779cf665c1, &v24);
  v13 = retaddr;
  if ( ActivationFactory < 0 )
  {
LABEL_18:
    wil::details::in1diag3::Throw_Hr(
      v13,
      (void *)0x104,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory);
LABEL_19:
    wil::details::in1diag3::Throw_Hr(
      v15,
      (void *)0x10D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  v25 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _BYTE, bool, __int64 *))(*(_QWORD *)v24 + 48LL))(
          v24,
          a3,
          0LL,
          2LL,
          0,
          (a7 & 8) != 0,
          &v25);
  v15 = retaddr;
  if ( v14 < 0 )
    goto LABEL_19;
  *(_QWORD *)&v26 = 0LL;
  *((_QWORD *)&v26 + 1) = 0x4805800000000LL;
  v27 = 1100;
  v31 = v26;
  v32 = 1100;
  v16 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v25 + 48LL))(v25, &v31);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x112,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_21;
  }
  v29 = 0LL;
  v17 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v25)(
          v25,
          &GUID_84b3a058_6027_4b87_9790_bdf3f757dbd7,
          &v28);
  v18 = retaddr;
  if ( v17 < 0 )
  {
LABEL_21:
    wil::details::in1diag3::Throw_Hr(
      v18,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v17);
    JUMPOUT(0x1800A2D1DLL);
  }
  v19 = v28;
  v29 = v28;
  v20 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
          v30,
          a8);
  v21 = CreativeFramework::CommonHelper::RegisterBackgroundTaskIfNeeded(a1, a2, v19, a6, 0, v20);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  v22 = (volatile signed __int32 *)a8[1];
  if ( v22 )
  {
    if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
      if ( !_InterlockedDecrement(v22 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
    }
  }
  return v21;
}
