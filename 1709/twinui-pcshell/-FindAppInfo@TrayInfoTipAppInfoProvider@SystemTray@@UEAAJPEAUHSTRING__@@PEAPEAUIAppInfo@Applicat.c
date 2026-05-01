/*
 * XREFs of ?FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@ApplicationModel@Windows@@@Z @ 0x1801BA300
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1FindAppInfoContext@TrayNotificationsTelemetry@@QEAA@XZ @ 0x1801B9FE4 (--1FindAppInfoContext@TrayNotificationsTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@FindAppInfoContext@TrayNotificationsTelemetry@@QEAAXPEAUHSTRING__@@@Z @ 0x1801BA134 (-StartActivity@FindAppInfoContext@TrayNotificationsTelemetry@@QEAAXPEAUHSTRING__@@@Z.c)
 *     ?Stop@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801BABBC (-Stop@-$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppInfo@ApplicationModel@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801BAD40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppInfo@Applicat.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppInfo@ApplicationModel@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801BADB0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppInfo@A.c)
 *     ?MatchesTrayInfoTipAppIdFormat@TrayUtility@SystemTray@@YA_NPEAUHSTRING__@@@Z @ 0x1801BBE9C (-MatchesTrayInfoTipAppIdFormat@TrayUtility@SystemTray@@YA_NPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@TrayInfoTipAppInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x1801BBF18 (-RuntimeClassInitialize@TrayInfoTipAppInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemTray::TrayInfoTipAppInfoProvider::FindAppInfo(
        SystemTray::TrayInfoTipAppInfoProvider *this,
        HSTRING a2,
        struct Windows::ApplicationModel::IAppInfo **a3)
{
  HSTRING v5; // rdx
  _QWORD *v6; // rax
  SystemTray::TrayInfoTipAppInfo *v7; // rbx
  int Interface; // edi
  _QWORD *v9; // rdi
  SystemTray::TrayInfoTipAppInfo *v10; // rcx
  struct Windows::ApplicationModel::IAppInfo *v11; // rcx
  const char *v12; // r9
  __int64 result; // rax
  struct Windows::ApplicationModel::IAppInfo *v14; // rax
  unsigned int v15; // ebx
  int v16[2]; // [rsp+20h] [rbp-178h] BYREF
  __int64 v17; // [rsp+28h] [rbp-170h]
  _QWORD v18[4]; // [rsp+30h] [rbp-168h] BYREF
  int v19; // [rsp+50h] [rbp-148h]
  int *v20; // [rsp+58h] [rbp-140h]
  int *v21; // [rsp+60h] [rbp-138h]
  int v22; // [rsp+68h] [rbp-130h] BYREF
  char v23; // [rsp+6Ch] [rbp-12Ch]
  int v24; // [rsp+90h] [rbp-108h] BYREF
  const char *v25; // [rsp+98h] [rbp-100h]
  __int64 v26; // [rsp+A0h] [rbp-F8h]
  char v27; // [rsp+A8h] [rbp-F0h]
  __int64 v28; // [rsp+B0h] [rbp-E8h]
  _BYTE v29[144]; // [rsp+B8h] [rbp-E0h] BYREF
  __int64 v30; // [rsp+148h] [rbp-50h]
  __int64 v31; // [rsp+150h] [rbp-48h]
  __int64 v32; // [rsp+158h] [rbp-40h]
  __int64 v33; // [rsp+160h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  v17 = -2LL;
  try
  {
    *a3 = 0LL;
    v18[1] = 0LL;
    v18[2] = v18;
    v18[3] = 0LL;
    v19 = 0;
    v20 = &v24;
    v21 = &v22;
    v22 = 0;
    v23 = 0;
    v27 = 0;
    v24 = 0;
    v25 = "FindAppInfoContext";
    v26 = 0LL;
    v28 = 1LL;
    v30 = 0LL;
    v31 = 0LL;
    memset(v29, 0, sizeof(v29));
    v32 = 0LL;
    v33 = 0LL;
    v18[0] = &TrayNotificationsTelemetry::FindAppInfoContext::`vftable';
    TrayNotificationsTelemetry::FindAppInfoContext::StartActivity(
      (TrayNotificationsTelemetry::FindAppInfoContext *)v18,
      a2);
    *(_QWORD *)v16 = 0LL;
    if ( SystemTray::TrayUtility::MatchesTrayInfoTipAppIdFormat(a2, v5) )
    {
      *(_QWORD *)v16 = 0LL;
      v6 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
      v7 = (SystemTray::TrayInfoTipAppInfo *)v6;
      if ( !v6 )
      {
        Interface = -2147024882;
LABEL_10:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x1B,
          (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipappinfoprovider.cpp",
          (const char *)(unsigned int)Interface);
        v11 = *(struct Windows::ApplicationModel::IAppInfo **)v16;
        if ( *(_QWORD *)v16 )
        {
          *(_QWORD *)v16 = 0LL;
          (*(void (__fastcall **)(struct Windows::ApplicationModel::IAppInfo *))(*(_QWORD *)v11 + 16LL))(v11);
        }
        TrayNotificationsTelemetry::FindAppInfoContext::~FindAppInfoContext((TrayNotificationsTelemetry::FindAppInfoContext *)v18);
        return (unsigned int)Interface;
      }
      v9 = v6 + 2;
      Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 2));
      *((_QWORD *)v7 + 8) = 1LL;
      *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppInfo,Microsoft::WRL::FtmBase>::`vftable';
      *((_QWORD *)v7 + 1) = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppInfo,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
      *v9 = &SystemTray::TrayInfoTipAppInfo::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *(_QWORD *)v7 = &SystemTray::TrayInfoTipAppInfo::`vftable';
      *((_QWORD *)v7 + 1) = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppInfo,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
      *v9 = &SystemTray::TrayInfoTipAppInfo::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
      *((_QWORD *)v7 + 9) = 0LL;
      *((_QWORD *)v7 + 10) = 0LL;
      Interface = SystemTray::TrayInfoTipAppInfo::RuntimeClassInitialize(v7, a2);
      v10 = v7;
      if ( Interface >= 0 )
      {
        Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppInfo,Microsoft::WRL::FtmBase>::QueryInterface(
                      v7,
                      &GUID_cf7f59b3_6a09_4de8_a6c0_5792d56880d1,
                      v16);
        v10 = v7;
      }
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppInfo,Microsoft::WRL::FtmBase>::Release(v10);
      if ( Interface < 0 )
        goto LABEL_10;
    }
    wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((TrayNotificationsTelemetry::FindAppInfoContext *)v18);
    v14 = *(struct Windows::ApplicationModel::IAppInfo **)v16;
    *(_QWORD *)v16 = 0LL;
    *a3 = v14;
    v15 = v14 == 0LL ? 0x80070490 : 0;
    TrayNotificationsTelemetry::FindAppInfoContext::~FindAppInfoContext((TrayNotificationsTelemetry::FindAppInfoContext *)v18);
    result = v15;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x24,
                           (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipappinfoprovider.cpp",
                           v12);
  }
  return result;
}
