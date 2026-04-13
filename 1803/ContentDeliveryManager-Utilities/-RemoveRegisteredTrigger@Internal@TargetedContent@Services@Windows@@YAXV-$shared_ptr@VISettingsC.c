/*
 * XREFs of ?RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006C4F0
 * Callers:
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x180060AF0 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x180032A18 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006B440 (-CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsoft.c)
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x18006BEA4 (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VISettingsContai.c)
 *     ?GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VPropertySetHelper@Triggers@CreativeFramework@@@std@@XZ @ 0x1800A3930 (-GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VPropertySetHel.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
HRESULT __fastcall Windows::Services::TargetedContent::Internal::RemoveRegisteredTrigger(__int64 *a1, __int64 a2)
{
  const WCHAR *StringRawBuffer; // rbx
  _QWORD *v4; // rax
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rbx
  HRESULT result; // eax
  volatile signed __int32 *v14; // rbx
  __int64 v15; // [rsp+28h] [rbp-29h] BYREF
  HSTRING string; // [rsp+30h] [rbp-21h] BYREF
  const WCHAR *v17; // [rsp+38h] [rbp-19h] BYREF
  _QWORD *v18; // [rsp+40h] [rbp-11h] BYREF
  volatile signed __int32 *v19; // [rsp+48h] [rbp-9h]
  __int64 v20; // [rsp+50h] [rbp-1h]
  __int64 *v21; // [rsp+58h] [rbp+7h]
  __int64 v22; // [rsp+60h] [rbp+Fh] BYREF
  _BYTE v23[24]; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v24; // [rsp+88h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v20 = -2LL;
  v21 = a1;
  Windows::Services::TargetedContent::Internal::CreateTriggerKey(&string, a2);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v4 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         &v22,
         a1);
  if ( !Windows::Services::TargetedContent::Internal::AlreadyRegistered(v4, (__int64)StringRawBuffer) )
    goto LABEL_16;
  CreativeFramework::CommonHelper::SettingsContainer::GetValues(*a1, &v18);
  v17 = StringRawBuffer;
  v15 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v18)(
         *v18,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v15);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v9 = v15;
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v23, &v17);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 88LL))(v9, *(_QWORD *)(v10 + 24));
    v6 = v5;
    v24 = 0LL;
    if ( v5 >= 0 )
    {
      v11 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v6 = 0;
      goto LABEL_11;
    }
    v7 = 290LL;
  }
  else
  {
    v7 = 289LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
    (const char *)(unsigned int)v5);
  v8 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_11:
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v6);
    JUMPOUT(0x18006C6F8LL);
  }
  v12 = v19;
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
LABEL_16:
  result = WindowsDeleteString(string);
  string = 0LL;
  v14 = (volatile signed __int32 *)a1[1];
  if ( v14 )
  {
    result = _InterlockedDecrement(v14 + 2);
    if ( !result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      result = _InterlockedDecrement(v14 + 3);
      if ( !result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  return result;
}
