/*
 * XREFs of ?get_ThumbnailCacheHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIThumbnailCacheHelper@2@@Z @ 0x180011CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E10 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180003D64 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x1800070A4 (-IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::ContentManagementBrokerServer::get_ThumbnailCacheHelper(
        ContentManagement::ContentManagementBrokerServer *this,
        struct ContentManagement::IThumbnailCacheHelper **a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  int v5; // edi
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  CreativeFramework::LockScreenCategoryConfig *v8; // rcx
  int IsCallerInAllowedAppList; // eax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  __int64 (__fastcall ***v13)(_QWORD, GUID *, struct ContentManagement::IThumbnailCacheHelper **); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 (__fastcall ***v16)(_QWORD, GUID *, struct ContentManagement::IThumbnailCacheHelper **); // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v17; // [rsp+60h] [rbp+18h]
  _QWORD *v18; // [rsp+68h] [rbp+20h]

  *a2 = 0LL;
  v16 = 0LL;
  v3 = operator new(0x50uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v4 = v3;
  v17 = v3;
  if ( !v3 )
  {
    v5 = -2147024882;
LABEL_11:
    v10 = (unsigned int)v5;
    v11 = 1027LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v10);
    goto LABEL_16;
  }
  v6 = v3 + 1;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v3 + 1));
  v4[9] = 1LL;
  *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IThumbnailCacheHelper>::`vftable'{for `IInspectable'};
  *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IThumbnailCacheHelper>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase,IWeakReferenceSource,ContentManagement::IThumbnailCacheHelper>'};
  v7 = v4 + 6;
  v4[6] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IThumbnailCacheHelper>::`vftable'{for `IWeakReferenceSource'};
  v8 = (CreativeFramework::LockScreenCategoryConfig *)(v4 + 7);
  v4[7] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IThumbnailCacheHelper>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IThumbnailCacheHelper>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v4 = v17;
  }
  *v4 = &ContentManagement::ThumbnailCacheHelper::`vftable'{for `IInspectable'};
  *v6 = &ContentManagement::ThumbnailCacheHelper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase,IWeakReferenceSource,ContentManagement::IThumbnailCacheHelper>'};
  *v7 = &ContentManagement::ThumbnailCacheHelper::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)v8 = &ContentManagement::ThumbnailCacheHelper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IThumbnailCacheHelper>'};
  v18 = v4;
  v17 = 0LL;
  IsCallerInAllowedAppList = CreativeFramework::LockScreenCategoryConfig::IsCallerInAllowedAppList(
                               v8,
                               (const unsigned __int16 *const *)&ContentManagement::ThumbnailCacheHelper::`vftable'{for `IWeakReferenceSource'});
  v5 = IsCallerInAllowedAppList;
  if ( IsCallerInAllowedAppList >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD))*v4)(v4, &GUID_d75aa9a4_4b0c_4d61_8fa9_51016cc2622c, &v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x217,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)IsCallerInAllowedAppList);
    if ( !v4 )
      goto LABEL_10;
  }
  (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
LABEL_10:
  if ( v5 < 0 )
    goto LABEL_11;
  v12 = (**v16)(v16, &GUID_d75aa9a4_4b0c_4d61_8fa9_51016cc2622c, a2);
  v5 = v12;
  if ( v12 < 0 )
  {
    v10 = (unsigned int)v12;
    v11 = 1028LL;
    goto LABEL_14;
  }
  v5 = 0;
LABEL_16:
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct ContentManagement::IThumbnailCacheHelper **)))(*v13)[2])(v13);
  }
  return (unsigned int)v5;
}
