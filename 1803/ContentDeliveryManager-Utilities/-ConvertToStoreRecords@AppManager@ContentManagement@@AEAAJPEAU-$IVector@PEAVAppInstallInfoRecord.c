/*
 * XREFs of ?ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@456@@Z @ 0x18000F110
 * Callers:
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x18000DB80 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004050 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Make@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@SAJPEAPEAV12345@@Z @ 0x180016368 (-Make@-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::AppManager::ConvertToStoreRecords(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // eax
  int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned int v9; // esi
  int v10; // eax
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rdi
  int v14; // eax
  HRESULT v15; // eax
  HSTRING v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v30; // [rsp+28h] [rbp-39h] BYREF
  HSTRING v31; // [rsp+30h] [rbp-31h] BYREF
  HSTRING v32; // [rsp+38h] [rbp-29h] BYREF
  __int64 v33; // [rsp+40h] [rbp-21h] BYREF
  unsigned int v34; // [rsp+48h] [rbp-19h] BYREF
  __int64 v35; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v36[2]; // [rsp+58h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+7h] BYREF
  HSTRING string; // [rsp+80h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v36[1] = -2LL;
  *a3 = 0LL;
  v36[0] = 0LL;
  v5 = Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::Make(v36);
  v6 = v5;
  v7 = v36[0];
  if ( v5 < 0 )
  {
    v8 = 449LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_43;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v34);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = 452LL;
    goto LABEL_28;
  }
  v9 = 0;
  if ( v34 )
  {
    while ( 1 )
    {
      v33 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, v9, &v33);
      v6 = v10;
      if ( v10 < 0 )
        break;
      v32 = 0LL;
      v11 = v33;
      WindowsDeleteString(0LL);
      v32 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v11 + 48LL))(v11, &v32);
      v6 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1CA,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v12);
        goto LABEL_38;
      }
      v31 = 0LL;
      v13 = v33;
      WindowsDeleteString(0LL);
      v31 = 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v13 + 64LL))(v13, &v31);
      v6 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1CC,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v14);
        goto LABEL_36;
      }
      v30 = 0LL;
      string = 0LL;
      v15 = WindowsCreateStringReference(
              L"Windows.ApplicationModel.Store.Preview.InstallControl.Internal.InstallAppInfo",
              0x4Du,
              &hstringHeader,
              &string);
      if ( v15 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
        JUMPOUT(0x18000F506LL);
      }
      v16 = string;
      v17 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      v30 = 0LL;
      v6 = RoActivateInstance(v16, &v35);
      if ( v6 < 0
        || (*(_QWORD *)&GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e.Data1 != *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
         || *(_QWORD *)GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e.Data4 != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
          ? (v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v35)(
                    v35,
                    &GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e,
                    &v30),
             (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35),
             v18 = v30)
          : (v18 = v35, v30 = v35),
            v6 < 0) )
      {
        v25 = (unsigned int)v6;
        v26 = 463LL;
        goto LABEL_33;
      }
      v19 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v18 + 56LL))(v18, v32);
      v6 = v19;
      if ( v19 < 0 )
      {
        v25 = (unsigned int)v19;
        v26 = 464LL;
        goto LABEL_33;
      }
      v20 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v30 + 104LL))(v30, v31);
      v6 = v20;
      if ( v20 < 0 )
      {
        v25 = (unsigned int)v20;
        v26 = 465LL;
        goto LABEL_33;
      }
      v21 = v30;
      v30 = 0LL;
      v22 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 104LL))(v7, v21);
      v6 = v22;
      if ( v22 < 0 )
      {
        v25 = (unsigned int)v22;
        v26 = 467LL;
LABEL_33:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v26,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)v25);
        v27 = v30;
        if ( v30 )
        {
          v30 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
LABEL_36:
        WindowsDeleteString(v31);
        v31 = 0LL;
LABEL_38:
        WindowsDeleteString(v32);
        v32 = 0LL;
        goto LABEL_40;
      }
      v23 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      WindowsDeleteString(v31);
      v31 = 0LL;
      WindowsDeleteString(v32);
      v32 = 0LL;
      v24 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      if ( ++v9 >= v34 )
        goto LABEL_26;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v10);
LABEL_40:
    v28 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
  }
  else
  {
LABEL_26:
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v7 + 64LL))(v7, a3);
    v6 = v5;
    if ( v5 < 0 )
    {
      v8 = 470LL;
      goto LABEL_28;
    }
    v6 = 0;
  }
LABEL_43:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v6;
}
