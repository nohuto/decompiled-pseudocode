/*
 * XREFs of ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x18000F508
 * Callers:
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x18000DB80 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180004064 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0AppInstallInfoRecordImpl@ContentManagement@@QEAA@XZ @ 0x1800071F8 (--0AppInstallInfoRecordImpl@ContentManagement@@QEAA@XZ.c)
 *     ?put_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180007310 (-put_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?put_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x1800073F0 (-put_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800147C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICont.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIIdentityManager@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180014860 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIIdent.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180015FF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_180015FF0.c)
 *     ?GetView@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@345@@Z @ 0x18001A170 (-GetView@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVAp.c)
 *     ?InsertAtInternal@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIAppInstallInfoRecord@ContentManagement@@_N@Z @ 0x18001D15C (-InsertAtInternal@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredica.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C0CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::AppManager::ConvertFromStoreRecords(__int64 a1, __int64 a2, _QWORD *a3)
{
  RTL_SRWLOCK *v5; // rdi
  RTL_SRWLOCK *v6; // rax
  RTL_SRWLOCK *v7; // rbx
  RTL_SRWLOCK *v8; // rsi
  unsigned int v9; // ebx
  RTL_SRWLOCK *v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int View; // eax
  unsigned int v14; // esi
  int v15; // eax
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rbx
  int v19; // eax
  ContentManagement::AppInstallInfoRecordImpl *v20; // rax
  ContentManagement::AppInstallInfoRecordImpl *v21; // rax
  ContentManagement::AppInstallInfoRecordImpl *v22; // rbx
  int v23; // eax
  int v24; // eax
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  ContentManagement::AppInstallInfoRecordImpl *v33; // [rsp+20h] [rbp-30h]
  __int64 v34; // [rsp+28h] [rbp-28h] BYREF
  HSTRING string; // [rsp+30h] [rbp-20h] BYREF
  HSTRING v36; // [rsp+38h] [rbp-18h] BYREF
  RTL_SRWLOCK *v37; // [rsp+40h] [rbp-10h]
  __int64 v38; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v40; // [rsp+90h] [rbp+40h] BYREF
  int v41; // [rsp+A0h] [rbp+50h] BYREF
  int v42; // [rsp+A8h] [rbp+58h]

  v40 = a1;
  v38 = -2LL;
  *a3 = 0LL;
  v5 = 0LL;
  v37 = 0LL;
  v6 = (RTL_SRWLOCK *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v8 = 0LL;
  if ( v6 )
  {
    v6->Ptr = &Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>::`vftable';
    v6[2].Ptr = &Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)&v6[3]);
    v7[8].Ptr = (PVOID)1;
    v7->Ptr = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>'};
    v7[1].Ptr = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>'};
    v7[2].Ptr = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>'};
    v7[3].Ptr = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v5 = v37;
    }
    v7->Ptr = &Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>'};
    v7[1].Ptr = &Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>'};
    v7[2].Ptr = &Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>'};
    v7[3].Ptr = &Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v7[9].Ptr = 0LL;
    LODWORD(v7[10].Ptr) = 0;
    v7[11].Ptr = 0LL;
    v42 = 1;
    LODWORD(v7[13].Ptr) = 0;
    InitializeSRWLock(v7 + 14);
    LODWORD(v7[15].Ptr) = 0;
    LODWORD(v7[16].Ptr) = 0;
    v8 = v7;
    v7 = 0LL;
  }
  if ( v7 )
    operator delete(v7);
  v9 = v8 == 0LL ? 0x8007000E : 0;
  v10 = v8;
  if ( v8 )
  {
    v5 = v8;
    v37 = v8;
    v10 = 0LL;
  }
  if ( v10 )
    (*((void (__fastcall **)(RTL_SRWLOCK *))v10->Ptr + 2))(v10);
  if ( !v8 )
  {
    v11 = v9;
    v12 = 480LL;
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v11);
    goto LABEL_53;
  }
  View = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v40);
  v9 = View;
  if ( View < 0 )
  {
    v12 = 483LL;
LABEL_35:
    v11 = (unsigned int)View;
    goto LABEL_36;
  }
  v14 = 0;
  if ( (_DWORD)v40 )
  {
    while ( 1 )
    {
      v34 = 0LL;
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, v14, &v34);
      v9 = v15;
      if ( v15 < 0 )
        break;
      v36 = 0LL;
      v16 = v34;
      WindowsDeleteString(0LL);
      v36 = 0LL;
      v17 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v16 + 48LL))(v16, &v36);
      v9 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1EA,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v17);
        goto LABEL_48;
      }
      string = 0LL;
      v18 = v34;
      WindowsDeleteString(0LL);
      string = 0LL;
      v19 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v18 + 96LL))(v18, &string);
      v9 = v19;
      if ( v19 < 0 )
      {
        v30 = 493LL;
        goto LABEL_45;
      }
      v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v34 + 120LL))(v34, &v41);
      v9 = v19;
      if ( v19 < 0 )
      {
        v30 = 496LL;
LABEL_45:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v30,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v19);
        goto LABEL_46;
      }
      v33 = 0LL;
      v20 = (ContentManagement::AppInstallInfoRecordImpl *)operator new(
                                                             0x70uLL,
                                                             (const struct std::nothrow_t *)&std::nothrow);
      if ( !v20 )
      {
        v9 = -2147024882;
        v28 = 2147942414LL;
        v29 = 499LL;
        goto LABEL_41;
      }
      v21 = ContentManagement::AppInstallInfoRecordImpl::AppInstallInfoRecordImpl(v20);
      v22 = v21;
      if ( v21 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IIdentityManager>::AddRef(v21);
      v33 = v22;
      if ( v22 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v22);
      v23 = ContentManagement::AppInstallInfoRecordImpl::put_ProductId(
              (ContentManagement::AppInstallInfoRecordImpl *)((char *)v22 + 48),
              v36);
      v9 = v23;
      if ( v23 < 0 )
      {
        v28 = (unsigned int)v23;
        v29 = 500LL;
        goto LABEL_41;
      }
      v24 = ContentManagement::AppInstallInfoRecordImpl::put_SkuId(
              (ContentManagement::AppInstallInfoRecordImpl *)((char *)v33 + 48),
              string);
      v9 = v24;
      if ( v24 < 0 )
      {
        v28 = (unsigned int)v24;
        v29 = 501LL;
        goto LABEL_41;
      }
      *((_DWORD *)v33 + 26) = v41;
      LOBYTE(v25) = 1;
      v26 = Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::InsertAtInternal(
              v5,
              0LL,
              ((unsigned __int64)v33 + 48) & -(__int64)(v33 != 0LL),
              v25);
      v9 = v26;
      if ( v26 < 0 )
      {
        v28 = (unsigned int)v26;
        v29 = 504LL;
LABEL_41:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v29,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)v28);
        if ( v33 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v33);
LABEL_46:
        WindowsDeleteString(string);
        string = 0LL;
LABEL_48:
        WindowsDeleteString(v36);
        v36 = 0LL;
        goto LABEL_50;
      }
      if ( v33 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v33);
      WindowsDeleteString(string);
      string = 0LL;
      WindowsDeleteString(v36);
      v36 = 0LL;
      v27 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
      if ( ++v14 >= (unsigned int)v40 )
        goto LABEL_33;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v15);
LABEL_50:
    v31 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
  }
  else
  {
LABEL_33:
    View = Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::GetView(
             v5,
             a3);
    v9 = View;
    if ( View < 0 )
    {
      v12 = 507LL;
      goto LABEL_35;
    }
    v9 = 0;
  }
LABEL_53:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Microsoft::WRL::FtmBase>::Release(v5);
  return v9;
}
