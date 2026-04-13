/*
 * XREFs of ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180059C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002F6D0 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180055F80 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04U.c)
 *     ??0TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@AEBV0123@@Z @ 0x1800579E0 (--0TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@Co.c)
 *     ?StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_W0PEBD@Z @ 0x180057AD0 (-StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@B.c)
 *     ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x180058220 (-GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCorrelationV.c)
 *     _lambda_14acc09073ccfc16760233ebaab8e057_::__lambda_14acc09073ccfc16760233ebaab8e057_ @ 0x18005A320 (_lambda_14acc09073ccfc16760233ebaab8e057_--__lambda_14acc09073ccfc16760233ebaab8e057_.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18005A504 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64____Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64______ptr64_Windows::Internal::ComTaskPoolHandler__lambda_14acc09073ccfc16760233ebaab8e057___ @ 0x18005CDC4 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Foun.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B4307 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetTriggeredItemsForStateAsync(
        __int64 a1,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4,
        _QWORD *a5)
{
  __int64 v8; // rsi
  const wchar_t *StringRawBuffer; // rdi
  const wchar_t *v10; // rbx
  HRESULT v11; // eax
  int v12; // edi
  HRESULT v13; // eax
  __int64 v14; // rbx
  signed __int32 v15; // eax
  signed __int32 v16; // eax
  __int64 v17; // r8
  signed __int32 v18; // ecx
  int v19; // ebx
  volatile signed __int32 *v20; // rbx
  _BYTE *v22; // [rsp+28h] [rbp-E0h]
  HSTRING string; // [rsp+30h] [rbp-D8h]
  HSTRING v24; // [rsp+40h] [rbp-C8h]
  HSTRING v25[2]; // [rsp+4Ch] [rbp-BCh] BYREF
  HSTRING newString; // [rsp+60h] [rbp-A8h] BYREF
  HSTRING v27; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h] BYREF
  volatile signed __int32 *v29; // [rsp+78h] [rbp-90h]
  __int64 v30; // [rsp+80h] [rbp-88h]
  _QWORD v31[4]; // [rsp+88h] [rbp-80h] BYREF
  int v32; // [rsp+A8h] [rbp-60h]
  int *v33; // [rsp+B0h] [rbp-58h]
  int *v34; // [rsp+B8h] [rbp-50h]
  int v35; // [rsp+C0h] [rbp-48h] BYREF
  char v36; // [rsp+C4h] [rbp-44h]
  int v37; // [rsp+E8h] [rbp-20h] BYREF
  const char *v38; // [rsp+F0h] [rbp-18h]
  __int64 v39; // [rsp+F8h] [rbp-10h]
  char v40; // [rsp+100h] [rbp-8h]
  __int64 v41; // [rsp+108h] [rbp+0h]
  _BYTE v42[144]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v43; // [rsp+1A0h] [rbp+98h]
  __int64 v44; // [rsp+1A8h] [rbp+A0h]
  __int64 v45; // [rsp+1B0h] [rbp+A8h]
  __int64 v46; // [rsp+1B8h] [rbp+B0h]
  _QWORD v47[3]; // [rsp+1C8h] [rbp+C0h] BYREF
  char v48; // [rsp+1E0h] [rbp+D8h]
  HSTRING v49; // [rsp+1E8h] [rbp+E0h]
  char v50; // [rsp+1F0h] [rbp+E8h]
  _BYTE v51[312]; // [rsp+1F8h] [rbp+F0h] BYREF
  _QWORD v52[3]; // [rsp+330h] [rbp+228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+390h] [rbp+288h]

  v30 = -2LL;
  *a5 = 0LL;
  Windows::Services::TargetedContent::Internal::GetCorrelationVector(&v28, a4);
  v8 = v28;
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  v10 = WindowsGetStringRawBuffer(a2, 0LL);
  v31[1] = 0LL;
  v31[2] = v31;
  v31[3] = 0LL;
  v32 = 0;
  v33 = &v37;
  v34 = &v35;
  v35 = 0;
  v36 = 0;
  v40 = 0;
  v37 = 0;
  v38 = "TriggerManagerGetTriggeredItemsForStateActivity";
  v39 = 0LL;
  v41 = 1LL;
  v43 = 0LL;
  v44 = 0LL;
  memset_0(v42, 0, sizeof(v42));
  v45 = 0LL;
  v46 = 0LL;
  v31[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::StartActivity(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *)v31,
    v10,
    StringRawBuffer,
    (const char *)(v8 + 8));
  string = 0LL;
  v11 = WindowsDuplicateString(a2, &newString);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x11D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v11);
  }
  else
  {
    string = newString;
    WindowsDeleteString(0LL);
    v13 = WindowsDuplicateString(a3, &v27);
    v12 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x11F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v13);
    }
    else
    {
      v24 = v27;
      WindowsDeleteString(0LL);
      v14 = a1 - 48;
      v22 = (_BYTE *)(a1 - 48);
      if ( a1 != 48 )
      {
        v15 = _InterlockedIncrement((volatile signed __int32 *)(a1 - 48 + 76));
        v14 = a1 - 48;
        if ( (v22[96] & 4) == 0 && v15 == 2 )
        {
          _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
          v14 = a1 - 48;
        }
      }
      v47[0] = a1 - 48;
      v47[1] = v14;
      if ( v14 )
      {
        v16 = _InterlockedIncrement((volatile signed __int32 *)(v14 + 76));
        v14 = a1 - 48;
        if ( (v22[96] & 4) == 0 && v16 == 2 )
        {
          _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
          v14 = a1 - 48;
        }
      }
      v47[2] = string;
      string = 0LL;
      v48 = 0;
      v49 = v24;
      v50 = 0;
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::TriggerManagerGetTriggeredItemsForStateActivity(
        (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *)v51,
        (const struct ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *)v31);
      std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
        v52,
        &v28);
      HIDWORD(v25[0]) = 3;
      v25[1] = (HSTRING)130;
      v12 = Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64____Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64______ptr64_Windows::Internal::ComTaskPoolHandler__lambda_14acc09073ccfc16760233ebaab8e057___(
              (char *)v25 + 4,
              a5,
              v17,
              v47);
      lambda_14acc09073ccfc16760233ebaab8e057_::__lambda_14acc09073ccfc16760233ebaab8e057_(v47);
      if ( v12 >= 0 )
        v12 = 0;
      else
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x13B,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v12);
      if ( v14 )
      {
        v18 = _InterlockedDecrement((volatile signed __int32 *)(v14 + 76));
        if ( v18 )
        {
          if ( (v22[96] & 4) == 0 && v18 == 1 )
            goto LABEL_18;
        }
        else
        {
          v19 = *((_DWORD *)v22 + 24) >> 2;
          (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v22 + 56LL))(v22, 1LL);
          if ( (v19 & 1) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_18:
            _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        }
      }
    }
  }
  if ( string )
    WindowsDeleteString(string);
  v31[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v31);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v31);
  v20 = v29;
  if ( v29 )
  {
    if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
  }
  return (unsigned int)v12;
}
