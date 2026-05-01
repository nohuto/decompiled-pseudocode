/*
 * XREFs of ?SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x1801979E0
 * Callers:
 *     ?SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1801976B4 (-SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UIJsonObject@Json@Data@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIJsonObject@Json@Data@1@@Z @ 0x1801942A4 (--$ActivateInstance@UIJsonObject@Json@Data@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPE.c)
 *     ??$ActivateInstance@V?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180194330 (--$ActivateInstance@V-$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@@Foundation@Windows.c)
 *     ??$As@U?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801943CC (--$As@U-$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@-$ComPtr@UI.c)
 *     ??$As@UIJsonValue@Json@Data@Windows@@@?$ComPtr@UIJsonObject@Json@Data@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIJsonValue@Json@Data@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180194408 (--$As@UIJsonValue@Json@Data@Windows@@@-$ComPtr@UIJsonObject@Json@Data@Windows@@@WRL@Microsoft@@Q.c)
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x180195EB4 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::SaveDataToJson(
        RTL_SRWLOCK *this,
        struct Windows::Data::Json::IJsonObject **a2)
{
  struct Windows::Data::Json::IJsonObject **v2; // rdi
  int SortedAppList; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  int ActivationFactory; // eax
  int v7; // eax
  int v8; // eax
  int v9; // r13d
  int v10; // r12d
  signed __int64 v11; // r14
  const WCHAR **v12; // rsi
  __int64 v13; // rbx
  int v14; // eax
  const WCHAR *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rax
  _QWORD *v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rax
  _QWORD *v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // rax
  _QWORD *v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rbx
  const WCHAR *v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // rax
  int v34; // eax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rax
  _QWORD *i; // rdi
  std::_Ref_count_base *v41; // rcx
  __int64 v43; // [rsp+28h] [rbp-59h] BYREF
  __int64 v44; // [rsp+30h] [rbp-51h] BYREF
  _QWORD *v45; // [rsp+38h] [rbp-49h] BYREF
  __int64 v46; // [rsp+40h] [rbp-41h] BYREF
  __int64 v47; // [rsp+48h] [rbp-39h] BYREF
  __int64 (__fastcall ***v48)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-31h] BYREF
  void *v49[2]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v50; // [rsp+68h] [rbp-19h]
  __int64 v51; // [rsp+70h] [rbp-11h] BYREF
  struct Windows::Data::Json::IJsonObject **v52; // [rsp+78h] [rbp-9h]
  const WCHAR *v53[2]; // [rsp+80h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v55; // [rsp+A8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v53[1] = (const WCHAR *)-2LL;
  v2 = a2;
  v52 = a2;
  *a2 = 0LL;
  *(_OWORD *)v49 = 0LL;
  v50 = 0LL;
  SortedAppList = PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(this, (__int64)v49);
  v4 = SortedAppList;
  if ( SortedAppList < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F2,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)SortedAppList);
    goto LABEL_60;
  }
  v45 = 0LL;
  v55 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Data.Json.JsonValue",
    0x1Cu,
    0x1Bu);
  v5 = v55;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
  ActivationFactory = RoGetActivationFactory(v5, &GUID_5f6b544a_2f53_48e1_91a3_f78b50a6345c, &v45);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F5,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_59;
  }
  v48 = 0LL;
  v55 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Data.Json.JsonArray",
    0x1Cu,
    0x1Bu);
  v7 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>>(
         v55,
         (__int64 *)&v48);
  v4 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F8,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_58;
  }
  v51 = 0LL;
  v8 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>::As<Windows::Foundation::Collections::IVector<Windows::Data::Json::IJsonValue *>>(
         &v48,
         &v51);
  v4 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FB,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_57;
  }
  v9 = 0;
  v10 = 0;
  v11 = ((char *)v49[1] - (char *)v49[0]) >> 4;
  if ( (int)v11 <= 0 )
  {
LABEL_31:
    v47 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
    v35 = (**v48)(v48, &GUID_a3219ecb_f0b3_4dcd_beee_19d48cd3ed1e, &v47);
    v4 = v35;
    if ( v35 >= 0 )
    {
      v55 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Data.Json.JsonObject",
        0x1Du,
        0x1Cu);
      v35 = Windows::Foundation::ActivateInstance<Windows::Data::Json::IJsonObject>(v55, v2);
      v4 = v35;
      if ( v35 >= 0 )
      {
        v39 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                (__int64)&hstringHeader,
                (const WCHAR **)off_18034C608);
        v35 = (*(__int64 (__fastcall **)(struct Windows::Data::Json::IJsonObject *, _QWORD, __int64))(*(_QWORD *)*v2 + 56LL))(
                *v2,
                *(_QWORD *)(v39 + 24),
                v47);
        v4 = v35;
        if ( v35 >= 0 )
        {
          v4 = 0;
          goto LABEL_56;
        }
        v36 = 804LL;
      }
      else
      {
        v36 = 803LL;
      }
    }
    else
    {
      v36 = 801LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v36,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v35);
LABEL_56:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
    goto LABEL_57;
  }
  v12 = (const WCHAR **)v49[0];
  while ( 1 )
  {
    if ( v9 >= 30 )
    {
LABEL_30:
      v2 = v52;
      goto LABEL_31;
    }
    if ( *((int *)*v12 + 8) < 3 )
      goto LABEL_29;
    v44 = 0LL;
    v55 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Data.Json.JsonObject",
      0x1Du,
      0x1Cu);
    v13 = v55;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
    v14 = Windows::Foundation::ActivateInstance<Windows::Data::Json::IJsonObject>(v13, &v44);
    v4 = v14;
    if ( v14 < 0 )
      break;
    v43 = 0LL;
    v15 = *v12;
    if ( *((_QWORD *)*v12 + 3) >= 8uLL )
      v15 = *(const WCHAR **)v15;
    v53[0] = v15;
    v16 = (__int64)v45;
    v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, v53);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v16 + 80LL))(
            v16,
            *(_QWORD *)(v17 + 24),
            &v43);
    v4 = v18;
    if ( v18 < 0 )
    {
      v38 = 778LL;
      goto LABEL_46;
    }
    v19 = v44;
    v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)off_18034C610);
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v19 + 56LL))(v19, *(_QWORD *)(v20 + 24), v43);
    v4 = v18;
    if ( v18 < 0 )
    {
      v38 = 779LL;
      goto LABEL_46;
    }
    v21 = v45;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
    v18 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v21 + 72LL))(v21, *v21, &v43);
    v4 = v18;
    if ( v18 < 0 )
    {
      v38 = 781LL;
      goto LABEL_46;
    }
    v22 = v44;
    v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)off_18034C618);
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v22 + 56LL))(v22, *(_QWORD *)(v23 + 24), v43);
    v4 = v18;
    if ( v18 < 0 )
    {
      v38 = 782LL;
      goto LABEL_46;
    }
    v24 = v45;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
    v18 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v24 + 72LL))(v24, *v24, &v43);
    v4 = v18;
    if ( v18 < 0 )
    {
      v38 = 784LL;
      goto LABEL_46;
    }
    v25 = v44;
    v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)off_18034C620);
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v25 + 56LL))(v25, *(_QWORD *)(v26 + 24), v43);
    v4 = v18;
    if ( v18 < 0 )
    {
      v38 = 785LL;
      goto LABEL_46;
    }
    v27 = v45;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
    v18 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v27 + 72LL))(v27, *v27, &v43);
    v4 = v18;
    if ( v18 < 0 )
    {
      v38 = 787LL;
      goto LABEL_46;
    }
    v28 = v44;
    v29 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)off_18034C5F8);
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v28 + 56LL))(v28, *(_QWORD *)(v29 + 24), v43);
    v4 = v18;
    if ( v18 < 0 )
    {
      v38 = 788LL;
      goto LABEL_46;
    }
    v30 = (__int64)v45;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
    v31 = *v12;
    LOBYTE(v31) = *((_BYTE *)*v12 + 44);
    v18 = (*(__int64 (__fastcall **)(__int64, const WCHAR *, __int64 *))(*(_QWORD *)v30 + 64LL))(v30, v31, &v43);
    v4 = v18;
    if ( v18 < 0 )
    {
      v38 = 790LL;
LABEL_46:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v38,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v18);
      goto LABEL_47;
    }
    v32 = v44;
    v33 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)off_18034C600);
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v32 + 56LL))(v32, *(_QWORD *)(v33 + 24), v43);
    v4 = v18;
    if ( v18 < 0 )
    {
      v38 = 791LL;
      goto LABEL_46;
    }
    v46 = 0LL;
    v34 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonObject>::As<Windows::Data::Json::IJsonValue>(&v44, &v46);
    v4 = v34;
    if ( v34 < 0 )
    {
      v37 = 794LL;
LABEL_35:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v37,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v34);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
LABEL_47:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
      goto LABEL_49;
    }
    v34 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 104LL))(v51, v46);
    v4 = v34;
    if ( v34 < 0 )
    {
      v37 = 795LL;
      goto LABEL_35;
    }
    ++v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
LABEL_29:
    ++v10;
    v12 += 2;
    if ( v10 >= (int)v11 )
      goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x307,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
    (const char *)(unsigned int)v14);
LABEL_49:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
LABEL_57:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v51);
LABEL_58:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v48);
LABEL_59:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
LABEL_60:
  if ( v49[0] )
  {
    for ( i = v49[0]; i != v49[1]; i += 2 )
    {
      v41 = (std::_Ref_count_base *)i[1];
      if ( v41 )
        std::_Ref_count_base::_Decref(v41);
    }
    std::_Deallocate((char *)v49[0], (signed __int64)(v50 - (unsigned __int64)v49[0]) >> 4, 0x10uLL);
  }
  return v4;
}
