/*
 * XREFs of _lambda_245d84deaf182427ab842afa126b70f8_::operator() @ 0x1800A27FC
 * Callers:
 *     ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800A2620 (-RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_S.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004050 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x180032A18 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A1D28 (-RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgro.c)
 *     ??$RegisterBackgroundTaskWithWnfTrigger@PEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEB_WPEBD@Z @ 0x1800A3650 (--$RegisterBackgroundTaskWithWnfTrigger@PEB_W@ContentDeliveryManagerTelemetry@Background@Content.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_245d84deaf182427ab842afa126b70f8_::operator()(__int64 a1)
{
  HRESULT v2; // eax
  int ActivationFactory; // eax
  wil::details::in1diag3 *v4; // rcx
  int v5; // ecx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 v13; // [rsp+58h] [rbp-19h] BYREF
  __int64 v14; // [rsp+60h] [rbp-11h] BYREF
  __int128 v15; // [rsp+68h] [rbp-9h] BYREF
  __int64 v16; // [rsp+78h] [rbp+7h]
  _QWORD v17[3]; // [rsp+80h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp+27h] BYREF
  HSTRING string; // [rsp+B0h] [rbp+3Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v17[1] = -2LL;
  v13 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.Background.CustomSystemTrigger",
         0x37u,
         &hstringHeader,
         &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    goto LABEL_15;
  }
  v13 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_b20a4480_3ae6_4f5d_acab_19f8a325299e, &v13);
  v4 = retaddr;
  if ( ActivationFactory < 0 )
  {
LABEL_15:
    wil::details::in1diag3::Throw_Hr(
      v4,
      (void *)0xE0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_16;
  }
  v14 = 0LL;
  v5 = **(_DWORD **)(a1 + 24);
  HIDWORD(v15) = 0;
  LODWORD(v15) = 2;
  v16 = 295000LL;
  *(_QWORD *)((char *)&v15 + 4) = (v5 & 8) != 0;
  *(_OWORD *)&hstringHeader.Reserved.Reserved1 = v15;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 295000LL;
  v14 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, bool, HSTRING_HEADER *, __int64 *))(*(_QWORD *)v13 + 48LL))(
         v13,
         **(_QWORD **)a1,
         **(unsigned int **)(a1 + 8),
         **(_QWORD **)(a1 + 16),
         0,
         **(_DWORD **)(a1 + 8) != 0,
         &hstringHeader,
         &v14);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_16:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0xE0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v6);
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v17[0] = 0LL;
  v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int128 *))v14)(
         v14,
         &GUID_84b3a058_6027_4b87_9790_bdf3f757dbd7,
         &v15);
  v9 = retaddr;
  if ( v8 < 0 )
    goto LABEL_17;
  v10 = v15;
  v17[0] = v15;
  v11 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
          &v15,
          *(__int64 **)(a1 + 64));
  if ( CreativeFramework::CommonHelper::RegisterBackgroundTaskIfNeeded(
         **(HSTRING **)(a1 + 32),
         **(_QWORD **)(a1 + 40),
         v10,
         **(_DWORD **)(a1 + 48),
         **(_BYTE **)(a1 + 56) != 0,
         v11) )
  {
    v17[0] = WindowsGetStringRawBuffer(**(HSTRING **)(a1 + 32), 0LL);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RegisterBackgroundTaskWithWnfTrigger<wchar_t const *>(
      v17,
      **(_QWORD **)(a1 + 64) + 8LL);
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return 0LL;
}
