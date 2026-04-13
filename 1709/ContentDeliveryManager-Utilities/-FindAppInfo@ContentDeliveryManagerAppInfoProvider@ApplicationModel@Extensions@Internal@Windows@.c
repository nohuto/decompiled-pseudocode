/*
 * XREFs of ?FindAppInfo@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@25@@Z @ 0x1800873F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180003D64 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@U?$IIterable@PEAVAppInstallInfoRecord@ContentManagement@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019530 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_180019530.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800877A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppInfo@A.c)
 *     ?RuntimeClassInitialize@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAUIAppInfo@25@@Z @ 0x180087E0C (-RuntimeClassInitialize@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windo.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider::FindAppInfo(
        Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider *this,
        HSTRING a2,
        struct Windows::ApplicationModel::IAppInfo **a3)
{
  const WCHAR *StringRawBuffer; // rax
  HRESULT v6; // eax
  int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax
  struct Windows::ApplicationModel::IAppInfo *v10; // r14
  _QWORD *v11; // rax
  Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo *v12; // rbx
  int Interface; // edi
  _QWORD *v14; // rdi
  HSTRING v15; // rdx
  volatile signed __int64 *v16; // rcx
  __int64 v18; // [rsp+30h] [rbp-50h] BYREF
  struct Windows::ApplicationModel::IAppInfo *v19; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v20[1] = -2LL;
  *a3 = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( CompareStringOrdinal(StringRawBuffer, -1, L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy!App", -1, 1) != 2 )
    return 2147943568LL;
  v18 = 0LL;
  string = 0LL;
  v6 = WindowsCreateStringReference(
         L"Windows.Internal.Extensions.ApplicationModel.UniversalAppInfoProvider",
         0x45u,
         &hstringHeader,
         &string);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
  v18 = 0LL;
  v7 = RoActivateInstance(string, v20);
  if ( v7 < 0
    || (*(_QWORD *)&GUID_535aa053_78a8_438b_a1c9_94dcad4a6a67.Data1 != *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
     || *(_QWORD *)GUID_535aa053_78a8_438b_a1c9_94dcad4a6a67.Data4 != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      ? (v7 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v20[0])(
                v20[0],
                &GUID_535aa053_78a8_438b_a1c9_94dcad4a6a67,
                &v18),
         (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20[0] + 16LL))(v20[0]),
         v8 = v18)
      : (v8 = v20[0], v18 = v20[0]),
        v7 < 0) )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappinfoprovider.cpp",
      (const char *)(unsigned int)v7);
LABEL_31:
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    return (unsigned int)v7;
  }
  v19 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, HSTRING, struct Windows::ApplicationModel::IAppInfo **))(*(_QWORD *)v8 + 48LL))(
         v8,
         a2,
         &v19);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappinfoprovider.cpp",
      (const char *)(unsigned int)v9);
    if ( v19 )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::IAppInfo *))(*(_QWORD *)v19 + 16LL))(v19);
    goto LABEL_31;
  }
  v10 = v19;
  *a3 = 0LL;
  v11 = operator new(0x60uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v12 = (Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo *)v11;
  if ( !v11 )
  {
    Interface = -2147024882;
LABEL_20:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappinfoprovider.cpp",
      (const char *)(unsigned int)Interface);
    if ( v19 )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::IAppInfo *))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    return (unsigned int)Interface;
  }
  v14 = v11 + 3;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v11 + 3));
  *((_QWORD *)v12 + 9) = 1LL;
  *(_QWORD *)v12 = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::ApplicationModel::IAppInfo'};
  *((_QWORD *)v12 + 1) = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v12 + 2) = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo'};
  *v14 = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  *(_QWORD *)v12 = &Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::`vftable'{for `Windows::ApplicationModel::IAppInfo'};
  *((_QWORD *)v12 + 1) = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v12 + 2) = &Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::`vftable'{for `Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo'};
  *v14 = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v12 + 10) = 0LL;
  *((_QWORD *)v12 + 11) = 0LL;
  Interface = Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::RuntimeClassInitialize(
                v12,
                v15,
                v10);
  v16 = (volatile signed __int64 *)v12;
  if ( Interface >= 0 )
  {
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::QueryInterface(
                  v12,
                  &GUID_cf7f59b3_6a09_4de8_a6c0_5792d56880d1,
                  a3);
    v16 = (volatile signed __int64 *)v12;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::Release(v16);
  if ( Interface < 0 )
    goto LABEL_20;
  if ( v19 )
    (*(void (__fastcall **)(struct Windows::ApplicationModel::IAppInfo *))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return 0LL;
}
