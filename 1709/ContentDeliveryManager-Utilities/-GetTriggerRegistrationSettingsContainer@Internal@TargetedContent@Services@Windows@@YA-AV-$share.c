/*
 * XREFs of ?GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x1800619F8
 * Callers:
 *     ?GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x180061BF4 (-GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA-AV.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@_N@Z @ 0x1800962D0 (-CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VISetting.c)
 *     ?MakeSettingsContainer@CommonHelper@CreativeFramework@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x180096B68 (-MakeSettingsContainer@CommonHelper@CreativeFramework@@YA-AV-$shared_ptr@VISettingsContainer@Com.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Services::TargetedContent::Internal::GetTriggerRegistrationSettingsContainer(__int64 a1)
{
  int ActivationFactory; // eax
  int v3; // eax
  int v4; // eax
  __int64 *SettingsContainer; // rbx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r9
  volatile signed __int32 *v9; // rbx
  __int64 v11; // [rsp+30h] [rbp-21h] BYREF
  __int64 v12; // [rsp+38h] [rbp-19h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-11h] BYREF
  _BYTE v14[8]; // [rsp+50h] [rbp-1h] BYREF
  volatile signed __int32 *v15; // [rsp+58h] [rbp+7h]
  HSTRING string; // [rsp+60h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+17h] BYREF
  _BYTE v18[24]; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v19; // [rsp+98h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v13[1] = -2LL;
  v13[0] = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Storage.ApplicationData", 0x1Fu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_5612147b_e843_45e3_94d8_06169e3c8e17, v13);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x7D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\applicationsettingshelper.cpp",
      (const char *)(unsigned int)ActivationFactory);
  v12 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v13[0] + 48LL))(v13[0], &v12);
  if ( v3 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x7F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\applicationsettingshelper.cpp",
      (const char *)(unsigned int)v3);
  v11 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 80LL))(v12, &v11);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x81,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\applicationsettingshelper.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  SettingsContainer = (__int64 *)CreativeFramework::CommonHelper::MakeSettingsContainer(v14, v11);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
  v6 = *SettingsContainer;
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v18, (const WCHAR **)&off_1800D4FF8);
  LOBYTE(v8) = 1;
  CreativeFramework::CommonHelper::SettingsContainer::CreateContainer(v6, a1, *(_QWORD *)(v7 + 24), v8, 2);
  v19 = 0LL;
  v9 = v15;
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  return a1;
}
