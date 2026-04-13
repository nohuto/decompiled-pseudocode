/*
 * XREFs of _lambda_245d84deaf182427ab842afa126b70f8_::operator() @ 0x180092D88
 * Callers:
 *     ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x180092BB4 (-RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_S.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002F6D0 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180092314 (-RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgro.c)
 *     ??$RegisterBackgroundTaskWithWnfTrigger@PEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEB_WPEBD@Z @ 0x180093B80 (--$RegisterBackgroundTaskWithWnfTrigger@PEB_W@ContentDeliveryManagerTelemetry@Background@Content.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_245d84deaf182427ab842afa126b70f8_::operator()(__int64 a1)
{
  HRESULT v2; // eax
  int ActivationFactory; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rbx
  __int64 *v8; // rax
  __int64 v10; // [rsp+58h] [rbp-19h] BYREF
  __int64 v11; // [rsp+60h] [rbp-11h] BYREF
  __int128 v12; // [rsp+68h] [rbp-9h] BYREF
  __int64 v13; // [rsp+78h] [rbp+7h]
  _QWORD v14[3]; // [rsp+80h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp+27h] BYREF
  HSTRING string; // [rsp+B0h] [rbp+3Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v14[1] = -2LL;
  v10 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.Background.CustomSystemTrigger",
         0x37u,
         &hstringHeader,
         &string);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
  v10 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_b20a4480_3ae6_4f5d_acab_19f8a325299e, &v10);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xE0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory);
  v11 = 0LL;
  v4 = **(_DWORD **)(a1 + 24);
  HIDWORD(v12) = 0;
  LODWORD(v12) = 2;
  v13 = 295000LL;
  *(_QWORD *)((char *)&v12 + 4) = (v4 & 8) != 0;
  *(_OWORD *)&hstringHeader.Reserved.Reserved1 = v12;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 295000LL;
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, bool, HSTRING_HEADER *, __int64 *))(*(_QWORD *)v10 + 48LL))(
         v10,
         **(_QWORD **)a1,
         **(unsigned int **)(a1 + 8),
         **(_QWORD **)(a1 + 16),
         0,
         **(_DWORD **)(a1 + 8) != 0,
         &hstringHeader,
         &v11);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xE0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v14[0] = 0LL;
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int128 *))v11)(
         v11,
         &GUID_84b3a058_6027_4b87_9790_bdf3f757dbd7,
         &v12);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15FD,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = v12;
  v14[0] = v12;
  v8 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         &v12,
         *(__int64 **)(a1 + 64));
  if ( CreativeFramework::CommonHelper::RegisterBackgroundTaskIfNeeded(
         **(HSTRING **)(a1 + 32),
         **(_QWORD **)(a1 + 40),
         v7,
         **(_DWORD **)(a1 + 48),
         **(_BYTE **)(a1 + 56) != 0,
         v8) )
  {
    v14[0] = WindowsGetStringRawBuffer(**(HSTRING **)(a1 + 32), 0LL);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RegisterBackgroundTaskWithWnfTrigger<wchar_t const *>(
      v14,
      **(_QWORD **)(a1 + 64) + 8LL);
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return 0LL;
}
