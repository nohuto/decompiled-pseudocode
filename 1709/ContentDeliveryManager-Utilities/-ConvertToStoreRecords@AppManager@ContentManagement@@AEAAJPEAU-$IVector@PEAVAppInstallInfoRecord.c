/*
 * XREFs of ?ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@456@@Z @ 0x18000E27C
 * Callers:
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x18000CCC0 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::AppManager::ConvertToStoreRecords(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  HRESULT ApartmentType; // eax
  APTTYPE v9; // ecx
  int v10; // eax
  int v11; // esi
  __int64 v12; // r9
  __int64 v13; // rdx
  unsigned int v14; // r14d
  int v15; // eax
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rsi
  int v19; // eax
  HRESULT v20; // eax
  HSTRING v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v36; // [rsp+28h] [rbp-49h] BYREF
  HSTRING v37; // [rsp+30h] [rbp-41h] BYREF
  HSTRING v38; // [rsp+38h] [rbp-39h] BYREF
  __int64 v39; // [rsp+40h] [rbp-31h] BYREF
  APTTYPE pAptType; // [rsp+48h] [rbp-29h] BYREF
  unsigned int v41; // [rsp+4Ch] [rbp-25h] BYREF
  __int64 v42; // [rsp+50h] [rbp-21h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+58h] [rbp-19h] BYREF
  _QWORD *v44; // [rsp+60h] [rbp-11h]
  __int64 v45; // [rsp+68h] [rbp-9h]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-1h] BYREF
  HSTRING string; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v45 = -2LL;
  *a3 = 0LL;
  v5 = 0LL;
  v44 = 0LL;
  v6 = operator new(0x68uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v7 = v6;
  if ( !v6 )
  {
    v11 = -2147024882;
    v12 = 2147942414LL;
    v13 = 406LL;
    goto LABEL_54;
  }
  v6[4] = 1LL;
  *v6 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable';
  v6[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable'{for `IWeakReferenceSource'};
  v6[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
  *v6 = &Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable';
  v6[1] = &Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable'{for `IWeakReferenceSource'};
  v6[2] = &Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>'};
  v6[5] = 0LL;
  *((_DWORD *)v6 + 12) = 0;
  v6[7] = 0LL;
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  v9 = pAptType;
  if ( ApartmentType < 0 )
    v9 = APTTYPE_MTA;
  pAptType = v9;
  if ( v9 == APTTYPE_MAINSTA || v9 == APTTYPE_STA )
  {
    *((_DWORD *)v7 + 18) = 1;
    if ( v7 != (_QWORD *)-80LL )
      *((_DWORD *)v7 + 20) = 0;
  }
  else
  {
    *((_DWORD *)v7 + 18) = 0;
    if ( v7 != (_QWORD *)-80LL )
      InitializeSRWLock((PSRWLOCK)v7 + 10);
  }
  *((_DWORD *)v7 + 22) = 0;
  *((_DWORD *)v7 + 24) = 0;
  v5 = v7;
  v44 = v7;
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v41);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v13 = 409LL;
LABEL_54:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v13,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v12);
    goto LABEL_55;
  }
  v14 = 0;
  if ( !v41 )
  {
LABEL_50:
    v34 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v7 + 64LL))(v7, a3);
    v11 = v34;
    if ( v34 >= 0 )
    {
      v11 = 0;
      goto LABEL_55;
    }
    v12 = (unsigned int)v34;
    v13 = 427LL;
    goto LABEL_54;
  }
  while ( 1 )
  {
    v39 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, v14, &v39);
    v11 = v15;
    if ( v15 < 0 )
      break;
    v38 = 0LL;
    v16 = v39;
    WindowsDeleteString(0LL);
    v38 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v16 + 48LL))(v16, &v38);
    v11 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x19F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v17);
      goto LABEL_46;
    }
    v37 = 0LL;
    v18 = v39;
    WindowsDeleteString(0LL);
    v37 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v18 + 64LL))(v18, &v37);
    v11 = v19;
    if ( v19 < 0 )
      goto LABEL_43;
    v36 = 0LL;
    string = 0LL;
    v20 = WindowsCreateStringReference(
            L"Windows.ApplicationModel.Store.Preview.InstallControl.Internal.InstallAppInfo",
            0x4Du,
            &hstringHeader,
            &string);
    if ( v20 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v20);
LABEL_43:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1A1,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v19);
LABEL_44:
      WindowsDeleteString(v37);
      v37 = 0LL;
LABEL_46:
      WindowsDeleteString(v38);
      v38 = 0LL;
      goto LABEL_48;
    }
    v21 = string;
    v22 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v36 = 0LL;
    v11 = RoActivateInstance(v21, &v42);
    if ( v11 < 0
      || (*(_QWORD *)&GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e.Data1 != *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
       || *(_QWORD *)GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e.Data4 != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        ? (v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v42)(
                   v42,
                   &GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e,
                   &v36),
           (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42),
           v23 = v36)
        : (v23 = v42, v36 = v42),
          v11 < 0) )
    {
      v30 = (unsigned int)v11;
      v31 = 420LL;
LABEL_40:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v31,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)v30);
      v32 = v36;
      if ( v36 )
      {
        v36 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      }
      goto LABEL_44;
    }
    v24 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v23 + 56LL))(v23, v38);
    v11 = v24;
    if ( v24 < 0 )
    {
      v30 = (unsigned int)v24;
      v31 = 421LL;
      goto LABEL_40;
    }
    v25 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v36 + 104LL))(v36, v37);
    v11 = v25;
    if ( v25 < 0 )
    {
      v30 = (unsigned int)v25;
      v31 = 422LL;
      goto LABEL_40;
    }
    v26 = v36;
    v36 = 0LL;
    v27 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v7 + 104LL))(v7, v26);
    v11 = v27;
    if ( v27 < 0 )
    {
      v30 = (unsigned int)v27;
      v31 = 424LL;
      goto LABEL_40;
    }
    v28 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    WindowsDeleteString(v37);
    v37 = 0LL;
    WindowsDeleteString(v38);
    v38 = 0LL;
    v29 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    if ( ++v14 >= v41 )
      goto LABEL_50;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x19D,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v15);
LABEL_48:
  v33 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
LABEL_55:
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  return (unsigned int)v11;
}
