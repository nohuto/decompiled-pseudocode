/*
 * XREFs of ?GetView@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@345@@Z @ 0x180017A40
 * Callers:
 *     ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x18000E73C (-ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVectorView@PEAVInstallAppInfo.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@U?$IIterable@PEAVAppInstallInfoRecord@ContentManagement@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019530 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_180019530.c)
 *     ??0?$SimpleVectorView@PEAVAppInstallInfoRecord@ContentManagement@@V?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@QEAA@PEAV?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@1234@Upermission@01234@@Z @ 0x18001C628 (--0-$SimpleVectorView@PEAVAppInstallInfoRecord@ContentManagement@@V-$Vector@PEAVAppInstallInfoRe.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::GetView(
        __int64 a1,
        __int64 *a2)
{
  unsigned int v2; // ebx
  void *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi

  v2 = 0;
  *a2 = 0LL;
  v5 = operator new(0x60uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  if ( v5
    && (v6 = Windows::Foundation::Collections::Internal::SimpleVectorView<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,XWinRT::IntVersionTag,1>::SimpleVectorView<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,XWinRT::IntVersionTag,1>(
               v5,
               a1),
        (v7 = v6) != 0) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    *a2 = v7;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::Release(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
