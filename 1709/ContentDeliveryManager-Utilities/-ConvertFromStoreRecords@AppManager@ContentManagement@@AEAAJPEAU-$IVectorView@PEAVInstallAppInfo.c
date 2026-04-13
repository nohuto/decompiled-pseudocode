/*
 * XREFs of ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x18000E73C
 * Callers:
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x18000CCC0 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180003D64 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0AppInstallInfoRecordImpl@ContentManagement@@QEAA@XZ @ 0x180006DCC (--0AppInstallInfoRecordImpl@ContentManagement@@QEAA@XZ.c)
 *     ?put_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180006EE0 (-put_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?put_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180006FC0 (-put_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012B30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICont.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013DE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAVTar.c)
 *     ?GetView@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@345@@Z @ 0x180017A40 (-GetView@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVAp.c)
 *     ?InsertAtInternal@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIAppInstallInfoRecord@ContentManagement@@_N@Z @ 0x18001A5C4 (-InsertAtInternal@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredica.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::AppManager::ConvertFromStoreRecords(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned int v12; // r14d
  int v13; // eax
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rdi
  int v17; // eax
  ContentManagement::AppInstallInfoRecordImpl *v18; // rax
  ContentManagement::AppInstallInfoRecordImpl *v19; // rax
  volatile signed __int64 *v20; // rcx
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  int v23; // eax
  int v24; // eax
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  int View; // eax
  volatile signed __int64 *v34; // [rsp+20h] [rbp-40h]
  __int64 v35; // [rsp+28h] [rbp-38h] BYREF
  HSTRING string; // [rsp+30h] [rbp-30h] BYREF
  HSTRING v37; // [rsp+38h] [rbp-28h] BYREF
  _QWORD *v38; // [rsp+40h] [rbp-20h]
  signed __int64 v39; // [rsp+48h] [rbp-18h]
  __int64 v40; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 v42; // [rsp+A0h] [rbp+40h] BYREF
  int v43; // [rsp+B0h] [rbp+50h] BYREF
  int v44; // [rsp+B8h] [rbp+58h]

  v42 = a1;
  v40 = -2LL;
  *a3 = 0LL;
  v5 = 0LL;
  v38 = 0LL;
  v6 = operator new(0x90uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v7 = v6;
  if ( !v6 )
  {
    v9 = -2147024882;
    v10 = 2147942414LL;
    v11 = 437LL;
    goto LABEL_50;
  }
  *v6 = &Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>::`vftable';
  v6[2] = &Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 3));
  v7[9] = 1LL;
  *v7 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>'};
  v7[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>'};
  v7[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>'};
  v7[3] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
  *v7 = &Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>'};
  v7[1] = &Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>'};
  v7[2] = &Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>'};
  v7[3] = &Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
  v7[10] = 0LL;
  *((_DWORD *)v7 + 22) = 0;
  v7[12] = 0LL;
  v44 = 1;
  *((_DWORD *)v7 + 28) = 0;
  if ( v7 != (_QWORD *)-120LL )
    InitializeSRWLock((PSRWLOCK)v7 + 15);
  *((_DWORD *)v7 + 32) = 0;
  *((_DWORD *)v7 + 34) = 0;
  v5 = v7;
  v38 = v7;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v42);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 440LL;
LABEL_50:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v10);
    goto LABEL_51;
  }
  v12 = 0;
  if ( !(_DWORD)v42 )
  {
LABEL_46:
    View = Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::GetView(
             v7,
             a3);
    v9 = View;
    if ( View >= 0 )
    {
      v9 = 0;
      goto LABEL_51;
    }
    v10 = (unsigned int)View;
    v11 = 464LL;
    goto LABEL_50;
  }
  while ( 1 )
  {
    v35 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, v12, &v35);
    v9 = v13;
    if ( v13 < 0 )
      break;
    v37 = 0LL;
    v14 = v35;
    WindowsDeleteString(0LL);
    v37 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v14 + 48LL))(v14, &v37);
    v9 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1BF,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_41;
    }
    string = 0LL;
    v16 = v35;
    WindowsDeleteString(0LL);
    string = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v16 + 96LL))(v16, &string);
    v9 = v17;
    if ( v17 < 0 )
    {
      v30 = 450LL;
      goto LABEL_38;
    }
    v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v35 + 120LL))(v35, &v43);
    v9 = v17;
    if ( v17 < 0 )
    {
      v30 = 453LL;
LABEL_38:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v30,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v17);
      goto LABEL_39;
    }
    v34 = 0LL;
    v18 = (ContentManagement::AppInstallInfoRecordImpl *)operator new(
                                                           0x70uLL,
                                                           (const struct std::nothrow_t *)&TLV::nothrow);
    if ( !v18 )
    {
      v9 = -2147024882;
      v28 = 2147942414LL;
      v29 = 456LL;
      goto LABEL_34;
    }
    v19 = ContentManagement::AppInstallInfoRecordImpl::AppInstallInfoRecordImpl(v18);
    v20 = (volatile signed __int64 *)v19;
    if ( v19 )
    {
      v21 = *((_QWORD *)v19 + 9);
      v39 = v21;
      while ( v21 >= 0 )
      {
        v22 = v21;
        v21 = _InterlockedCompareExchange64(v20 + 9, v21 + 1, v21);
        if ( v22 == v21 )
          goto LABEL_19;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v21 + 16));
    }
LABEL_19:
    v34 = v20;
    if ( v20 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release((ContentManagement::ThumbnailCacheHelper *)v20);
      v20 = v34;
    }
    v23 = ContentManagement::AppInstallInfoRecordImpl::put_ProductId(
            (ContentManagement::AppInstallInfoRecordImpl *)(v20 + 7),
            v37);
    v9 = v23;
    if ( v23 < 0 )
    {
      v28 = (unsigned int)v23;
      v29 = 457LL;
      goto LABEL_34;
    }
    v24 = ContentManagement::AppInstallInfoRecordImpl::put_SkuId(
            (ContentManagement::AppInstallInfoRecordImpl *)(v34 + 7),
            string);
    v9 = v24;
    if ( v24 < 0 )
    {
      v28 = (unsigned int)v24;
      v29 = 458LL;
      goto LABEL_34;
    }
    *((_DWORD *)v34 + 26) = v43;
    LOBYTE(v25) = 1;
    v26 = Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::InsertAtInternal(
            v7,
            0LL,
            (unsigned __int64)(v34 + 7) & -(__int64)(v34 != 0LL),
            v25);
    v9 = v26;
    if ( v26 < 0 )
    {
      v28 = (unsigned int)v26;
      v29 = 461LL;
LABEL_34:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v29,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)v28);
      if ( v34 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release((ContentManagement::ThumbnailCacheHelper *)v34);
LABEL_39:
      WindowsDeleteString(string);
      string = 0LL;
LABEL_41:
      WindowsDeleteString(v37);
      v37 = 0LL;
      goto LABEL_43;
    }
    if ( v34 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release((ContentManagement::ThumbnailCacheHelper *)v34);
    WindowsDeleteString(string);
    string = 0LL;
    WindowsDeleteString(v37);
    v37 = 0LL;
    v27 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    if ( ++v12 >= (unsigned int)v42 )
    {
      v5 = v38;
      goto LABEL_46;
    }
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x1BC,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v13);
LABEL_43:
  v31 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  v5 = v38;
LABEL_51:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Microsoft::WRL::FtmBase>::Release(v5);
  return v9;
}
